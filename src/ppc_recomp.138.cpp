#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8253DB50"))) PPC_WEAK_FUNC(sub_8253DB50);
PPC_FUNC_IMPL(__imp__sub_8253DB50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8253DB54"))) PPC_WEAK_FUNC(sub_8253DB54);
PPC_FUNC_IMPL(__imp__sub_8253DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253DB58"))) PPC_WEAK_FUNC(sub_8253DB58);
PPC_FUNC_IMPL(__imp__sub_8253DB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31100
	ctx.r3.s64 = ctx.r10.s64 + 31100;
	// lfs f0,26836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26836);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,31084
	ctx.r3.s64 = ctx.r9.s64 + 31084;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253dc04
	if (cr6.eq) goto loc_8253DC04;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253dc08
	if (!cr6.eq) goto loc_8253DC08;
loc_8253DC04:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_8253DC08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253DC40"))) PPC_WEAK_FUNC(sub_8253DC40);
PPC_FUNC_IMPL(__imp__sub_8253DC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253DC44"))) PPC_WEAK_FUNC(sub_8253DC44);
PPC_FUNC_IMPL(__imp__sub_8253DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253DC48"))) PPC_WEAK_FUNC(sub_8253DC48);
PPC_FUNC_IMPL(__imp__sub_8253DC48) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,116
	r27.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,30980
	r30.s64 = r11.s64 + 30980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253dddc
	if (cr6.eq) goto loc_8253DDDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8253dddc
	if (cr6.eq) goto loc_8253DDDC;
loc_8253DD04:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253dd70
	if (!cr6.eq) goto loc_8253DD70;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8253dd04
	if (!cr6.eq) goto loc_8253DD04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9460
	return;
loc_8253DD70:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253ddc8
	if (cr6.eq) goto loc_8253DDC8;
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
	// beq cr6,0x8253ddc8
	if (cr6.eq) goto loc_8253DDC8;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ddd0
	if (!cr6.eq) goto loc_8253DDD0;
loc_8253DDC8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20604
	r11.s64 = r11.s64 + 20604;
loc_8253DDD0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_8253DDDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253DDEC"))) PPC_WEAK_FUNC(sub_8253DDEC);
PPC_FUNC_IMPL(__imp__sub_8253DDEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253DDF0"))) PPC_WEAK_FUNC(sub_8253DDF0);
PPC_FUNC_IMPL(__imp__sub_8253DDF0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,116
	r27.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,31076
	r30.s64 = r11.s64 + 31076;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253df84
	if (cr6.eq) goto loc_8253DF84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8253df84
	if (cr6.eq) goto loc_8253DF84;
loc_8253DEAC:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253df18
	if (!cr6.eq) goto loc_8253DF18;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8253deac
	if (!cr6.eq) goto loc_8253DEAC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9460
	return;
loc_8253DF18:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253df70
	if (cr6.eq) goto loc_8253DF70;
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
	// beq cr6,0x8253df70
	if (cr6.eq) goto loc_8253DF70;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253df78
	if (!cr6.eq) goto loc_8253DF78;
loc_8253DF70:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20604
	r11.s64 = r11.s64 + 20604;
loc_8253DF78:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_8253DF84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253DF94"))) PPC_WEAK_FUNC(sub_8253DF94);
PPC_FUNC_IMPL(__imp__sub_8253DF94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253DF98"))) PPC_WEAK_FUNC(sub_8253DF98);
PPC_FUNC_IMPL(__imp__sub_8253DF98) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,116
	r24.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// addi r27,r11,31108
	r27.s64 = r11.s64 + 31108;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r9,r23,24
	ctx.r9.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8253e130
	if (cr6.eq) goto loc_8253E130;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253e0fc
	if (cr6.eq) goto loc_8253E0FC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253e104
	if (!cr6.eq) goto loc_8253E104;
loc_8253E0FC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,21544
	r11.s64 = r11.s64 + 21544;
loc_8253E104:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253E130:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8253E140"))) PPC_WEAK_FUNC(sub_8253E140);
PPC_FUNC_IMPL(__imp__sub_8253E140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253E144"))) PPC_WEAK_FUNC(sub_8253E144);
PPC_FUNC_IMPL(__imp__sub_8253E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E148"))) PPC_WEAK_FUNC(sub_8253E148);
PPC_FUNC_IMPL(__imp__sub_8253E148) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,116
	r24.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// addi r27,r11,6420
	r27.s64 = r11.s64 + 6420;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r9,r23,24
	ctx.r9.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8253e2e0
	if (cr6.eq) goto loc_8253E2E0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253e2ac
	if (cr6.eq) goto loc_8253E2AC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253e2b4
	if (!cr6.eq) goto loc_8253E2B4;
loc_8253E2AC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,21544
	r11.s64 = r11.s64 + 21544;
loc_8253E2B4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253E2E0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8253E2F0"))) PPC_WEAK_FUNC(sub_8253E2F0);
PPC_FUNC_IMPL(__imp__sub_8253E2F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253E2F4"))) PPC_WEAK_FUNC(sub_8253E2F4);
PPC_FUNC_IMPL(__imp__sub_8253E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E2F8"))) PPC_WEAK_FUNC(sub_8253E2F8);
PPC_FUNC_IMPL(__imp__sub_8253E2F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d1e8
	sub_8253D1E8(ctx, base);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + r29.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r11,r10,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r3,r9,31052
	ctx.r3.s64 = ctx.r9.s64 + 31052;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// and r29,r8,r10
	r29.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329718
	sub_82329718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E37C"))) PPC_WEAK_FUNC(sub_8253E37C);
PPC_FUNC_IMPL(__imp__sub_8253E37C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E380"))) PPC_WEAK_FUNC(sub_8253E380);
PPC_FUNC_IMPL(__imp__sub_8253E380) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d1e8
	sub_8253D1E8(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x8253e40c
	if (!cr6.lt) goto loc_8253E40C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d1e8
	sub_8253D1E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - r29.s64;
	// addi r3,r11,31052
	ctx.r3.s64 = r11.s64 + 31052;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329718
	sub_82329718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8253E40C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E41C"))) PPC_WEAK_FUNC(sub_8253E41C);
PPC_FUNC_IMPL(__imp__sub_8253E41C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E420"))) PPC_WEAK_FUNC(sub_8253E420);
PPC_FUNC_IMPL(__imp__sub_8253E420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,31064
	ctx.r3.s64 = r11.s64 + 31064;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E48C"))) PPC_WEAK_FUNC(sub_8253E48C);
PPC_FUNC_IMPL(__imp__sub_8253E48C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E490"))) PPC_WEAK_FUNC(sub_8253E490);
PPC_FUNC_IMPL(__imp__sub_8253E490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d2a0
	sub_8253D2A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// addi r3,r11,31064
	ctx.r3.s64 = r11.s64 + 31064;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E508"))) PPC_WEAK_FUNC(sub_8253E508);
PPC_FUNC_IMPL(__imp__sub_8253E508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E50C"))) PPC_WEAK_FUNC(sub_8253E50C);
PPC_FUNC_IMPL(__imp__sub_8253E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E510"))) PPC_WEAK_FUNC(sub_8253E510);
PPC_FUNC_IMPL(__imp__sub_8253E510) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,31068
	ctx.r3.s64 = r11.s64 + 31068;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E57C"))) PPC_WEAK_FUNC(sub_8253E57C);
PPC_FUNC_IMPL(__imp__sub_8253E57C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E580"))) PPC_WEAK_FUNC(sub_8253E580);
PPC_FUNC_IMPL(__imp__sub_8253E580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d358
	sub_8253D358(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// addi r3,r11,31068
	ctx.r3.s64 = r11.s64 + 31068;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253E5F8"))) PPC_WEAK_FUNC(sub_8253E5F8);
PPC_FUNC_IMPL(__imp__sub_8253E5F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253E5FC"))) PPC_WEAK_FUNC(sub_8253E5FC);
PPC_FUNC_IMPL(__imp__sub_8253E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E600"))) PPC_WEAK_FUNC(sub_8253E600);
PPC_FUNC_IMPL(__imp__sub_8253E600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,30980
	ctx.r3.s64 = r11.s64 + 30980;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253E6A8"))) PPC_WEAK_FUNC(sub_8253E6A8);
PPC_FUNC_IMPL(__imp__sub_8253E6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253E6AC"))) PPC_WEAK_FUNC(sub_8253E6AC);
PPC_FUNC_IMPL(__imp__sub_8253E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E6B0"))) PPC_WEAK_FUNC(sub_8253E6B0);
PPC_FUNC_IMPL(__imp__sub_8253E6B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,116
	r27.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,30992
	r29.s64 = r11.s64 + 30992;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r26,r10,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8253e790
	if (cr6.eq) goto loc_8253E790;
	// li r28,1
	r28.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253E790:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253E7A0"))) PPC_WEAK_FUNC(sub_8253E7A0);
PPC_FUNC_IMPL(__imp__sub_8253E7A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253E7A4"))) PPC_WEAK_FUNC(sub_8253E7A4);
PPC_FUNC_IMPL(__imp__sub_8253E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E7A8"))) PPC_WEAK_FUNC(sub_8253E7A8);
PPC_FUNC_IMPL(__imp__sub_8253E7A8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,30992
	r29.s64 = r11.s64 + 30992;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253e880
	if (cr6.eq) goto loc_8253E880;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253E880:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253E88C"))) PPC_WEAK_FUNC(sub_8253E88C);
PPC_FUNC_IMPL(__imp__sub_8253E88C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253E890"))) PPC_WEAK_FUNC(sub_8253E890);
PPC_FUNC_IMPL(__imp__sub_8253E890) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,116
	r27.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,31000
	r29.s64 = r11.s64 + 31000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r26,r10,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8253e970
	if (cr6.eq) goto loc_8253E970;
	// li r28,1
	r28.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253E970:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253E980"))) PPC_WEAK_FUNC(sub_8253E980);
PPC_FUNC_IMPL(__imp__sub_8253E980) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253E984"))) PPC_WEAK_FUNC(sub_8253E984);
PPC_FUNC_IMPL(__imp__sub_8253E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253E988"))) PPC_WEAK_FUNC(sub_8253E988);
PPC_FUNC_IMPL(__imp__sub_8253E988) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,31000
	r29.s64 = r11.s64 + 31000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253ea60
	if (cr6.eq) goto loc_8253EA60;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253EA60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253EA6C"))) PPC_WEAK_FUNC(sub_8253EA6C);
PPC_FUNC_IMPL(__imp__sub_8253EA6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253EA70"))) PPC_WEAK_FUNC(sub_8253EA70);
PPC_FUNC_IMPL(__imp__sub_8253EA70) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r29,1
	r29.s64 = 1;
	// addi r3,r11,31076
	ctx.r3.s64 = r11.s64 + 31076;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r3,r10,31012
	ctx.r3.s64 = ctx.r10.s64 + 31012;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8253EB94"))) PPC_WEAK_FUNC(sub_8253EB94);
PPC_FUNC_IMPL(__imp__sub_8253EB94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253EB98"))) PPC_WEAK_FUNC(sub_8253EB98);
PPC_FUNC_IMPL(__imp__sub_8253EB98) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,116
	r25.s64 = ctx.r3.s64 + 116;
	// stfs f1,372(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// addi r28,r11,31108
	r28.s64 = r11.s64 + 31108;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r27,r27,56
	r27.s64 = r27.s64 + 56;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253ed48
	if (cr6.eq) goto loc_8253ED48;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253ed00
	if (cr6.eq) goto loc_8253ED00;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253ed00
	if (cr6.eq) goto loc_8253ED00;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8253ed08
	goto loc_8253ED08;
loc_8253ED00:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,21544
	r11.s64 = r11.s64 + 21544;
loc_8253ED08:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8253edd0
	if (!cr6.lt) goto loc_8253EDD0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// b 0x8253ed54
	goto loc_8253ED54;
loc_8253ED48:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
loc_8253ED54:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253EDD0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8253EDE8"))) PPC_WEAK_FUNC(sub_8253EDE8);
PPC_FUNC_IMPL(__imp__sub_8253EDE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8253EDEC"))) PPC_WEAK_FUNC(sub_8253EDEC);
PPC_FUNC_IMPL(__imp__sub_8253EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253EDF0"))) PPC_WEAK_FUNC(sub_8253EDF0);
PPC_FUNC_IMPL(__imp__sub_8253EDF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,116
	r24.s64 = ctx.r3.s64 + 116;
	// stw r7,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// addi r28,r11,6408
	r28.s64 = r11.s64 + 6408;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r27,r27,56
	r27.s64 = r27.s64 + 56;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253ef94
	if (cr6.eq) goto loc_8253EF94;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253ef4c
	if (cr6.eq) goto loc_8253EF4C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ef54
	if (!cr6.eq) goto loc_8253EF54;
loc_8253EF4C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_8253EF54:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r23,0(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmpw cr6,r25,r23
	cr6.compare<int32_t>(r25.s32, r23.s32, xer);
	// bge cr6,0x8253f01c
	if (!cr6.lt) goto loc_8253F01C;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// b 0x8253efa0
	goto loc_8253EFA0;
loc_8253EF94:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
loc_8253EFA0:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253F01C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8253F02C"))) PPC_WEAK_FUNC(sub_8253F02C);
PPC_FUNC_IMPL(__imp__sub_8253F02C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253F030"))) PPC_WEAK_FUNC(sub_8253F030);
PPC_FUNC_IMPL(__imp__sub_8253F030) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,116
	r25.s64 = ctx.r3.s64 + 116;
	// stfs f1,372(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// addi r28,r11,6420
	r28.s64 = r11.s64 + 6420;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r27,r27,56
	r27.s64 = r27.s64 + 56;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253f1e0
	if (cr6.eq) goto loc_8253F1E0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f198
	if (cr6.eq) goto loc_8253F198;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f198
	if (cr6.eq) goto loc_8253F198;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8253f1a0
	goto loc_8253F1A0;
loc_8253F198:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,21544
	r11.s64 = r11.s64 + 21544;
loc_8253F1A0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8253f268
	if (!cr6.lt) goto loc_8253F268;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// b 0x8253f1ec
	goto loc_8253F1EC;
loc_8253F1E0:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
loc_8253F1EC:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253F268:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8253F280"))) PPC_WEAK_FUNC(sub_8253F280);
PPC_FUNC_IMPL(__imp__sub_8253F280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8253F284"))) PPC_WEAK_FUNC(sub_8253F284);
PPC_FUNC_IMPL(__imp__sub_8253F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F288"))) PPC_WEAK_FUNC(sub_8253F288);
PPC_FUNC_IMPL(__imp__sub_8253F288) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,116
	r25.s64 = ctx.r3.s64 + 116;
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// addi r29,r11,6408
	r29.s64 = r11.s64 + 6408;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r28,r28,56
	r28.s64 = r28.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253f3f0
	if (cr6.eq) goto loc_8253F3F0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f3b0
	if (cr6.eq) goto loc_8253F3B0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253f3b8
	if (!cr6.eq) goto loc_8253F3B8;
loc_8253F3B0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_8253F3B8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// bge cr6,0x8253f45c
	if (!cr6.lt) goto loc_8253F45C;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x8253f3fc
	goto loc_8253F3FC;
loc_8253F3F0:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
loc_8253F3FC:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_8253F45C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8253F46C"))) PPC_WEAK_FUNC(sub_8253F46C);
PPC_FUNC_IMPL(__imp__sub_8253F46C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8253F470"))) PPC_WEAK_FUNC(sub_8253F470);
PPC_FUNC_IMPL(__imp__sub_8253F470) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// stfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,31100
	ctx.r3.s64 = r11.s64 + 31100;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31084
	ctx.r3.s64 = ctx.r10.s64 + 31084;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
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

__attribute__((alias("__imp__sub_8253F514"))) PPC_WEAK_FUNC(sub_8253F514);
PPC_FUNC_IMPL(__imp__sub_8253F514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F518"))) PPC_WEAK_FUNC(sub_8253F518);
PPC_FUNC_IMPL(__imp__sub_8253F518) {
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e950
	sub_8272E950(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253F558"))) PPC_WEAK_FUNC(sub_8253F558);
PPC_FUNC_IMPL(__imp__sub_8253F558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253F55C"))) PPC_WEAK_FUNC(sub_8253F55C);
PPC_FUNC_IMPL(__imp__sub_8253F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F560"))) PPC_WEAK_FUNC(sub_8253F560);
PPC_FUNC_IMPL(__imp__sub_8253F560) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8253e580
	sub_8253E580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253F568"))) PPC_WEAK_FUNC(sub_8253F568);
PPC_FUNC_IMPL(__imp__sub_8253F568) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,31032
	ctx.r10.s64 = r11.s64 + 31032;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r8,r9,30888
	ctx.r8.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// addi r5,r7,30880
	ctx.r5.s64 = ctx.r7.s64 + 30880;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8253f5d8
	if (cr6.eq) goto loc_8253F5D8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253F5D8:
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

__attribute__((alias("__imp__sub_8253F5EC"))) PPC_WEAK_FUNC(sub_8253F5EC);
PPC_FUNC_IMPL(__imp__sub_8253F5EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F5F0"))) PPC_WEAK_FUNC(sub_8253F5F0);
PPC_FUNC_IMPL(__imp__sub_8253F5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17568
	ctx.r3.s64 = r11.s64 + -17568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F5FC"))) PPC_WEAK_FUNC(sub_8253F5FC);
PPC_FUNC_IMPL(__imp__sub_8253F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F600"))) PPC_WEAK_FUNC(sub_8253F600);
PPC_FUNC_IMPL(__imp__sub_8253F600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17568
	ctx.r3.s64 = r11.s64 + -17568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F60C"))) PPC_WEAK_FUNC(sub_8253F60C);
PPC_FUNC_IMPL(__imp__sub_8253F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F610"))) PPC_WEAK_FUNC(sub_8253F610);
PPC_FUNC_IMPL(__imp__sub_8253F610) {
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
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r8,r9,31120
	ctx.r8.s64 = ctx.r9.s64 + 31120;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r31,0
	r31.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r3,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r3.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r5.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r8.u32);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r31.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// lwz r7,72(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r31.u32);
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r31.u32);
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, r31.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r5.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r8.u32);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r31.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// lwz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r31.u32);
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r31.u32);
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, r31.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r5.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r4,88(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r8.u32);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r31.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f850
	if (cr6.eq) goto loc_8253F850;
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
	// stw r31,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r31.u32);
loc_8253F850:
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f874
	if (cr6.eq) goto loc_8253F874;
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
	// stw r31,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r31.u32);
loc_8253F874:
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f898
	if (cr6.eq) goto loc_8253F898;
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
	// stw r31,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r31.u32);
loc_8253F898:
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f8bc
	if (cr6.eq) goto loc_8253F8BC;
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
	// stw r31,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r31.u32);
loc_8253F8BC:
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f8e0
	if (cr6.eq) goto loc_8253F8E0;
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
	// stw r31,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r31.u32);
loc_8253F8E0:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f904
	if (cr6.eq) goto loc_8253F904;
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
	// stw r31,64(r29)
	PPC_STORE_U32(r29.u32 + 64, r31.u32);
loc_8253F904:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f928
	if (cr6.eq) goto loc_8253F928;
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
	// stw r31,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r31.u32);
loc_8253F928:
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f94c
	if (cr6.eq) goto loc_8253F94C;
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
	// stw r31,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r31.u32);
loc_8253F94C:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f970
	if (cr6.eq) goto loc_8253F970;
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
	// stw r31,88(r29)
	PPC_STORE_U32(r29.u32 + 88, r31.u32);
loc_8253F970:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,30880
	ctx.r10.s64 = r11.s64 + 30880;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253F988"))) PPC_WEAK_FUNC(sub_8253F988);
PPC_FUNC_IMPL(__imp__sub_8253F988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253F98C"))) PPC_WEAK_FUNC(sub_8253F98C);
PPC_FUNC_IMPL(__imp__sub_8253F98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253F990"))) PPC_WEAK_FUNC(sub_8253F990);
PPC_FUNC_IMPL(__imp__sub_8253F990) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r9,r11,30880
	ctx.r9.s64 = r11.s64 + 30880;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r5,r8,31120
	ctx.r5.s64 = ctx.r8.s64 + 31120;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// li r27,17
	r27.s64 = 17;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r29.u32);
	// addi r28,r10,31144
	r28.s64 = ctx.r10.s64 + 31144;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fa48
	if (cr6.eq) goto loc_8253FA48;
	// bl 0x82540700
	sub_82540700(ctx, base);
	// b 0x8253fa4c
	goto loc_8253FA4C;
loc_8253FA48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FA4C:
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fa8c
	if (cr6.eq) goto loc_8253FA8C;
	// bl 0x8253fea0
	sub_8253FEA0(ctx, base);
	// b 0x8253fa90
	goto loc_8253FA90;
loc_8253FA8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FA90:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fad0
	if (cr6.eq) goto loc_8253FAD0;
	// bl 0x82540a98
	sub_82540A98(ctx, base);
	// b 0x8253fad4
	goto loc_8253FAD4;
loc_8253FAD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FAD4:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fb14
	if (cr6.eq) goto loc_8253FB14;
	// bl 0x8253d030
	sub_8253D030(ctx, base);
	// b 0x8253fb18
	goto loc_8253FB18;
loc_8253FB14:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FB18:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fb58
	if (cr6.eq) goto loc_8253FB58;
	// bl 0x82541c18
	sub_82541C18(ctx, base);
	// b 0x8253fb5c
	goto loc_8253FB5C;
loc_8253FB58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FB5C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// li r3,1084
	ctx.r3.s64 = 1084;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fb9c
	if (cr6.eq) goto loc_8253FB9C;
	// bl 0x825420b0
	sub_825420B0(ctx, base);
	// b 0x8253fba0
	goto loc_8253FBA0;
loc_8253FB9C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FBA0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fbe0
	if (cr6.eq) goto loc_8253FBE0;
	// bl 0x8253c960
	sub_8253C960(ctx, base);
	// b 0x8253fbe4
	goto loc_8253FBE4;
loc_8253FBE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FBE4:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fc24
	if (cr6.eq) goto loc_8253FC24;
	// bl 0x82542360
	sub_82542360(ctx, base);
	// b 0x8253fc28
	goto loc_8253FC28;
loc_8253FC24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FC28:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253fc68
	if (cr6.eq) goto loc_8253FC68;
	// bl 0x82541388
	sub_82541388(ctx, base);
	// b 0x8253fc6c
	goto loc_8253FC6C;
loc_8253FC68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8253FC6C:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r30.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r30.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r30.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r30.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r5.u32);
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253FE2C"))) PPC_WEAK_FUNC(sub_8253FE2C);
PPC_FUNC_IMPL(__imp__sub_8253FE2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253FE30"))) PPC_WEAK_FUNC(sub_8253FE30);
PPC_FUNC_IMPL(__imp__sub_8253FE30) {
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
	// bl 0x8253f610
	sub_8253F610(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253fe68
	if (cr6.eq) goto loc_8253FE68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253FE68:
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

__attribute__((alias("__imp__sub_8253FE7C"))) PPC_WEAK_FUNC(sub_8253FE7C);
PPC_FUNC_IMPL(__imp__sub_8253FE7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FE80"))) PPC_WEAK_FUNC(sub_8253FE80);
PPC_FUNC_IMPL(__imp__sub_8253FE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17508
	ctx.r3.s64 = r11.s64 + -17508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FE8C"))) PPC_WEAK_FUNC(sub_8253FE8C);
PPC_FUNC_IMPL(__imp__sub_8253FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FE90"))) PPC_WEAK_FUNC(sub_8253FE90);
PPC_FUNC_IMPL(__imp__sub_8253FE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17508
	ctx.r3.s64 = r11.s64 + -17508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FE9C"))) PPC_WEAK_FUNC(sub_8253FE9C);
PPC_FUNC_IMPL(__imp__sub_8253FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FEA0"))) PPC_WEAK_FUNC(sub_8253FEA0);
PPC_FUNC_IMPL(__imp__sub_8253FEA0) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,31212
	ctx.r10.s64 = r11.s64 + 31212;
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

__attribute__((alias("__imp__sub_8253FED8"))) PPC_WEAK_FUNC(sub_8253FED8);
PPC_FUNC_IMPL(__imp__sub_8253FED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FEDC"))) PPC_WEAK_FUNC(sub_8253FEDC);
PPC_FUNC_IMPL(__imp__sub_8253FEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FEE0"))) PPC_WEAK_FUNC(sub_8253FEE0);
PPC_FUNC_IMPL(__imp__sub_8253FEE0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,30888
	ctx.r10.s64 = r11.s64 + 30888;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r9,30880
	ctx.r8.s64 = ctx.r9.s64 + 30880;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253FF2C"))) PPC_WEAK_FUNC(sub_8253FF2C);
PPC_FUNC_IMPL(__imp__sub_8253FF2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FF30"))) PPC_WEAK_FUNC(sub_8253FF30);
PPC_FUNC_IMPL(__imp__sub_8253FF30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31232
	ctx.r3.s64 = r11.s64 + 31232;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253ffa4
	if (cr6.eq) goto loc_8253FFA4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253ffa8
	if (!cr6.eq) goto loc_8253FFA8;
loc_8253FFA4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8253FFA8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253FFC8"))) PPC_WEAK_FUNC(sub_8253FFC8);
PPC_FUNC_IMPL(__imp__sub_8253FFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FFCC"))) PPC_WEAK_FUNC(sub_8253FFCC);
PPC_FUNC_IMPL(__imp__sub_8253FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253FFD0"))) PPC_WEAK_FUNC(sub_8253FFD0);
PPC_FUNC_IMPL(__imp__sub_8253FFD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r3,r11,31252
	ctx.r3.s64 = r11.s64 + 31252;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540044
	if (cr6.eq) goto loc_82540044;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540048
	if (!cr6.eq) goto loc_82540048;
loc_82540044:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540048:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540068"))) PPC_WEAK_FUNC(sub_82540068);
PPC_FUNC_IMPL(__imp__sub_82540068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254006C"))) PPC_WEAK_FUNC(sub_8254006C);
PPC_FUNC_IMPL(__imp__sub_8254006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540070"))) PPC_WEAK_FUNC(sub_82540070);
PPC_FUNC_IMPL(__imp__sub_82540070) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r3,r11,31264
	ctx.r3.s64 = r11.s64 + 31264;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825400e4
	if (cr6.eq) goto loc_825400E4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x825400e8
	if (!cr6.eq) goto loc_825400E8;
loc_825400E4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825400E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540108"))) PPC_WEAK_FUNC(sub_82540108);
PPC_FUNC_IMPL(__imp__sub_82540108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254010C"))) PPC_WEAK_FUNC(sub_8254010C);
PPC_FUNC_IMPL(__imp__sub_8254010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540110"))) PPC_WEAK_FUNC(sub_82540110);
PPC_FUNC_IMPL(__imp__sub_82540110) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r3,r11,31280
	ctx.r3.s64 = r11.s64 + 31280;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540184
	if (cr6.eq) goto loc_82540184;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540188
	if (!cr6.eq) goto loc_82540188;
loc_82540184:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540188:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825401A8"))) PPC_WEAK_FUNC(sub_825401A8);
PPC_FUNC_IMPL(__imp__sub_825401A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825401AC"))) PPC_WEAK_FUNC(sub_825401AC);
PPC_FUNC_IMPL(__imp__sub_825401AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825401B0"))) PPC_WEAK_FUNC(sub_825401B0);
PPC_FUNC_IMPL(__imp__sub_825401B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r3,r11,31292
	ctx.r3.s64 = r11.s64 + 31292;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540224
	if (cr6.eq) goto loc_82540224;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540228
	if (!cr6.eq) goto loc_82540228;
loc_82540224:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540228:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540248"))) PPC_WEAK_FUNC(sub_82540248);
PPC_FUNC_IMPL(__imp__sub_82540248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254024C"))) PPC_WEAK_FUNC(sub_8254024C);
PPC_FUNC_IMPL(__imp__sub_8254024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540250"))) PPC_WEAK_FUNC(sub_82540250);
PPC_FUNC_IMPL(__imp__sub_82540250) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r3,r11,31304
	ctx.r3.s64 = r11.s64 + 31304;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825402c4
	if (cr6.eq) goto loc_825402C4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x825402c8
	if (!cr6.eq) goto loc_825402C8;
loc_825402C4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825402C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825402E8"))) PPC_WEAK_FUNC(sub_825402E8);
PPC_FUNC_IMPL(__imp__sub_825402E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825402EC"))) PPC_WEAK_FUNC(sub_825402EC);
PPC_FUNC_IMPL(__imp__sub_825402EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825402F0"))) PPC_WEAK_FUNC(sub_825402F0);
PPC_FUNC_IMPL(__imp__sub_825402F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31316
	ctx.r3.s64 = r11.s64 + 31316;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540364
	if (cr6.eq) goto loc_82540364;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540368
	if (!cr6.eq) goto loc_82540368;
loc_82540364:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540368:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540388"))) PPC_WEAK_FUNC(sub_82540388);
PPC_FUNC_IMPL(__imp__sub_82540388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254038C"))) PPC_WEAK_FUNC(sub_8254038C);
PPC_FUNC_IMPL(__imp__sub_8254038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540390"))) PPC_WEAK_FUNC(sub_82540390);
PPC_FUNC_IMPL(__imp__sub_82540390) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31232
	ctx.r3.s64 = r11.s64 + 31232;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825403F0"))) PPC_WEAK_FUNC(sub_825403F0);
PPC_FUNC_IMPL(__imp__sub_825403F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825403F4"))) PPC_WEAK_FUNC(sub_825403F4);
PPC_FUNC_IMPL(__imp__sub_825403F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825403F8"))) PPC_WEAK_FUNC(sub_825403F8);
PPC_FUNC_IMPL(__imp__sub_825403F8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31252
	ctx.r3.s64 = r11.s64 + 31252;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540458"))) PPC_WEAK_FUNC(sub_82540458);
PPC_FUNC_IMPL(__imp__sub_82540458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254045C"))) PPC_WEAK_FUNC(sub_8254045C);
PPC_FUNC_IMPL(__imp__sub_8254045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540460"))) PPC_WEAK_FUNC(sub_82540460);
PPC_FUNC_IMPL(__imp__sub_82540460) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31264
	ctx.r3.s64 = r11.s64 + 31264;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825404C0"))) PPC_WEAK_FUNC(sub_825404C0);
PPC_FUNC_IMPL(__imp__sub_825404C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825404C4"))) PPC_WEAK_FUNC(sub_825404C4);
PPC_FUNC_IMPL(__imp__sub_825404C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825404C8"))) PPC_WEAK_FUNC(sub_825404C8);
PPC_FUNC_IMPL(__imp__sub_825404C8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31280
	ctx.r3.s64 = r11.s64 + 31280;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540528"))) PPC_WEAK_FUNC(sub_82540528);
PPC_FUNC_IMPL(__imp__sub_82540528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254052C"))) PPC_WEAK_FUNC(sub_8254052C);
PPC_FUNC_IMPL(__imp__sub_8254052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540530"))) PPC_WEAK_FUNC(sub_82540530);
PPC_FUNC_IMPL(__imp__sub_82540530) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31292
	ctx.r3.s64 = r11.s64 + 31292;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540590"))) PPC_WEAK_FUNC(sub_82540590);
PPC_FUNC_IMPL(__imp__sub_82540590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540594"))) PPC_WEAK_FUNC(sub_82540594);
PPC_FUNC_IMPL(__imp__sub_82540594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540598"))) PPC_WEAK_FUNC(sub_82540598);
PPC_FUNC_IMPL(__imp__sub_82540598) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31304
	ctx.r3.s64 = r11.s64 + 31304;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825405F8"))) PPC_WEAK_FUNC(sub_825405F8);
PPC_FUNC_IMPL(__imp__sub_825405F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825405FC"))) PPC_WEAK_FUNC(sub_825405FC);
PPC_FUNC_IMPL(__imp__sub_825405FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540600"))) PPC_WEAK_FUNC(sub_82540600);
PPC_FUNC_IMPL(__imp__sub_82540600) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31316
	ctx.r3.s64 = r11.s64 + 31316;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540660"))) PPC_WEAK_FUNC(sub_82540660);
PPC_FUNC_IMPL(__imp__sub_82540660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540664"))) PPC_WEAK_FUNC(sub_82540664);
PPC_FUNC_IMPL(__imp__sub_82540664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540668"))) PPC_WEAK_FUNC(sub_82540668);
PPC_FUNC_IMPL(__imp__sub_82540668) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,30888
	ctx.r10.s64 = r11.s64 + 30888;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,30880
	ctx.r7.s64 = ctx.r9.s64 + 30880;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x825406c4
	if (cr6.eq) goto loc_825406C4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825406C4:
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

__attribute__((alias("__imp__sub_825406D8"))) PPC_WEAK_FUNC(sub_825406D8);
PPC_FUNC_IMPL(__imp__sub_825406D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825406DC"))) PPC_WEAK_FUNC(sub_825406DC);
PPC_FUNC_IMPL(__imp__sub_825406DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825406E0"))) PPC_WEAK_FUNC(sub_825406E0);
PPC_FUNC_IMPL(__imp__sub_825406E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17440
	ctx.r3.s64 = r11.s64 + -17440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825406EC"))) PPC_WEAK_FUNC(sub_825406EC);
PPC_FUNC_IMPL(__imp__sub_825406EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825406F0"))) PPC_WEAK_FUNC(sub_825406F0);
PPC_FUNC_IMPL(__imp__sub_825406F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17440
	ctx.r3.s64 = r11.s64 + -17440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825406FC"))) PPC_WEAK_FUNC(sub_825406FC);
PPC_FUNC_IMPL(__imp__sub_825406FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540700"))) PPC_WEAK_FUNC(sub_82540700);
PPC_FUNC_IMPL(__imp__sub_82540700) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,31336
	ctx.r10.s64 = r11.s64 + 31336;
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

__attribute__((alias("__imp__sub_82540738"))) PPC_WEAK_FUNC(sub_82540738);
PPC_FUNC_IMPL(__imp__sub_82540738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254073C"))) PPC_WEAK_FUNC(sub_8254073C);
PPC_FUNC_IMPL(__imp__sub_8254073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540740"))) PPC_WEAK_FUNC(sub_82540740);
PPC_FUNC_IMPL(__imp__sub_82540740) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,30888
	ctx.r10.s64 = r11.s64 + 30888;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r9,30880
	ctx.r8.s64 = ctx.r9.s64 + 30880;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254078C"))) PPC_WEAK_FUNC(sub_8254078C);
PPC_FUNC_IMPL(__imp__sub_8254078C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540790"))) PPC_WEAK_FUNC(sub_82540790);
PPC_FUNC_IMPL(__imp__sub_82540790) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31356
	ctx.r3.s64 = r11.s64 + 31356;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540800
	if (cr6.eq) goto loc_82540800;
	// bl 0x822c8828
	sub_822C8828(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540800
	if (cr6.eq) goto loc_82540800;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82540808
	goto loc_82540808;
loc_82540800:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20608
	r11.s64 = r11.s64 + 20608;
loc_82540808:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540828"))) PPC_WEAK_FUNC(sub_82540828);
PPC_FUNC_IMPL(__imp__sub_82540828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254082C"))) PPC_WEAK_FUNC(sub_8254082C);
PPC_FUNC_IMPL(__imp__sub_8254082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540830"))) PPC_WEAK_FUNC(sub_82540830);
PPC_FUNC_IMPL(__imp__sub_82540830) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x82540864
	if (cr6.eq) goto loc_82540864;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82540868
	if (!cr6.eq) goto loc_82540868;
loc_82540864:
	// li r11,0
	r11.s64 = 0;
loc_82540868:
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31356
	ctx.r3.s64 = ctx.r10.s64 + 31356;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329718
	sub_82329718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825408BC"))) PPC_WEAK_FUNC(sub_825408BC);
PPC_FUNC_IMPL(__imp__sub_825408BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825408C0"))) PPC_WEAK_FUNC(sub_825408C0);
PPC_FUNC_IMPL(__imp__sub_825408C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,31368
	r31.s64 = r11.s64 + 31368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825409a8
	if (cr6.eq) goto loc_825409A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540988
	if (cr6.eq) goto loc_82540988;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540988
	if (cr6.eq) goto loc_82540988;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_82540988:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18440
	r11.s64 = r11.s64 + 18440;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_825409A8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-22864
	ctx.r3.s64 = r11.s64 + -22864;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825409B4"))) PPC_WEAK_FUNC(sub_825409B4);
PPC_FUNC_IMPL(__imp__sub_825409B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825409B8"))) PPC_WEAK_FUNC(sub_825409B8);
PPC_FUNC_IMPL(__imp__sub_825409B8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r10,31368
	ctx.r3.s64 = ctx.r10.s64 + 31368;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8232a060
	sub_8232A060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540A24"))) PPC_WEAK_FUNC(sub_82540A24);
PPC_FUNC_IMPL(__imp__sub_82540A24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540A28"))) PPC_WEAK_FUNC(sub_82540A28);
PPC_FUNC_IMPL(__imp__sub_82540A28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825409b8
	sub_825409B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82540830
	sub_82540830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8272e848
	sub_8272E848(ctx, base);
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

__attribute__((alias("__imp__sub_82540A70"))) PPC_WEAK_FUNC(sub_82540A70);
PPC_FUNC_IMPL(__imp__sub_82540A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540A74"))) PPC_WEAK_FUNC(sub_82540A74);
PPC_FUNC_IMPL(__imp__sub_82540A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540A78"))) PPC_WEAK_FUNC(sub_82540A78);
PPC_FUNC_IMPL(__imp__sub_82540A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17372
	ctx.r3.s64 = r11.s64 + -17372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540A84"))) PPC_WEAK_FUNC(sub_82540A84);
PPC_FUNC_IMPL(__imp__sub_82540A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540A88"))) PPC_WEAK_FUNC(sub_82540A88);
PPC_FUNC_IMPL(__imp__sub_82540A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17372
	ctx.r3.s64 = r11.s64 + -17372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540A94"))) PPC_WEAK_FUNC(sub_82540A94);
PPC_FUNC_IMPL(__imp__sub_82540A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540A98"))) PPC_WEAK_FUNC(sub_82540A98);
PPC_FUNC_IMPL(__imp__sub_82540A98) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,31384
	ctx.r10.s64 = r11.s64 + 31384;
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

__attribute__((alias("__imp__sub_82540AD0"))) PPC_WEAK_FUNC(sub_82540AD0);
PPC_FUNC_IMPL(__imp__sub_82540AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540AD4"))) PPC_WEAK_FUNC(sub_82540AD4);
PPC_FUNC_IMPL(__imp__sub_82540AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540AD8"))) PPC_WEAK_FUNC(sub_82540AD8);
PPC_FUNC_IMPL(__imp__sub_82540AD8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,30888
	ctx.r10.s64 = r11.s64 + 30888;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r9,30880
	ctx.r8.s64 = ctx.r9.s64 + 30880;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540B24"))) PPC_WEAK_FUNC(sub_82540B24);
PPC_FUNC_IMPL(__imp__sub_82540B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540B28"))) PPC_WEAK_FUNC(sub_82540B28);
PPC_FUNC_IMPL(__imp__sub_82540B28) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31404
	ctx.r3.s64 = r11.s64 + 31404;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540b9c
	if (cr6.eq) goto loc_82540B9C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540ba0
	if (!cr6.eq) goto loc_82540BA0;
loc_82540B9C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540BA0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540BC0"))) PPC_WEAK_FUNC(sub_82540BC0);
PPC_FUNC_IMPL(__imp__sub_82540BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540BC4"))) PPC_WEAK_FUNC(sub_82540BC4);
PPC_FUNC_IMPL(__imp__sub_82540BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540BC8"))) PPC_WEAK_FUNC(sub_82540BC8);
PPC_FUNC_IMPL(__imp__sub_82540BC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31424
	ctx.r3.s64 = r11.s64 + 31424;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540c3c
	if (cr6.eq) goto loc_82540C3C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540c40
	if (!cr6.eq) goto loc_82540C40;
loc_82540C3C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540C40:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540C60"))) PPC_WEAK_FUNC(sub_82540C60);
PPC_FUNC_IMPL(__imp__sub_82540C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540C64"))) PPC_WEAK_FUNC(sub_82540C64);
PPC_FUNC_IMPL(__imp__sub_82540C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540C68"))) PPC_WEAK_FUNC(sub_82540C68);
PPC_FUNC_IMPL(__imp__sub_82540C68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31440
	ctx.r3.s64 = r11.s64 + 31440;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540cdc
	if (cr6.eq) goto loc_82540CDC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540ce0
	if (!cr6.eq) goto loc_82540CE0;
loc_82540CDC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540CE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540D00"))) PPC_WEAK_FUNC(sub_82540D00);
PPC_FUNC_IMPL(__imp__sub_82540D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540D04"))) PPC_WEAK_FUNC(sub_82540D04);
PPC_FUNC_IMPL(__imp__sub_82540D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540D08"))) PPC_WEAK_FUNC(sub_82540D08);
PPC_FUNC_IMPL(__imp__sub_82540D08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31456
	ctx.r3.s64 = r11.s64 + 31456;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540d7c
	if (cr6.eq) goto loc_82540D7C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540d80
	if (!cr6.eq) goto loc_82540D80;
loc_82540D7C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540D80:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540DA0"))) PPC_WEAK_FUNC(sub_82540DA0);
PPC_FUNC_IMPL(__imp__sub_82540DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540DA4"))) PPC_WEAK_FUNC(sub_82540DA4);
PPC_FUNC_IMPL(__imp__sub_82540DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540DA8"))) PPC_WEAK_FUNC(sub_82540DA8);
PPC_FUNC_IMPL(__imp__sub_82540DA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r11,31480
	ctx.r3.s64 = r11.s64 + 31480;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540e1c
	if (cr6.eq) goto loc_82540E1C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540e20
	if (!cr6.eq) goto loc_82540E20;
loc_82540E1C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540E20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540E40"))) PPC_WEAK_FUNC(sub_82540E40);
PPC_FUNC_IMPL(__imp__sub_82540E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540E44"))) PPC_WEAK_FUNC(sub_82540E44);
PPC_FUNC_IMPL(__imp__sub_82540E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540E48"))) PPC_WEAK_FUNC(sub_82540E48);
PPC_FUNC_IMPL(__imp__sub_82540E48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r11,31504
	ctx.r3.s64 = r11.s64 + 31504;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540ebc
	if (cr6.eq) goto loc_82540EBC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540ec0
	if (!cr6.eq) goto loc_82540EC0;
loc_82540EBC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540EC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540EE0"))) PPC_WEAK_FUNC(sub_82540EE0);
PPC_FUNC_IMPL(__imp__sub_82540EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540EE4"))) PPC_WEAK_FUNC(sub_82540EE4);
PPC_FUNC_IMPL(__imp__sub_82540EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540EE8"))) PPC_WEAK_FUNC(sub_82540EE8);
PPC_FUNC_IMPL(__imp__sub_82540EE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,31528
	ctx.r3.s64 = r11.s64 + 31528;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540f5c
	if (cr6.eq) goto loc_82540F5C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82540f60
	if (!cr6.eq) goto loc_82540F60;
loc_82540F5C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82540F60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82540F80"))) PPC_WEAK_FUNC(sub_82540F80);
PPC_FUNC_IMPL(__imp__sub_82540F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540F84"))) PPC_WEAK_FUNC(sub_82540F84);
PPC_FUNC_IMPL(__imp__sub_82540F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82540F88"))) PPC_WEAK_FUNC(sub_82540F88);
PPC_FUNC_IMPL(__imp__sub_82540F88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r11,31504
	ctx.r3.s64 = r11.s64 + 31504;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82540ffc
	if (cr6.eq) goto loc_82540FFC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x82541000
	if (!cr6.eq) goto loc_82541000;
loc_82540FFC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82541000:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541020"))) PPC_WEAK_FUNC(sub_82541020);
PPC_FUNC_IMPL(__imp__sub_82541020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541024"))) PPC_WEAK_FUNC(sub_82541024);
PPC_FUNC_IMPL(__imp__sub_82541024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541028"))) PPC_WEAK_FUNC(sub_82541028);
PPC_FUNC_IMPL(__imp__sub_82541028) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31404
	ctx.r3.s64 = r11.s64 + 31404;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541088"))) PPC_WEAK_FUNC(sub_82541088);
PPC_FUNC_IMPL(__imp__sub_82541088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254108C"))) PPC_WEAK_FUNC(sub_8254108C);
PPC_FUNC_IMPL(__imp__sub_8254108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541090"))) PPC_WEAK_FUNC(sub_82541090);
PPC_FUNC_IMPL(__imp__sub_82541090) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31424
	ctx.r3.s64 = r11.s64 + 31424;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825410F0"))) PPC_WEAK_FUNC(sub_825410F0);
PPC_FUNC_IMPL(__imp__sub_825410F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825410F4"))) PPC_WEAK_FUNC(sub_825410F4);
PPC_FUNC_IMPL(__imp__sub_825410F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825410F8"))) PPC_WEAK_FUNC(sub_825410F8);
PPC_FUNC_IMPL(__imp__sub_825410F8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31440
	ctx.r3.s64 = r11.s64 + 31440;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541158"))) PPC_WEAK_FUNC(sub_82541158);
PPC_FUNC_IMPL(__imp__sub_82541158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254115C"))) PPC_WEAK_FUNC(sub_8254115C);
PPC_FUNC_IMPL(__imp__sub_8254115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541160"))) PPC_WEAK_FUNC(sub_82541160);
PPC_FUNC_IMPL(__imp__sub_82541160) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31456
	ctx.r3.s64 = r11.s64 + 31456;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825411C0"))) PPC_WEAK_FUNC(sub_825411C0);
PPC_FUNC_IMPL(__imp__sub_825411C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825411C4"))) PPC_WEAK_FUNC(sub_825411C4);
PPC_FUNC_IMPL(__imp__sub_825411C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825411C8"))) PPC_WEAK_FUNC(sub_825411C8);
PPC_FUNC_IMPL(__imp__sub_825411C8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31480
	ctx.r3.s64 = r11.s64 + 31480;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541228"))) PPC_WEAK_FUNC(sub_82541228);
PPC_FUNC_IMPL(__imp__sub_82541228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254122C"))) PPC_WEAK_FUNC(sub_8254122C);
PPC_FUNC_IMPL(__imp__sub_8254122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541230"))) PPC_WEAK_FUNC(sub_82541230);
PPC_FUNC_IMPL(__imp__sub_82541230) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31504
	ctx.r3.s64 = r11.s64 + 31504;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541290"))) PPC_WEAK_FUNC(sub_82541290);
PPC_FUNC_IMPL(__imp__sub_82541290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541294"))) PPC_WEAK_FUNC(sub_82541294);
PPC_FUNC_IMPL(__imp__sub_82541294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541298"))) PPC_WEAK_FUNC(sub_82541298);
PPC_FUNC_IMPL(__imp__sub_82541298) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31528
	ctx.r3.s64 = r11.s64 + 31528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825412F8"))) PPC_WEAK_FUNC(sub_825412F8);
PPC_FUNC_IMPL(__imp__sub_825412F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825412FC"))) PPC_WEAK_FUNC(sub_825412FC);
PPC_FUNC_IMPL(__imp__sub_825412FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541300"))) PPC_WEAK_FUNC(sub_82541300);
PPC_FUNC_IMPL(__imp__sub_82541300) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,31504
	ctx.r3.s64 = r11.s64 + 31504;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541360"))) PPC_WEAK_FUNC(sub_82541360);
PPC_FUNC_IMPL(__imp__sub_82541360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541364"))) PPC_WEAK_FUNC(sub_82541364);
PPC_FUNC_IMPL(__imp__sub_82541364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541368"))) PPC_WEAK_FUNC(sub_82541368);
PPC_FUNC_IMPL(__imp__sub_82541368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17252
	ctx.r3.s64 = r11.s64 + -17252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541374"))) PPC_WEAK_FUNC(sub_82541374);
PPC_FUNC_IMPL(__imp__sub_82541374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541378"))) PPC_WEAK_FUNC(sub_82541378);
PPC_FUNC_IMPL(__imp__sub_82541378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17252
	ctx.r3.s64 = r11.s64 + -17252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541384"))) PPC_WEAK_FUNC(sub_82541384);
PPC_FUNC_IMPL(__imp__sub_82541384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541388"))) PPC_WEAK_FUNC(sub_82541388);
PPC_FUNC_IMPL(__imp__sub_82541388) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,31552
	ctx.r10.s64 = r11.s64 + 31552;
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

__attribute__((alias("__imp__sub_825413C0"))) PPC_WEAK_FUNC(sub_825413C0);
PPC_FUNC_IMPL(__imp__sub_825413C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825413C4"))) PPC_WEAK_FUNC(sub_825413C4);
PPC_FUNC_IMPL(__imp__sub_825413C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825413C8"))) PPC_WEAK_FUNC(sub_825413C8);
PPC_FUNC_IMPL(__imp__sub_825413C8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,30888
	ctx.r10.s64 = r11.s64 + 30888;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r9,30880
	ctx.r8.s64 = ctx.r9.s64 + 30880;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541414"))) PPC_WEAK_FUNC(sub_82541414);
PPC_FUNC_IMPL(__imp__sub_82541414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541418"))) PPC_WEAK_FUNC(sub_82541418);
PPC_FUNC_IMPL(__imp__sub_82541418) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,-22840
	ctx.r9.s64 = ctx.r10.s64 + -22840;
	// addi r29,r4,56
	r29.s64 = ctx.r4.s64 + 56;
	// lwz r11,-22816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22816);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,-22840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22840);
	f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825416b8
	if (cr6.eq) goto loc_825416B8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-22816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22816);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r10,-22800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22800);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254151c
	if (cr6.eq) goto loc_8254151C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bne cr6,0x82541520
	if (!cr6.eq) goto loc_82541520;
loc_8254151C:
	// addi r27,r1,120
	r27.s64 = ctx.r1.s64 + 120;
loc_82541520:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,-22804(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22804);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82541584
	if (cr6.eq) goto loc_82541584;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne cr6,0x82541588
	if (!cr6.eq) goto loc_82541588;
loc_82541584:
	// addi r28,r1,108
	r28.s64 = ctx.r1.s64 + 108;
loc_82541588:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,-22808(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22808);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825415ec
	if (cr6.eq) goto loc_825415EC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x825415f0
	if (!cr6.eq) goto loc_825415F0;
loc_825415EC:
	// addi r31,r1,104
	r31.s64 = ctx.r1.s64 + 104;
loc_825415F0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,-22812(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22812);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82541654
	if (cr6.eq) goto loc_82541654;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82541658
	if (!cr6.eq) goto loc_82541658;
loc_82541654:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_82541658:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_825416B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
}

__attribute__((alias("__imp__sub_825416C0"))) PPC_WEAK_FUNC(sub_825416C0);
PPC_FUNC_IMPL(__imp__sub_825416C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825416C4"))) PPC_WEAK_FUNC(sub_825416C4);
PPC_FUNC_IMPL(__imp__sub_825416C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825416C8"))) PPC_WEAK_FUNC(sub_825416C8);
PPC_FUNC_IMPL(__imp__sub_825416C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-22824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22824);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82541770
	if (cr6.eq) goto loc_82541770;
	// lwz r11,-22824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22824);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82541764
	if (cr6.eq) goto loc_82541764;
	// bl 0x822c8828
	sub_822C8828(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82541764
	if (cr6.eq) goto loc_82541764;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825417f8
	goto loc_825417F8;
loc_82541764:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20608
	r11.s64 = r11.s64 + 20608;
	// b 0x825417f8
	goto loc_825417F8;
loc_82541770:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-30268
	ctx.r9.s64 = ctx.r10.s64 + -30268;
	// li r10,86
	ctx.r10.s64 = 86;
loc_82541780:
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
	// bne cr6,0x82541780
	if (!cr6.eq) goto loc_82541780;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-22820(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22820);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825417f4
	if (cr6.eq) goto loc_825417F4;
	// bl 0x822c8828
	sub_822C8828(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x825417f8
	if (!cr6.eq) goto loc_825417F8;
loc_825417F4:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825417F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8254180C"))) PPC_WEAK_FUNC(sub_8254180C);
PPC_FUNC_IMPL(__imp__sub_8254180C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82541810"))) PPC_WEAK_FUNC(sub_82541810);
PPC_FUNC_IMPL(__imp__sub_82541810) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r31,r3,56
	r31.s64 = ctx.r3.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-22824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22824);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329718
	sub_82329718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-22820(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -22820);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r9,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825418f4
	if (cr6.eq) goto loc_825418F4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-30268
	ctx.r9.s64 = ctx.r10.s64 + -30268;
	// li r10,86
	ctx.r10.s64 = 86;
loc_825418A4:
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
	// bne cr6,0x825418a4
	if (!cr6.eq) goto loc_825418A4;
	// lwz r10,-22820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -22820);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329718
	sub_82329718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_825418F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825418F8"))) PPC_WEAK_FUNC(sub_825418F8);
PPC_FUNC_IMPL(__imp__sub_825418F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825418FC"))) PPC_WEAK_FUNC(sub_825418FC);
PPC_FUNC_IMPL(__imp__sub_825418FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541900"))) PPC_WEAK_FUNC(sub_82541900);
PPC_FUNC_IMPL(__imp__sub_82541900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r31,r3,56
	r31.s64 = ctx.r3.s64 + 56;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22816);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,-22812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22812);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r11,-22816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22816);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,-22808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22808);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r11,-22816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22816);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,-22804(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22804);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r11,-22816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22816);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,-22800(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22800);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82541A6C"))) PPC_WEAK_FUNC(sub_82541A6C);
PPC_FUNC_IMPL(__imp__sub_82541A6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82541A70"))) PPC_WEAK_FUNC(sub_82541A70);
PPC_FUNC_IMPL(__imp__sub_82541A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17188
	ctx.r3.s64 = r11.s64 + -17188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541A7C"))) PPC_WEAK_FUNC(sub_82541A7C);
PPC_FUNC_IMPL(__imp__sub_82541A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541A80"))) PPC_WEAK_FUNC(sub_82541A80);
PPC_FUNC_IMPL(__imp__sub_82541A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17188
	ctx.r3.s64 = r11.s64 + -17188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541A8C"))) PPC_WEAK_FUNC(sub_82541A8C);
PPC_FUNC_IMPL(__imp__sub_82541A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541A90"))) PPC_WEAK_FUNC(sub_82541A90);
PPC_FUNC_IMPL(__imp__sub_82541A90) {
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
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82541b1c
	if (cr6.eq) goto loc_82541B1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826cab60
	sub_826CAB60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_82541B1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82541B28"))) PPC_WEAK_FUNC(sub_82541B28);
PPC_FUNC_IMPL(__imp__sub_82541B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82541B2C"))) PPC_WEAK_FUNC(sub_82541B2C);
PPC_FUNC_IMPL(__imp__sub_82541B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541B30"))) PPC_WEAK_FUNC(sub_82541B30);
PPC_FUNC_IMPL(__imp__sub_82541B30) {
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
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

__attribute__((alias("__imp__sub_82541B80"))) PPC_WEAK_FUNC(sub_82541B80);
PPC_FUNC_IMPL(__imp__sub_82541B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B84"))) PPC_WEAK_FUNC(sub_82541B84);
PPC_FUNC_IMPL(__imp__sub_82541B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541B88"))) PPC_WEAK_FUNC(sub_82541B88);
PPC_FUNC_IMPL(__imp__sub_82541B88) {
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e848
	sub_8272E848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82541BC8"))) PPC_WEAK_FUNC(sub_82541BC8);
PPC_FUNC_IMPL(__imp__sub_82541BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82541BCC"))) PPC_WEAK_FUNC(sub_82541BCC);
PPC_FUNC_IMPL(__imp__sub_82541BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541BD0"))) PPC_WEAK_FUNC(sub_82541BD0);
PPC_FUNC_IMPL(__imp__sub_82541BD0) {
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e950
	sub_8272E950(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82541C10"))) PPC_WEAK_FUNC(sub_82541C10);
PPC_FUNC_IMPL(__imp__sub_82541C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82541C14"))) PPC_WEAK_FUNC(sub_82541C14);
PPC_FUNC_IMPL(__imp__sub_82541C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541C18"))) PPC_WEAK_FUNC(sub_82541C18);
PPC_FUNC_IMPL(__imp__sub_82541C18) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,31732
	ctx.r10.s64 = r11.s64 + 31732;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
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

__attribute__((alias("__imp__sub_82541C60"))) PPC_WEAK_FUNC(sub_82541C60);
PPC_FUNC_IMPL(__imp__sub_82541C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C64"))) PPC_WEAK_FUNC(sub_82541C64);
PPC_FUNC_IMPL(__imp__sub_82541C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541C68"))) PPC_WEAK_FUNC(sub_82541C68);
PPC_FUNC_IMPL(__imp__sub_82541C68) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,31732
	ctx.r10.s64 = r11.s64 + 31732;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r8,r9,30888
	ctx.r8.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r7,30880
	ctx.r6.s64 = ctx.r7.s64 + 30880;
	// stw r6,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82541CC8"))) PPC_WEAK_FUNC(sub_82541CC8);
PPC_FUNC_IMPL(__imp__sub_82541CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CCC"))) PPC_WEAK_FUNC(sub_82541CCC);
PPC_FUNC_IMPL(__imp__sub_82541CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541CD0"))) PPC_WEAK_FUNC(sub_82541CD0);
PPC_FUNC_IMPL(__imp__sub_82541CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r28,r4,116
	r28.s64 = ctx.r4.s64 + 116;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x82541d4c
	if (!cr6.lt) goto loc_82541D4C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82541d30
	if (!cr6.gt) goto loc_82541D30;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_82541D24:
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bdnz 0x82541d24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82541D24;
loc_82541D30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cbd90
	sub_826CBD90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82541D4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82541D64"))) PPC_WEAK_FUNC(sub_82541D64);
PPC_FUNC_IMPL(__imp__sub_82541D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82541D68"))) PPC_WEAK_FUNC(sub_82541D68);
PPC_FUNC_IMPL(__imp__sub_82541D68) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
	// stfs f1,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82541e8c
	if (cr6.eq) goto loc_82541E8C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,14076
	ctx.r3.s64 = r11.s64 + 14076;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8232a060
	sub_8232A060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31752
	ctx.r3.s64 = ctx.r10.s64 + 31752;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca7a0
	sub_826CA7A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9468
	return;
loc_82541E8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,31752
	ctx.r3.s64 = r11.s64 + 31752;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82541EFC"))) PPC_WEAK_FUNC(sub_82541EFC);
PPC_FUNC_IMPL(__imp__sub_82541EFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82541F00"))) PPC_WEAK_FUNC(sub_82541F00);
PPC_FUNC_IMPL(__imp__sub_82541F00) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,31732
	ctx.r10.s64 = r11.s64 + 31732;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r8,r9,30888
	ctx.r8.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// addi r5,r7,30880
	ctx.r5.s64 = ctx.r7.s64 + 30880;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x82541f70
	if (cr6.eq) goto loc_82541F70;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82541F70:
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

__attribute__((alias("__imp__sub_82541F84"))) PPC_WEAK_FUNC(sub_82541F84);
PPC_FUNC_IMPL(__imp__sub_82541F84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F88"))) PPC_WEAK_FUNC(sub_82541F88);
PPC_FUNC_IMPL(__imp__sub_82541F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17124
	ctx.r3.s64 = r11.s64 + -17124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F94"))) PPC_WEAK_FUNC(sub_82541F94);
PPC_FUNC_IMPL(__imp__sub_82541F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82541F98"))) PPC_WEAK_FUNC(sub_82541F98);
PPC_FUNC_IMPL(__imp__sub_82541F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17124
	ctx.r3.s64 = r11.s64 + -17124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541FA4"))) PPC_WEAK_FUNC(sub_82541FA4);
PPC_FUNC_IMPL(__imp__sub_82541FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

