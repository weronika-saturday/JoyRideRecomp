#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F352B4"))) PPC_WEAK_FUNC(sub_82F352B4);
PPC_FUNC_IMPL(__imp__sub_82F352B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F352B8"))) PPC_WEAK_FUNC(sub_82F352B8);
PPC_FUNC_IMPL(__imp__sub_82F352B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25432
	ctx.r3.s64 = r11.s64 + -25432;
}

__attribute__((alias("__imp__sub_82F352C0"))) PPC_WEAK_FUNC(sub_82F352C0);
PPC_FUNC_IMPL(__imp__sub_82F352C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F352C4"))) PPC_WEAK_FUNC(sub_82F352C4);
PPC_FUNC_IMPL(__imp__sub_82F352C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F352C8"))) PPC_WEAK_FUNC(sub_82F352C8);
PPC_FUNC_IMPL(__imp__sub_82F352C8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-8756
	ctx.r3.s64 = ctx.r10.s64 + -8756;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-30008(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35300"))) PPC_WEAK_FUNC(sub_82F35300);
PPC_FUNC_IMPL(__imp__sub_82F35300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35304"))) PPC_WEAK_FUNC(sub_82F35304);
PPC_FUNC_IMPL(__imp__sub_82F35304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35308"))) PPC_WEAK_FUNC(sub_82F35308);
PPC_FUNC_IMPL(__imp__sub_82F35308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25424
	ctx.r3.s64 = r11.s64 + -25424;
}

__attribute__((alias("__imp__sub_82F35310"))) PPC_WEAK_FUNC(sub_82F35310);
PPC_FUNC_IMPL(__imp__sub_82F35310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35314"))) PPC_WEAK_FUNC(sub_82F35314);
PPC_FUNC_IMPL(__imp__sub_82F35314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35318"))) PPC_WEAK_FUNC(sub_82F35318);
PPC_FUNC_IMPL(__imp__sub_82F35318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25416
	ctx.r3.s64 = r11.s64 + -25416;
}

__attribute__((alias("__imp__sub_82F35320"))) PPC_WEAK_FUNC(sub_82F35320);
PPC_FUNC_IMPL(__imp__sub_82F35320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35324"))) PPC_WEAK_FUNC(sub_82F35324);
PPC_FUNC_IMPL(__imp__sub_82F35324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35328"))) PPC_WEAK_FUNC(sub_82F35328);
PPC_FUNC_IMPL(__imp__sub_82F35328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25408
	ctx.r3.s64 = r11.s64 + -25408;
}

__attribute__((alias("__imp__sub_82F35330"))) PPC_WEAK_FUNC(sub_82F35330);
PPC_FUNC_IMPL(__imp__sub_82F35330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35334"))) PPC_WEAK_FUNC(sub_82F35334);
PPC_FUNC_IMPL(__imp__sub_82F35334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35338"))) PPC_WEAK_FUNC(sub_82F35338);
PPC_FUNC_IMPL(__imp__sub_82F35338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25400
	ctx.r3.s64 = r11.s64 + -25400;
}

__attribute__((alias("__imp__sub_82F35340"))) PPC_WEAK_FUNC(sub_82F35340);
PPC_FUNC_IMPL(__imp__sub_82F35340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35344"))) PPC_WEAK_FUNC(sub_82F35344);
PPC_FUNC_IMPL(__imp__sub_82F35344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35348"))) PPC_WEAK_FUNC(sub_82F35348);
PPC_FUNC_IMPL(__imp__sub_82F35348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25392
	ctx.r3.s64 = r11.s64 + -25392;
}

__attribute__((alias("__imp__sub_82F35350"))) PPC_WEAK_FUNC(sub_82F35350);
PPC_FUNC_IMPL(__imp__sub_82F35350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35354"))) PPC_WEAK_FUNC(sub_82F35354);
PPC_FUNC_IMPL(__imp__sub_82F35354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35358"))) PPC_WEAK_FUNC(sub_82F35358);
PPC_FUNC_IMPL(__imp__sub_82F35358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25384
	ctx.r3.s64 = r11.s64 + -25384;
}

__attribute__((alias("__imp__sub_82F35360"))) PPC_WEAK_FUNC(sub_82F35360);
PPC_FUNC_IMPL(__imp__sub_82F35360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35364"))) PPC_WEAK_FUNC(sub_82F35364);
PPC_FUNC_IMPL(__imp__sub_82F35364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35368"))) PPC_WEAK_FUNC(sub_82F35368);
PPC_FUNC_IMPL(__imp__sub_82F35368) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32508
	ctx.r3.s64 = ctx.r10.s64 + -32508;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f353b8
	if (cr6.eq) goto loc_82F353B8;
loc_82F3539C:
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
	// bne cr6,0x82f3539c
	if (!cr6.eq) goto loc_82F3539C;
loc_82F353B8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r10,-29984(r11)
	PPC_STORE_U32(r11.u32 + -29984, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F353CC"))) PPC_WEAK_FUNC(sub_82F353CC);
PPC_FUNC_IMPL(__imp__sub_82F353CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F353D0"))) PPC_WEAK_FUNC(sub_82F353D0);
PPC_FUNC_IMPL(__imp__sub_82F353D0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-7556
	ctx.r3.s64 = ctx.r10.s64 + -7556;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29988(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35408"))) PPC_WEAK_FUNC(sub_82F35408);
PPC_FUNC_IMPL(__imp__sub_82F35408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3540C"))) PPC_WEAK_FUNC(sub_82F3540C);
PPC_FUNC_IMPL(__imp__sub_82F3540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35410"))) PPC_WEAK_FUNC(sub_82F35410);
PPC_FUNC_IMPL(__imp__sub_82F35410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25376
	ctx.r3.s64 = r11.s64 + -25376;
}

__attribute__((alias("__imp__sub_82F35418"))) PPC_WEAK_FUNC(sub_82F35418);
PPC_FUNC_IMPL(__imp__sub_82F35418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3541C"))) PPC_WEAK_FUNC(sub_82F3541C);
PPC_FUNC_IMPL(__imp__sub_82F3541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35420"))) PPC_WEAK_FUNC(sub_82F35420);
PPC_FUNC_IMPL(__imp__sub_82F35420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25368
	ctx.r3.s64 = r11.s64 + -25368;
}

__attribute__((alias("__imp__sub_82F35428"))) PPC_WEAK_FUNC(sub_82F35428);
PPC_FUNC_IMPL(__imp__sub_82F35428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3542C"))) PPC_WEAK_FUNC(sub_82F3542C);
PPC_FUNC_IMPL(__imp__sub_82F3542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35430"))) PPC_WEAK_FUNC(sub_82F35430);
PPC_FUNC_IMPL(__imp__sub_82F35430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25360
	ctx.r3.s64 = r11.s64 + -25360;
}

__attribute__((alias("__imp__sub_82F35438"))) PPC_WEAK_FUNC(sub_82F35438);
PPC_FUNC_IMPL(__imp__sub_82F35438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3543C"))) PPC_WEAK_FUNC(sub_82F3543C);
PPC_FUNC_IMPL(__imp__sub_82F3543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35440"))) PPC_WEAK_FUNC(sub_82F35440);
PPC_FUNC_IMPL(__imp__sub_82F35440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25352
	ctx.r3.s64 = r11.s64 + -25352;
}

__attribute__((alias("__imp__sub_82F35448"))) PPC_WEAK_FUNC(sub_82F35448);
PPC_FUNC_IMPL(__imp__sub_82F35448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3544C"))) PPC_WEAK_FUNC(sub_82F3544C);
PPC_FUNC_IMPL(__imp__sub_82F3544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35450"))) PPC_WEAK_FUNC(sub_82F35450);
PPC_FUNC_IMPL(__imp__sub_82F35450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25344
	ctx.r3.s64 = r11.s64 + -25344;
}

__attribute__((alias("__imp__sub_82F35458"))) PPC_WEAK_FUNC(sub_82F35458);
PPC_FUNC_IMPL(__imp__sub_82F35458) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3545C"))) PPC_WEAK_FUNC(sub_82F3545C);
PPC_FUNC_IMPL(__imp__sub_82F3545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35460"))) PPC_WEAK_FUNC(sub_82F35460);
PPC_FUNC_IMPL(__imp__sub_82F35460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25336
	ctx.r3.s64 = r11.s64 + -25336;
}

__attribute__((alias("__imp__sub_82F35468"))) PPC_WEAK_FUNC(sub_82F35468);
PPC_FUNC_IMPL(__imp__sub_82F35468) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3546C"))) PPC_WEAK_FUNC(sub_82F3546C);
PPC_FUNC_IMPL(__imp__sub_82F3546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35470"))) PPC_WEAK_FUNC(sub_82F35470);
PPC_FUNC_IMPL(__imp__sub_82F35470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25328
	ctx.r3.s64 = r11.s64 + -25328;
}

__attribute__((alias("__imp__sub_82F35478"))) PPC_WEAK_FUNC(sub_82F35478);
PPC_FUNC_IMPL(__imp__sub_82F35478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3547C"))) PPC_WEAK_FUNC(sub_82F3547C);
PPC_FUNC_IMPL(__imp__sub_82F3547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35480"))) PPC_WEAK_FUNC(sub_82F35480);
PPC_FUNC_IMPL(__imp__sub_82F35480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25320
	ctx.r3.s64 = r11.s64 + -25320;
}

__attribute__((alias("__imp__sub_82F35488"))) PPC_WEAK_FUNC(sub_82F35488);
PPC_FUNC_IMPL(__imp__sub_82F35488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3548C"))) PPC_WEAK_FUNC(sub_82F3548C);
PPC_FUNC_IMPL(__imp__sub_82F3548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35490"))) PPC_WEAK_FUNC(sub_82F35490);
PPC_FUNC_IMPL(__imp__sub_82F35490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25312
	ctx.r3.s64 = r11.s64 + -25312;
}

__attribute__((alias("__imp__sub_82F35498"))) PPC_WEAK_FUNC(sub_82F35498);
PPC_FUNC_IMPL(__imp__sub_82F35498) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3549C"))) PPC_WEAK_FUNC(sub_82F3549C);
PPC_FUNC_IMPL(__imp__sub_82F3549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354A0"))) PPC_WEAK_FUNC(sub_82F354A0);
PPC_FUNC_IMPL(__imp__sub_82F354A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25304
	ctx.r3.s64 = r11.s64 + -25304;
}

__attribute__((alias("__imp__sub_82F354A8"))) PPC_WEAK_FUNC(sub_82F354A8);
PPC_FUNC_IMPL(__imp__sub_82F354A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354AC"))) PPC_WEAK_FUNC(sub_82F354AC);
PPC_FUNC_IMPL(__imp__sub_82F354AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354B0"))) PPC_WEAK_FUNC(sub_82F354B0);
PPC_FUNC_IMPL(__imp__sub_82F354B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25296
	ctx.r3.s64 = r11.s64 + -25296;
}

__attribute__((alias("__imp__sub_82F354B8"))) PPC_WEAK_FUNC(sub_82F354B8);
PPC_FUNC_IMPL(__imp__sub_82F354B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354BC"))) PPC_WEAK_FUNC(sub_82F354BC);
PPC_FUNC_IMPL(__imp__sub_82F354BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354C0"))) PPC_WEAK_FUNC(sub_82F354C0);
PPC_FUNC_IMPL(__imp__sub_82F354C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25288
	ctx.r3.s64 = r11.s64 + -25288;
}

__attribute__((alias("__imp__sub_82F354C8"))) PPC_WEAK_FUNC(sub_82F354C8);
PPC_FUNC_IMPL(__imp__sub_82F354C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354CC"))) PPC_WEAK_FUNC(sub_82F354CC);
PPC_FUNC_IMPL(__imp__sub_82F354CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354D0"))) PPC_WEAK_FUNC(sub_82F354D0);
PPC_FUNC_IMPL(__imp__sub_82F354D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25280
	ctx.r3.s64 = r11.s64 + -25280;
}

__attribute__((alias("__imp__sub_82F354D8"))) PPC_WEAK_FUNC(sub_82F354D8);
PPC_FUNC_IMPL(__imp__sub_82F354D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354DC"))) PPC_WEAK_FUNC(sub_82F354DC);
PPC_FUNC_IMPL(__imp__sub_82F354DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354E0"))) PPC_WEAK_FUNC(sub_82F354E0);
PPC_FUNC_IMPL(__imp__sub_82F354E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25272
	ctx.r3.s64 = r11.s64 + -25272;
}

__attribute__((alias("__imp__sub_82F354E8"))) PPC_WEAK_FUNC(sub_82F354E8);
PPC_FUNC_IMPL(__imp__sub_82F354E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354EC"))) PPC_WEAK_FUNC(sub_82F354EC);
PPC_FUNC_IMPL(__imp__sub_82F354EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F354F0"))) PPC_WEAK_FUNC(sub_82F354F0);
PPC_FUNC_IMPL(__imp__sub_82F354F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25264
	ctx.r3.s64 = r11.s64 + -25264;
}

__attribute__((alias("__imp__sub_82F354F8"))) PPC_WEAK_FUNC(sub_82F354F8);
PPC_FUNC_IMPL(__imp__sub_82F354F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F354FC"))) PPC_WEAK_FUNC(sub_82F354FC);
PPC_FUNC_IMPL(__imp__sub_82F354FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35500"))) PPC_WEAK_FUNC(sub_82F35500);
PPC_FUNC_IMPL(__imp__sub_82F35500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25256
	ctx.r3.s64 = r11.s64 + -25256;
}

__attribute__((alias("__imp__sub_82F35508"))) PPC_WEAK_FUNC(sub_82F35508);
PPC_FUNC_IMPL(__imp__sub_82F35508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3550C"))) PPC_WEAK_FUNC(sub_82F3550C);
PPC_FUNC_IMPL(__imp__sub_82F3550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35510"))) PPC_WEAK_FUNC(sub_82F35510);
PPC_FUNC_IMPL(__imp__sub_82F35510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25248
	ctx.r3.s64 = r11.s64 + -25248;
}

__attribute__((alias("__imp__sub_82F35518"))) PPC_WEAK_FUNC(sub_82F35518);
PPC_FUNC_IMPL(__imp__sub_82F35518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3551C"))) PPC_WEAK_FUNC(sub_82F3551C);
PPC_FUNC_IMPL(__imp__sub_82F3551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35520"))) PPC_WEAK_FUNC(sub_82F35520);
PPC_FUNC_IMPL(__imp__sub_82F35520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25240
	ctx.r3.s64 = r11.s64 + -25240;
}

__attribute__((alias("__imp__sub_82F35528"))) PPC_WEAK_FUNC(sub_82F35528);
PPC_FUNC_IMPL(__imp__sub_82F35528) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3552C"))) PPC_WEAK_FUNC(sub_82F3552C);
PPC_FUNC_IMPL(__imp__sub_82F3552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35530"))) PPC_WEAK_FUNC(sub_82F35530);
PPC_FUNC_IMPL(__imp__sub_82F35530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25232
	ctx.r3.s64 = r11.s64 + -25232;
}

__attribute__((alias("__imp__sub_82F35538"))) PPC_WEAK_FUNC(sub_82F35538);
PPC_FUNC_IMPL(__imp__sub_82F35538) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3553C"))) PPC_WEAK_FUNC(sub_82F3553C);
PPC_FUNC_IMPL(__imp__sub_82F3553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35540"))) PPC_WEAK_FUNC(sub_82F35540);
PPC_FUNC_IMPL(__imp__sub_82F35540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25224
	ctx.r3.s64 = r11.s64 + -25224;
}

__attribute__((alias("__imp__sub_82F35548"))) PPC_WEAK_FUNC(sub_82F35548);
PPC_FUNC_IMPL(__imp__sub_82F35548) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3554C"))) PPC_WEAK_FUNC(sub_82F3554C);
PPC_FUNC_IMPL(__imp__sub_82F3554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35550"))) PPC_WEAK_FUNC(sub_82F35550);
PPC_FUNC_IMPL(__imp__sub_82F35550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25216
	ctx.r3.s64 = r11.s64 + -25216;
}

__attribute__((alias("__imp__sub_82F35558"))) PPC_WEAK_FUNC(sub_82F35558);
PPC_FUNC_IMPL(__imp__sub_82F35558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3555C"))) PPC_WEAK_FUNC(sub_82F3555C);
PPC_FUNC_IMPL(__imp__sub_82F3555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35560"))) PPC_WEAK_FUNC(sub_82F35560);
PPC_FUNC_IMPL(__imp__sub_82F35560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25208
	ctx.r3.s64 = r11.s64 + -25208;
}

__attribute__((alias("__imp__sub_82F35568"))) PPC_WEAK_FUNC(sub_82F35568);
PPC_FUNC_IMPL(__imp__sub_82F35568) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3556C"))) PPC_WEAK_FUNC(sub_82F3556C);
PPC_FUNC_IMPL(__imp__sub_82F3556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35570"))) PPC_WEAK_FUNC(sub_82F35570);
PPC_FUNC_IMPL(__imp__sub_82F35570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25200
	ctx.r3.s64 = r11.s64 + -25200;
}

__attribute__((alias("__imp__sub_82F35578"))) PPC_WEAK_FUNC(sub_82F35578);
PPC_FUNC_IMPL(__imp__sub_82F35578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3557C"))) PPC_WEAK_FUNC(sub_82F3557C);
PPC_FUNC_IMPL(__imp__sub_82F3557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35580"))) PPC_WEAK_FUNC(sub_82F35580);
PPC_FUNC_IMPL(__imp__sub_82F35580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25192
	ctx.r3.s64 = r11.s64 + -25192;
}

__attribute__((alias("__imp__sub_82F35588"))) PPC_WEAK_FUNC(sub_82F35588);
PPC_FUNC_IMPL(__imp__sub_82F35588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3558C"))) PPC_WEAK_FUNC(sub_82F3558C);
PPC_FUNC_IMPL(__imp__sub_82F3558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35590"))) PPC_WEAK_FUNC(sub_82F35590);
PPC_FUNC_IMPL(__imp__sub_82F35590) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-3612
	ctx.r3.s64 = ctx.r10.s64 + -3612;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29900(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F355C8"))) PPC_WEAK_FUNC(sub_82F355C8);
PPC_FUNC_IMPL(__imp__sub_82F355C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F355CC"))) PPC_WEAK_FUNC(sub_82F355CC);
PPC_FUNC_IMPL(__imp__sub_82F355CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F355D0"))) PPC_WEAK_FUNC(sub_82F355D0);
PPC_FUNC_IMPL(__imp__sub_82F355D0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-3564
	ctx.r3.s64 = ctx.r10.s64 + -3564;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35608"))) PPC_WEAK_FUNC(sub_82F35608);
PPC_FUNC_IMPL(__imp__sub_82F35608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3560C"))) PPC_WEAK_FUNC(sub_82F3560C);
PPC_FUNC_IMPL(__imp__sub_82F3560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35610"))) PPC_WEAK_FUNC(sub_82F35610);
PPC_FUNC_IMPL(__imp__sub_82F35610) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-3516
	ctx.r3.s64 = ctx.r10.s64 + -3516;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29908(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35648"))) PPC_WEAK_FUNC(sub_82F35648);
PPC_FUNC_IMPL(__imp__sub_82F35648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3564C"))) PPC_WEAK_FUNC(sub_82F3564C);
PPC_FUNC_IMPL(__imp__sub_82F3564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35650"))) PPC_WEAK_FUNC(sub_82F35650);
PPC_FUNC_IMPL(__imp__sub_82F35650) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-3468
	ctx.r3.s64 = ctx.r10.s64 + -3468;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29912(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35688"))) PPC_WEAK_FUNC(sub_82F35688);
PPC_FUNC_IMPL(__imp__sub_82F35688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3568C"))) PPC_WEAK_FUNC(sub_82F3568C);
PPC_FUNC_IMPL(__imp__sub_82F3568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35690"))) PPC_WEAK_FUNC(sub_82F35690);
PPC_FUNC_IMPL(__imp__sub_82F35690) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-3416
	ctx.r3.s64 = ctx.r10.s64 + -3416;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29916(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F356C8"))) PPC_WEAK_FUNC(sub_82F356C8);
PPC_FUNC_IMPL(__imp__sub_82F356C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F356CC"))) PPC_WEAK_FUNC(sub_82F356CC);
PPC_FUNC_IMPL(__imp__sub_82F356CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F356D0"))) PPC_WEAK_FUNC(sub_82F356D0);
PPC_FUNC_IMPL(__imp__sub_82F356D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25184
	ctx.r3.s64 = r11.s64 + -25184;
}

__attribute__((alias("__imp__sub_82F356D8"))) PPC_WEAK_FUNC(sub_82F356D8);
PPC_FUNC_IMPL(__imp__sub_82F356D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F356DC"))) PPC_WEAK_FUNC(sub_82F356DC);
PPC_FUNC_IMPL(__imp__sub_82F356DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F356E0"))) PPC_WEAK_FUNC(sub_82F356E0);
PPC_FUNC_IMPL(__imp__sub_82F356E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25176
	ctx.r3.s64 = r11.s64 + -25176;
}

__attribute__((alias("__imp__sub_82F356E8"))) PPC_WEAK_FUNC(sub_82F356E8);
PPC_FUNC_IMPL(__imp__sub_82F356E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F356EC"))) PPC_WEAK_FUNC(sub_82F356EC);
PPC_FUNC_IMPL(__imp__sub_82F356EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F356F0"))) PPC_WEAK_FUNC(sub_82F356F0);
PPC_FUNC_IMPL(__imp__sub_82F356F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25168
	ctx.r3.s64 = r11.s64 + -25168;
}

__attribute__((alias("__imp__sub_82F356F8"))) PPC_WEAK_FUNC(sub_82F356F8);
PPC_FUNC_IMPL(__imp__sub_82F356F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F356FC"))) PPC_WEAK_FUNC(sub_82F356FC);
PPC_FUNC_IMPL(__imp__sub_82F356FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35700"))) PPC_WEAK_FUNC(sub_82F35700);
PPC_FUNC_IMPL(__imp__sub_82F35700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25160
	ctx.r3.s64 = r11.s64 + -25160;
}

__attribute__((alias("__imp__sub_82F35708"))) PPC_WEAK_FUNC(sub_82F35708);
PPC_FUNC_IMPL(__imp__sub_82F35708) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3570C"))) PPC_WEAK_FUNC(sub_82F3570C);
PPC_FUNC_IMPL(__imp__sub_82F3570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35710"))) PPC_WEAK_FUNC(sub_82F35710);
PPC_FUNC_IMPL(__imp__sub_82F35710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25152
	ctx.r3.s64 = r11.s64 + -25152;
}

__attribute__((alias("__imp__sub_82F35718"))) PPC_WEAK_FUNC(sub_82F35718);
PPC_FUNC_IMPL(__imp__sub_82F35718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3571C"))) PPC_WEAK_FUNC(sub_82F3571C);
PPC_FUNC_IMPL(__imp__sub_82F3571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35720"))) PPC_WEAK_FUNC(sub_82F35720);
PPC_FUNC_IMPL(__imp__sub_82F35720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25144
	ctx.r3.s64 = r11.s64 + -25144;
}

__attribute__((alias("__imp__sub_82F35728"))) PPC_WEAK_FUNC(sub_82F35728);
PPC_FUNC_IMPL(__imp__sub_82F35728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3572C"))) PPC_WEAK_FUNC(sub_82F3572C);
PPC_FUNC_IMPL(__imp__sub_82F3572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35730"))) PPC_WEAK_FUNC(sub_82F35730);
PPC_FUNC_IMPL(__imp__sub_82F35730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25136
	ctx.r3.s64 = r11.s64 + -25136;
}

__attribute__((alias("__imp__sub_82F35738"))) PPC_WEAK_FUNC(sub_82F35738);
PPC_FUNC_IMPL(__imp__sub_82F35738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3573C"))) PPC_WEAK_FUNC(sub_82F3573C);
PPC_FUNC_IMPL(__imp__sub_82F3573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35740"))) PPC_WEAK_FUNC(sub_82F35740);
PPC_FUNC_IMPL(__imp__sub_82F35740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25128
	ctx.r3.s64 = r11.s64 + -25128;
}

__attribute__((alias("__imp__sub_82F35748"))) PPC_WEAK_FUNC(sub_82F35748);
PPC_FUNC_IMPL(__imp__sub_82F35748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3574C"))) PPC_WEAK_FUNC(sub_82F3574C);
PPC_FUNC_IMPL(__imp__sub_82F3574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35750"))) PPC_WEAK_FUNC(sub_82F35750);
PPC_FUNC_IMPL(__imp__sub_82F35750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25120
	ctx.r3.s64 = r11.s64 + -25120;
}

__attribute__((alias("__imp__sub_82F35758"))) PPC_WEAK_FUNC(sub_82F35758);
PPC_FUNC_IMPL(__imp__sub_82F35758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3575C"))) PPC_WEAK_FUNC(sub_82F3575C);
PPC_FUNC_IMPL(__imp__sub_82F3575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35760"))) PPC_WEAK_FUNC(sub_82F35760);
PPC_FUNC_IMPL(__imp__sub_82F35760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25112
	ctx.r3.s64 = r11.s64 + -25112;
}

__attribute__((alias("__imp__sub_82F35768"))) PPC_WEAK_FUNC(sub_82F35768);
PPC_FUNC_IMPL(__imp__sub_82F35768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3576C"))) PPC_WEAK_FUNC(sub_82F3576C);
PPC_FUNC_IMPL(__imp__sub_82F3576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35770"))) PPC_WEAK_FUNC(sub_82F35770);
PPC_FUNC_IMPL(__imp__sub_82F35770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25104
	ctx.r3.s64 = r11.s64 + -25104;
}

__attribute__((alias("__imp__sub_82F35778"))) PPC_WEAK_FUNC(sub_82F35778);
PPC_FUNC_IMPL(__imp__sub_82F35778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3577C"))) PPC_WEAK_FUNC(sub_82F3577C);
PPC_FUNC_IMPL(__imp__sub_82F3577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35780"))) PPC_WEAK_FUNC(sub_82F35780);
PPC_FUNC_IMPL(__imp__sub_82F35780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25096
	ctx.r3.s64 = r11.s64 + -25096;
}

__attribute__((alias("__imp__sub_82F35788"))) PPC_WEAK_FUNC(sub_82F35788);
PPC_FUNC_IMPL(__imp__sub_82F35788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3578C"))) PPC_WEAK_FUNC(sub_82F3578C);
PPC_FUNC_IMPL(__imp__sub_82F3578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35790"))) PPC_WEAK_FUNC(sub_82F35790);
PPC_FUNC_IMPL(__imp__sub_82F35790) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-2776
	ctx.r3.s64 = ctx.r10.s64 + -2776;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29864(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F357C8"))) PPC_WEAK_FUNC(sub_82F357C8);
PPC_FUNC_IMPL(__imp__sub_82F357C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F357CC"))) PPC_WEAK_FUNC(sub_82F357CC);
PPC_FUNC_IMPL(__imp__sub_82F357CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F357D0"))) PPC_WEAK_FUNC(sub_82F357D0);
PPC_FUNC_IMPL(__imp__sub_82F357D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25088
	ctx.r3.s64 = r11.s64 + -25088;
}

__attribute__((alias("__imp__sub_82F357D8"))) PPC_WEAK_FUNC(sub_82F357D8);
PPC_FUNC_IMPL(__imp__sub_82F357D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F357DC"))) PPC_WEAK_FUNC(sub_82F357DC);
PPC_FUNC_IMPL(__imp__sub_82F357DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F357E0"))) PPC_WEAK_FUNC(sub_82F357E0);
PPC_FUNC_IMPL(__imp__sub_82F357E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25080
	ctx.r3.s64 = r11.s64 + -25080;
}

__attribute__((alias("__imp__sub_82F357E8"))) PPC_WEAK_FUNC(sub_82F357E8);
PPC_FUNC_IMPL(__imp__sub_82F357E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F357EC"))) PPC_WEAK_FUNC(sub_82F357EC);
PPC_FUNC_IMPL(__imp__sub_82F357EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F357F0"))) PPC_WEAK_FUNC(sub_82F357F0);
PPC_FUNC_IMPL(__imp__sub_82F357F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25072
	ctx.r3.s64 = r11.s64 + -25072;
}

__attribute__((alias("__imp__sub_82F357F8"))) PPC_WEAK_FUNC(sub_82F357F8);
PPC_FUNC_IMPL(__imp__sub_82F357F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F357FC"))) PPC_WEAK_FUNC(sub_82F357FC);
PPC_FUNC_IMPL(__imp__sub_82F357FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35800"))) PPC_WEAK_FUNC(sub_82F35800);
PPC_FUNC_IMPL(__imp__sub_82F35800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25064
	ctx.r3.s64 = r11.s64 + -25064;
}

__attribute__((alias("__imp__sub_82F35808"))) PPC_WEAK_FUNC(sub_82F35808);
PPC_FUNC_IMPL(__imp__sub_82F35808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3580C"))) PPC_WEAK_FUNC(sub_82F3580C);
PPC_FUNC_IMPL(__imp__sub_82F3580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35810"))) PPC_WEAK_FUNC(sub_82F35810);
PPC_FUNC_IMPL(__imp__sub_82F35810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25056
	ctx.r3.s64 = r11.s64 + -25056;
}

__attribute__((alias("__imp__sub_82F35818"))) PPC_WEAK_FUNC(sub_82F35818);
PPC_FUNC_IMPL(__imp__sub_82F35818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3581C"))) PPC_WEAK_FUNC(sub_82F3581C);
PPC_FUNC_IMPL(__imp__sub_82F3581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35820"))) PPC_WEAK_FUNC(sub_82F35820);
PPC_FUNC_IMPL(__imp__sub_82F35820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25048
	ctx.r3.s64 = r11.s64 + -25048;
}

__attribute__((alias("__imp__sub_82F35828"))) PPC_WEAK_FUNC(sub_82F35828);
PPC_FUNC_IMPL(__imp__sub_82F35828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3582C"))) PPC_WEAK_FUNC(sub_82F3582C);
PPC_FUNC_IMPL(__imp__sub_82F3582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35830"))) PPC_WEAK_FUNC(sub_82F35830);
PPC_FUNC_IMPL(__imp__sub_82F35830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25040
	ctx.r3.s64 = r11.s64 + -25040;
}

__attribute__((alias("__imp__sub_82F35838"))) PPC_WEAK_FUNC(sub_82F35838);
PPC_FUNC_IMPL(__imp__sub_82F35838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3583C"))) PPC_WEAK_FUNC(sub_82F3583C);
PPC_FUNC_IMPL(__imp__sub_82F3583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35840"))) PPC_WEAK_FUNC(sub_82F35840);
PPC_FUNC_IMPL(__imp__sub_82F35840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25032
	ctx.r3.s64 = r11.s64 + -25032;
}

__attribute__((alias("__imp__sub_82F35848"))) PPC_WEAK_FUNC(sub_82F35848);
PPC_FUNC_IMPL(__imp__sub_82F35848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3584C"))) PPC_WEAK_FUNC(sub_82F3584C);
PPC_FUNC_IMPL(__imp__sub_82F3584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35850"))) PPC_WEAK_FUNC(sub_82F35850);
PPC_FUNC_IMPL(__imp__sub_82F35850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25024
	ctx.r3.s64 = r11.s64 + -25024;
}

__attribute__((alias("__imp__sub_82F35858"))) PPC_WEAK_FUNC(sub_82F35858);
PPC_FUNC_IMPL(__imp__sub_82F35858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3585C"))) PPC_WEAK_FUNC(sub_82F3585C);
PPC_FUNC_IMPL(__imp__sub_82F3585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35860"))) PPC_WEAK_FUNC(sub_82F35860);
PPC_FUNC_IMPL(__imp__sub_82F35860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25016
	ctx.r3.s64 = r11.s64 + -25016;
}

__attribute__((alias("__imp__sub_82F35868"))) PPC_WEAK_FUNC(sub_82F35868);
PPC_FUNC_IMPL(__imp__sub_82F35868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3586C"))) PPC_WEAK_FUNC(sub_82F3586C);
PPC_FUNC_IMPL(__imp__sub_82F3586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35870"))) PPC_WEAK_FUNC(sub_82F35870);
PPC_FUNC_IMPL(__imp__sub_82F35870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25008
	ctx.r3.s64 = r11.s64 + -25008;
}

__attribute__((alias("__imp__sub_82F35878"))) PPC_WEAK_FUNC(sub_82F35878);
PPC_FUNC_IMPL(__imp__sub_82F35878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3587C"))) PPC_WEAK_FUNC(sub_82F3587C);
PPC_FUNC_IMPL(__imp__sub_82F3587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35880"))) PPC_WEAK_FUNC(sub_82F35880);
PPC_FUNC_IMPL(__imp__sub_82F35880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25000
	ctx.r3.s64 = r11.s64 + -25000;
}

__attribute__((alias("__imp__sub_82F35888"))) PPC_WEAK_FUNC(sub_82F35888);
PPC_FUNC_IMPL(__imp__sub_82F35888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3588C"))) PPC_WEAK_FUNC(sub_82F3588C);
PPC_FUNC_IMPL(__imp__sub_82F3588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35890"))) PPC_WEAK_FUNC(sub_82F35890);
PPC_FUNC_IMPL(__imp__sub_82F35890) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-1144
	ctx.r3.s64 = ctx.r10.s64 + -1144;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29828(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F358C8"))) PPC_WEAK_FUNC(sub_82F358C8);
PPC_FUNC_IMPL(__imp__sub_82F358C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F358CC"))) PPC_WEAK_FUNC(sub_82F358CC);
PPC_FUNC_IMPL(__imp__sub_82F358CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F358D0"))) PPC_WEAK_FUNC(sub_82F358D0);
PPC_FUNC_IMPL(__imp__sub_82F358D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24992
	ctx.r3.s64 = r11.s64 + -24992;
}

__attribute__((alias("__imp__sub_82F358D8"))) PPC_WEAK_FUNC(sub_82F358D8);
PPC_FUNC_IMPL(__imp__sub_82F358D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F358DC"))) PPC_WEAK_FUNC(sub_82F358DC);
PPC_FUNC_IMPL(__imp__sub_82F358DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F358E0"))) PPC_WEAK_FUNC(sub_82F358E0);
PPC_FUNC_IMPL(__imp__sub_82F358E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24984
	ctx.r3.s64 = r11.s64 + -24984;
}

__attribute__((alias("__imp__sub_82F358E8"))) PPC_WEAK_FUNC(sub_82F358E8);
PPC_FUNC_IMPL(__imp__sub_82F358E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F358EC"))) PPC_WEAK_FUNC(sub_82F358EC);
PPC_FUNC_IMPL(__imp__sub_82F358EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F358F0"))) PPC_WEAK_FUNC(sub_82F358F0);
PPC_FUNC_IMPL(__imp__sub_82F358F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24976
	ctx.r3.s64 = r11.s64 + -24976;
}

__attribute__((alias("__imp__sub_82F358F8"))) PPC_WEAK_FUNC(sub_82F358F8);
PPC_FUNC_IMPL(__imp__sub_82F358F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F358FC"))) PPC_WEAK_FUNC(sub_82F358FC);
PPC_FUNC_IMPL(__imp__sub_82F358FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35900"))) PPC_WEAK_FUNC(sub_82F35900);
PPC_FUNC_IMPL(__imp__sub_82F35900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24968
	ctx.r3.s64 = r11.s64 + -24968;
}

__attribute__((alias("__imp__sub_82F35908"))) PPC_WEAK_FUNC(sub_82F35908);
PPC_FUNC_IMPL(__imp__sub_82F35908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3590C"))) PPC_WEAK_FUNC(sub_82F3590C);
PPC_FUNC_IMPL(__imp__sub_82F3590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35910"))) PPC_WEAK_FUNC(sub_82F35910);
PPC_FUNC_IMPL(__imp__sub_82F35910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24960
	ctx.r3.s64 = r11.s64 + -24960;
}

__attribute__((alias("__imp__sub_82F35918"))) PPC_WEAK_FUNC(sub_82F35918);
PPC_FUNC_IMPL(__imp__sub_82F35918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3591C"))) PPC_WEAK_FUNC(sub_82F3591C);
PPC_FUNC_IMPL(__imp__sub_82F3591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35920"))) PPC_WEAK_FUNC(sub_82F35920);
PPC_FUNC_IMPL(__imp__sub_82F35920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24952
	ctx.r3.s64 = r11.s64 + -24952;
}

__attribute__((alias("__imp__sub_82F35928"))) PPC_WEAK_FUNC(sub_82F35928);
PPC_FUNC_IMPL(__imp__sub_82F35928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3592C"))) PPC_WEAK_FUNC(sub_82F3592C);
PPC_FUNC_IMPL(__imp__sub_82F3592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35930"))) PPC_WEAK_FUNC(sub_82F35930);
PPC_FUNC_IMPL(__imp__sub_82F35930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24944
	ctx.r3.s64 = r11.s64 + -24944;
}

__attribute__((alias("__imp__sub_82F35938"))) PPC_WEAK_FUNC(sub_82F35938);
PPC_FUNC_IMPL(__imp__sub_82F35938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3593C"))) PPC_WEAK_FUNC(sub_82F3593C);
PPC_FUNC_IMPL(__imp__sub_82F3593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35940"))) PPC_WEAK_FUNC(sub_82F35940);
PPC_FUNC_IMPL(__imp__sub_82F35940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24936
	ctx.r3.s64 = r11.s64 + -24936;
}

__attribute__((alias("__imp__sub_82F35948"))) PPC_WEAK_FUNC(sub_82F35948);
PPC_FUNC_IMPL(__imp__sub_82F35948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3594C"))) PPC_WEAK_FUNC(sub_82F3594C);
PPC_FUNC_IMPL(__imp__sub_82F3594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35950"))) PPC_WEAK_FUNC(sub_82F35950);
PPC_FUNC_IMPL(__imp__sub_82F35950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24928
	ctx.r3.s64 = r11.s64 + -24928;
}

__attribute__((alias("__imp__sub_82F35958"))) PPC_WEAK_FUNC(sub_82F35958);
PPC_FUNC_IMPL(__imp__sub_82F35958) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3595C"))) PPC_WEAK_FUNC(sub_82F3595C);
PPC_FUNC_IMPL(__imp__sub_82F3595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35960"))) PPC_WEAK_FUNC(sub_82F35960);
PPC_FUNC_IMPL(__imp__sub_82F35960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24920
	ctx.r3.s64 = r11.s64 + -24920;
}

__attribute__((alias("__imp__sub_82F35968"))) PPC_WEAK_FUNC(sub_82F35968);
PPC_FUNC_IMPL(__imp__sub_82F35968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3596C"))) PPC_WEAK_FUNC(sub_82F3596C);
PPC_FUNC_IMPL(__imp__sub_82F3596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35970"))) PPC_WEAK_FUNC(sub_82F35970);
PPC_FUNC_IMPL(__imp__sub_82F35970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24912
	ctx.r3.s64 = r11.s64 + -24912;
}

__attribute__((alias("__imp__sub_82F35978"))) PPC_WEAK_FUNC(sub_82F35978);
PPC_FUNC_IMPL(__imp__sub_82F35978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3597C"))) PPC_WEAK_FUNC(sub_82F3597C);
PPC_FUNC_IMPL(__imp__sub_82F3597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35980"))) PPC_WEAK_FUNC(sub_82F35980);
PPC_FUNC_IMPL(__imp__sub_82F35980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24904
	ctx.r3.s64 = r11.s64 + -24904;
}

__attribute__((alias("__imp__sub_82F35988"))) PPC_WEAK_FUNC(sub_82F35988);
PPC_FUNC_IMPL(__imp__sub_82F35988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3598C"))) PPC_WEAK_FUNC(sub_82F3598C);
PPC_FUNC_IMPL(__imp__sub_82F3598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35990"))) PPC_WEAK_FUNC(sub_82F35990);
PPC_FUNC_IMPL(__imp__sub_82F35990) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1184
	ctx.r3.s64 = ctx.r10.s64 + 1184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29792(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F359C8"))) PPC_WEAK_FUNC(sub_82F359C8);
PPC_FUNC_IMPL(__imp__sub_82F359C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F359CC"))) PPC_WEAK_FUNC(sub_82F359CC);
PPC_FUNC_IMPL(__imp__sub_82F359CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F359D0"))) PPC_WEAK_FUNC(sub_82F359D0);
PPC_FUNC_IMPL(__imp__sub_82F359D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24896
	ctx.r3.s64 = r11.s64 + -24896;
}

__attribute__((alias("__imp__sub_82F359D8"))) PPC_WEAK_FUNC(sub_82F359D8);
PPC_FUNC_IMPL(__imp__sub_82F359D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F359DC"))) PPC_WEAK_FUNC(sub_82F359DC);
PPC_FUNC_IMPL(__imp__sub_82F359DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F359E0"))) PPC_WEAK_FUNC(sub_82F359E0);
PPC_FUNC_IMPL(__imp__sub_82F359E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24888
	ctx.r3.s64 = r11.s64 + -24888;
}

__attribute__((alias("__imp__sub_82F359E8"))) PPC_WEAK_FUNC(sub_82F359E8);
PPC_FUNC_IMPL(__imp__sub_82F359E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F359EC"))) PPC_WEAK_FUNC(sub_82F359EC);
PPC_FUNC_IMPL(__imp__sub_82F359EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F359F0"))) PPC_WEAK_FUNC(sub_82F359F0);
PPC_FUNC_IMPL(__imp__sub_82F359F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24880
	ctx.r3.s64 = r11.s64 + -24880;
}

__attribute__((alias("__imp__sub_82F359F8"))) PPC_WEAK_FUNC(sub_82F359F8);
PPC_FUNC_IMPL(__imp__sub_82F359F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F359FC"))) PPC_WEAK_FUNC(sub_82F359FC);
PPC_FUNC_IMPL(__imp__sub_82F359FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35A00"))) PPC_WEAK_FUNC(sub_82F35A00);
PPC_FUNC_IMPL(__imp__sub_82F35A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24872
	ctx.r3.s64 = r11.s64 + -24872;
}

__attribute__((alias("__imp__sub_82F35A08"))) PPC_WEAK_FUNC(sub_82F35A08);
PPC_FUNC_IMPL(__imp__sub_82F35A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35A0C"))) PPC_WEAK_FUNC(sub_82F35A0C);
PPC_FUNC_IMPL(__imp__sub_82F35A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35A10"))) PPC_WEAK_FUNC(sub_82F35A10);
PPC_FUNC_IMPL(__imp__sub_82F35A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24864
	ctx.r3.s64 = r11.s64 + -24864;
}

__attribute__((alias("__imp__sub_82F35A18"))) PPC_WEAK_FUNC(sub_82F35A18);
PPC_FUNC_IMPL(__imp__sub_82F35A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35A1C"))) PPC_WEAK_FUNC(sub_82F35A1C);
PPC_FUNC_IMPL(__imp__sub_82F35A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35A20"))) PPC_WEAK_FUNC(sub_82F35A20);
PPC_FUNC_IMPL(__imp__sub_82F35A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24856
	ctx.r3.s64 = r11.s64 + -24856;
}

__attribute__((alias("__imp__sub_82F35A28"))) PPC_WEAK_FUNC(sub_82F35A28);
PPC_FUNC_IMPL(__imp__sub_82F35A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35A2C"))) PPC_WEAK_FUNC(sub_82F35A2C);
PPC_FUNC_IMPL(__imp__sub_82F35A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35A30"))) PPC_WEAK_FUNC(sub_82F35A30);
PPC_FUNC_IMPL(__imp__sub_82F35A30) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,3188
	ctx.r3.s64 = ctx.r10.s64 + 3188;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-29772(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35A68"))) PPC_WEAK_FUNC(sub_82F35A68);
PPC_FUNC_IMPL(__imp__sub_82F35A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35A6C"))) PPC_WEAK_FUNC(sub_82F35A6C);
PPC_FUNC_IMPL(__imp__sub_82F35A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35A70"))) PPC_WEAK_FUNC(sub_82F35A70);
PPC_FUNC_IMPL(__imp__sub_82F35A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-24848
	ctx.r3.s64 = r11.s64 + -24848;
}

