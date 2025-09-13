#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82596788"))) PPC_WEAK_FUNC(sub_82596788);
PPC_FUNC_IMPL(__imp__sub_82596788) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,-11556
	ctx.r8.s64 = ctx.r10.s64 + -11556;
	// addi r7,r9,-11612
	ctx.r7.s64 = ctx.r9.s64 + -11612;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r30.u8);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stb r30,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r30.u8);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stb r30,142(r31)
	PPC_STORE_U8(r31.u32 + 142, r30.u8);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stb r30,143(r31)
	PPC_STORE_U8(r31.u32 + 143, r30.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r4.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-11636
	r29.s64 = r11.s64 + -11636;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r3,r28,24
	ctx.r3.u64 = r28.u32 & 0xFF;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825968ac
	if (cr6.eq) goto loc_825968AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// stb r28,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r28.u8);
loc_825968AC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-11656
	r29.s64 = r11.s64 + -11656;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259692c
	if (cr6.eq) goto loc_8259692C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// stb r28,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r28.u8);
loc_8259692C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,-11664
	ctx.r3.s64 = r11.s64 + -11664;
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
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82596994
	if (cr6.eq) goto loc_82596994;
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
	// beq cr6,0x82596994
	if (cr6.eq) goto loc_82596994;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596998
	if (!cr6.eq) goto loc_82596998;
loc_82596994:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_82596998:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,-11676
	ctx.r3.s64 = r11.s64 + -11676;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82596a10
	if (cr6.eq) goto loc_82596A10;
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
	// beq cr6,0x82596a10
	if (cr6.eq) goto loc_82596A10;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596a14
	if (!cr6.eq) goto loc_82596A14;
loc_82596A10:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_82596A14:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,-11696
	ctx.r3.s64 = r11.s64 + -11696;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82596a88
	if (cr6.eq) goto loc_82596A88;
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
	// beq cr6,0x82596a88
	if (cr6.eq) goto loc_82596A88;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596a8c
	if (!cr6.eq) goto loc_82596A8C;
loc_82596A88:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
loc_82596A8C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82596AA8"))) PPC_WEAK_FUNC(sub_82596AA8);
PPC_FUNC_IMPL(__imp__sub_82596AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82596AAC"))) PPC_WEAK_FUNC(sub_82596AAC);
PPC_FUNC_IMPL(__imp__sub_82596AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596AB0"))) PPC_WEAK_FUNC(sub_82596AB0);
PPC_FUNC_IMPL(__imp__sub_82596AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82596AB4"))) PPC_WEAK_FUNC(sub_82596AB4);
PPC_FUNC_IMPL(__imp__sub_82596AB4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82596ab8
	goto loc_82596AB8;
loc_82596AB8:
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11556
	ctx.r9.s64 = r11.s64 + -11556;
	// addi r8,r10,-11612
	ctx.r8.s64 = ctx.r10.s64 + -11612;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,212
	ctx.r3.s64 = ctx.r3.s64 + 212;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82596b1c
	if (cr6.eq) goto loc_82596B1C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82596B1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596AB8"))) PPC_WEAK_FUNC(sub_82596AB8);
PPC_FUNC_IMPL(__imp__sub_82596AB8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11556
	ctx.r9.s64 = r11.s64 + -11556;
	// addi r8,r10,-11612
	ctx.r8.s64 = ctx.r10.s64 + -11612;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,212
	ctx.r3.s64 = ctx.r3.s64 + 212;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82596b1c
	if (cr6.eq) goto loc_82596B1C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82596B1C:
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

__attribute__((alias("__imp__sub_82596B34"))) PPC_WEAK_FUNC(sub_82596B34);
PPC_FUNC_IMPL(__imp__sub_82596B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596B38"))) PPC_WEAK_FUNC(sub_82596B38);
PPC_FUNC_IMPL(__imp__sub_82596B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596B44"))) PPC_WEAK_FUNC(sub_82596B44);
PPC_FUNC_IMPL(__imp__sub_82596B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596B48"))) PPC_WEAK_FUNC(sub_82596B48);
PPC_FUNC_IMPL(__imp__sub_82596B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596B4C"))) PPC_WEAK_FUNC(sub_82596B4C);
PPC_FUNC_IMPL(__imp__sub_82596B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596B50"))) PPC_WEAK_FUNC(sub_82596B50);
PPC_FUNC_IMPL(__imp__sub_82596B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
}

__attribute__((alias("__imp__sub_82596B5C"))) PPC_WEAK_FUNC(sub_82596B5C);
PPC_FUNC_IMPL(__imp__sub_82596B5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82596B60"))) PPC_WEAK_FUNC(sub_82596B60);
PPC_FUNC_IMPL(__imp__sub_82596B60) {
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
	// lwz r30,140(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// bl 0x82585998
	sub_82585998(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82596BC8"))) PPC_WEAK_FUNC(sub_82596BC8);
PPC_FUNC_IMPL(__imp__sub_82596BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82596BCC"))) PPC_WEAK_FUNC(sub_82596BCC);
PPC_FUNC_IMPL(__imp__sub_82596BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596BD0"))) PPC_WEAK_FUNC(sub_82596BD0);
PPC_FUNC_IMPL(__imp__sub_82596BD0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82596C20"))) PPC_WEAK_FUNC(sub_82596C20);
PPC_FUNC_IMPL(__imp__sub_82596C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596C24"))) PPC_WEAK_FUNC(sub_82596C24);
PPC_FUNC_IMPL(__imp__sub_82596C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596C28"))) PPC_WEAK_FUNC(sub_82596C28);
PPC_FUNC_IMPL(__imp__sub_82596C28) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82596c58
	if (cr6.eq) goto loc_82596C58;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596c5c
	if (!cr6.eq) goto loc_82596C5C;
loc_82596C58:
	// li r11,0
	r11.s64 = 0;
loc_82596C5C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,144
	ctx.r4.s64 = r28.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82596cb0
	if (!cr6.eq) goto loc_82596CB0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82596cb0
	if (!cr6.eq) goto loc_82596CB0;
	// lwz r11,19072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19072);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82596CB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82596CB4"))) PPC_WEAK_FUNC(sub_82596CB4);
PPC_FUNC_IMPL(__imp__sub_82596CB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82596CB8"))) PPC_WEAK_FUNC(sub_82596CB8);
PPC_FUNC_IMPL(__imp__sub_82596CB8) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,27488
	r30.s64 = r11.s64 + 27488;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82596cf0
	if (cr6.eq) goto loc_82596CF0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596cf4
	if (!cr6.eq) goto loc_82596CF4;
loc_82596CF0:
	// li r11,0
	r11.s64 = 0;
loc_82596CF4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,5972
	ctx.r3.s64 = ctx.r9.s64 + 5972;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19072(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82596D44"))) PPC_WEAK_FUNC(sub_82596D44);
PPC_FUNC_IMPL(__imp__sub_82596D44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82596D48"))) PPC_WEAK_FUNC(sub_82596D48);
PPC_FUNC_IMPL(__imp__sub_82596D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r7,r9,-11436
	ctx.r7.s64 = ctx.r9.s64 + -11436;
	// addi r6,r8,-11492
	ctx.r6.s64 = ctx.r8.s64 + -11492;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r5,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r5.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r4,9468
	ctx.r3.s64 = ctx.r4.s64 + 9468;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82596e04
	if (cr6.eq) goto loc_82596E04;
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
	// beq cr6,0x82596e04
	if (cr6.eq) goto loc_82596E04;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596e0c
	if (!cr6.eq) goto loc_82596E0C;
loc_82596E04:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9604
	r11.s64 = r11.s64 + 9604;
loc_82596E0C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82596e98
	if (cr6.eq) goto loc_82596E98;
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
	// beq cr6,0x82596e98
	if (cr6.eq) goto loc_82596E98;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82596ea0
	if (!cr6.eq) goto loc_82596EA0;
loc_82596E98:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9620
	r11.s64 = r11.s64 + 9620;
loc_82596EA0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82583c68
	sub_82583C68(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82596EF8"))) PPC_WEAK_FUNC(sub_82596EF8);
PPC_FUNC_IMPL(__imp__sub_82596EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596EFC"))) PPC_WEAK_FUNC(sub_82596EFC);
PPC_FUNC_IMPL(__imp__sub_82596EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596F00"))) PPC_WEAK_FUNC(sub_82596F00);
PPC_FUNC_IMPL(__imp__sub_82596F00) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11436
	ctx.r9.s64 = r11.s64 + -11436;
	// addi r8,r10,-11492
	ctx.r8.s64 = ctx.r10.s64 + -11492;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82596f5c
	if (cr6.eq) goto loc_82596F5C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82596F5C:
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

__attribute__((alias("__imp__sub_82596F70"))) PPC_WEAK_FUNC(sub_82596F70);
PPC_FUNC_IMPL(__imp__sub_82596F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596F74"))) PPC_WEAK_FUNC(sub_82596F74);
PPC_FUNC_IMPL(__imp__sub_82596F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596F78"))) PPC_WEAK_FUNC(sub_82596F78);
PPC_FUNC_IMPL(__imp__sub_82596F78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82596F7C"))) PPC_WEAK_FUNC(sub_82596F7C);
PPC_FUNC_IMPL(__imp__sub_82596F7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82596f00
	sub_82596F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82596F80"))) PPC_WEAK_FUNC(sub_82596F80);
PPC_FUNC_IMPL(__imp__sub_82596F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596F8C"))) PPC_WEAK_FUNC(sub_82596F8C);
PPC_FUNC_IMPL(__imp__sub_82596F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596F90"))) PPC_WEAK_FUNC(sub_82596F90);
PPC_FUNC_IMPL(__imp__sub_82596F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,-11376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11376);
	f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r11,0
	r11.s64 = 0;
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, r11.u8);
}

__attribute__((alias("__imp__sub_82596FC8"))) PPC_WEAK_FUNC(sub_82596FC8);
PPC_FUNC_IMPL(__imp__sub_82596FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585ad0
	sub_82585AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82596FCC"))) PPC_WEAK_FUNC(sub_82596FCC);
PPC_FUNC_IMPL(__imp__sub_82596FCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82596FD0"))) PPC_WEAK_FUNC(sub_82596FD0);
PPC_FUNC_IMPL(__imp__sub_82596FD0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82596FD0"))) PPC_WEAK_FUNC(sub_82596FD0);
PPC_FUNC_IMPL(__imp__sub_82596FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82596FD4"))) PPC_WEAK_FUNC(sub_82596FD4);
PPC_FUNC_IMPL(__imp__sub_82596FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82596FD8"))) PPC_WEAK_FUNC(sub_82596FD8);
PPC_FUNC_IMPL(__imp__sub_82596FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82597040
	if (!cr6.eq) goto loc_82597040;
	// lwz r30,152(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
loc_82597040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82597044"))) PPC_WEAK_FUNC(sub_82597044);
PPC_FUNC_IMPL(__imp__sub_82597044) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82597048"))) PPC_WEAK_FUNC(sub_82597048);
PPC_FUNC_IMPL(__imp__sub_82597048) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597048"))) PPC_WEAK_FUNC(sub_82597048);
PPC_FUNC_IMPL(__imp__sub_82597048) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259704C"))) PPC_WEAK_FUNC(sub_8259704C);
PPC_FUNC_IMPL(__imp__sub_8259704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597050"))) PPC_WEAK_FUNC(sub_82597050);
PPC_FUNC_IMPL(__imp__sub_82597050) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825970A0"))) PPC_WEAK_FUNC(sub_825970A0);
PPC_FUNC_IMPL(__imp__sub_825970A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825970A4"))) PPC_WEAK_FUNC(sub_825970A4);
PPC_FUNC_IMPL(__imp__sub_825970A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825970A8"))) PPC_WEAK_FUNC(sub_825970A8);
PPC_FUNC_IMPL(__imp__sub_825970A8) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825970d8
	if (cr6.eq) goto loc_825970D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825970dc
	if (!cr6.eq) goto loc_825970DC;
loc_825970D8:
	// li r11,0
	r11.s64 = 0;
loc_825970DC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20500(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20500);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,156
	ctx.r4.s64 = r28.s64 + 156;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597130
	if (!cr6.eq) goto loc_82597130;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597130
	if (!cr6.eq) goto loc_82597130;
	// lwz r11,20500(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20500);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82597130:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8259714c
	if (cr6.eq) goto loc_8259714C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597150
	if (!cr6.eq) goto loc_82597150;
loc_8259714C:
	// li r11,0
	r11.s64 = 0;
loc_82597150:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20216);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,184
	ctx.r4.s64 = r28.s64 + 184;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825971a4
	if (!cr6.eq) goto loc_825971A4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825971a4
	if (!cr6.eq) goto loc_825971A4;
	// lwz r11,20216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20216);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825971A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825971A8"))) PPC_WEAK_FUNC(sub_825971A8);
PPC_FUNC_IMPL(__imp__sub_825971A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825971AC"))) PPC_WEAK_FUNC(sub_825971AC);
PPC_FUNC_IMPL(__imp__sub_825971AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825971B0"))) PPC_WEAK_FUNC(sub_825971B0);
PPC_FUNC_IMPL(__imp__sub_825971B0) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r28,r11,28632
	r28.s64 = r11.s64 + 28632;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825971e8
	if (cr6.eq) goto loc_825971E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825971ec
	if (!cr6.eq) goto loc_825971EC;
loc_825971E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825971EC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,14900
	ctx.r3.s64 = ctx.r10.s64 + 14900;
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
	// lwz r11,20500(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20500);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32167
	r11.s64 = -2108096512;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28744
	r28.s64 = r11.s64 + 28744;
	// beq cr6,0x82597260
	if (cr6.eq) goto loc_82597260;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597264
	if (!cr6.eq) goto loc_82597264;
loc_82597260:
	// li r11,0
	r11.s64 = 0;
loc_82597264:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,11336
	ctx.r3.s64 = ctx.r10.s64 + 11336;
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
	// lwz r11,20216(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20216);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825972B0"))) PPC_WEAK_FUNC(sub_825972B0);
PPC_FUNC_IMPL(__imp__sub_825972B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825972B4"))) PPC_WEAK_FUNC(sub_825972B4);
PPC_FUNC_IMPL(__imp__sub_825972B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825972B8"))) PPC_WEAK_FUNC(sub_825972B8);
PPC_FUNC_IMPL(__imp__sub_825972B8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,-11300
	ctx.r6.s64 = ctx.r8.s64 + -11300;
	// addi r5,r7,-11356
	ctx.r5.s64 = ctx.r7.s64 + -11356;
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r4,9468
	ctx.r3.s64 = ctx.r4.s64 + 9468;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82597390
	if (cr6.eq) goto loc_82597390;
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
	// beq cr6,0x82597390
	if (cr6.eq) goto loc_82597390;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597398
	if (!cr6.eq) goto loc_82597398;
loc_82597390:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9636
	r11.s64 = r11.s64 + 9636;
loc_82597398:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82597424
	if (cr6.eq) goto loc_82597424;
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
	// beq cr6,0x82597424
	if (cr6.eq) goto loc_82597424;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259742c
	if (!cr6.eq) goto loc_8259742C;
loc_82597424:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9652
	r11.s64 = r11.s64 + 9652;
loc_8259742C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82583c68
	sub_82583C68(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r11,-11372
	ctx.r3.s64 = r11.s64 + -11372;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825974c8
	if (cr6.eq) goto loc_825974C8;
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
	// beq cr6,0x825974c8
	if (cr6.eq) goto loc_825974C8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825974cc
	if (!cr6.eq) goto loc_825974CC;
loc_825974C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_825974CC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825974F0"))) PPC_WEAK_FUNC(sub_825974F0);
PPC_FUNC_IMPL(__imp__sub_825974F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825974F4"))) PPC_WEAK_FUNC(sub_825974F4);
PPC_FUNC_IMPL(__imp__sub_825974F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825974F8"))) PPC_WEAK_FUNC(sub_825974F8);
PPC_FUNC_IMPL(__imp__sub_825974F8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11300
	ctx.r9.s64 = r11.s64 + -11300;
	// addi r8,r10,-11356
	ctx.r8.s64 = ctx.r10.s64 + -11356;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8259755c
	if (cr6.eq) goto loc_8259755C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259755C:
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

__attribute__((alias("__imp__sub_82597570"))) PPC_WEAK_FUNC(sub_82597570);
PPC_FUNC_IMPL(__imp__sub_82597570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597574"))) PPC_WEAK_FUNC(sub_82597574);
PPC_FUNC_IMPL(__imp__sub_82597574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597578"))) PPC_WEAK_FUNC(sub_82597578);
PPC_FUNC_IMPL(__imp__sub_82597578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259757C"))) PPC_WEAK_FUNC(sub_8259757C);
PPC_FUNC_IMPL(__imp__sub_8259757C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825974f8
	sub_825974F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597580"))) PPC_WEAK_FUNC(sub_82597580);
PPC_FUNC_IMPL(__imp__sub_82597580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259758C"))) PPC_WEAK_FUNC(sub_8259758C);
PPC_FUNC_IMPL(__imp__sub_8259758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597590"))) PPC_WEAK_FUNC(sub_82597590);
PPC_FUNC_IMPL(__imp__sub_82597590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825975f8
	if (!cr6.eq) goto loc_825975F8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,27400(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27400);
	f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x825975f8
	if (cr6.gt) goto loc_825975F8;
	// lfs f2,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// bl 0x82585998
	sub_82585998(ctx, base);
loc_825975F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82597608"))) PPC_WEAK_FUNC(sub_82597608);
PPC_FUNC_IMPL(__imp__sub_82597608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259760C"))) PPC_WEAK_FUNC(sub_8259760C);
PPC_FUNC_IMPL(__imp__sub_8259760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597610"))) PPC_WEAK_FUNC(sub_82597610);
PPC_FUNC_IMPL(__imp__sub_82597610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
}

__attribute__((alias("__imp__sub_82597620"))) PPC_WEAK_FUNC(sub_82597620);
PPC_FUNC_IMPL(__imp__sub_82597620) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597624"))) PPC_WEAK_FUNC(sub_82597624);
PPC_FUNC_IMPL(__imp__sub_82597624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597628"))) PPC_WEAK_FUNC(sub_82597628);
PPC_FUNC_IMPL(__imp__sub_82597628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r30,156(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// lfs f2,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stb r7,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82597694"))) PPC_WEAK_FUNC(sub_82597694);
PPC_FUNC_IMPL(__imp__sub_82597694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82597698"))) PPC_WEAK_FUNC(sub_82597698);
PPC_FUNC_IMPL(__imp__sub_82597698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
}

__attribute__((alias("__imp__sub_825976A8"))) PPC_WEAK_FUNC(sub_825976A8);
PPC_FUNC_IMPL(__imp__sub_825976A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825976AC"))) PPC_WEAK_FUNC(sub_825976AC);
PPC_FUNC_IMPL(__imp__sub_825976AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825976B0"))) PPC_WEAK_FUNC(sub_825976B0);
PPC_FUNC_IMPL(__imp__sub_825976B0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82597700"))) PPC_WEAK_FUNC(sub_82597700);
PPC_FUNC_IMPL(__imp__sub_82597700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597704"))) PPC_WEAK_FUNC(sub_82597704);
PPC_FUNC_IMPL(__imp__sub_82597704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597708"))) PPC_WEAK_FUNC(sub_82597708);
PPC_FUNC_IMPL(__imp__sub_82597708) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82597738
	if (cr6.eq) goto loc_82597738;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259773c
	if (!cr6.eq) goto loc_8259773C;
loc_82597738:
	// li r11,0
	r11.s64 = 0;
loc_8259773C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,160
	ctx.r4.s64 = r28.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597790
	if (!cr6.eq) goto loc_82597790;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597790
	if (!cr6.eq) goto loc_82597790;
	// lwz r11,19076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19076);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82597790:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825977ac
	if (cr6.eq) goto loc_825977AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825977b0
	if (!cr6.eq) goto loc_825977B0;
loc_825977AC:
	// li r11,0
	r11.s64 = 0;
loc_825977B0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,188
	ctx.r4.s64 = r28.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597804
	if (!cr6.eq) goto loc_82597804;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597804
	if (!cr6.eq) goto loc_82597804;
	// lwz r11,19072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19072);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82597804:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82597808"))) PPC_WEAK_FUNC(sub_82597808);
PPC_FUNC_IMPL(__imp__sub_82597808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8259780C"))) PPC_WEAK_FUNC(sub_8259780C);
PPC_FUNC_IMPL(__imp__sub_8259780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597810"))) PPC_WEAK_FUNC(sub_82597810);
PPC_FUNC_IMPL(__imp__sub_82597810) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r28,r11,30248
	r28.s64 = r11.s64 + 30248;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82597848
	if (cr6.eq) goto loc_82597848;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259784c
	if (!cr6.eq) goto loc_8259784C;
loc_82597848:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8259784C:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,5920
	ctx.r3.s64 = ctx.r10.s64 + 5920;
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
	// lwz r11,19076(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32167
	r11.s64 = -2108096512;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,30360
	r28.s64 = r11.s64 + 30360;
	// beq cr6,0x825978c0
	if (cr6.eq) goto loc_825978C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825978c4
	if (!cr6.eq) goto loc_825978C4;
loc_825978C0:
	// li r11,0
	r11.s64 = 0;
loc_825978C4:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,5972
	ctx.r3.s64 = ctx.r10.s64 + 5972;
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
	// lwz r11,19072(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82597910"))) PPC_WEAK_FUNC(sub_82597910);
PPC_FUNC_IMPL(__imp__sub_82597910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82597914"))) PPC_WEAK_FUNC(sub_82597914);
PPC_FUNC_IMPL(__imp__sub_82597914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597918"))) PPC_WEAK_FUNC(sub_82597918);
PPC_FUNC_IMPL(__imp__sub_82597918) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,-11140
	ctx.r6.s64 = ctx.r8.s64 + -11140;
	// addi r5,r7,-11196
	ctx.r5.s64 = ctx.r7.s64 + -11196;
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r4,9468
	ctx.r3.s64 = ctx.r4.s64 + 9468;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825979f4
	if (cr6.eq) goto loc_825979F4;
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
	// beq cr6,0x825979f4
	if (cr6.eq) goto loc_825979F4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825979fc
	if (!cr6.eq) goto loc_825979FC;
loc_825979F4:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9668
	r11.s64 = r11.s64 + 9668;
loc_825979FC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82597a88
	if (cr6.eq) goto loc_82597A88;
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
	// beq cr6,0x82597a88
	if (cr6.eq) goto loc_82597A88;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597a90
	if (!cr6.eq) goto loc_82597A90;
loc_82597A88:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9684
	r11.s64 = r11.s64 + 9684;
loc_82597A90:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82583c68
	sub_82583C68(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r11,-11220
	ctx.r3.s64 = r11.s64 + -11220;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82597b30
	if (cr6.eq) goto loc_82597B30;
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
	// beq cr6,0x82597b30
	if (cr6.eq) goto loc_82597B30;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597b34
	if (!cr6.eq) goto loc_82597B34;
loc_82597B30:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82597B34:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-11240
	ctx.r3.s64 = ctx.r10.s64 + -11240;
	// lfs f0,4580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4580);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82597bb0
	if (cr6.eq) goto loc_82597BB0;
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
	// beq cr6,0x82597bb0
	if (cr6.eq) goto loc_82597BB0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597bb4
	if (!cr6.eq) goto loc_82597BB4;
loc_82597BB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82597BB4:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82597BD8"))) PPC_WEAK_FUNC(sub_82597BD8);
PPC_FUNC_IMPL(__imp__sub_82597BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82597BDC"))) PPC_WEAK_FUNC(sub_82597BDC);
PPC_FUNC_IMPL(__imp__sub_82597BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597BE0"))) PPC_WEAK_FUNC(sub_82597BE0);
PPC_FUNC_IMPL(__imp__sub_82597BE0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11140
	ctx.r9.s64 = r11.s64 + -11140;
	// addi r8,r10,-11196
	ctx.r8.s64 = ctx.r10.s64 + -11196;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82597c44
	if (cr6.eq) goto loc_82597C44;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82597C44:
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

__attribute__((alias("__imp__sub_82597C58"))) PPC_WEAK_FUNC(sub_82597C58);
PPC_FUNC_IMPL(__imp__sub_82597C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597C5C"))) PPC_WEAK_FUNC(sub_82597C5C);
PPC_FUNC_IMPL(__imp__sub_82597C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597C60"))) PPC_WEAK_FUNC(sub_82597C60);
PPC_FUNC_IMPL(__imp__sub_82597C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82597C64"))) PPC_WEAK_FUNC(sub_82597C64);
PPC_FUNC_IMPL(__imp__sub_82597C64) {
	PPC_FUNC_PROLOGUE();
	// b 0x82597be0
	sub_82597BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597C68"))) PPC_WEAK_FUNC(sub_82597C68);
PPC_FUNC_IMPL(__imp__sub_82597C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597C6C"))) PPC_WEAK_FUNC(sub_82597C6C);
PPC_FUNC_IMPL(__imp__sub_82597C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597C70"))) PPC_WEAK_FUNC(sub_82597C70);
PPC_FUNC_IMPL(__imp__sub_82597C70) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
	// bl 0x82585998
	sub_82585998(ctx, base);
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82597CD4"))) PPC_WEAK_FUNC(sub_82597CD4);
PPC_FUNC_IMPL(__imp__sub_82597CD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82597CD8"))) PPC_WEAK_FUNC(sub_82597CD8);
PPC_FUNC_IMPL(__imp__sub_82597CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
}

__attribute__((alias("__imp__sub_82597CE4"))) PPC_WEAK_FUNC(sub_82597CE4);
PPC_FUNC_IMPL(__imp__sub_82597CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597CE8"))) PPC_WEAK_FUNC(sub_82597CE8);
PPC_FUNC_IMPL(__imp__sub_82597CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
}

__attribute__((alias("__imp__sub_82597CF4"))) PPC_WEAK_FUNC(sub_82597CF4);
PPC_FUNC_IMPL(__imp__sub_82597CF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597CF8"))) PPC_WEAK_FUNC(sub_82597CF8);
PPC_FUNC_IMPL(__imp__sub_82597CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597D04"))) PPC_WEAK_FUNC(sub_82597D04);
PPC_FUNC_IMPL(__imp__sub_82597D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597D08"))) PPC_WEAK_FUNC(sub_82597D08);
PPC_FUNC_IMPL(__imp__sub_82597D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
}

__attribute__((alias("__imp__sub_82597D10"))) PPC_WEAK_FUNC(sub_82597D10);
PPC_FUNC_IMPL(__imp__sub_82597D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585998
	sub_82585998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82597D14"))) PPC_WEAK_FUNC(sub_82597D14);
PPC_FUNC_IMPL(__imp__sub_82597D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82597D18"))) PPC_WEAK_FUNC(sub_82597D18);
PPC_FUNC_IMPL(__imp__sub_82597D18) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r30,r11,18232
	r30.s64 = r11.s64 + 18232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82597da0
	if (!cr6.eq) goto loc_82597DA0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82597da0
	if (cr6.eq) goto loc_82597DA0;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_82597DA0:
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

__attribute__((alias("__imp__sub_82597DB4"))) PPC_WEAK_FUNC(sub_82597DB4);
PPC_FUNC_IMPL(__imp__sub_82597DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82597DB8"))) PPC_WEAK_FUNC(sub_82597DB8);
PPC_FUNC_IMPL(__imp__sub_82597DB8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82597de8
	if (cr6.eq) goto loc_82597DE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597dec
	if (!cr6.eq) goto loc_82597DEC;
loc_82597DE8:
	// li r11,0
	r11.s64 = 0;
loc_82597DEC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,26440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26440);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,144
	ctx.r4.s64 = r28.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597e40
	if (!cr6.eq) goto loc_82597E40;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82597e40
	if (!cr6.eq) goto loc_82597E40;
	// lwz r11,26440(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26440);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82597E40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82597E44"))) PPC_WEAK_FUNC(sub_82597E44);
PPC_FUNC_IMPL(__imp__sub_82597E44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82597E48"))) PPC_WEAK_FUNC(sub_82597E48);
PPC_FUNC_IMPL(__imp__sub_82597E48) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,32008
	r30.s64 = r11.s64 + 32008;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82597e80
	if (cr6.eq) goto loc_82597E80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597e84
	if (!cr6.eq) goto loc_82597E84;
loc_82597E80:
	// li r11,0
	r11.s64 = 0;
loc_82597E84:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,25172
	ctx.r3.s64 = ctx.r9.s64 + 25172;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,26440(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26440);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82597ED4"))) PPC_WEAK_FUNC(sub_82597ED4);
PPC_FUNC_IMPL(__imp__sub_82597ED4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82597ED8"))) PPC_WEAK_FUNC(sub_82597ED8);
PPC_FUNC_IMPL(__imp__sub_82597ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r7,r9,-11020
	ctx.r7.s64 = ctx.r9.s64 + -11020;
	// addi r6,r8,-11076
	ctx.r6.s64 = ctx.r8.s64 + -11076;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r5,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r5.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r4,9468
	ctx.r3.s64 = ctx.r4.s64 + 9468;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82597f94
	if (cr6.eq) goto loc_82597F94;
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
	// beq cr6,0x82597f94
	if (cr6.eq) goto loc_82597F94;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82597f9c
	if (!cr6.eq) goto loc_82597F9C;
loc_82597F94:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9700
	r11.s64 = r11.s64 + 9700;
loc_82597F9C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82598028
	if (cr6.eq) goto loc_82598028;
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
	// beq cr6,0x82598028
	if (cr6.eq) goto loc_82598028;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598030
	if (!cr6.eq) goto loc_82598030;
loc_82598028:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,9716
	r11.s64 = r11.s64 + 9716;
loc_82598030:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82583c68
	sub_82583C68(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82598088"))) PPC_WEAK_FUNC(sub_82598088);
PPC_FUNC_IMPL(__imp__sub_82598088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259808C"))) PPC_WEAK_FUNC(sub_8259808C);
PPC_FUNC_IMPL(__imp__sub_8259808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598090"))) PPC_WEAK_FUNC(sub_82598090);
PPC_FUNC_IMPL(__imp__sub_82598090) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-11020
	ctx.r9.s64 = r11.s64 + -11020;
	// addi r8,r10,-11076
	ctx.r8.s64 = ctx.r10.s64 + -11076;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825980ec
	if (cr6.eq) goto loc_825980EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825980EC:
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

__attribute__((alias("__imp__sub_82598100"))) PPC_WEAK_FUNC(sub_82598100);
PPC_FUNC_IMPL(__imp__sub_82598100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82598104"))) PPC_WEAK_FUNC(sub_82598104);
PPC_FUNC_IMPL(__imp__sub_82598104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598108"))) PPC_WEAK_FUNC(sub_82598108);
PPC_FUNC_IMPL(__imp__sub_82598108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259810C"))) PPC_WEAK_FUNC(sub_8259810C);
PPC_FUNC_IMPL(__imp__sub_8259810C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82598090
	sub_82598090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82598110"))) PPC_WEAK_FUNC(sub_82598110);
PPC_FUNC_IMPL(__imp__sub_82598110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10900
	ctx.r9.s64 = r11.s64 + -10900;
	// addi r8,r10,-10956
	ctx.r8.s64 = ctx.r10.s64 + -10956;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x8258a100
	sub_8258A100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259812C"))) PPC_WEAK_FUNC(sub_8259812C);
PPC_FUNC_IMPL(__imp__sub_8259812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598130"))) PPC_WEAK_FUNC(sub_82598130);
PPC_FUNC_IMPL(__imp__sub_82598130) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825981ac
	if (cr6.eq) goto loc_825981AC;
	// lbz r11,92(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82598198
	if (!cr6.eq) goto loc_82598198;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,20652
	ctx.r4.s64 = ctx.r9.s64 + 20652;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825981ac
	if (cr6.eq) goto loc_825981AC;
loc_82598190:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825981b0
	goto loc_825981B0;
loc_82598198:
	// lbz r11,20(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82598190
	if (!cr6.eq) goto loc_82598190;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// b 0x825981b0
	goto loc_825981B0;
loc_825981AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825981B0:
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

__attribute__((alias("__imp__sub_825981C4"))) PPC_WEAK_FUNC(sub_825981C4);
PPC_FUNC_IMPL(__imp__sub_825981C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825981C8"))) PPC_WEAK_FUNC(sub_825981C8);
PPC_FUNC_IMPL(__imp__sub_825981C8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825983bc
	if (cr6.eq) goto loc_825983BC;
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23640
	ctx.r4.s64 = ctx.r9.s64 + 23640;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825983bc
	if (cr6.eq) goto loc_825983BC;
	// lbz r11,92(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82598354
	if (!cr6.eq) goto loc_82598354;
	// lbz r11,88(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82598354
	if (cr6.eq) goto loc_82598354;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r31,224(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// li r27,0
	r27.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8259825c
	if (cr6.eq) goto loc_8259825C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598260
	if (!cr6.eq) goto loc_82598260;
loc_8259825C:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82598260:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// bl 0x825cb820
	sub_825CB820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82598354
	if (cr6.eq) goto loc_82598354;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8259827C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ca0e8
	sub_825CA0E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82598348
	if (!cr6.eq) goto loc_82598348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ca180
	sub_825CA180(ctx, base);
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
	// beq cr6,0x82598348
	if (cr6.eq) goto loc_82598348;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82598348
	if (cr6.eq) goto loc_82598348;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x823524f8
	sub_823524F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82598348
	if (cr6.eq) goto loc_82598348;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82598348:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x8259827c
	if (cr6.lt) goto loc_8259827C;
loc_82598354:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825983BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_825983C4"))) PPC_WEAK_FUNC(sub_825983C4);
PPC_FUNC_IMPL(__imp__sub_825983C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825983C8"))) PPC_WEAK_FUNC(sub_825983C8);
PPC_FUNC_IMPL(__imp__sub_825983C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82598620
	if (cr6.eq) goto loc_82598620;
	// bl 0x82598130
	sub_82598130(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82598620
	if (cr6.eq) goto loc_82598620;
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
	// addi r4,r9,23640
	ctx.r4.s64 = ctx.r9.s64 + 23640;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82598620
	if (cr6.eq) goto loc_82598620;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82598454
	if (cr6.eq) goto loc_82598454;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598458
	if (!cr6.eq) goto loc_82598458;
loc_82598454:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82598458:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// lfs f29,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f29.f64 = double(temp.f32);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// ble cr6,0x82598490
	if (!cr6.gt) goto loc_82598490;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82598490
	if (!cr6.lt) goto loc_82598490;
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x82598494
	goto loc_82598494;
loc_82598490:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_82598494:
	// lbz r11,93(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 93);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825984f8
	if (cr6.eq) goto loc_825984F8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stb r29,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r29.u8);
loc_825984F8:
	// fsubs f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 - f30.f64));
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f10,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(f0.f64 * f30.f64));
	// lfs f3,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f8,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// lbz r11,90(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 90);
	// lfs f6,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f4,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lfs f2,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f0,f4,f12
	f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f0,f9
	ctx.f6.f64 = double(float(f0.f64 + ctx.f9.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f10,f5
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne cr6,0x825985dc
	if (!cr6.eq) goto loc_825985DC;
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 + ctx.f11.f64));
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x825985dc
	if (cr6.lt) goto loc_825985DC;
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lbz r11,94(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 94);
	// fadds f0,f0,f28
	f0.f64 = double(float(f0.f64 + f28.f64));
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 - ctx.f10.f64));
	// beq cr6,0x825985bc
	if (cr6.eq) goto loc_825985BC;
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// fmadds f0,f9,f13,f8
	f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// ble cr6,0x825985d8
	if (!cr6.gt) goto loc_825985D8;
	// stb r29,94(r31)
	PPC_STORE_U8(r31.u32 + 94, r29.u8);
	// b 0x825985d4
	goto loc_825985D4;
loc_825985BC:
	// fmuls f8,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// fmadds f0,f9,f29,f8
	f0.f64 = double(float(ctx.f9.f64 * f29.f64 + ctx.f8.f64));
	// ble cr6,0x825985d8
	if (!cr6.gt) goto loc_825985D8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,94(r31)
	PPC_STORE_U8(r31.u32 + 94, r11.u8);
loc_825985D4:
	// stfs f29,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
loc_825985D8:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_825985DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lfs f13,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8259860c
	if (!cr6.gt) goto loc_8259860C;
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8259860c
	if (!cr6.gt) goto loc_8259860C;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// b 0x82598610
	goto loc_82598610;
loc_8259860C:
	// lfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
loc_82598610:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825981c8
	sub_825981C8(ctx, base);
loc_82598620:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82598634"))) PPC_WEAK_FUNC(sub_82598634);
PPC_FUNC_IMPL(__imp__sub_82598634) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82598638"))) PPC_WEAK_FUNC(sub_82598638);
PPC_FUNC_IMPL(__imp__sub_82598638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x82598660
	if (!cr6.eq) goto loc_82598660;
	// addi r29,r3,56
	r29.s64 = ctx.r3.s64 + 56;
	// beq cr6,0x82598668
	if (cr6.eq) goto loc_82598668;
loc_82598660:
	// addi r30,r31,72
	r30.s64 = r31.s64 + 72;
	// b 0x8259866c
	goto loc_8259866C;
loc_82598668:
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
loc_8259866C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82598130
	sub_82598130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825981c8
	sub_825981C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259868C"))) PPC_WEAK_FUNC(sub_8259868C);
PPC_FUNC_IMPL(__imp__sub_8259868C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82598690"))) PPC_WEAK_FUNC(sub_82598690);
PPC_FUNC_IMPL(__imp__sub_82598690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825986c8
	if (!cr6.eq) goto loc_825986C8;
	// bl 0x82598130
	sub_82598130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,40
	ctx.r5.s64 = r31.s64 + 40;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825981c8
	sub_825981C8(ctx, base);
loc_825986C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,93(r31)
	PPC_STORE_U8(r31.u32 + 93, ctx.r10.u8);
	// stb r9,94(r31)
	PPC_STORE_U8(r31.u32 + 94, ctx.r9.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825986F4"))) PPC_WEAK_FUNC(sub_825986F4);
PPC_FUNC_IMPL(__imp__sub_825986F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825986F8"))) PPC_WEAK_FUNC(sub_825986F8);
PPC_FUNC_IMPL(__imp__sub_825986F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82598130
	sub_82598130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r31,56
	ctx.r5.s64 = r31.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825981c8
	sub_825981C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259873C"))) PPC_WEAK_FUNC(sub_8259873C);
PPC_FUNC_IMPL(__imp__sub_8259873C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82598740"))) PPC_WEAK_FUNC(sub_82598740);
PPC_FUNC_IMPL(__imp__sub_82598740) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8258a1e8
	sub_8258A1E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r7,r9,-10900
	ctx.r7.s64 = ctx.r9.s64 + -10900;
	// addi r6,r8,-10956
	ctx.r6.s64 = ctx.r8.s64 + -10956;
	// lfs f31,6240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f31.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r29,r11,-20196
	r29.s64 = r11.s64 + -20196;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r28,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r28.u8);
	// lfs f0,-20196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20196);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r5,-10700
	ctx.r3.s64 = ctx.r5.s64 + -10700;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82598824
	if (cr6.eq) goto loc_82598824;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
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
	// beq cr6,0x82598824
	if (cr6.eq) goto loc_82598824;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598828
	if (!cr6.eq) goto loc_82598828;
loc_82598824:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82598828:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-10720
	ctx.r3.s64 = ctx.r10.s64 + -10720;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259889c
	if (cr6.eq) goto loc_8259889C;
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
	// beq cr6,0x8259889c
	if (cr6.eq) goto loc_8259889C;
	// bl 0x82343920
	sub_82343920(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne cr6,0x825988a0
	if (!cr6.eq) goto loc_825988A0;
loc_8259889C:
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
loc_825988A0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-10728
	ctx.r3.s64 = r11.s64 + -10728;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259890c
	if (cr6.eq) goto loc_8259890C;
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
	// beq cr6,0x8259890c
	if (cr6.eq) goto loc_8259890C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598910
	if (!cr6.eq) goto loc_82598910;
loc_8259890C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82598910:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-10740
	ctx.r3.s64 = r11.s64 + -10740;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825989a0
	if (cr6.eq) goto loc_825989A0;
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
	// beq cr6,0x825989a0
	if (cr6.eq) goto loc_825989A0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825989a4
	if (!cr6.eq) goto loc_825989A4;
loc_825989A0:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825989A4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-10752
	ctx.r3.s64 = r11.s64 + -10752;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82598a18
	if (cr6.eq) goto loc_82598A18;
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
	// beq cr6,0x82598a18
	if (cr6.eq) goto loc_82598A18;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598a1c
	if (!cr6.eq) goto loc_82598A1C;
loc_82598A18:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82598A1C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-10764
	ctx.r3.s64 = r11.s64 + -10764;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82598aac
	if (cr6.eq) goto loc_82598AAC;
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
	// beq cr6,0x82598aac
	if (cr6.eq) goto loc_82598AAC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598ab0
	if (!cr6.eq) goto loc_82598AB0;
loc_82598AAC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82598AB0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-10780
	ctx.r3.s64 = ctx.r10.s64 + -10780;
	// lfs f0,8892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8892);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82598b30
	if (cr6.eq) goto loc_82598B30;
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
	// beq cr6,0x82598b30
	if (cr6.eq) goto loc_82598B30;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598b34
	if (!cr6.eq) goto loc_82598B34;
loc_82598B30:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82598B34:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-10804
	ctx.r3.s64 = ctx.r10.s64 + -10804;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82598bb4
	if (cr6.eq) goto loc_82598BB4;
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
	// beq cr6,0x82598bb4
	if (cr6.eq) goto loc_82598BB4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598bb8
	if (!cr6.eq) goto loc_82598BB8;
loc_82598BB4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82598BB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r11,-10816
	ctx.r3.s64 = r11.s64 + -10816;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82598c30
	if (cr6.eq) goto loc_82598C30;
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
	// beq cr6,0x82598c30
	if (cr6.eq) goto loc_82598C30;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598c34
	if (!cr6.eq) goto loc_82598C34;
loc_82598C30:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82598C34:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r10,-10832
	ctx.r3.s64 = ctx.r10.s64 + -10832;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82598cac
	if (cr6.eq) goto loc_82598CAC;
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
	// beq cr6,0x82598cac
	if (cr6.eq) goto loc_82598CAC;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598cb0
	if (!cr6.eq) goto loc_82598CB0;
loc_82598CAC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82598CB0:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,89(r31)
	PPC_STORE_U8(r31.u32 + 89, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r10,-10840
	ctx.r3.s64 = ctx.r10.s64 + -10840;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82598d28
	if (cr6.eq) goto loc_82598D28;
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
	// beq cr6,0x82598d28
	if (cr6.eq) goto loc_82598D28;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598d2c
	if (!cr6.eq) goto loc_82598D2C;
loc_82598D28:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82598D2C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,90(r31)
	PPC_STORE_U8(r31.u32 + 90, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r28,94(r31)
	PPC_STORE_U8(r31.u32 + 94, r28.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82598D60"))) PPC_WEAK_FUNC(sub_82598D60);
PPC_FUNC_IMPL(__imp__sub_82598D60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82598D64"))) PPC_WEAK_FUNC(sub_82598D64);
PPC_FUNC_IMPL(__imp__sub_82598D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598D68"))) PPC_WEAK_FUNC(sub_82598D68);
PPC_FUNC_IMPL(__imp__sub_82598D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82598D6C"))) PPC_WEAK_FUNC(sub_82598D6C);
PPC_FUNC_IMPL(__imp__sub_82598D6C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82598d70
	goto loc_82598D70;
loc_82598D70:
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10900
	ctx.r9.s64 = r11.s64 + -10900;
	// addi r8,r10,-10956
	ctx.r8.s64 = ctx.r10.s64 + -10956;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8258a100
	sub_8258A100(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82598dc0
	if (cr6.eq) goto loc_82598DC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82598DC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82598D70"))) PPC_WEAK_FUNC(sub_82598D70);
PPC_FUNC_IMPL(__imp__sub_82598D70) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10900
	ctx.r9.s64 = r11.s64 + -10900;
	// addi r8,r10,-10956
	ctx.r8.s64 = ctx.r10.s64 + -10956;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8258a100
	sub_8258A100(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82598dc0
	if (cr6.eq) goto loc_82598DC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82598DC0:
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

__attribute__((alias("__imp__sub_82598DD8"))) PPC_WEAK_FUNC(sub_82598DD8);
PPC_FUNC_IMPL(__imp__sub_82598DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10620
	ctx.r9.s64 = r11.s64 + -10620;
	// addi r8,r10,-10676
	ctx.r8.s64 = ctx.r10.s64 + -10676;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x82589b40
	sub_82589B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82598DF4"))) PPC_WEAK_FUNC(sub_82598DF4);
PPC_FUNC_IMPL(__imp__sub_82598DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598DF8"))) PPC_WEAK_FUNC(sub_82598DF8);
PPC_FUNC_IMPL(__imp__sub_82598DF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82598eec
	if (cr6.eq) goto loc_82598EEC;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23608
	ctx.r4.s64 = ctx.r8.s64 + 23608;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82598eec
	if (cr6.eq) goto loc_82598EEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r11,26456(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26456);
	// lwz r3,-14368(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82598e9c
	if (cr6.eq) goto loc_82598E9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82598ea0
	if (!cr6.eq) goto loc_82598EA0;
loc_82598E9C:
	// li r11,0
	r11.s64 = 0;
loc_82598EA0:
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
	// beq cr6,0x82598eec
	if (cr6.eq) goto loc_82598EEC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82598eec
	if (!cr6.eq) goto loc_82598EEC;
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
loc_82598EEC:
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

__attribute__((alias("__imp__sub_82598F00"))) PPC_WEAK_FUNC(sub_82598F00);
PPC_FUNC_IMPL(__imp__sub_82598F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82598F04"))) PPC_WEAK_FUNC(sub_82598F04);
PPC_FUNC_IMPL(__imp__sub_82598F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82598F08"))) PPC_WEAK_FUNC(sub_82598F08);
PPC_FUNC_IMPL(__imp__sub_82598F08) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82589c28
	sub_82589C28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10620
	ctx.r9.s64 = r11.s64 + -10620;
	// addi r8,r10,-10676
	ctx.r8.s64 = ctx.r10.s64 + -10676;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-10560
	r30.s64 = r11.s64 + -10560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82598fbc
	if (cr6.eq) goto loc_82598FBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82598fc4
	goto loc_82598FC4;
loc_82598FBC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32024
	ctx.r3.s64 = r11.s64 + 32024;
loc_82598FC4:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82598FDC"))) PPC_WEAK_FUNC(sub_82598FDC);
PPC_FUNC_IMPL(__imp__sub_82598FDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82598FE0"))) PPC_WEAK_FUNC(sub_82598FE0);
PPC_FUNC_IMPL(__imp__sub_82598FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82598FE4"))) PPC_WEAK_FUNC(sub_82598FE4);
PPC_FUNC_IMPL(__imp__sub_82598FE4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82598fe8
	goto loc_82598FE8;
loc_82598FE8:
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10620
	ctx.r9.s64 = r11.s64 + -10620;
	// addi r8,r10,-10676
	ctx.r8.s64 = ctx.r10.s64 + -10676;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82599038
	if (cr6.eq) goto loc_82599038;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82599038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82598FE8"))) PPC_WEAK_FUNC(sub_82598FE8);
PPC_FUNC_IMPL(__imp__sub_82598FE8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10620
	ctx.r9.s64 = r11.s64 + -10620;
	// addi r8,r10,-10676
	ctx.r8.s64 = ctx.r10.s64 + -10676;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82599038
	if (cr6.eq) goto loc_82599038;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82599038:
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

__attribute__((alias("__imp__sub_82599050"))) PPC_WEAK_FUNC(sub_82599050);
PPC_FUNC_IMPL(__imp__sub_82599050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10476
	ctx.r9.s64 = r11.s64 + -10476;
	// addi r8,r10,-10536
	ctx.r8.s64 = ctx.r10.s64 + -10536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x82589b40
	sub_82589B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259906C"))) PPC_WEAK_FUNC(sub_8259906C);
PPC_FUNC_IMPL(__imp__sub_8259906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599070"))) PPC_WEAK_FUNC(sub_82599070);
PPC_FUNC_IMPL(__imp__sub_82599070) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825990b8
	if (cr6.eq) goto loc_825990B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
loc_825990B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r11,26456(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26456);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82599144
	if (cr6.eq) goto loc_82599144;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599148
	if (!cr6.eq) goto loc_82599148;
loc_82599144:
	// li r11,0
	r11.s64 = 0;
loc_82599148:
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
	// beq cr6,0x82599194
	if (cr6.eq) goto loc_82599194;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599194
	if (!cr6.eq) goto loc_82599194;
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
loc_82599194:
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

__attribute__((alias("__imp__sub_825991A8"))) PPC_WEAK_FUNC(sub_825991A8);
PPC_FUNC_IMPL(__imp__sub_825991A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825991AC"))) PPC_WEAK_FUNC(sub_825991AC);
PPC_FUNC_IMPL(__imp__sub_825991AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825991B0"))) PPC_WEAK_FUNC(sub_825991B0);
PPC_FUNC_IMPL(__imp__sub_825991B0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82589c28
	sub_82589C28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10476
	ctx.r9.s64 = r11.s64 + -10476;
	// addi r8,r10,-10536
	ctx.r8.s64 = ctx.r10.s64 + -10536;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-10560
	r30.s64 = r11.s64 + -10560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82599264
	if (cr6.eq) goto loc_82599264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8259926c
	goto loc_8259926C;
loc_82599264:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32024
	ctx.r3.s64 = r11.s64 + 32024;
loc_8259926C:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82599284"))) PPC_WEAK_FUNC(sub_82599284);
PPC_FUNC_IMPL(__imp__sub_82599284) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82599288"))) PPC_WEAK_FUNC(sub_82599288);
PPC_FUNC_IMPL(__imp__sub_82599288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259928C"))) PPC_WEAK_FUNC(sub_8259928C);
PPC_FUNC_IMPL(__imp__sub_8259928C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82599290
	goto loc_82599290;
loc_82599290:
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10476
	ctx.r9.s64 = r11.s64 + -10476;
	// addi r8,r10,-10536
	ctx.r8.s64 = ctx.r10.s64 + -10536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825992e0
	if (cr6.eq) goto loc_825992E0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825992E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599290"))) PPC_WEAK_FUNC(sub_82599290);
PPC_FUNC_IMPL(__imp__sub_82599290) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10476
	ctx.r9.s64 = r11.s64 + -10476;
	// addi r8,r10,-10536
	ctx.r8.s64 = ctx.r10.s64 + -10536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825992e0
	if (cr6.eq) goto loc_825992E0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825992E0:
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

__attribute__((alias("__imp__sub_825992F8"))) PPC_WEAK_FUNC(sub_825992F8);
PPC_FUNC_IMPL(__imp__sub_825992F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599304"))) PPC_WEAK_FUNC(sub_82599304);
PPC_FUNC_IMPL(__imp__sub_82599304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599308"))) PPC_WEAK_FUNC(sub_82599308);
PPC_FUNC_IMPL(__imp__sub_82599308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82599354
	if (cr6.gt) goto loc_82599354;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,56
	ctx.r4.s64 = r11.s64 + 56;
	// stb r10,72(r11)
	PPC_STORE_U8(r11.u32 + 72, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82599354:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,40
	ctx.r4.s64 = r11.s64 + 40;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82599368"))) PPC_WEAK_FUNC(sub_82599368);
PPC_FUNC_IMPL(__imp__sub_82599368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259936C"))) PPC_WEAK_FUNC(sub_8259936C);
PPC_FUNC_IMPL(__imp__sub_8259936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599370"))) PPC_WEAK_FUNC(sub_82599370);
PPC_FUNC_IMPL(__imp__sub_82599370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x825993c8
	if (!cr6.lt) goto loc_825993C8;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825993C8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825993E0"))) PPC_WEAK_FUNC(sub_825993E0);
PPC_FUNC_IMPL(__imp__sub_825993E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825993E4"))) PPC_WEAK_FUNC(sub_825993E4);
PPC_FUNC_IMPL(__imp__sub_825993E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825993E8"))) PPC_WEAK_FUNC(sub_825993E8);
PPC_FUNC_IMPL(__imp__sub_825993E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10356
	ctx.r9.s64 = r11.s64 + -10356;
	// addi r8,r10,-10412
	ctx.r8.s64 = ctx.r10.s64 + -10412;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x82589b40
	sub_82589B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599404"))) PPC_WEAK_FUNC(sub_82599404);
PPC_FUNC_IMPL(__imp__sub_82599404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599408"))) PPC_WEAK_FUNC(sub_82599408);
PPC_FUNC_IMPL(__imp__sub_82599408) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82599470
	if (cr6.eq) goto loc_82599470;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18224
	ctx.r4.s64 = ctx.r8.s64 + 18224;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599470
	if (!cr6.eq) goto loc_82599470;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82599470:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82599480"))) PPC_WEAK_FUNC(sub_82599480);
PPC_FUNC_IMPL(__imp__sub_82599480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599484"))) PPC_WEAK_FUNC(sub_82599484);
PPC_FUNC_IMPL(__imp__sub_82599484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599488"))) PPC_WEAK_FUNC(sub_82599488);
PPC_FUNC_IMPL(__imp__sub_82599488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82599584
	if (cr6.eq) goto loc_82599584;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599584
	if (!cr6.eq) goto loc_82599584;
	// lbz r11,18(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82599584
	if (!cr6.eq) goto loc_82599584;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lfs f8,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f12,f12,f0
	ctx.f3.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fsubs f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 - f31.f64));
	// fsel f30,f2,f31,f3
	f30.f64 = ctx.f2.f64 >= 0.0 ? f31.f64 : ctx.f3.f64;
	// fsubs f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 - f30.f64));
	// fmuls f0,f30,f11
	f0.f64 = double(float(f30.f64 * ctx.f11.f64));
	// fmuls f13,f10,f30
	ctx.f13.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f12,f9,f30
	ctx.f12.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f11,f8,f30
	ctx.f11.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fmuls f10,f7,f1
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f9,f6,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f7,f4,f1
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x82599584
	if (cr6.lt) goto loc_82599584;
	// li r11,1
	r11.s64 = 1;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
loc_82599584:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825995A4"))) PPC_WEAK_FUNC(sub_825995A4);
PPC_FUNC_IMPL(__imp__sub_825995A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825995A8"))) PPC_WEAK_FUNC(sub_825995A8);
PPC_FUNC_IMPL(__imp__sub_825995A8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82589c28
	sub_82589C28(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r31,r11,9732
	r31.s64 = r11.s64 + 9732;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,-10356
	ctx.r7.s64 = ctx.r9.s64 + -10356;
	// addi r6,r8,-10412
	ctx.r6.s64 = ctx.r8.s64 + -10412;
	// stw r10,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r10.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r6,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r6.u32);
	// lfs f0,9732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9732);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 40, temp.u32);
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r28,r29,56
	r28.s64 = r29.s64 + 56;
	// stfs f0,44(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 48, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 52, temp.u32);
	// lfs f0,9732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9732);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 56, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 60, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 64, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 68, temp.u32);
	// stb r10,72(r29)
	PPC_STORE_U8(r29.u32 + 72, ctx.r10.u8);
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-10284
	ctx.r3.s64 = ctx.r5.s64 + -10284;
	// lwz r27,4(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825996a4
	if (cr6.eq) goto loc_825996A4;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
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
	// beq cr6,0x825996a4
	if (cr6.eq) goto loc_825996A4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825996a8
	if (!cr6.eq) goto loc_825996A8;
loc_825996A4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825996A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-10296
	ctx.r3.s64 = r11.s64 + -10296;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82599734
	if (cr6.eq) goto loc_82599734;
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
	// beq cr6,0x82599734
	if (cr6.eq) goto loc_82599734;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82599734
	if (cr6.eq) goto loc_82599734;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82599734:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8259976C"))) PPC_WEAK_FUNC(sub_8259976C);
PPC_FUNC_IMPL(__imp__sub_8259976C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82599770"))) PPC_WEAK_FUNC(sub_82599770);
PPC_FUNC_IMPL(__imp__sub_82599770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82599774"))) PPC_WEAK_FUNC(sub_82599774);
PPC_FUNC_IMPL(__imp__sub_82599774) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82599778
	goto loc_82599778;
loc_82599778:
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10356
	ctx.r9.s64 = r11.s64 + -10356;
	// addi r8,r10,-10412
	ctx.r8.s64 = ctx.r10.s64 + -10412;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825997c8
	if (cr6.eq) goto loc_825997C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825997C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599778"))) PPC_WEAK_FUNC(sub_82599778);
PPC_FUNC_IMPL(__imp__sub_82599778) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10356
	ctx.r9.s64 = r11.s64 + -10356;
	// addi r8,r10,-10412
	ctx.r8.s64 = ctx.r10.s64 + -10412;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82589b40
	sub_82589B40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825997c8
	if (cr6.eq) goto loc_825997C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825997C8:
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

__attribute__((alias("__imp__sub_825997E0"))) PPC_WEAK_FUNC(sub_825997E0);
PPC_FUNC_IMPL(__imp__sub_825997E0) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-10204
	ctx.r8.s64 = ctx.r10.s64 + -10204;
	// addi r7,r9,-10264
	ctx.r7.s64 = ctx.r9.s64 + -10264;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stb r11,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82599830"))) PPC_WEAK_FUNC(sub_82599830);
PPC_FUNC_IMPL(__imp__sub_82599830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599834"))) PPC_WEAK_FUNC(sub_82599834);
PPC_FUNC_IMPL(__imp__sub_82599834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599838"))) PPC_WEAK_FUNC(sub_82599838);
PPC_FUNC_IMPL(__imp__sub_82599838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259983C"))) PPC_WEAK_FUNC(sub_8259983C);
PPC_FUNC_IMPL(__imp__sub_8259983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599840"))) PPC_WEAK_FUNC(sub_82599840);
PPC_FUNC_IMPL(__imp__sub_82599840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599844"))) PPC_WEAK_FUNC(sub_82599844);
PPC_FUNC_IMPL(__imp__sub_82599844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599848"))) PPC_WEAK_FUNC(sub_82599848);
PPC_FUNC_IMPL(__imp__sub_82599848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599854"))) PPC_WEAK_FUNC(sub_82599854);
PPC_FUNC_IMPL(__imp__sub_82599854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599858"))) PPC_WEAK_FUNC(sub_82599858);
PPC_FUNC_IMPL(__imp__sub_82599858) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825998b8
	if (cr6.eq) goto loc_825998B8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23608
	ctx.r4.s64 = ctx.r8.s64 + 23608;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825998B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825998DC"))) PPC_WEAK_FUNC(sub_825998DC);
PPC_FUNC_IMPL(__imp__sub_825998DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825998E0"))) PPC_WEAK_FUNC(sub_825998E0);
PPC_FUNC_IMPL(__imp__sub_825998E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// beq cr6,0x825999a4
	if (cr6.eq) goto loc_825999A4;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825999a4
	if (!cr6.eq) goto loc_825999A4;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825999a4
	if (!cr6.eq) goto loc_825999A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// addi r6,r11,52
	ctx.r6.s64 = r11.s64 + 52;
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82599994
	if (cr6.eq) goto loc_82599994;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-10276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_82599994:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
loc_825999A4:
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

__attribute__((alias("__imp__sub_825999C0"))) PPC_WEAK_FUNC(sub_825999C0);
PPC_FUNC_IMPL(__imp__sub_825999C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825999C4"))) PPC_WEAK_FUNC(sub_825999C4);
PPC_FUNC_IMPL(__imp__sub_825999C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825999C8"))) PPC_WEAK_FUNC(sub_825999C8);
PPC_FUNC_IMPL(__imp__sub_825999C8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10204
	ctx.r9.s64 = r11.s64 + -10204;
	// addi r8,r10,-10264
	ctx.r8.s64 = ctx.r10.s64 + -10264;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82599a18
	if (cr6.eq) goto loc_82599A18;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82599A18:
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

__attribute__((alias("__imp__sub_82599A2C"))) PPC_WEAK_FUNC(sub_82599A2C);
PPC_FUNC_IMPL(__imp__sub_82599A2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599A30"))) PPC_WEAK_FUNC(sub_82599A30);
PPC_FUNC_IMPL(__imp__sub_82599A30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82599A34"))) PPC_WEAK_FUNC(sub_82599A34);
PPC_FUNC_IMPL(__imp__sub_82599A34) {
	PPC_FUNC_PROLOGUE();
	// b 0x825999c8
	sub_825999C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599A38"))) PPC_WEAK_FUNC(sub_82599A38);
PPC_FUNC_IMPL(__imp__sub_82599A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825998e0
	sub_825998E0(ctx, base);
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82599a90
	if (!cr6.eq) goto loc_82599A90;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,-10144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10144);
	f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x82599a90
	if (cr6.gt) goto loc_82599A90;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r11.u8);
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_82599A90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82599AA0"))) PPC_WEAK_FUNC(sub_82599AA0);
PPC_FUNC_IMPL(__imp__sub_82599AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599AA4"))) PPC_WEAK_FUNC(sub_82599AA4);
PPC_FUNC_IMPL(__imp__sub_82599AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599AA8"))) PPC_WEAK_FUNC(sub_82599AA8);
PPC_FUNC_IMPL(__imp__sub_82599AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599AA8"))) PPC_WEAK_FUNC(sub_82599AA8);
PPC_FUNC_IMPL(__imp__sub_82599AA8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82599AAC"))) PPC_WEAK_FUNC(sub_82599AAC);
PPC_FUNC_IMPL(__imp__sub_82599AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599AB0"))) PPC_WEAK_FUNC(sub_82599AB0);
PPC_FUNC_IMPL(__imp__sub_82599AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599AB0"))) PPC_WEAK_FUNC(sub_82599AB0);
PPC_FUNC_IMPL(__imp__sub_82599AB0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82599AB4"))) PPC_WEAK_FUNC(sub_82599AB4);
PPC_FUNC_IMPL(__imp__sub_82599AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599AB8"))) PPC_WEAK_FUNC(sub_82599AB8);
PPC_FUNC_IMPL(__imp__sub_82599AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,1
	r11.s64 = 1;
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599ACC"))) PPC_WEAK_FUNC(sub_82599ACC);
PPC_FUNC_IMPL(__imp__sub_82599ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599AD0"))) PPC_WEAK_FUNC(sub_82599AD0);
PPC_FUNC_IMPL(__imp__sub_82599AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
}

__attribute__((alias("__imp__sub_82599AD8"))) PPC_WEAK_FUNC(sub_82599AD8);
PPC_FUNC_IMPL(__imp__sub_82599AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599ADC"))) PPC_WEAK_FUNC(sub_82599ADC);
PPC_FUNC_IMPL(__imp__sub_82599ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599AE0"))) PPC_WEAK_FUNC(sub_82599AE0);
PPC_FUNC_IMPL(__imp__sub_82599AE0) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82599b10
	if (cr6.eq) goto loc_82599B10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599b14
	if (!cr6.eq) goto loc_82599B14;
loc_82599B10:
	// li r11,0
	r11.s64 = 0;
loc_82599B14:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19864(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,160
	ctx.r4.s64 = r28.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599b68
	if (!cr6.eq) goto loc_82599B68;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599b68
	if (!cr6.eq) goto loc_82599B68;
	// lwz r11,19864(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19864);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82599B68:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82599b84
	if (cr6.eq) goto loc_82599B84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599b88
	if (!cr6.eq) goto loc_82599B88;
loc_82599B84:
	// li r11,0
	r11.s64 = 0;
loc_82599B88:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19860(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19860);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,188
	ctx.r4.s64 = r28.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599bdc
	if (!cr6.eq) goto loc_82599BDC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599bdc
	if (!cr6.eq) goto loc_82599BDC;
	// lwz r11,19860(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19860);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82599BDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82599BE0"))) PPC_WEAK_FUNC(sub_82599BE0);
PPC_FUNC_IMPL(__imp__sub_82599BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82599BE4"))) PPC_WEAK_FUNC(sub_82599BE4);
PPC_FUNC_IMPL(__imp__sub_82599BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599BE8"))) PPC_WEAK_FUNC(sub_82599BE8);
PPC_FUNC_IMPL(__imp__sub_82599BE8) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32166
	r11.s64 = -2108030976;
	// addi r28,r11,-25928
	r28.s64 = r11.s64 + -25928;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82599c20
	if (cr6.eq) goto loc_82599C20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599c24
	if (!cr6.eq) goto loc_82599C24;
loc_82599C20:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82599C24:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-3816
	ctx.r3.s64 = ctx.r10.s64 + -3816;
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
	// lwz r11,19864(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-25904
	r28.s64 = r11.s64 + -25904;
	// beq cr6,0x82599c98
	if (cr6.eq) goto loc_82599C98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599c9c
	if (!cr6.eq) goto loc_82599C9C;
loc_82599C98:
	// li r11,0
	r11.s64 = 0;
loc_82599C9C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-3760
	ctx.r3.s64 = ctx.r10.s64 + -3760;
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
	// lwz r11,19860(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19860);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82599CE8"))) PPC_WEAK_FUNC(sub_82599CE8);
PPC_FUNC_IMPL(__imp__sub_82599CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82599CEC"))) PPC_WEAK_FUNC(sub_82599CEC);
PPC_FUNC_IMPL(__imp__sub_82599CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599CF0"))) PPC_WEAK_FUNC(sub_82599CF0);
PPC_FUNC_IMPL(__imp__sub_82599CF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825997e0
	sub_825997E0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,-10076
	ctx.r8.s64 = ctx.r10.s64 + -10076;
	// addi r7,r9,-10136
	ctx.r7.s64 = ctx.r9.s64 + -10136;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stb r6,148(r31)
	PPC_STORE_U8(r31.u32 + 148, ctx.r6.u8);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r5,-11372
	ctx.r3.s64 = ctx.r5.s64 + -11372;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82599dbc
	if (cr6.eq) goto loc_82599DBC;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
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
	// beq cr6,0x82599dbc
	if (cr6.eq) goto loc_82599DBC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599dc0
	if (!cr6.eq) goto loc_82599DC0;
loc_82599DBC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82599DC0:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82599DEC"))) PPC_WEAK_FUNC(sub_82599DEC);
PPC_FUNC_IMPL(__imp__sub_82599DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599DF0"))) PPC_WEAK_FUNC(sub_82599DF0);
PPC_FUNC_IMPL(__imp__sub_82599DF0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-10076
	ctx.r9.s64 = r11.s64 + -10076;
	// addi r8,r10,-10136
	ctx.r8.s64 = ctx.r10.s64 + -10136;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r7,-10204
	ctx.r5.s64 = ctx.r7.s64 + -10204;
	// addi r4,r6,-10264
	ctx.r4.s64 = ctx.r6.s64 + -10264;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82599E5C"))) PPC_WEAK_FUNC(sub_82599E5C);
PPC_FUNC_IMPL(__imp__sub_82599E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599E60"))) PPC_WEAK_FUNC(sub_82599E60);
PPC_FUNC_IMPL(__imp__sub_82599E60) {
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
	// bl 0x82599df0
	sub_82599DF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82599e98
	if (cr6.eq) goto loc_82599E98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82599E98:
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

__attribute__((alias("__imp__sub_82599EAC"))) PPC_WEAK_FUNC(sub_82599EAC);
PPC_FUNC_IMPL(__imp__sub_82599EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599EB0"))) PPC_WEAK_FUNC(sub_82599EB0);
PPC_FUNC_IMPL(__imp__sub_82599EB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82599EB4"))) PPC_WEAK_FUNC(sub_82599EB4);
PPC_FUNC_IMPL(__imp__sub_82599EB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82599e60
	sub_82599E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599EB8"))) PPC_WEAK_FUNC(sub_82599EB8);
PPC_FUNC_IMPL(__imp__sub_82599EB8) {
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
	// bl 0x825997e0
	sub_825997E0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-9956
	ctx.r9.s64 = r11.s64 + -9956;
	// addi r8,r10,-10012
	ctx.r8.s64 = ctx.r10.s64 + -10012;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_82599F04"))) PPC_WEAK_FUNC(sub_82599F04);
PPC_FUNC_IMPL(__imp__sub_82599F04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599F08"))) PPC_WEAK_FUNC(sub_82599F08);
PPC_FUNC_IMPL(__imp__sub_82599F08) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82599F08"))) PPC_WEAK_FUNC(sub_82599F08);
PPC_FUNC_IMPL(__imp__sub_82599F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x825998e0
	sub_825998E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599F0C"))) PPC_WEAK_FUNC(sub_82599F0C);
PPC_FUNC_IMPL(__imp__sub_82599F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599F10"))) PPC_WEAK_FUNC(sub_82599F10);
PPC_FUNC_IMPL(__imp__sub_82599F10) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82599F10"))) PPC_WEAK_FUNC(sub_82599F10);
PPC_FUNC_IMPL(__imp__sub_82599F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599F14"))) PPC_WEAK_FUNC(sub_82599F14);
PPC_FUNC_IMPL(__imp__sub_82599F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599F18"))) PPC_WEAK_FUNC(sub_82599F18);
PPC_FUNC_IMPL(__imp__sub_82599F18) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82599F18"))) PPC_WEAK_FUNC(sub_82599F18);
PPC_FUNC_IMPL(__imp__sub_82599F18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82599F1C"))) PPC_WEAK_FUNC(sub_82599F1C);
PPC_FUNC_IMPL(__imp__sub_82599F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599F20"))) PPC_WEAK_FUNC(sub_82599F20);
PPC_FUNC_IMPL(__imp__sub_82599F20) {
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
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82599F50"))) PPC_WEAK_FUNC(sub_82599F50);
PPC_FUNC_IMPL(__imp__sub_82599F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82599F54"))) PPC_WEAK_FUNC(sub_82599F54);
PPC_FUNC_IMPL(__imp__sub_82599F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82599F58"))) PPC_WEAK_FUNC(sub_82599F58);
PPC_FUNC_IMPL(__imp__sub_82599F58) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82599f88
	if (cr6.eq) goto loc_82599F88;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82599f8c
	if (!cr6.eq) goto loc_82599F8C;
loc_82599F88:
	// li r11,0
	r11.s64 = 0;
loc_82599F8C:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-28128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -28128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,148
	ctx.r4.s64 = r28.s64 + 148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599fe0
	if (!cr6.eq) goto loc_82599FE0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82599fe0
	if (!cr6.eq) goto loc_82599FE0;
	// lwz r11,-28128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -28128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82599FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82599FE4"))) PPC_WEAK_FUNC(sub_82599FE4);
PPC_FUNC_IMPL(__imp__sub_82599FE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82599FE8"))) PPC_WEAK_FUNC(sub_82599FE8);
PPC_FUNC_IMPL(__imp__sub_82599FE8) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32166
	r11.s64 = -2108030976;
	// addi r30,r11,-24800
	r30.s64 = r11.s64 + -24800;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8259a020
	if (cr6.eq) goto loc_8259A020;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259a024
	if (!cr6.eq) goto loc_8259A024;
loc_8259A020:
	// li r11,0
	r11.s64 = 0;
loc_8259A024:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,23404
	ctx.r3.s64 = ctx.r9.s64 + 23404;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-28128(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259A074"))) PPC_WEAK_FUNC(sub_8259A074);
PPC_FUNC_IMPL(__imp__sub_8259A074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259A078"))) PPC_WEAK_FUNC(sub_8259A078);
PPC_FUNC_IMPL(__imp__sub_8259A078) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-9956
	ctx.r9.s64 = r11.s64 + -9956;
	// addi r8,r10,-10012
	ctx.r8.s64 = ctx.r10.s64 + -10012;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r7,-10204
	ctx.r5.s64 = ctx.r7.s64 + -10204;
	// addi r4,r6,-10264
	ctx.r4.s64 = ctx.r6.s64 + -10264;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8259a0ec
	if (cr6.eq) goto loc_8259A0EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259A0EC:
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

__attribute__((alias("__imp__sub_8259A100"))) PPC_WEAK_FUNC(sub_8259A100);
PPC_FUNC_IMPL(__imp__sub_8259A100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259A104"))) PPC_WEAK_FUNC(sub_8259A104);
PPC_FUNC_IMPL(__imp__sub_8259A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259A108"))) PPC_WEAK_FUNC(sub_8259A108);
PPC_FUNC_IMPL(__imp__sub_8259A108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259A10C"))) PPC_WEAK_FUNC(sub_8259A10C);
PPC_FUNC_IMPL(__imp__sub_8259A10C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259a078
	sub_8259A078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259A110"))) PPC_WEAK_FUNC(sub_8259A110);
PPC_FUNC_IMPL(__imp__sub_8259A110) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259A110"))) PPC_WEAK_FUNC(sub_8259A110);
PPC_FUNC_IMPL(__imp__sub_8259A110) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259A114"))) PPC_WEAK_FUNC(sub_8259A114);
PPC_FUNC_IMPL(__imp__sub_8259A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259A118"))) PPC_WEAK_FUNC(sub_8259A118);
PPC_FUNC_IMPL(__imp__sub_8259A118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259A124"))) PPC_WEAK_FUNC(sub_8259A124);
PPC_FUNC_IMPL(__imp__sub_8259A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259A128"))) PPC_WEAK_FUNC(sub_8259A128);
PPC_FUNC_IMPL(__imp__sub_8259A128) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259a190
	if (cr6.eq) goto loc_8259A190;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8259a190
	if (!cr6.eq) goto loc_8259A190;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r30,144(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
loc_8259A190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259A194"))) PPC_WEAK_FUNC(sub_8259A194);
PPC_FUNC_IMPL(__imp__sub_8259A194) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259A198"))) PPC_WEAK_FUNC(sub_8259A198);
PPC_FUNC_IMPL(__imp__sub_8259A198) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8259a1c8
	if (!cr6.eq) goto loc_8259A1C8;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_8259A1C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259A1D8"))) PPC_WEAK_FUNC(sub_8259A1D8);
PPC_FUNC_IMPL(__imp__sub_8259A1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

