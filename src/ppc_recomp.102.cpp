#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82499564"))) PPC_WEAK_FUNC(sub_82499564);
PPC_FUNC_IMPL(__imp__sub_82499564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499568"))) PPC_WEAK_FUNC(sub_82499568);
PPC_FUNC_IMPL(__imp__sub_82499568) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-6292
	ctx.r5.s64 = r11.s64 + -6292;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-6304
	ctx.r5.s64 = ctx.r10.s64 + -6304;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,-6320
	ctx.r5.s64 = ctx.r9.s64 + -6320;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-6336
	ctx.r5.s64 = ctx.r8.s64 + -6336;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r7,-6348
	ctx.r5.s64 = ctx.r7.s64 + -6348;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r6,-6360
	ctx.r5.s64 = ctx.r6.s64 + -6360;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r5,-6368
	ctx.r5.s64 = ctx.r5.s64 + -6368;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r3,-6380
	ctx.r5.s64 = ctx.r3.s64 + -6380;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-6396
	ctx.r5.s64 = r11.s64 + -6396;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-6412
	ctx.r5.s64 = ctx.r10.s64 + -6412;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,-6428
	ctx.r5.s64 = ctx.r9.s64 + -6428;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-6440
	ctx.r5.s64 = ctx.r8.s64 + -6440;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r7,-6456
	ctx.r5.s64 = ctx.r7.s64 + -6456;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r6,-6472
	ctx.r5.s64 = ctx.r6.s64 + -6472;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r5,-6484
	ctx.r5.s64 = ctx.r5.s64 + -6484;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r3,-6496
	ctx.r5.s64 = ctx.r3.s64 + -6496;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-6512
	ctx.r5.s64 = r11.s64 + -6512;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-6524
	ctx.r5.s64 = ctx.r10.s64 + -6524;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,-6540
	ctx.r5.s64 = ctx.r9.s64 + -6540;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-6556
	ctx.r5.s64 = ctx.r8.s64 + -6556;
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r7,-6572
	ctx.r5.s64 = ctx.r7.s64 + -6572;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r6,-6588
	ctx.r5.s64 = ctx.r6.s64 + -6588;
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r5,-6604
	ctx.r5.s64 = ctx.r5.s64 + -6604;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r3,-6620
	ctx.r5.s64 = ctx.r3.s64 + -6620;
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82496118
	sub_82496118(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r7,r11,-6636
	ctx.r7.s64 = r11.s64 + -6636;
	// addi r6,r10,-6652
	ctx.r6.s64 = ctx.r10.s64 + -6652;
	// addi r5,r9,-6668
	ctx.r5.s64 = ctx.r9.s64 + -6668;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r7,r8,-6688
	ctx.r7.s64 = ctx.r8.s64 + -6688;
	// addi r6,r6,-6708
	ctx.r6.s64 = ctx.r6.s64 + -6708;
	// addi r5,r5,-6728
	ctx.r5.s64 = ctx.r5.s64 + -6728;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r3,-6748
	ctx.r7.s64 = ctx.r3.s64 + -6748;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,-6768
	ctx.r6.s64 = r11.s64 + -6768;
	// addi r5,r10,-6788
	ctx.r5.s64 = ctx.r10.s64 + -6788;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r7,r9,-6808
	ctx.r7.s64 = ctx.r9.s64 + -6808;
	// addi r6,r8,-6828
	ctx.r6.s64 = ctx.r8.s64 + -6828;
	// addi r5,r5,-6848
	ctx.r5.s64 = ctx.r5.s64 + -6848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r7,r4,-6868
	ctx.r7.s64 = ctx.r4.s64 + -6868;
	// addi r6,r3,-6888
	ctx.r6.s64 = ctx.r3.s64 + -6888;
	// addi r5,r11,-6908
	ctx.r5.s64 = r11.s64 + -6908;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// addi r7,r10,-6928
	ctx.r7.s64 = ctx.r10.s64 + -6928;
	// addi r6,r9,-6948
	ctx.r6.s64 = ctx.r9.s64 + -6948;
	// addi r5,r8,-6968
	ctx.r5.s64 = ctx.r8.s64 + -6968;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// addi r7,r7,-6988
	ctx.r7.s64 = ctx.r7.s64 + -6988;
	// addi r6,r6,-7008
	ctx.r6.s64 = ctx.r6.s64 + -7008;
	// addi r5,r5,-7028
	ctx.r5.s64 = ctx.r5.s64 + -7028;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82496280
	sub_82496280(ctx, base);
	// stw r30,512(r31)
	PPC_STORE_U32(r31.u32 + 512, r30.u32);
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

__attribute__((alias("__imp__sub_82499874"))) PPC_WEAK_FUNC(sub_82499874);
PPC_FUNC_IMPL(__imp__sub_82499874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499878"))) PPC_WEAK_FUNC(sub_82499878);
PPC_FUNC_IMPL(__imp__sub_82499878) {
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
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82496148
	sub_82496148(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496130
	sub_82496130(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82499994"))) PPC_WEAK_FUNC(sub_82499994);
PPC_FUNC_IMPL(__imp__sub_82499994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499998"))) PPC_WEAK_FUNC(sub_82499998);
PPC_FUNC_IMPL(__imp__sub_82499998) {
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
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82496138
	sub_82496138(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x82496150
	sub_82496150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82499AB0"))) PPC_WEAK_FUNC(sub_82499AB0);
PPC_FUNC_IMPL(__imp__sub_82499AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499AB4"))) PPC_WEAK_FUNC(sub_82499AB4);
PPC_FUNC_IMPL(__imp__sub_82499AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499AB8"))) PPC_WEAK_FUNC(sub_82499AB8);
PPC_FUNC_IMPL(__imp__sub_82499AB8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// lfs f1,4932(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82499C18"))) PPC_WEAK_FUNC(sub_82499C18);
PPC_FUNC_IMPL(__imp__sub_82499C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499C1C"))) PPC_WEAK_FUNC(sub_82499C1C);
PPC_FUNC_IMPL(__imp__sub_82499C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499C20"))) PPC_WEAK_FUNC(sub_82499C20);
PPC_FUNC_IMPL(__imp__sub_82499C20) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-6268
	ctx.r10.s64 = r11.s64 + -6268;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82499878
	sub_82499878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824986f0
	sub_824986F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82499C60"))) PPC_WEAK_FUNC(sub_82499C60);
PPC_FUNC_IMPL(__imp__sub_82499C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499C64"))) PPC_WEAK_FUNC(sub_82499C64);
PPC_FUNC_IMPL(__imp__sub_82499C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499C68"))) PPC_WEAK_FUNC(sub_82499C68);
PPC_FUNC_IMPL(__imp__sub_82499C68) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82496680
	sub_82496680(ctx, base);
	// bl 0x82497b80
	sub_82497B80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82499C8C"))) PPC_WEAK_FUNC(sub_82499C8C);
PPC_FUNC_IMPL(__imp__sub_82499C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499C90"))) PPC_WEAK_FUNC(sub_82499C90);
PPC_FUNC_IMPL(__imp__sub_82499C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499C94"))) PPC_WEAK_FUNC(sub_82499C94);
PPC_FUNC_IMPL(__imp__sub_82499C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499C98"))) PPC_WEAK_FUNC(sub_82499C98);
PPC_FUNC_IMPL(__imp__sub_82499C98) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r30,16(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// lfs f31,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	f31.f64 = double(temp.f32);
	// lfs f1,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// lfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// lfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// lfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82499d28
	if (!cr6.lt) goto loc_82499D28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498630
	sub_82498630(ctx, base);
loc_82499D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82499D40"))) PPC_WEAK_FUNC(sub_82499D40);
PPC_FUNC_IMPL(__imp__sub_82499D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499D44"))) PPC_WEAK_FUNC(sub_82499D44);
PPC_FUNC_IMPL(__imp__sub_82499D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499D48"))) PPC_WEAK_FUNC(sub_82499D48);
PPC_FUNC_IMPL(__imp__sub_82499D48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6228
	ctx.r10.s64 = r11.s64 + -6228;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// li r11,107
	r11.s64 = 107;
loc_82499D74:
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82499d74
	if (!cr6.eq) goto loc_82499D74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498648
	sub_82498648(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,-6268
	ctx.r10.s64 = r11.s64 + -6268;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82499568
	sub_82499568(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,532(r31)
	PPC_STORE_U8(r31.u32 + 532, r11.u8);
	// stb r11,533(r31)
	PPC_STORE_U8(r31.u32 + 533, r11.u8);
	// stb r11,534(r31)
	PPC_STORE_U8(r31.u32 + 534, r11.u8);
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

__attribute__((alias("__imp__sub_82499DDC"))) PPC_WEAK_FUNC(sub_82499DDC);
PPC_FUNC_IMPL(__imp__sub_82499DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499DE0"))) PPC_WEAK_FUNC(sub_82499DE0);
PPC_FUNC_IMPL(__imp__sub_82499DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82499e24
	if (cr6.eq) goto loc_82499E24;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82499e24
	if (cr6.eq) goto loc_82499E24;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82499e24
	if (cr6.eq) goto loc_82499E24;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82499e24
	if (cr6.eq) goto loc_82499E24;
	// lwz r11,428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82499E24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499E2C"))) PPC_WEAK_FUNC(sub_82499E2C);
PPC_FUNC_IMPL(__imp__sub_82499E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499E30"))) PPC_WEAK_FUNC(sub_82499E30);
PPC_FUNC_IMPL(__imp__sub_82499E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
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
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaaf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,76
	r28.s64 = ctx.r3.s64 + 76;
	// lwz r29,16(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r27,r30,28
	r27.s64 = r30.s64 + 28;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r26,r30,64
	r26.s64 = r30.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fsel f29,f0,f1,f31
	f29.f64 = f0.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r25,r30,16
	r25.s64 = r30.s64 + 16;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// fsel f31,f13,f1,f31
	f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fsubs f12,f31,f29
	ctx.f12.f64 = double(float(f31.f64 - f29.f64));
	// fsel f28,f12,f31,f29
	f28.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : f29.f64;
	// blt cr6,0x8249a08c
	if (cr6.lt) goto loc_8249A08C;
	// beq cr6,0x82499fa0
	if (cr6.eq) goto loc_82499FA0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249a0ec
	if (!cr6.lt) goto loc_8249A0EC;
	// lis r31,-32254
	r31.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r25,r30,40
	r25.s64 = r30.s64 + 40;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82499f40
	if (!cr6.eq) goto loc_82499F40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// fcmpu cr6,f29,f30
	cr6.compare(f29.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// lfs f1,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_82499F40:
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lfs f1,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82499f84
	if (!cr6.eq) goto loc_82499F84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_82499F84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_82499FA0:
	// lis r31,-32254
	r31.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8249a02c
	if (!cr6.eq) goto loc_8249A02C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// fcmpu cr6,f29,f30
	cr6.compare(f29.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lfs f1,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_8249A02C:
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x8249a0d8
	if (!cr6.lt) goto loc_8249A0D8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lfs f1,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a070
	if (!cr6.eq) goto loc_8249A070;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_8249A070:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a0d8
	goto loc_8249A0D8;
loc_8249A08C:
	// lis r31,-32254
	r31.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A0D8:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f28
	ctx.f1.f64 = double(float(f0.f64 - f28.f64));
	// bl 0x82498630
	sub_82498630(ctx, base);
loc_8249A0EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_8249A0F8"))) PPC_WEAK_FUNC(sub_8249A0F8);
PPC_FUNC_IMPL(__imp__sub_8249A0F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8249A0FC"))) PPC_WEAK_FUNC(sub_8249A0FC);
PPC_FUNC_IMPL(__imp__sub_8249A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249A100"))) PPC_WEAK_FUNC(sub_8249A100);
PPC_FUNC_IMPL(__imp__sub_8249A100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eaaec
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,16(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lwz r19,28(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// lwz r18,336(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8249a18c
	if (!cr6.eq) goto loc_8249A18C;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8249a154
	if (cr6.eq) goto loc_8249A154;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8249a18c
	if (!cr6.eq) goto loc_8249A18C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249a16c
	if (!cr6.eq) goto loc_8249A16C;
loc_8249A154:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,44(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lfs f2,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a1a4
	goto loc_8249A1A4;
loc_8249A16C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8249a1a4
	if (!cr6.eq) goto loc_8249A1A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,44(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lfs f2,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a1a4
	goto loc_8249A1A4;
loc_8249A18C:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A1A4:
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lbz r21,0(r20)
	r21.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// fsel f28,f0,f1,f31
	f28.f64 = f0.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r25,r31,148
	r25.s64 = r31.s64 + 148;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fsel f29,f13,f1,f31
	f29.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fsubs f12,f29,f28
	ctx.f12.f64 = double(float(f29.f64 - f28.f64));
	// fsel f26,f12,f29,f28
	f26.f64 = ctx.f12.f64 >= 0.0 ? f29.f64 : f28.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r24,r31,112
	r24.s64 = r31.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r29,r31,172
	r29.s64 = r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsel f31,f11,f1,f31
	f31.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r28,r31,136
	r28.s64 = r31.s64 + 136;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f10,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 - f30.f64));
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fsel f30,f10,f1,f30
	f30.f64 = ctx.f10.f64 >= 0.0 ? ctx.f1.f64 : f30.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r26,r31,124
	r26.s64 = r31.s64 + 124;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f9,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 - f25.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lfs f27,-31316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f27.f64 = double(temp.f32);
	// fsel f0,f9,f1,f25
	f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : f25.f64;
	// fsubs f8,f0,f30
	ctx.f8.f64 = double(float(f0.f64 - f30.f64));
	// fsel f7,f8,f0,f30
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : f30.f64;
	// fsubs f6,f31,f7
	ctx.f6.f64 = double(float(f31.f64 - ctx.f7.f64));
	// fsel f5,f6,f31,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f31.f64 : ctx.f7.f64;
	// fsubs f4,f26,f5
	ctx.f4.f64 = double(float(f26.f64 - ctx.f5.f64));
	// fsel f26,f4,f26,f5
	f26.f64 = ctx.f4.f64 >= 0.0 ? f26.f64 : ctx.f5.f64;
	// blt cr6,0x8249a33c
	if (cr6.lt) goto loc_8249A33C;
	// beq cr6,0x8249a2e8
	if (cr6.eq) goto loc_8249A2E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249a398
	if (!cr6.lt) goto loc_8249A398;
	// fcmpu cr6,f31,f27
	cr6.compare(f31.f64, f27.f64);
	// bge cr6,0x8249a2b4
	if (!cr6.lt) goto loc_8249A2B4;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8249a2b4
	if (!cr6.lt) goto loc_8249A2B4;
	// fcmpu cr6,f29,f27
	cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x8249a2b4
	if (!cr6.lt) goto loc_8249A2B4;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r22,r29
	r22.u64 = r29.u64;
loc_8249A2B4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// b 0x8249a398
	goto loc_8249A398;
loc_8249A2E8:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f27.f64);
	// bge cr6,0x8249a308
	if (!cr6.lt) goto loc_8249A308;
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// bge cr6,0x8249a308
	if (!cr6.lt) goto loc_8249A308;
	// fcmpu cr6,f28,f27
	cr6.compare(f28.f64, f27.f64);
	// bge cr6,0x8249a308
	if (!cr6.lt) goto loc_8249A308;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
loc_8249A308:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// b 0x8249a398
	goto loc_8249A398;
loc_8249A33C:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8249a364
	if (!cr6.lt) goto loc_8249A364;
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// bge cr6,0x8249a364
	if (!cr6.lt) goto loc_8249A364;
	// fcmpu cr6,f29,f27
	cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x8249a364
	if (!cr6.lt) goto loc_8249A364;
	// fcmpu cr6,f28,f27
	cr6.compare(f28.f64, f27.f64);
	// bge cr6,0x8249a364
	if (!cr6.lt) goto loc_8249A364;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r22,r25
	r22.u64 = r25.u64;
loc_8249A364:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// li r21,0
	r21.s64 = 0;
loc_8249A398:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8249a464
	if (!cr6.eq) goto loc_8249A464;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249a464
	if (!cr6.eq) goto loc_8249A464;
	// lbz r11,4(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249a464
	if (!cr6.eq) goto loc_8249A464;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lfs f30,20940(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20940);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8249a408
	if (cr6.eq) goto loc_8249A408;
	// lfs f1,32(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8249a3fc
	if (!cr6.gt) goto loc_8249A3FC;
	// clrlwi r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249a3fc
	if (!cr6.eq) goto loc_8249A3FC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f2,-6280(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a408
	goto loc_8249A408;
loc_8249A3FC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A408:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8249a444
	if (cr6.eq) goto loc_8249A444;
	// lfs f1,40(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8249a438
	if (!cr6.gt) goto loc_8249A438;
	// clrlwi r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249a438
	if (!cr6.eq) goto loc_8249A438;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lfs f2,-6280(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// b 0x8249a444
	goto loc_8249A444;
loc_8249A438:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A444:
	// fsubs f1,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - f26.f64));
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8249a4ac
	if (!cr6.lt) goto loc_8249A4AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498630
	sub_82498630(ctx, base);
	// b 0x8249a4ac
	goto loc_8249A4AC;
loc_8249A464:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A4AC:
	// lbz r11,12(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a4d8
	if (!cr6.eq) goto loc_8249A4D8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82496578
	sub_82496578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
	// b 0x8249a4e4
	goto loc_8249A4E4;
loc_8249A4D8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f1,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A4E4:
	// lbz r11,16(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 16);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a510
	if (!cr6.eq) goto loc_8249A510;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82496578
	sub_82496578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
	// b 0x8249a51c
	goto loc_8249A51C;
loc_8249A510:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,-15528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15528);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249A51C:
	// lbz r11,4(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a5ac
	if (!cr6.eq) goto loc_8249A5AC;
	// lbz r11,9(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249a5ac
	if (!cr6.eq) goto loc_8249A5AC;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249a590
	if (cr6.lt) goto loc_8249A590;
	// beq cr6,0x8249a574
	if (cr6.eq) goto loc_8249A574;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bge cr6,0x8249a5a0
	if (!cr6.lt) goto loc_8249A5A0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6192
	ctx.r4.s64 = ctx.r10.s64 + -6192;
	// b 0x8249a5a8
	goto loc_8249A5A8;
loc_8249A574:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r10,-6204
	ctx.r4.s64 = ctx.r10.s64 + -6204;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8249a5a8
	goto loc_8249A5A8;
loc_8249A590:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8249A5A0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6216
	ctx.r4.s64 = ctx.r10.s64 + -6216;
loc_8249A5A8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249A5AC:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249a63c
	if (!cr6.eq) goto loc_8249A63C;
	// lbz r11,15(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 15);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a63c
	if (!cr6.eq) goto loc_8249A63C;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// addi r29,r31,196
	r29.s64 = r31.s64 + 196;
	// lfs f2,-6280(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsel f30,f0,f1,f30
	f30.f64 = f0.f64 >= 0.0 ? ctx.f1.f64 : f30.f64;
	// fsubs f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 - f30.f64));
	// bl 0x824961b8
	sub_824961B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// fsubs f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - f30.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-32364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32364);
	f0.f64 = double(temp.f32);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f1,f30
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f1.f64 : f30.f64;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fsel f9,f10,f10,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - f31.f64));
	// fsel f1,f8,f31,f9
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? f31.f64 : ctx.f9.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eab38
	// b 0x828e9440
	return;
loc_8249A63C:
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lfs f1,-6280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_8249A654"))) PPC_WEAK_FUNC(sub_8249A654);
PPC_FUNC_IMPL(__imp__sub_8249A654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8249A658"))) PPC_WEAK_FUNC(sub_8249A658);
PPC_FUNC_IMPL(__imp__sub_8249A658) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8249a700
	if (cr6.eq) goto loc_8249A700;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r11,-12536
	r31.s64 = r11.s64 + -12536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8249a700
	if (!cr6.eq) goto loc_8249A700;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,23456
	ctx.r4.s64 = ctx.r6.s64 + 23456;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249a700
	if (cr6.eq) goto loc_8249A700;
	// stb r29,534(r30)
	PPC_STORE_U8(r30.u32 + 534, r29.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249A700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8249A704"))) PPC_WEAK_FUNC(sub_8249A704);
PPC_FUNC_IMPL(__imp__sub_8249A704) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249A708"))) PPC_WEAK_FUNC(sub_8249A708);
PPC_FUNC_IMPL(__imp__sub_8249A708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-7140
	ctx.r4.s64 = ctx.r10.s64 + -7140;
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-25600(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f2,-11748(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11748);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-24324(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24324);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,6664(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6664);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82706710
	sub_82706710(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82497fd0
	sub_82497FD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-6556
	ctx.r4.s64 = ctx.r9.s64 + -6556;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249a658
	sub_8249A658(ctx, base);
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

__attribute__((alias("__imp__sub_8249A80C"))) PPC_WEAK_FUNC(sub_8249A80C);
PPC_FUNC_IMPL(__imp__sub_8249A80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249A810"))) PPC_WEAK_FUNC(sub_8249A810);
PPC_FUNC_IMPL(__imp__sub_8249A810) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8249a658
	sub_8249A658(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82497fd0
	sub_82497FD0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82499998
	sub_82499998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249A854"))) PPC_WEAK_FUNC(sub_8249A854);
PPC_FUNC_IMPL(__imp__sub_8249A854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249A858"))) PPC_WEAK_FUNC(sub_8249A858);
PPC_FUNC_IMPL(__imp__sub_8249A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,28(r4)
	r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r17,24(r4)
	r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r16,r11,-5776
	r16.s64 = r11.s64 + -5776;
	// lbz r7,24(r18)
	ctx.r7.u64 = PPC_LOAD_U8(r18.u32 + 24);
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lwz r31,336(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// addi r28,r10,-5788
	r28.s64 = ctx.r10.s64 + -5788;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x8249a8ec
	if (!cr6.eq) goto loc_8249A8EC;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249a8c8
	if (cr6.lt) goto loc_8249A8C8;
	// bne cr6,0x8249a8ec
	if (!cr6.eq) goto loc_8249A8EC;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// b 0x8249a8cc
	goto loc_8249A8CC;
loc_8249A8C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8249A8CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249A8EC:
	// lbz r9,25(r18)
	ctx.r9.u64 = PPC_LOAD_U8(r18.u32 + 25);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// addi r27,r11,-5800
	r27.s64 = r11.s64 + -5800;
	// addi r29,r10,-5812
	r29.s64 = ctx.r10.s64 + -5812;
	// bne cr6,0x8249a954
	if (!cr6.eq) goto loc_8249A954;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249a930
	if (cr6.lt) goto loc_8249A930;
	// bne cr6,0x8249a954
	if (!cr6.eq) goto loc_8249A954;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8249a934
	goto loc_8249A934;
loc_8249A930:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8249A934:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249A954:
	// lbz r11,26(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 26);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249a9b4
	if (!cr6.eq) goto loc_8249A9B4;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249a98c
	if (cr6.lt) goto loc_8249A98C;
	// bne cr6,0x8249a9b4
	if (!cr6.eq) goto loc_8249A9B4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5824
	ctx.r4.s64 = ctx.r10.s64 + -5824;
	// b 0x8249a994
	goto loc_8249A994;
loc_8249A98C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5836
	ctx.r4.s64 = ctx.r10.s64 + -5836;
loc_8249A994:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249A9B4:
	// lbz r11,27(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 27);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249aa14
	if (!cr6.eq) goto loc_8249AA14;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249a9ec
	if (cr6.lt) goto loc_8249A9EC;
	// bne cr6,0x8249aa14
	if (!cr6.eq) goto loc_8249AA14;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5848
	ctx.r4.s64 = ctx.r10.s64 + -5848;
	// b 0x8249a9f4
	goto loc_8249A9F4;
loc_8249A9EC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5860
	ctx.r4.s64 = ctx.r10.s64 + -5860;
loc_8249A9F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AA14:
	// lbz r11,20(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249aa48
	if (!cr6.eq) goto loc_8249AA48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-5872
	ctx.r4.s64 = ctx.r10.s64 + -5872;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AA48:
	// lbz r11,21(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249aa7c
	if (!cr6.eq) goto loc_8249AA7C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-5884
	ctx.r4.s64 = ctx.r10.s64 + -5884;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AA7C:
	// lbz r11,22(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 22);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// ori r30,r10,21846
	r30.u64 = ctx.r10.u64 | 21846;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249ab00
	if (!cr6.eq) goto loc_8249AB00;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// mulhw r11,r3,r30
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(r30.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249aad8
	if (cr6.lt) goto loc_8249AAD8;
	// beq cr6,0x8249aacc
	if (cr6.eq) goto loc_8249AACC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249ab00
	if (!cr6.lt) goto loc_8249AB00;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5900
	ctx.r4.s64 = ctx.r10.s64 + -5900;
	// b 0x8249aae0
	goto loc_8249AAE0;
loc_8249AACC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5916
	ctx.r4.s64 = ctx.r10.s64 + -5916;
	// b 0x8249aae0
	goto loc_8249AAE0;
loc_8249AAD8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5928
	ctx.r4.s64 = ctx.r10.s64 + -5928;
loc_8249AAE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AB00:
	// lbz r11,23(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 23);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249ab7c
	if (!cr6.eq) goto loc_8249AB7C;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// mulhw r11,r3,r30
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(r30.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249ab54
	if (cr6.lt) goto loc_8249AB54;
	// beq cr6,0x8249ab48
	if (cr6.eq) goto loc_8249AB48;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249ab7c
	if (!cr6.lt) goto loc_8249AB7C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5944
	ctx.r4.s64 = ctx.r10.s64 + -5944;
	// b 0x8249ab5c
	goto loc_8249AB5C;
loc_8249AB48:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5960
	ctx.r4.s64 = ctx.r10.s64 + -5960;
	// b 0x8249ab5c
	goto loc_8249AB5C;
loc_8249AB54:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5972
	ctx.r4.s64 = ctx.r10.s64 + -5972;
loc_8249AB5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AB7C:
	// lbz r3,7(r18)
	ctx.r3.u64 = PPC_LOAD_U8(r18.u32 + 7);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// addi r26,r11,-5984
	r26.s64 = r11.s64 + -5984;
	// addi r25,r10,-5996
	r25.s64 = ctx.r10.s64 + -5996;
	// addi r24,r9,-6008
	r24.s64 = ctx.r9.s64 + -6008;
	// addi r23,r8,-6020
	r23.s64 = ctx.r8.s64 + -6020;
	// addi r22,r7,-6032
	r22.s64 = ctx.r7.s64 + -6032;
	// addi r21,r6,-6044
	r21.s64 = ctx.r6.s64 + -6044;
	// addi r20,r5,-6056
	r20.s64 = ctx.r5.s64 + -6056;
	// addi r19,r4,-6068
	r19.s64 = ctx.r4.s64 + -6068;
	// bne cr6,0x8249acdc
	if (!cr6.eq) goto loc_8249ACDC;
	// lbz r11,1(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249acdc
	if (!cr6.eq) goto loc_8249ACDC;
	// lbz r11,4(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249acdc
	if (!cr6.eq) goto loc_8249ACDC;
	// lbz r11,3(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249acdc
	if (!cr6.eq) goto loc_8249ACDC;
	// lbz r11,2(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249acdc
	if (!cr6.eq) goto loc_8249ACDC;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249ac20
	if (cr6.lt) goto loc_8249AC20;
	// bne cr6,0x8249ac44
	if (!cr6.eq) goto loc_8249AC44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249ac24
	goto loc_8249AC24;
loc_8249AC20:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8249AC24:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AC44:
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8249acdc
	if (cr6.gt) goto loc_8249ACDC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249ac8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AC8C;
	// bdzf 4*cr6+eq,0x8249ac94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AC94;
	// bdzf 4*cr6+eq,0x8249ac9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AC9C;
	// bdzf 4*cr6+eq,0x8249aca4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249ACA4;
	// bdzf 4*cr6+eq,0x8249acac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249ACAC;
	// bdzf 4*cr6+eq,0x8249acb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249ACB4;
	// bne cr6,0x8249acbc
	if (!cr6.eq) goto loc_8249ACBC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249AC8C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249AC94:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249AC9C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249ACA4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249ACAC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249ACB4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x8249acc0
	goto loc_8249ACC0;
loc_8249ACBC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8249ACC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249ACDC:
	// lbz r11,3(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249acf4
	if (cr6.eq) goto loc_8249ACF4;
	// lbz r11,6(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249ad40
	if (!cr6.eq) goto loc_8249AD40;
loc_8249ACF4:
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249ad1c
	if (cr6.lt) goto loc_8249AD1C;
	// bne cr6,0x8249ad40
	if (!cr6.eq) goto loc_8249AD40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8249ad20
	goto loc_8249AD20;
loc_8249AD1C:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8249AD20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AD40:
	// lbz r11,4(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249ad64
	if (cr6.eq) goto loc_8249AD64;
	// lbz r11,2(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249ad64
	if (cr6.eq) goto loc_8249AD64;
	// lbz r11,5(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 5);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249ad8c
	if (!cr6.eq) goto loc_8249AD8C;
loc_8249AD64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-6080
	ctx.r4.s64 = ctx.r10.s64 + -6080;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AD8C:
	// lbz r7,1(r18)
	ctx.r7.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// addi r30,r11,-7124
	r30.s64 = r11.s64 + -7124;
	// addi r29,r10,-6096
	r29.s64 = ctx.r10.s64 + -6096;
	// addi r28,r9,-6108
	r28.s64 = ctx.r9.s64 + -6108;
	// addi r27,r8,-6120
	r27.s64 = ctx.r8.s64 + -6120;
	// bne cr6,0x8249ae20
	if (!cr6.eq) goto loc_8249AE20;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8249ae20
	if (cr6.gt) goto loc_8249AE20;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249adf0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249ADF0;
	// bdzf 4*cr6+eq,0x8249adf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249ADF8;
	// bne cr6,0x8249ae00
	if (!cr6.eq) goto loc_8249AE00;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8249ae04
	goto loc_8249AE04;
loc_8249ADF0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8249ae04
	goto loc_8249AE04;
loc_8249ADF8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8249ae04
	goto loc_8249AE04;
loc_8249AE00:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8249AE04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AE20:
	// lbz r11,8(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249aec8
	if (!cr6.eq) goto loc_8249AEC8;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8249aec8
	if (cr6.gt) goto loc_8249AEC8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249ae74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE74;
	// bdzf 4*cr6+eq,0x8249ae7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE7C;
	// bdzf 4*cr6+eq,0x8249ae84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE84;
	// bdzf 4*cr6+eq,0x8249ae8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE8C;
	// bdzf 4*cr6+eq,0x8249ae94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE94;
	// bdzf 4*cr6+eq,0x8249ae9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AE9C;
	// bne cr6,0x8249aea4
	if (!cr6.eq) goto loc_8249AEA4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE74:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE7C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE84:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE8C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE94:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AE9C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x8249aea8
	goto loc_8249AEA8;
loc_8249AEA4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8249AEA8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AEC8:
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249afb8
	if (!cr6.eq) goto loc_8249AFB8;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r11,-28087
	r11.s64 = -1840709632;
	// ori r10,r11,9363
	ctx.r10.u64 = r11.u64 | 9363;
	// mulhw r11,r3,r10
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// subf r11,r7,r3
	r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8249afb8
	if (cr6.gt) goto loc_8249AFB8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249af3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AF3C;
	// bdzf 4*cr6+eq,0x8249af50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AF50;
	// bdzf 4*cr6+eq,0x8249af5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AF5C;
	// bdzf 4*cr6+eq,0x8249af68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AF68;
	// bdzf 4*cr6+eq,0x8249af7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249AF7C;
	// bne cr6,0x8249af90
	if (!cr6.eq) goto loc_8249AF90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8249afa4
	goto loc_8249AFA4;
loc_8249AF3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8249afa4
	goto loc_8249AFA4;
loc_8249AF50:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6136
	ctx.r4.s64 = ctx.r10.s64 + -6136;
	// b 0x8249af98
	goto loc_8249AF98;
loc_8249AF5C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6148
	ctx.r4.s64 = ctx.r10.s64 + -6148;
	// b 0x8249af98
	goto loc_8249AF98;
loc_8249AF68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8249afa4
	goto loc_8249AFA4;
loc_8249AF7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8249afa4
	goto loc_8249AFA4;
loc_8249AF90:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6164
	ctx.r4.s64 = ctx.r10.s64 + -6164;
loc_8249AF98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8249AFA4:
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249AFB8:
	// lbz r11,2(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249afd0
	if (cr6.eq) goto loc_8249AFD0;
	// lbz r11,3(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b004
	if (!cr6.eq) goto loc_8249B004;
loc_8249AFD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-6180
	ctx.r4.s64 = ctx.r10.s64 + -6180;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8249a658
	sub_8249A658(ctx, base);
loc_8249B004:
	// lbz r11,2(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249b01c
	if (!cr6.eq) goto loc_8249B01C;
	// lbz r11,3(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b058
	if (cr6.eq) goto loc_8249B058;
loc_8249B01C:
	// lbz r11,4(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b058
	if (cr6.eq) goto loc_8249B058;
	// lwz r11,16(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8249b058
	if (!cr6.eq) goto loc_8249B058;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-6192
	ctx.r4.s64 = ctx.r10.s64 + -6192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249B058:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
}

__attribute__((alias("__imp__sub_8249B060"))) PPC_WEAK_FUNC(sub_8249B060);
PPC_FUNC_IMPL(__imp__sub_8249B060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_8249B064"))) PPC_WEAK_FUNC(sub_8249B064);
PPC_FUNC_IMPL(__imp__sub_8249B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249B068"))) PPC_WEAK_FUNC(sub_8249B068);
PPC_FUNC_IMPL(__imp__sub_8249B068) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r31,32(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,336(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8249b4b8
	if (cr6.gt) goto loc_8249B4B8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b1e8
	if (cr6.eq) goto loc_8249B1E8;
	// bdz 0x8249b2a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B2A4;
	// bdz 0x8249b3c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B3C4;
	// bdz 0x8249b484
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B484;
	// bdz 0x8249b4b8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B4B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// lfs f1,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496418
	sub_82496418(ctx, base);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8249b0f8
	if (cr6.eq) goto loc_8249B0F8;
	// li r11,0
	r11.s64 = 0;
loc_8249B0F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8249b4c8
	if (cr6.gt) goto loc_8249B4C8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249b388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B388;
	// bdzf 4*cr6+eq,0x8249b170
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B170;
	// bne cr6,0x8249b1ac
	if (!cr6.eq) goto loc_8249B1AC;
loc_8249B134:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7044
	ctx.r4.s64 = ctx.r10.s64 + -7044;
loc_8249B13C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8249B148:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B170:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-7076
	ctx.r4.s64 = ctx.r10.s64 + -7076;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B1AC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-7088
	ctx.r4.s64 = ctx.r10.s64 + -7088;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B1E8:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8249b210
	if (cr6.eq) goto loc_8249B210;
	// li r11,0
	r11.s64 = 0;
loc_8249B210:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8249b4c8
	if (cr6.gt) goto loc_8249B4C8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b134
	if (cr6.eq) goto loc_8249B134;
	// bdz 0x8249b250
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B250;
	// bdz 0x8249b25c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249B25C;
	// b 0x8249b268
	goto loc_8249B268;
loc_8249B250:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7076
	ctx.r4.s64 = ctx.r10.s64 + -7076;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B25C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7100
	ctx.r4.s64 = ctx.r10.s64 + -7100;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B268:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-7112
	ctx.r4.s64 = ctx.r10.s64 + -7112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B2A4:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8249b2cc
	if (cr6.eq) goto loc_8249B2CC;
	// li r11,0
	r11.s64 = 0;
loc_8249B2CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// addi r5,r9,-5692
	ctx.r5.s64 = ctx.r9.s64 + -5692;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r8,10922
	ctx.r8.s64 = 715784192;
	// ori r7,r8,43691
	ctx.r7.u64 = ctx.r8.u64 | 43691;
	// mulhw r11,r3,r7
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r3
	r11.s64 = ctx.r3.s64 - ctx.r5.s64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8249b4c8
	if (cr6.gt) goto loc_8249B4C8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249b364
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B364;
	// bdzf 4*cr6+eq,0x8249b370
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B370;
	// bdzf 4*cr6+eq,0x8249b1ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B1AC;
	// bdzf 4*cr6+eq,0x8249b37c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B37C;
	// bne cr6,0x8249b388
	if (!cr6.eq) goto loc_8249B388;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8249b148
	goto loc_8249B148;
loc_8249B364:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5700
	ctx.r4.s64 = ctx.r10.s64 + -5700;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B370:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5716
	ctx.r4.s64 = ctx.r10.s64 + -5716;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B37C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5728
	ctx.r4.s64 = ctx.r10.s64 + -5728;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B388:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-7060
	ctx.r4.s64 = ctx.r10.s64 + -7060;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B3C4:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8249b3ec
	if (cr6.eq) goto loc_8249B3EC;
	// li r11,0
	r11.s64 = 0;
loc_8249B3EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249b4c8
	if (!cr6.eq) goto loc_8249B4C8;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r11,21845
	r11.s64 = 1431633920;
	// ori r10,r11,21846
	ctx.r10.u64 = r11.u64 | 21846;
	// mulhw r11,r3,r10
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249b448
	if (cr6.lt) goto loc_8249B448;
	// beq cr6,0x8249b43c
	if (cr6.eq) goto loc_8249B43C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249b4c8
	if (!cr6.lt) goto loc_8249B4C8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5744
	ctx.r4.s64 = ctx.r10.s64 + -5744;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B43C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5752
	ctx.r4.s64 = ctx.r10.s64 + -5752;
	// b 0x8249b13c
	goto loc_8249B13C;
loc_8249B448:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r10,-5764
	ctx.r4.s64 = ctx.r10.s64 + -5764;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B484:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824965d8
	sub_824965D8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8249B4B8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// lfs f1,4932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B4C8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8249B4D8"))) PPC_WEAK_FUNC(sub_8249B4D8);
PPC_FUNC_IMPL(__imp__sub_8249B4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249B4DC"))) PPC_WEAK_FUNC(sub_8249B4DC);
PPC_FUNC_IMPL(__imp__sub_8249B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249B4E0"))) PPC_WEAK_FUNC(sub_8249B4E0);
PPC_FUNC_IMPL(__imp__sub_8249B4E0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,16(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r29,24(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r8,18(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 18);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r11,r11,3792
	r11.s64 = r11.s64 + 3792;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// bne cr6,0x8249b554
	if (!cr6.eq) goto loc_8249B554;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x82496578
	sub_82496578(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// b 0x8249b55c
	goto loc_8249B55C;
loc_8249B554:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249B55C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// addi r28,r11,-5452
	r28.s64 = r11.s64 + -5452;
	// lfs f30,4932(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4932);
	f30.f64 = double(temp.f32);
	// addi r27,r10,-5484
	r27.s64 = ctx.r10.s64 + -5484;
	// bne cr6,0x8249b884
	if (!cr6.eq) goto loc_8249B884;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8249b628
	if (!cr6.eq) goto loc_8249B628;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8249b5ec
	if (cr6.gt) goto loc_8249B5EC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249b5c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B5C0;
	// bdzf 4*cr6+eq,0x8249b5c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B5C8;
	// bdzf 4*cr6+eq,0x8249b5d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B5D0;
	// bdzf 4*cr6+eq,0x8249b5d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B5D8;
	// bne cr6,0x8249b5e0
	if (!cr6.eq) goto loc_8249B5E0;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// b 0x8249b5e4
	goto loc_8249B5E4;
loc_8249B5C0:
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// b 0x8249b5e4
	goto loc_8249B5E4;
loc_8249B5C8:
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// b 0x8249b5e4
	goto loc_8249B5E4;
loc_8249B5D0:
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// b 0x8249b5e4
	goto loc_8249B5E4;
loc_8249B5D8:
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// b 0x8249b5e4
	goto loc_8249B5E4;
loc_8249B5E0:
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
loc_8249B5E4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824965d8
	sub_824965D8(ctx, base);
loc_8249B5EC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b820
	if (cr6.eq) goto loc_8249B820;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x824983d0
	sub_824983D0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8249b820
	goto loc_8249B820;
loc_8249B628:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8249b820
	if (cr6.eq) goto loc_8249B820;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b820
	if (cr6.eq) goto loc_8249B820;
	// lbz r11,364(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b660
	if (cr6.eq) goto loc_8249B660;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5492
	ctx.r5.s64 = r11.s64 + -5492;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// b 0x8249b724
	goto loc_8249B724;
loc_8249B660:
	// lbz r11,396(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b688
	if (cr6.eq) goto loc_8249B688;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5500
	ctx.r5.s64 = r11.s64 + -5500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// b 0x8249b724
	goto loc_8249B724;
loc_8249B688:
	// lbz r11,428(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b6b0
	if (cr6.eq) goto loc_8249B6B0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5508
	ctx.r5.s64 = r11.s64 + -5508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// b 0x8249b724
	goto loc_8249B724;
loc_8249B6B0:
	// lbz r11,460(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b6d8
	if (cr6.eq) goto loc_8249B6D8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5516
	ctx.r5.s64 = r11.s64 + -5516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// b 0x8249b724
	goto loc_8249B724;
loc_8249B6D8:
	// lbz r11,492(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 492);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b700
	if (cr6.eq) goto loc_8249B700;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5524
	ctx.r5.s64 = r11.s64 + -5524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// b 0x8249b724
	goto loc_8249B724;
loc_8249B700:
	// lbz r11,524(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249b72c
	if (cr6.eq) goto loc_8249B72C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,-5532
	ctx.r5.s64 = r11.s64 + -5532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
loc_8249B724:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824964b8
	sub_824964B8(ctx, base);
loc_8249B72C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8249b820
	if (cr6.gt) goto loc_8249B820;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249b778
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B778;
	// bdzf 4*cr6+eq,0x8249b798
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B798;
	// bdzf 4*cr6+eq,0x8249b7b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B7B8;
	// bdzf 4*cr6+eq,0x8249b7d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249B7D8;
	// bne cr6,0x8249b7f8
	if (!cr6.eq) goto loc_8249B7F8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5556
	ctx.r5.s64 = r11.s64 + -5556;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// b 0x8249b814
	goto loc_8249B814;
loc_8249B778:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5580
	ctx.r5.s64 = r11.s64 + -5580;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// b 0x8249b814
	goto loc_8249B814;
loc_8249B798:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5604
	ctx.r5.s64 = r11.s64 + -5604;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// b 0x8249b814
	goto loc_8249B814;
loc_8249B7B8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5628
	ctx.r5.s64 = r11.s64 + -5628;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// b 0x8249b814
	goto loc_8249B814;
loc_8249B7D8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5652
	ctx.r5.s64 = r11.s64 + -5652;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// b 0x8249b814
	goto loc_8249B814;
loc_8249B7F8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5676
	ctx.r5.s64 = r11.s64 + -5676;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
loc_8249B814:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82496348
	sub_82496348(ctx, base);
loc_8249B820:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b848
	if (cr6.eq) goto loc_8249B848;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82499ab8
	sub_82499AB8(ctx, base);
	// b 0x8249b8a0
	goto loc_8249B8A0;
loc_8249B848:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// ble cr6,0x8249b8a0
	if (!cr6.gt) goto loc_8249B8A0;
	// addi r30,r31,244
	r30.s64 = r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82496260
	sub_82496260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x82498630
	sub_82498630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f2,3656(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3656);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82496578
	sub_82496578(ctx, base);
	// b 0x8249b8a0
	goto loc_8249B8A0;
loc_8249B884:
	// lbz r11,1(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249b8a0
	if (!cr6.eq) goto loc_8249B8A0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// lfs f1,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82496208
	sub_82496208(ctx, base);
loc_8249B8A0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8249b8b8
	if (cr6.eq) goto loc_8249B8B8;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B8B8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8249b8d0
	if (cr6.eq) goto loc_8249B8D0;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B8D0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8249b8e8
	if (cr6.eq) goto loc_8249B8E8;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B8E8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8249b900
	if (cr6.eq) goto loc_8249B900;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B900:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8249b918
	if (cr6.eq) goto loc_8249B918;
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B918:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8249b930
	if (cr6.eq) goto loc_8249B930;
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82496418
	sub_82496418(ctx, base);
loc_8249B930:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249b95c
	if (cr6.eq) goto loc_8249B95C;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8249b95c
	if (!cr6.eq) goto loc_8249B95C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x824983d0
	sub_824983D0(ctx, base);
loc_8249B95C:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_8249B974"))) PPC_WEAK_FUNC(sub_8249B974);
PPC_FUNC_IMPL(__imp__sub_8249B974) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249B978"))) PPC_WEAK_FUNC(sub_8249B978);
PPC_FUNC_IMPL(__imp__sub_8249B978) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,36(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,244(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f10,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(f0.f64 - ctx.f10.f64));
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,244(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82347408
	sub_82347408(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8249bb7c
	if (cr6.gt) goto loc_8249BB7C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249bb54
	if (cr6.eq) goto loc_8249BB54;
	// bdz 0x8249ba68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249BA68;
	// bdz 0x8249babc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8249BABC;
	// b 0x8249bb10
	goto loc_8249BB10;
loc_8249BA68:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,-6280(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x827071a0
	sub_827071A0(ctx, base);
	// lbz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 532);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249bb7c
	if (!cr6.eq) goto loc_8249BB7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827069e8
	sub_827069E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r11,532(r31)
	PPC_STORE_U8(r31.u32 + 532, r11.u8);
	// stb r10,533(r31)
	PPC_STORE_U8(r31.u32 + 533, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8249BABC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,-6280(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x827071a0
	sub_827071A0(ctx, base);
	// lbz r10,533(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 533);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249bb7c
	if (!cr6.eq) goto loc_8249BB7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827069e8
	sub_827069E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r11,533(r31)
	PPC_STORE_U8(r31.u32 + 533, r11.u8);
	// stb r10,532(r31)
	PPC_STORE_U8(r31.u32 + 532, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8249BB10:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,532(r31)
	PPC_STORE_U8(r31.u32 + 532, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,533(r31)
	PPC_STORE_U8(r31.u32 + 533, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-6280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x827071a0
	sub_827071A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827069e8
	sub_827069E8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8249BB54:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,532(r31)
	PPC_STORE_U8(r31.u32 + 532, r11.u8);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stb r11,533(r31)
	PPC_STORE_U8(r31.u32 + 533, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,-6280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6280);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827071a0
	sub_827071A0(ctx, base);
loc_8249BB7C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249BB88"))) PPC_WEAK_FUNC(sub_8249BB88);
PPC_FUNC_IMPL(__imp__sub_8249BB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249BB8C"))) PPC_WEAK_FUNC(sub_8249BB8C);
PPC_FUNC_IMPL(__imp__sub_8249BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249BB90"))) PPC_WEAK_FUNC(sub_8249BB90);
PPC_FUNC_IMPL(__imp__sub_8249BB90) {
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
	// lbz r11,534(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 534);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249bbc0
	if (!cr6.eq) goto loc_8249BBC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249a658
	sub_8249A658(ctx, base);
loc_8249BBC0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r31,8(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// lwz r11,19264(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19264);
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8249bc10
	if (cr6.eq) goto loc_8249BC10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249bc14
	if (!cr6.eq) goto loc_8249BC14;
loc_8249BC10:
	// li r11,0
	r11.s64 = 0;
loc_8249BC14:
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
	// beq cr6,0x8249bc60
	if (cr6.eq) goto loc_8249BC60;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249bc60
	if (!cr6.eq) goto loc_8249BC60;
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
loc_8249BC60:
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

__attribute__((alias("__imp__sub_8249BC74"))) PPC_WEAK_FUNC(sub_8249BC74);
PPC_FUNC_IMPL(__imp__sub_8249BC74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249BC78"))) PPC_WEAK_FUNC(sub_8249BC78);
PPC_FUNC_IMPL(__imp__sub_8249BC78) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,28(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r11,10(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 10);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249bcb0
	if (cr6.eq) goto loc_8249BCB0;
	// lbz r11,9(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 9);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249bcb0
	if (cr6.eq) goto loc_8249BCB0;
	// lbz r11,11(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 11);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
loc_8249BCB0:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8249bccc
	if (cr6.eq) goto loc_8249BCCC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249bcd0
	if (!cr6.eq) goto loc_8249BCD0;
loc_8249BCCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249BCD0:
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249c298
	if (cr6.eq) goto loc_8249C298;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,22424
	ctx.r8.s64 = ctx.r10.s64 + 22424;
	// addi r3,r9,-5172
	ctx.r3.s64 = ctx.r9.s64 + -5172;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x822bdee0
	sub_822BDEE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r30,5381
	r30.s64 = 5381;
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249bd5c
	if (cr6.eq) goto loc_8249BD5C;
loc_8249BD40:
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8249bd40
	if (!cr6.eq) goto loc_8249BD40;
loc_8249BD5C:
	// lbz r9,11(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 11);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// addi r29,r11,-5196
	r29.s64 = r11.s64 + -5196;
	// addi r28,r10,-5220
	r28.s64 = ctx.r10.s64 + -5220;
	// bne cr6,0x8249bdd0
	if (!cr6.eq) goto loc_8249BDD0;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249bdac
	if (cr6.eq) goto loc_8249BDAC;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249bdd0
	if (!cr6.eq) goto loc_8249BDD0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8249bdb0
	goto loc_8249BDB0;
loc_8249BDAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8249BDB0:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249BDD0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-5224
	ctx.r9.s64 = ctx.r10.s64 + -5224;
	// li r10,97
	ctx.r10.s64 = 97;
loc_8249BDE0:
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
	// bne cr6,0x8249bde0
	if (!cr6.eq) goto loc_8249BDE0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8249c024
	if (!cr6.eq) goto loc_8249C024;
	// lbz r11,10(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 10);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r31,r10,26215
	r31.u64 = ctx.r10.u64 | 26215;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249bf38
	if (!cr6.eq) goto loc_8249BF38;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249bec4
	if (cr6.eq) goto loc_8249BEC4;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249bf38
	if (!cr6.eq) goto loc_8249BF38;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// mulhw r11,r3,r31
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(r31.s32)) >> 32;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8249bf38
	if (cr6.gt) goto loc_8249BF38;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249bea0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BEA0;
	// bdzf 4*cr6+eq,0x8249beac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BEAC;
	// bdzf 4*cr6+eq,0x8249beb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BEB8;
	// bne cr6,0x8249bf10
	if (!cr6.eq) goto loc_8249BF10;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8249bf2c
	goto loc_8249BF2C;
loc_8249BEA0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5248
	ctx.r4.s64 = ctx.r10.s64 + -5248;
	// b 0x8249bf18
	goto loc_8249BF18;
loc_8249BEAC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6164
	ctx.r4.s64 = ctx.r10.s64 + -6164;
	// b 0x8249bf18
	goto loc_8249BF18;
loc_8249BEB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6148
	ctx.r4.s64 = ctx.r10.s64 + -6148;
	// b 0x8249bf18
	goto loc_8249BF18;
loc_8249BEC4:
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8249bf38
	if (cr6.gt) goto loc_8249BF38;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249beac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BEAC;
	// bdzf 4*cr6+eq,0x8249beb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BEB8;
	// bne cr6,0x8249bf10
	if (!cr6.eq) goto loc_8249BF10;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8249bf2c
	goto loc_8249BF2C;
loc_8249BF10:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-6120
	ctx.r4.s64 = ctx.r10.s64 + -6120;
loc_8249BF18:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8249BF2C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249BF38:
	// lbz r11,9(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 9);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249bfd4
	if (cr6.eq) goto loc_8249BFD4;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// mulhw r11,r3,r31
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(r31.s32)) >> 32;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8249c298
	if (cr6.gt) goto loc_8249C298;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8249c264
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249C264;
	// bdzf 4*cr6+eq,0x8249bfbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BFBC;
	// bdzf 4*cr6+eq,0x8249bfc8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249BFC8;
	// bne cr6,0x8249c16c
	if (!cr6.eq) goto loc_8249C16C;
loc_8249BFB0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5268
	ctx.r4.s64 = ctx.r10.s64 + -5268;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249BFBC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5288
	ctx.r4.s64 = ctx.r10.s64 + -5288;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249BFC8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5308
	ctx.r4.s64 = ctx.r10.s64 + -5308;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249BFD4:
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r11,21845
	r11.s64 = 1431633920;
	// ori r10,r11,21846
	ctx.r10.u64 = r11.u64 | 21846;
	// mulhw r11,r3,r10
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249c270
	if (cr6.lt) goto loc_8249C270;
	// beq cr6,0x8249c018
	if (cr6.eq) goto loc_8249C018;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249c298
	if (!cr6.lt) goto loc_8249C298;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5328
	ctx.r4.s64 = ctx.r10.s64 + -5328;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249C018:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5348
	ctx.r4.s64 = ctx.r10.s64 + -5348;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249C024:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-5356
	ctx.r9.s64 = ctx.r10.s64 + -5356;
	// li r10,102
	ctx.r10.s64 = 102;
loc_8249C034:
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
	// bne cr6,0x8249c034
	if (!cr6.eq) goto loc_8249C034;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8249c1a4
	if (!cr6.eq) goto loc_8249C1A4;
	// lbz r11,10(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 10);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c0fc
	if (!cr6.eq) goto loc_8249C0FC;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249c0d8
	if (cr6.eq) goto loc_8249C0D8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249c0fc
	if (!cr6.eq) goto loc_8249C0FC;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249c0d0
	if (cr6.lt) goto loc_8249C0D0;
	// bne cr6,0x8249c0fc
	if (!cr6.eq) goto loc_8249C0FC;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5248
	ctx.r4.s64 = ctx.r10.s64 + -5248;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x8249c0f0
	goto loc_8249C0F0;
loc_8249C0D0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8249c0dc
	goto loc_8249C0DC;
loc_8249C0D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8249C0DC:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8249C0F0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249C0FC:
	// lbz r11,9(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 9);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249c178
	if (cr6.eq) goto loc_8249C178;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r11,21845
	r11.s64 = 1431633920;
	// ori r10,r11,21846
	ctx.r10.u64 = r11.u64 | 21846;
	// mulhw r11,r3,r10
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249bfbc
	if (cr6.lt) goto loc_8249BFBC;
	// beq cr6,0x8249bfc8
	if (cr6.eq) goto loc_8249BFC8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8249c298
	if (!cr6.lt) goto loc_8249C298;
loc_8249C16C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5376
	ctx.r4.s64 = ctx.r10.s64 + -5376;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249C178:
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249c018
	if (cr6.lt) goto loc_8249C018;
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5328
	ctx.r4.s64 = ctx.r10.s64 + -5328;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249C1A4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-5384
	ctx.r9.s64 = ctx.r10.s64 + -5384;
	// li r10,98
	ctx.r10.s64 = 98;
loc_8249C1B4:
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
	// bne cr6,0x8249c1b4
	if (!cr6.eq) goto loc_8249C1B4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// lbz r11,10(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 10);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c20c
	if (!cr6.eq) goto loc_8249C20C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-5400
	ctx.r4.s64 = ctx.r10.s64 + -5400;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249C20C:
	// lbz r11,9(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 9);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8249c270
	if (cr6.eq) goto loc_8249C270;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8249bfb0
	if (cr6.lt) goto loc_8249BFB0;
	// bne cr6,0x8249c298
	if (!cr6.eq) goto loc_8249C298;
loc_8249C264:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5420
	ctx.r4.s64 = ctx.r10.s64 + -5420;
	// b 0x8249c278
	goto loc_8249C278;
loc_8249C270:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5440
	ctx.r4.s64 = ctx.r10.s64 + -5440;
loc_8249C278:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249C298:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8249C29C"))) PPC_WEAK_FUNC(sub_8249C29C);
PPC_FUNC_IMPL(__imp__sub_8249C29C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8249C2A0"))) PPC_WEAK_FUNC(sub_8249C2A0);
PPC_FUNC_IMPL(__imp__sub_8249C2A0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8249c37c
	if (!cr6.eq) goto loc_8249C37C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8249c364
	if (!cr6.eq) goto loc_8249C364;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8249c364
	if (!cr6.eq) goto loc_8249C364;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82499e30
	sub_82499E30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249a100
	sub_8249A100(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249c34c
	if (!cr6.eq) goto loc_8249C34C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249a858
	sub_8249A858(ctx, base);
loc_8249C34C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249b068
	sub_8249B068(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249bc78
	sub_8249BC78(ctx, base);
loc_8249C364:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249b4e0
	sub_8249B4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249b978
	sub_8249B978(ctx, base);
loc_8249C37C:
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

__attribute__((alias("__imp__sub_8249C390"))) PPC_WEAK_FUNC(sub_8249C390);
PPC_FUNC_IMPL(__imp__sub_8249C390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C394"))) PPC_WEAK_FUNC(sub_8249C394);
PPC_FUNC_IMPL(__imp__sub_8249C394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C398"))) PPC_WEAK_FUNC(sub_8249C398);
PPC_FUNC_IMPL(__imp__sub_8249C398) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-6268
	ctx.r10.s64 = r11.s64 + -6268;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82499878
	sub_82499878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824986f0
	sub_824986F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249c3e8
	if (cr6.eq) goto loc_8249C3E8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249C3E8:
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

__attribute__((alias("__imp__sub_8249C3FC"))) PPC_WEAK_FUNC(sub_8249C3FC);
PPC_FUNC_IMPL(__imp__sub_8249C3FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C400"))) PPC_WEAK_FUNC(sub_8249C400);
PPC_FUNC_IMPL(__imp__sub_8249C400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r10,-5060
	ctx.r9.s64 = ctx.r10.s64 + -5060;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
}

__attribute__((alias("__imp__sub_8249C434"))) PPC_WEAK_FUNC(sub_8249C434);
PPC_FUNC_IMPL(__imp__sub_8249C434) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C438"))) PPC_WEAK_FUNC(sub_8249C438);
PPC_FUNC_IMPL(__imp__sub_8249C438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-5060
	ctx.r10.s64 = r11.s64 + -5060;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C448"))) PPC_WEAK_FUNC(sub_8249C448);
PPC_FUNC_IMPL(__imp__sub_8249C448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,-5132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	f0.f64 = double(temp.f32);
	// lfs f12,-5120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,-5128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f12,-5132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-5120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-5108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C4A0"))) PPC_WEAK_FUNC(sub_8249C4A0);
PPC_FUNC_IMPL(__imp__sub_8249C4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f3,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C534"))) PPC_WEAK_FUNC(sub_8249C534);
PPC_FUNC_IMPL(__imp__sub_8249C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C538"))) PPC_WEAK_FUNC(sub_8249C538);
PPC_FUNC_IMPL(__imp__sub_8249C538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f0,-5132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	f0.f64 = double(temp.f32);
	// lfs f12,-5120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,-5128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f12,-5132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-5120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-5108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,-5132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	f0.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f0,-5128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5128);
	f0.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
	// lfs f0,-5132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5132);
	f0.f64 = double(temp.f32);
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * f0.f64));
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f0,-5120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5120);
	f0.f64 = double(temp.f32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,-5108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5108);
	f0.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * f0.f64));
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f12
	f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f5,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f3,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f8,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
}

__attribute__((alias("__imp__sub_8249C694"))) PPC_WEAK_FUNC(sub_8249C694);
PPC_FUNC_IMPL(__imp__sub_8249C694) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249C698"))) PPC_WEAK_FUNC(sub_8249C698);
PPC_FUNC_IMPL(__imp__sub_8249C698) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r10,-4884
	ctx.r3.s64 = ctx.r10.s64 + -4884;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249c728
	if (cr6.eq) goto loc_8249C728;
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
	// beq cr6,0x8249c728
	if (cr6.eq) goto loc_8249C728;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c72c
	if (!cr6.eq) goto loc_8249C72C;
loc_8249C728:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C72C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-4896
	ctx.r3.s64 = r11.s64 + -4896;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c7a4
	if (cr6.eq) goto loc_8249C7A4;
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
	// beq cr6,0x8249c7a4
	if (cr6.eq) goto loc_8249C7A4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c7a8
	if (!cr6.eq) goto loc_8249C7A8;
loc_8249C7A4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C7A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-4920
	ctx.r3.s64 = r11.s64 + -4920;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c820
	if (cr6.eq) goto loc_8249C820;
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
	// beq cr6,0x8249c820
	if (cr6.eq) goto loc_8249C820;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c824
	if (!cr6.eq) goto loc_8249C824;
loc_8249C820:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C824:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-4936
	ctx.r3.s64 = r11.s64 + -4936;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c89c
	if (cr6.eq) goto loc_8249C89C;
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
	// beq cr6,0x8249c89c
	if (cr6.eq) goto loc_8249C89C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c8a0
	if (!cr6.eq) goto loc_8249C8A0;
loc_8249C89C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C8A0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-4952
	ctx.r3.s64 = r11.s64 + -4952;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c918
	if (cr6.eq) goto loc_8249C918;
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
	// beq cr6,0x8249c918
	if (cr6.eq) goto loc_8249C918;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c91c
	if (!cr6.eq) goto loc_8249C91C;
loc_8249C918:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C91C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-4984
	ctx.r3.s64 = r11.s64 + -4984;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c994
	if (cr6.eq) goto loc_8249C994;
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
	// beq cr6,0x8249c994
	if (cr6.eq) goto loc_8249C994;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249c998
	if (!cr6.eq) goto loc_8249C998;
loc_8249C994:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249C998:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-5016
	ctx.r3.s64 = r11.s64 + -5016;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249ca10
	if (cr6.eq) goto loc_8249CA10;
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
	// beq cr6,0x8249ca10
	if (cr6.eq) goto loc_8249CA10;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249ca14
	if (!cr6.eq) goto loc_8249CA14;
loc_8249CA10:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249CA14:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-5028
	ctx.r3.s64 = r11.s64 + -5028;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249ca8c
	if (cr6.eq) goto loc_8249CA8C;
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
	// beq cr6,0x8249ca8c
	if (cr6.eq) goto loc_8249CA8C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249ca90
	if (!cr6.eq) goto loc_8249CA90;
loc_8249CA8C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249CA90:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249cb04
	if (cr6.eq) goto loc_8249CB04;
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
	// beq cr6,0x8249cb04
	if (cr6.eq) goto loc_8249CB04;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249cb08
	if (!cr6.eq) goto loc_8249CB08;
loc_8249CB04:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_8249CB08:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8249CB30"))) PPC_WEAK_FUNC(sub_8249CB30);
PPC_FUNC_IMPL(__imp__sub_8249CB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CB34"))) PPC_WEAK_FUNC(sub_8249CB34);
PPC_FUNC_IMPL(__imp__sub_8249CB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CB38"))) PPC_WEAK_FUNC(sub_8249CB38);
PPC_FUNC_IMPL(__imp__sub_8249CB38) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-5060
	ctx.r9.s64 = r11.s64 + -5060;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8249cb6c
	if (cr6.eq) goto loc_8249CB6C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249CB6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249CB7C"))) PPC_WEAK_FUNC(sub_8249CB7C);
PPC_FUNC_IMPL(__imp__sub_8249CB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CB80"))) PPC_WEAK_FUNC(sub_8249CB80);
PPC_FUNC_IMPL(__imp__sub_8249CB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
}

__attribute__((alias("__imp__sub_8249CB84"))) PPC_WEAK_FUNC(sub_8249CB84);
PPC_FUNC_IMPL(__imp__sub_8249CB84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CB88"))) PPC_WEAK_FUNC(sub_8249CB88);
PPC_FUNC_IMPL(__imp__sub_8249CB88) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249cbd4
	if (cr6.eq) goto loc_8249CBD4;
loc_8249CBBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8249cbd4
	if (cr6.eq) goto loc_8249CBD4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8249cbbc
	if (!cr6.eq) goto loc_8249CBBC;
loc_8249CBD4:
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

__attribute__((alias("__imp__sub_8249CBE8"))) PPC_WEAK_FUNC(sub_8249CBE8);
PPC_FUNC_IMPL(__imp__sub_8249CBE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CBEC"))) PPC_WEAK_FUNC(sub_8249CBEC);
PPC_FUNC_IMPL(__imp__sub_8249CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CBF0"))) PPC_WEAK_FUNC(sub_8249CBF0);
PPC_FUNC_IMPL(__imp__sub_8249CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249cc2c
	if (cr6.eq) goto loc_8249CC2C;
loc_8249CC14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8249cc2c
	if (cr6.eq) goto loc_8249CC2C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8249cc14
	if (!cr6.eq) goto loc_8249CC14;
loc_8249CC2C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8249CC30"))) PPC_WEAK_FUNC(sub_8249CC30);
PPC_FUNC_IMPL(__imp__sub_8249CC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82580f78
	sub_82580F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249CC34"))) PPC_WEAK_FUNC(sub_8249CC34);
PPC_FUNC_IMPL(__imp__sub_8249CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CC38"))) PPC_WEAK_FUNC(sub_8249CC38);
PPC_FUNC_IMPL(__imp__sub_8249CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8249CC44"))) PPC_WEAK_FUNC(sub_8249CC44);
PPC_FUNC_IMPL(__imp__sub_8249CC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CC48"))) PPC_WEAK_FUNC(sub_8249CC48);
PPC_FUNC_IMPL(__imp__sub_8249CC48) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-4868
	ctx.r10.s64 = r11.s64 + -4868;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82481a40
	sub_82481A40(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249CC88"))) PPC_WEAK_FUNC(sub_8249CC88);
PPC_FUNC_IMPL(__imp__sub_8249CC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CC8C"))) PPC_WEAK_FUNC(sub_8249CC8C);
PPC_FUNC_IMPL(__imp__sub_8249CC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CC90"))) PPC_WEAK_FUNC(sub_8249CC90);
PPC_FUNC_IMPL(__imp__sub_8249CC90) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r8,6656
	ctx.r5.s64 = ctx.r8.s64 + 6656;
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r7,6644
	ctx.r8.s64 = ctx.r7.s64 + 6644;
	// lwz r10,24192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8249cd78
	if (cr6.eq) goto loc_8249CD78;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fadds f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fadds f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fadds f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,12(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_8249CD78:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8249CDA4"))) PPC_WEAK_FUNC(sub_8249CDA4);
PPC_FUNC_IMPL(__imp__sub_8249CDA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249CDA8"))) PPC_WEAK_FUNC(sub_8249CDA8);
PPC_FUNC_IMPL(__imp__sub_8249CDA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-4868
	ctx.r10.s64 = r11.s64 + -4868;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// addi r7,r9,-14316
	ctx.r7.s64 = ctx.r9.s64 + -14316;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// addi r3,r4,-4832
	ctx.r3.s64 = ctx.r4.s64 + -4832;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,-14120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8249ce38
	if (cr6.eq) goto loc_8249CE38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249ce3c
	if (!cr6.eq) goto loc_8249CE3C;
loc_8249CE38:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8249CE3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// li r11,19
	r11.s64 = 19;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r5,r9,-4852
	ctx.r5.s64 = ctx.r9.s64 + -4852;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,18432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249cec8
	if (cr6.eq) goto loc_8249CEC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8249CEC8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-4864
	ctx.r3.s64 = r11.s64 + -4864;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249cf28
	if (cr6.eq) goto loc_8249CF28;
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
	// beq cr6,0x8249cf28
	if (cr6.eq) goto loc_8249CF28;
	// bl 0x822b0920
	sub_822B0920(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249cf2c
	if (!cr6.eq) goto loc_8249CF2C;
loc_8249CF28:
	// bl 0x822b0720
	sub_822B0720(ctx, base);
loc_8249CF2C:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8249CF40"))) PPC_WEAK_FUNC(sub_8249CF40);
PPC_FUNC_IMPL(__imp__sub_8249CF40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249CF44"))) PPC_WEAK_FUNC(sub_8249CF44);
PPC_FUNC_IMPL(__imp__sub_8249CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CF48"))) PPC_WEAK_FUNC(sub_8249CF48);
PPC_FUNC_IMPL(__imp__sub_8249CF48) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-4868
	ctx.r10.s64 = r11.s64 + -4868;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82481a40
	sub_82481A40(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249cf98
	if (cr6.eq) goto loc_8249CF98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249CF98:
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

__attribute__((alias("__imp__sub_8249CFAC"))) PPC_WEAK_FUNC(sub_8249CFAC);
PPC_FUNC_IMPL(__imp__sub_8249CFAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CFB0"))) PPC_WEAK_FUNC(sub_8249CFB0);
PPC_FUNC_IMPL(__imp__sub_8249CFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lfs f1,-13384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13384);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_8249CFB8"))) PPC_WEAK_FUNC(sub_8249CFB8);
PPC_FUNC_IMPL(__imp__sub_8249CFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249CFBC"))) PPC_WEAK_FUNC(sub_8249CFBC);
PPC_FUNC_IMPL(__imp__sub_8249CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CFC0"))) PPC_WEAK_FUNC(sub_8249CFC0);
PPC_FUNC_IMPL(__imp__sub_8249CFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r11,604
	ctx.r3.s64 = r11.s64 + 604;
	// lfs f1,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824a0fb8
	sub_824A0FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249CFD4"))) PPC_WEAK_FUNC(sub_8249CFD4);
PPC_FUNC_IMPL(__imp__sub_8249CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CFD8"))) PPC_WEAK_FUNC(sub_8249CFD8);
PPC_FUNC_IMPL(__imp__sub_8249CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r11,636
	ctx.r6.s64 = r11.s64 + 636;
	// addi r5,r11,604
	ctx.r5.s64 = r11.s64 + 604;
	// lbz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8249D004"))) PPC_WEAK_FUNC(sub_8249D004);
PPC_FUNC_IMPL(__imp__sub_8249D004) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8249D008"))) PPC_WEAK_FUNC(sub_8249D008);
PPC_FUNC_IMPL(__imp__sub_8249D008) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-4808
	ctx.r10.s64 = r11.s64 + -4808;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8249d054
	if (cr6.eq) goto loc_8249D054;
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
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8249D054:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249d078
	if (cr6.eq) goto loc_8249D078;
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
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8249D078:
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

__attribute__((alias("__imp__sub_8249D08C"))) PPC_WEAK_FUNC(sub_8249D08C);
PPC_FUNC_IMPL(__imp__sub_8249D08C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D090"))) PPC_WEAK_FUNC(sub_8249D090);
PPC_FUNC_IMPL(__imp__sub_8249D090) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-4808
	ctx.r10.s64 = r11.s64 + -4808;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x824a0248
	sub_824A0248(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,2
	r28.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r29,r10,-4804
	r29.s64 = ctx.r10.s64 + -4804;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,38
	ctx.r8.s64 = 38;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,716
	ctx.r3.s64 = 716;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249d10c
	if (cr6.eq) goto loc_8249D10C;
	// bl 0x8249e648
	sub_8249E648(ctx, base);
	// b 0x8249d110
	goto loc_8249D110;
loc_8249D10C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249D110:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249d160
	if (cr6.eq) goto loc_8249D160;
	// bl 0x8249c400
	sub_8249C400(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8249D160:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8249D16C"))) PPC_WEAK_FUNC(sub_8249D16C);
PPC_FUNC_IMPL(__imp__sub_8249D16C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8249D170"))) PPC_WEAK_FUNC(sub_8249D170);
PPC_FUNC_IMPL(__imp__sub_8249D170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r7,300(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 300);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ble cr6,0x8249d288
	if (!cr6.gt) goto loc_8249D288;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// lfs f31,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	f31.f64 = double(temp.f32);
	// lfs f30,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f30.f64 = double(temp.f32);
	// lfs f29,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f29.f64 = double(temp.f32);
	// bl 0x8249efb8
	sub_8249EFB8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x8249d28c
	if (!cr6.gt) goto loc_8249D28C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,-13376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13376);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f11,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(f31.f64 - ctx.f11.f64));
	// lfs f9,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// li r11,1
	r11.s64 = 1;
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, f0.f64);
	// blt cr6,0x8249d248
	if (cr6.lt) goto loc_8249D248;
	// li r11,0
	r11.s64 = 0;
loc_8249D248:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d28c
	if (cr6.eq) goto loc_8249D28C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// stfs f31,-16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + -16, temp.u32);
	// stfs f0,-12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// stfs f30,-8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f29,-4(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// b 0x8249d28c
	goto loc_8249D28C;
loc_8249D288:
	// bl 0x8249efb8
	sub_8249EFB8(ctx, base);
loc_8249D28C:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f1,-13380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824bb5e0
	sub_824BB5E0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x824bb290
	sub_824BB290(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8249D2CC"))) PPC_WEAK_FUNC(sub_8249D2CC);
PPC_FUNC_IMPL(__imp__sub_8249D2CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D2D0"))) PPC_WEAK_FUNC(sub_8249D2D0);
PPC_FUNC_IMPL(__imp__sub_8249D2D0) {
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
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8249d310
	if (!cr6.gt) goto loc_8249D310;
loc_8249D2F8:
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
	// bgt cr6,0x8249d2f8
	if (cr6.gt) goto loc_8249D2F8;
loc_8249D310:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8249d330
	if (cr6.eq) goto loc_8249D330;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249d334
	if (!cr6.eq) goto loc_8249D334;
loc_8249D330:
	// li r11,0
	r11.s64 = 0;
loc_8249D334:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r6,300(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 300);
	// lwz r4,276(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// lwz r5,252(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	// bl 0x8249c538
	sub_8249C538(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r5,r11,176
	ctx.r5.s64 = r11.s64 + 176;
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// bl 0x824a0358
	sub_824A0358(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r5,300(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 300);
	// bl 0x8249ebc0
	sub_8249EBC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249D390"))) PPC_WEAK_FUNC(sub_8249D390);
PPC_FUNC_IMPL(__imp__sub_8249D390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D394"))) PPC_WEAK_FUNC(sub_8249D394);
PPC_FUNC_IMPL(__imp__sub_8249D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D398"))) PPC_WEAK_FUNC(sub_8249D398);
PPC_FUNC_IMPL(__imp__sub_8249D398) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-25232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249d410
	if (!cr6.eq) goto loc_8249D410;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r31,r9,-25248
	r31.s64 = ctx.r9.s64 + -25248;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,-25232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25232, r11.u32);
	// lfs f13,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r6,-21472
	ctx.r3.s64 = ctx.r6.s64 + -21472;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,-25248(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -25248, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8249D410:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-25248
	ctx.r3.s64 = r11.s64 + -25248;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249D428"))) PPC_WEAK_FUNC(sub_8249D428);
PPC_FUNC_IMPL(__imp__sub_8249D428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D42C"))) PPC_WEAK_FUNC(sub_8249D42C);
PPC_FUNC_IMPL(__imp__sub_8249D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D430"))) PPC_WEAK_FUNC(sub_8249D430);
PPC_FUNC_IMPL(__imp__sub_8249D430) {
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
	// bl 0x8249d008
	sub_8249D008(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d468
	if (cr6.eq) goto loc_8249D468;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249D468:
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

__attribute__((alias("__imp__sub_8249D47C"))) PPC_WEAK_FUNC(sub_8249D47C);
PPC_FUNC_IMPL(__imp__sub_8249D47C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D480"))) PPC_WEAK_FUNC(sub_8249D480);
PPC_FUNC_IMPL(__imp__sub_8249D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r9.u32);
	// b 0x82605a40
	sub_82605A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249D4A0"))) PPC_WEAK_FUNC(sub_8249D4A0);
PPC_FUNC_IMPL(__imp__sub_8249D4A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x82605a40
	sub_82605A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249D4A8"))) PPC_WEAK_FUNC(sub_8249D4A8);
PPC_FUNC_IMPL(__imp__sub_8249D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r11,48(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// lfd f0,-4744(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4744);
	// fmul f31,f1,f0
	f31.f64 = ctx.f1.f64 * f0.f64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_8249D520"))) PPC_WEAK_FUNC(sub_8249D520);
PPC_FUNC_IMPL(__imp__sub_8249D520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D524"))) PPC_WEAK_FUNC(sub_8249D524);
PPC_FUNC_IMPL(__imp__sub_8249D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D528"))) PPC_WEAK_FUNC(sub_8249D528);
PPC_FUNC_IMPL(__imp__sub_8249D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eaac0
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f14,f3
	f14.f64 = ctx.f3.f64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// fmr f18,f4
	f18.f64 = ctx.f4.f64;
	// fmr f25,f5
	f25.f64 = ctx.f5.f64;
	// bne cr6,0x8249d570
	if (!cr6.eq) goto loc_8249D570;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x82414930
	sub_82414930(ctx, base);
loc_8249D570:
	// addi r4,r28,60
	ctx.r4.s64 = r28.s64 + 60;
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// bl 0x822ca460
	sub_822CA460(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fdivs f13,f18,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f18.f64 / f25.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lfs f15,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f15.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f17,-4692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4692);
	f17.f64 = double(temp.f32);
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fadds f22,f30,f17
	f22.f64 = double(float(f30.f64 + f17.f64));
	// stfs f0,60(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 60, temp.u32);
	// fmr f27,f0
	f27.f64 = f0.f64;
	// lfs f31,-23476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23476);
	f31.f64 = double(temp.f32);
	// fmr f21,f0
	f21.f64 = f0.f64;
	// fmr f20,f0
	f20.f64 = f0.f64;
	// fneg f24,f13
	f24.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lwz r29,24(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lfs f30,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// extsw r6,r29
	ctx.r6.s64 = r29.s32;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f19,f15,f10
	f19.f64 = double(float(f15.f64 / ctx.f10.f64));
	// fmuls f23,f19,f14
	f23.f64 = double(float(f19.f64 * f14.f64));
	// ble cr6,0x8249d784
	if (!cr6.gt) goto loc_8249D784;
	// li r31,0
	r31.s64 = 0;
loc_8249D5F8:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fsubs f9,f30,f12
	ctx.f9.f64 = double(float(f30.f64 - ctx.f12.f64));
	// fsubs f7,f29,f12
	ctx.f7.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fmadds f6,f12,f24,f22
	ctx.f6.f64 = double(float(ctx.f12.f64 * f24.f64 + f22.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fmadds f26,f11,f23,f16
	f26.f64 = double(float(ctx.f11.f64 * f23.f64 + f16.f64));
	// fsel f30,f9,f30,f12
	f30.f64 = ctx.f9.f64 >= 0.0 ? f30.f64 : ctx.f12.f64;
	// fsel f29,f7,f12,f29
	f29.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : f29.f64;
	// fadds f28,f6,f18
	f28.f64 = double(float(ctx.f6.f64 + f18.f64));
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f3.u64);
	// lbz r8,151(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * f31.f64));
	// fctidz f0,f1
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f0.u64);
	// lbz r7,151(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r7,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r7.u8);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f11.u64);
	// lbz r6,151(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r6,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r6.u8);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f8.u64);
	// lbz r5,151(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// lfsx f7,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f25
	cr6.compare(ctx.f7.f64, f25.f64);
	// ble cr6,0x8249d720
	if (!cr6.gt) goto loc_8249D720;
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmr f28,f22
	f28.f64 = f22.f64;
	// fctidz f6,f12
	ctx.f6.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f6.u64);
	// lbz r11,151(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// fctidz f5,f11
	ctx.f5.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f4,f9
	ctx.f4.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// stfd f4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lbz r9,151(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f3.u64);
	// lbz r8,151(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_8249D720:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8249d76c
	if (!cr6.gt) goto loc_8249D76C;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8249d740
	if (cr6.eq) goto loc_8249D740;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249d744
	if (!cr6.eq) goto loc_8249D744;
loc_8249D740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249D744:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// fmr f2,f20
	ctx.f2.f64 = f20.f64;
	// fmr f1,f21
	ctx.f1.f64 = f21.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249D76C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmr f21,f26
	ctx.fpscr.disableFlushMode();
	f21.f64 = f26.f64;
	// fmr f20,f28
	f20.f64 = f28.f64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x8249d5f8
	if (cr6.lt) goto loc_8249D5F8;
loc_8249D784:
	// lis r30,-31933
	r30.s64 = -2092761088;
	// fmuls f26,f19,f27
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f19.f64 * f27.f64));
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-26256
	r31.s64 = r11.s64 + -26256;
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249d7c8
	if (!cr6.eq) goto loc_8249D7C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249D7C8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lbz r10,143(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stfd f6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f6.u64);
	// lbz r11,151(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r11.u8);
	// lbz r8,159(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// beq cr6,0x8249d844
	if (cr6.eq) goto loc_8249D844;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249d848
	if (!cr6.eq) goto loc_8249D848;
loc_8249D844:
	// li r11,0
	r11.s64 = 0;
loc_8249D848:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// fsubs f28,f22,f17
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f22.f64 - f17.f64));
	// fadds f27,f16,f14
	f27.f64 = double(float(f16.f64 + f14.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmr f1,f16
	ctx.f1.f64 = f16.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249d8ac
	if (!cr6.eq) goto loc_8249D8AC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249D8AC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f8.u64);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f7.u64);
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f6.u64);
	// lbz r11,159(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f5.u64);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, r11.u8);
	// lbz r10,151(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r9,159(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// beq cr6,0x8249d928
	if (cr6.eq) goto loc_8249D928;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249d92c
	if (!cr6.eq) goto loc_8249D92C;
loc_8249D928:
	// li r11,0
	r11.s64 = 0;
loc_8249D92C:
	// fadds f2,f28,f15
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f28.f64 + f15.f64));
	// stfd f29,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// stfs f2,36(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f30,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, f30.u64);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stfd f26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f26.u64);
	// addi r7,r7,-4736
	ctx.r7.s64 = ctx.r7.s64 + -4736;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f0,3640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	f0.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// fadds f1,f16,f0
	ctx.f1.f64 = double(float(f16.f64 + f0.f64));
	// stfs f1,28(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f5,f26
	ctx.f5.f64 = f26.f64;
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// ld r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 28);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249d9c4
	if (!cr6.eq) goto loc_8249D9C4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249D9C4:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f8.u64);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f7.u64);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f6.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// lbz r9,151(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r9,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r9.u8);
	// lbz r11,159(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stfd f5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f5.u64);
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, r11.u8);
	// stb r8,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// lbz r10,159(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// beq cr6,0x8249da40
	if (cr6.eq) goto loc_8249DA40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249da44
	if (!cr6.eq) goto loc_8249DA44;
loc_8249DA40:
	// li r11,0
	r11.s64 = 0;
loc_8249DA44:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// fmr f4,f22
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f22.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f22
	ctx.f2.f64 = f22.f64;
	// fmr f1,f16
	ctx.f1.f64 = f16.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249daa0
	if (!cr6.eq) goto loc_8249DAA0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249DAA0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f8.u64);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f7.u64);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r11,159(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r10,151(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// stb r9,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r9.u8);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r11.u8);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// beq cr6,0x8249db1c
	if (cr6.eq) goto loc_8249DB1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249db20
	if (!cr6.eq) goto loc_8249DB20;
loc_8249DB1C:
	// li r11,0
	r11.s64 = 0;
loc_8249DB20:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// fadds f30,f22,f18
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f22.f64 + f18.f64));
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249db80
	if (!cr6.eq) goto loc_8249DB80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249DB80:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(f0.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f7.u64);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f6.u64);
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// lbz r11,159(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r10,151(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r11,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, r11.u8);
	// stb r10,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// beq cr6,0x8249dbfc
	if (cr6.eq) goto loc_8249DBFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249dc00
	if (!cr6.eq) goto loc_8249DC00;
loc_8249DBFC:
	// li r11,0
	r11.s64 = 0;
loc_8249DC00:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// fmr f3,f16
	ctx.f3.f64 = f16.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-26240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -26240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249dc5c
	if (!cr6.eq) goto loc_8249DC5C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f15,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f15,4(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stfs f15,8(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,-26240(r30)
	PPC_STORE_U32(r30.u32 + -26240, r11.u32);
	// stfs f15,12(r31)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r10,-22608
	ctx.r3.s64 = ctx.r10.s64 + -22608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8249DC5C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 * f31.f64));
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f7.u64);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f6.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// lbz r11,159(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r10,151(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r11.u8);
	// stb r10,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r10.u8);
	// stb r9,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r9.u8);
	// stb r8,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r8.u8);
	// beq cr6,0x8249dcd8
	if (cr6.eq) goto loc_8249DCD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249dcdc
	if (!cr6.eq) goto loc_8249DCDC;
loc_8249DCD8:
	// li r11,0
	r11.s64 = 0;
loc_8249DCDC:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// fmr f3,f16
	ctx.f3.f64 = f16.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f16
	ctx.f1.f64 = f16.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,56(r28)
	PPC_STORE_U32(r28.u32 + 56, ctx.r9.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_8249DD18"))) PPC_WEAK_FUNC(sub_8249DD18);
PPC_FUNC_IMPL(__imp__sub_8249DD18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249DD1C"))) PPC_WEAK_FUNC(sub_8249DD1C);
PPC_FUNC_IMPL(__imp__sub_8249DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249DD20"))) PPC_WEAK_FUNC(sub_8249DD20);
PPC_FUNC_IMPL(__imp__sub_8249DD20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-4684
	ctx.r9.s64 = r11.s64 + -4684;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,7572
	ctx.r8.s64 = ctx.r10.s64 + 7572;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// lfs f0,21036(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x82605a60
	sub_82605A60(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r4,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r4.u64);
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

__attribute__((alias("__imp__sub_8249DDC0"))) PPC_WEAK_FUNC(sub_8249DDC0);
PPC_FUNC_IMPL(__imp__sub_8249DDC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249DDC4"))) PPC_WEAK_FUNC(sub_8249DDC4);
PPC_FUNC_IMPL(__imp__sub_8249DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249DDC8"))) PPC_WEAK_FUNC(sub_8249DDC8);
PPC_FUNC_IMPL(__imp__sub_8249DDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r9,r10,-4684
	ctx.r9.s64 = ctx.r10.s64 + -4684;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8249DDDC"))) PPC_WEAK_FUNC(sub_8249DDDC);
PPC_FUNC_IMPL(__imp__sub_8249DDDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x822caf88
	sub_822CAF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249DDE0"))) PPC_WEAK_FUNC(sub_8249DDE0);
PPC_FUNC_IMPL(__imp__sub_8249DDE0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-25184(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249de58
	if (!cr6.eq) goto loc_8249DE58;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r31,r9,-25200
	r31.s64 = ctx.r9.s64 + -25200;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r11,-25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25184, r11.u32);
	// lfs f13,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r6,-21464
	ctx.r3.s64 = ctx.r6.s64 + -21464;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,-25200(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -25200, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8249DE58:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-25200
	ctx.r3.s64 = r11.s64 + -25200;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249DE70"))) PPC_WEAK_FUNC(sub_8249DE70);
PPC_FUNC_IMPL(__imp__sub_8249DE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249DE74"))) PPC_WEAK_FUNC(sub_8249DE74);
PPC_FUNC_IMPL(__imp__sub_8249DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249DE78"))) PPC_WEAK_FUNC(sub_8249DE78);
PPC_FUNC_IMPL(__imp__sub_8249DE78) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-4684
	ctx.r10.s64 = r11.s64 + -4684;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822caf88
	sub_822CAF88(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249dec0
	if (cr6.eq) goto loc_8249DEC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249DEC0:
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

__attribute__((alias("__imp__sub_8249DED4"))) PPC_WEAK_FUNC(sub_8249DED4);
PPC_FUNC_IMPL(__imp__sub_8249DED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249DED8"))) PPC_WEAK_FUNC(sub_8249DED8);
PPC_FUNC_IMPL(__imp__sub_8249DED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaae8
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// lfs f12,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// std r11,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r11.u64);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// std r10,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f26,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f28,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	f28.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * f28.f64));
	// stfs f27,0(r3)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f26,4(r3)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 * f28.f64));
	// lfs f0,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fsubs f5,f27,f5
	ctx.f5.f64 = double(float(f27.f64 - ctx.f5.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f4,f26,f4
	ctx.f4.f64 = double(float(f26.f64 - ctx.f4.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f3,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f3,f12
	f31.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f1,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f30,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f30.f64 = double(temp.f32);
	// fmuls f29,f1,f13
	f29.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f25,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f25.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f24,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f24.f64 = double(temp.f32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// stfs f24,12(r3)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfd f27,-96(r1)
	f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fmuls f1,f1,f28
	ctx.f1.f64 = double(float(ctx.f1.f64 * f28.f64));
	// lfd f26,-88(r1)
	f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f27,f27
	f27.f64 = double(f27.s64);
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// stfs f25,8(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f31,f25,f31
	f31.f64 = double(float(f25.f64 - f31.f64));
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f12,f24,f12
	ctx.f12.f64 = double(float(f24.f64 - ctx.f12.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f30,f30,f28
	f30.f64 = double(float(f30.f64 * f28.f64));
	// frsp f5,f27
	ctx.f5.f64 = double(float(f27.f64));
	// frsp f4,f26
	ctx.f4.f64 = double(float(f26.f64));
	// fsubs f1,f31,f1
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + f0.f64));
	// fmuls f0,f5,f9
	f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f9,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * f29.f64));
	// fmuls f5,f4,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + f0.f64));
	// fadds f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f0,f3,f11
	f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f13,f5,f8
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f0,f1
	ctx.f9.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab34
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8249E04C"))) PPC_WEAK_FUNC(sub_8249E04C);
PPC_FUNC_IMPL(__imp__sub_8249E04C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E050"))) PPC_WEAK_FUNC(sub_8249E050);
PPC_FUNC_IMPL(__imp__sub_8249E050) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r11,r6
	r11.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f8,f10,f2
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8249ded8
	sub_8249DED8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8249E0C8"))) PPC_WEAK_FUNC(sub_8249E0C8);
PPC_FUNC_IMPL(__imp__sub_8249E0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E0CC"))) PPC_WEAK_FUNC(sub_8249E0CC);
PPC_FUNC_IMPL(__imp__sub_8249E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E0D0"))) PPC_WEAK_FUNC(sub_8249E0D0);
PPC_FUNC_IMPL(__imp__sub_8249E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f3,12(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f3
	ctx.f8.f64 = ctx.f3.f64;
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f1
	ctx.f4.f64 = double(ctx.f1.s64);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f11,f2
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fadds f11,f7,f2
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f10,f9,f1
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f9,12(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f8,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// extsw r11,r7
	r11.s64 = ctx.r7.s32;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfd f3,-16(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f13,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f7,f3,f1
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fadds f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fadds f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f0,f10,f4
	f0.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmadds f7,f2,f12,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f6,f1,f11,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fdivs f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f4.u32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f3,f12,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f9,f10,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fdivs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f2.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f6.u32);
}

__attribute__((alias("__imp__sub_8249E284"))) PPC_WEAK_FUNC(sub_8249E284);
PPC_FUNC_IMPL(__imp__sub_8249E284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E288"))) PPC_WEAK_FUNC(sub_8249E288);
PPC_FUNC_IMPL(__imp__sub_8249E288) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,76
	r31.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8249e2c0
	if (!cr6.gt) goto loc_8249E2C0;
loc_8249E2A8:
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
	// bgt cr6,0x8249e2a8
	if (cr6.gt) goto loc_8249E2A8;
loc_8249E2C0:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8249e37c
	if (!cr6.gt) goto loc_8249E37C;
loc_8249E2D0:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8249e36c
	if (!cr6.gt) goto loc_8249E36C;
loc_8249E2E0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ded8
	sub_8249DED8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8249e320
	if (!cr6.gt) goto loc_8249E320;
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
loc_8249E320:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e35c
	if (cr0.eq) goto loc_8249E35C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_8249E35C:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8249e2e0
	if (cr6.lt) goto loc_8249E2E0;
loc_8249E36C:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8249e2d0
	if (cr6.lt) goto loc_8249E2D0;
loc_8249E37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8249E380"))) PPC_WEAK_FUNC(sub_8249E380);
PPC_FUNC_IMPL(__imp__sub_8249E380) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249E384"))) PPC_WEAK_FUNC(sub_8249E384);
PPC_FUNC_IMPL(__imp__sub_8249E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E388"))) PPC_WEAK_FUNC(sub_8249E388);
PPC_FUNC_IMPL(__imp__sub_8249E388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
}

__attribute__((alias("__imp__sub_8249E3EC"))) PPC_WEAK_FUNC(sub_8249E3EC);
PPC_FUNC_IMPL(__imp__sub_8249E3EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8249e288
	sub_8249E288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249E3F0"))) PPC_WEAK_FUNC(sub_8249E3F0);
PPC_FUNC_IMPL(__imp__sub_8249E3F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-4676
	ctx.r10.s64 = r11.s64 + -4676;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824a0248
	sub_824A0248(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,6684
	ctx.r7.s64 = ctx.r9.s64 + 6684;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// stw r7,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r7.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// or r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,3792(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3792);
	f0.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// mullw r4,r3,r11
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfs f4,68(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f3,72(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x8249e4e4
	if (!cr6.gt) goto loc_8249E4E4;
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
loc_8249E4E4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x8249e288
	sub_8249E288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8249E504"))) PPC_WEAK_FUNC(sub_8249E504);
PPC_FUNC_IMPL(__imp__sub_8249E504) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249E508"))) PPC_WEAK_FUNC(sub_8249E508);
PPC_FUNC_IMPL(__imp__sub_8249E508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r9,r10,-4676
	ctx.r9.s64 = ctx.r10.s64 + -4676;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8249E51C"))) PPC_WEAK_FUNC(sub_8249E51C);
PPC_FUNC_IMPL(__imp__sub_8249E51C) {
	PPC_FUNC_PROLOGUE();
	// b 0x822c3aa0
	sub_822C3AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249E520"))) PPC_WEAK_FUNC(sub_8249E520);
PPC_FUNC_IMPL(__imp__sub_8249E520) {
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
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r10,r11,-4676
	ctx.r10.s64 = r11.s64 + -4676;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249e568
	if (cr6.eq) goto loc_8249E568;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249E568:
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

__attribute__((alias("__imp__sub_8249E57C"))) PPC_WEAK_FUNC(sub_8249E57C);
PPC_FUNC_IMPL(__imp__sub_8249E57C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E580"))) PPC_WEAK_FUNC(sub_8249E580);
PPC_FUNC_IMPL(__imp__sub_8249E580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E584"))) PPC_WEAK_FUNC(sub_8249E584);
PPC_FUNC_IMPL(__imp__sub_8249E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E588"))) PPC_WEAK_FUNC(sub_8249E588);
PPC_FUNC_IMPL(__imp__sub_8249E588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E58C"))) PPC_WEAK_FUNC(sub_8249E58C);
PPC_FUNC_IMPL(__imp__sub_8249E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E590"))) PPC_WEAK_FUNC(sub_8249E590);
PPC_FUNC_IMPL(__imp__sub_8249E590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E594"))) PPC_WEAK_FUNC(sub_8249E594);
PPC_FUNC_IMPL(__imp__sub_8249E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E598"))) PPC_WEAK_FUNC(sub_8249E598);
PPC_FUNC_IMPL(__imp__sub_8249E598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E59C"))) PPC_WEAK_FUNC(sub_8249E59C);
PPC_FUNC_IMPL(__imp__sub_8249E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5A0"))) PPC_WEAK_FUNC(sub_8249E5A0);
PPC_FUNC_IMPL(__imp__sub_8249E5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5A4"))) PPC_WEAK_FUNC(sub_8249E5A4);
PPC_FUNC_IMPL(__imp__sub_8249E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5A8"))) PPC_WEAK_FUNC(sub_8249E5A8);
PPC_FUNC_IMPL(__imp__sub_8249E5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5AC"))) PPC_WEAK_FUNC(sub_8249E5AC);
PPC_FUNC_IMPL(__imp__sub_8249E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5B0"))) PPC_WEAK_FUNC(sub_8249E5B0);
PPC_FUNC_IMPL(__imp__sub_8249E5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5B4"))) PPC_WEAK_FUNC(sub_8249E5B4);
PPC_FUNC_IMPL(__imp__sub_8249E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5B8"))) PPC_WEAK_FUNC(sub_8249E5B8);
PPC_FUNC_IMPL(__imp__sub_8249E5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5BC"))) PPC_WEAK_FUNC(sub_8249E5BC);
PPC_FUNC_IMPL(__imp__sub_8249E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5C0"))) PPC_WEAK_FUNC(sub_8249E5C0);
PPC_FUNC_IMPL(__imp__sub_8249E5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5C4"))) PPC_WEAK_FUNC(sub_8249E5C4);
PPC_FUNC_IMPL(__imp__sub_8249E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5C8"))) PPC_WEAK_FUNC(sub_8249E5C8);
PPC_FUNC_IMPL(__imp__sub_8249E5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5CC"))) PPC_WEAK_FUNC(sub_8249E5CC);
PPC_FUNC_IMPL(__imp__sub_8249E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5D0"))) PPC_WEAK_FUNC(sub_8249E5D0);
PPC_FUNC_IMPL(__imp__sub_8249E5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5D4"))) PPC_WEAK_FUNC(sub_8249E5D4);
PPC_FUNC_IMPL(__imp__sub_8249E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E5D8"))) PPC_WEAK_FUNC(sub_8249E5D8);
PPC_FUNC_IMPL(__imp__sub_8249E5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4668
	ctx.r10.s64 = r11.s64 + -4668;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8249E5E4"))) PPC_WEAK_FUNC(sub_8249E5E4);
PPC_FUNC_IMPL(__imp__sub_8249E5E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E5E8"))) PPC_WEAK_FUNC(sub_8249E5E8);
PPC_FUNC_IMPL(__imp__sub_8249E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4668
	ctx.r10.s64 = r11.s64 + -4668;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8249E5FC"))) PPC_WEAK_FUNC(sub_8249E5FC);
PPC_FUNC_IMPL(__imp__sub_8249E5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E600"))) PPC_WEAK_FUNC(sub_8249E600);
PPC_FUNC_IMPL(__imp__sub_8249E600) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-4668
	ctx.r9.s64 = r11.s64 + -4668;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8249e634
	if (cr6.eq) goto loc_8249E634;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249E634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249E644"))) PPC_WEAK_FUNC(sub_8249E644);
PPC_FUNC_IMPL(__imp__sub_8249E644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E648"))) PPC_WEAK_FUNC(sub_8249E648);
PPC_FUNC_IMPL(__imp__sub_8249E648) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,-4660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4660);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e3f0
	sub_8249E3F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r9,r10,-4612
	ctx.r9.s64 = ctx.r10.s64 + -4612;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x824a0628
	sub_824A0628(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,572
	ctx.r3.s64 = r31.s64 + 572;
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// addi r30,r31,636
	r30.s64 = r31.s64 + 636;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249fbe8
	sub_8249FBE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249f208
	sub_8249F208(ctx, base);
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

__attribute__((alias("__imp__sub_8249E6E4"))) PPC_WEAK_FUNC(sub_8249E6E4);
PPC_FUNC_IMPL(__imp__sub_8249E6E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E6E8"))) PPC_WEAK_FUNC(sub_8249E6E8);
PPC_FUNC_IMPL(__imp__sub_8249E6E8) {
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
	// addi r3,r3,636
	ctx.r3.s64 = ctx.r3.s64 + 636;
	// addi r10,r11,-4612
	ctx.r10.s64 = r11.s64 + -4612;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r3,r31,572
	ctx.r3.s64 = r31.s64 + 572;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x824a0588
	sub_824A0588(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e508
	sub_8249E508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249E748"))) PPC_WEAK_FUNC(sub_8249E748);
PPC_FUNC_IMPL(__imp__sub_8249E748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249E74C"))) PPC_WEAK_FUNC(sub_8249E74C);
PPC_FUNC_IMPL(__imp__sub_8249E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E750"))) PPC_WEAK_FUNC(sub_8249E750);
PPC_FUNC_IMPL(__imp__sub_8249E750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaae8
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lfs f0,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	f0.f64 = double(temp.f32);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lfs f0,4036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4036);
	f0.f64 = double(temp.f32);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * f0.f64));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,4492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f25,f1,f0
	f25.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x824a0448
	sub_824A0448(ctx, base);
	// addi r31,r27,636
	r31.s64 = r27.s64 + 636;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f208
	sub_8249F208(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// lis r26,-32254
	r26.s64 = -2113798144;
	// lis r25,-32254
	r25.s64 = -2113798144;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f24,8740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8740);
	f24.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f26,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f26.f64 = double(temp.f32);
loc_8249E814:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249cfb0
	sub_8249CFB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8249e8c0
	if (!cr6.eq) goto loc_8249E8C0;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-4640(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -4640);
	f0.f64 = double(temp.f32);
	// lfs f1,-4620(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + -4620);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// lfs f12,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f8,f10,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f1,f0,f8,f5
	ctx.f1.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f6,f0,f7,f4
	ctx.f6.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmsubs f5,f12,f0,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f3.f64));
	// fmadds f4,f12,f9,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f3,f7,f9,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f2,f11,f13,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fnmsubs f1,f8,f11,f5
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fnmsubs f0,f11,f7,f4
	f0.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f4.f64)));
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fnmsubs f13,f10,f13,f3
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f3.f64)));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fnmsubs f12,f8,f9,f2
	ctx.f12.f64 = double(float(-(ctx.f8.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fnmsubs f11,f7,f10,f1
	ctx.f11.f64 = double(float(-(ctx.f7.f64 * ctx.f10.f64 - ctx.f1.f64)));
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_8249E8C0:
	// lfs f0,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 52);
	f0.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(f0.f64 * f24.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f0,f3,f9
	f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f2,216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f12,f29,f30
	ctx.f12.f64 = double(float(f29.f64 * f30.f64));
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f11,224(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,256(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f30,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	f30.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f29,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	f29.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f28,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	f28.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f27,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	f27.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f30,f9
	ctx.f7.f64 = double(float(f30.f64 + ctx.f9.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 + f29.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f28
	ctx.f3.f64 = double(float(ctx.f6.f64 + f28.f64));
	// fadds f2,f4,f27
	ctx.f2.f64 = double(float(ctx.f4.f64 + f27.f64));
	// stfs f7,224(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f5,228(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f3,232(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f2,236(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f13,f30,f1
	ctx.f13.f64 = double(float(f30.f64 + ctx.f1.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f29
	ctx.f11.f64 = double(float(f0.f64 + f29.f64));
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fadds f8,f10,f27
	ctx.f8.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f9,248(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f7,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f29
	ctx.f3.f64 = double(float(ctx.f6.f64 + f29.f64));
	// lfs f2,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f4,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 + f28.f64));
	// fadds f0,f2,f27
	f0.f64 = double(float(ctx.f2.f64 + f27.f64));
	// stfs f5,256(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f3,260(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f1,264(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x8249f240
	sub_8249F240(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f240
	sub_8249F240(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f240
	sub_8249F240(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f240
	sub_8249F240(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f7d8
	sub_8249F7D8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x8249e814
	if (cr6.lt) goto loc_8249E814;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab34
}

__attribute__((alias("__imp__sub_8249EAA8"))) PPC_WEAK_FUNC(sub_8249EAA8);
PPC_FUNC_IMPL(__imp__sub_8249EAA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8249EAAC"))) PPC_WEAK_FUNC(sub_8249EAAC);
PPC_FUNC_IMPL(__imp__sub_8249EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249EAB0"))) PPC_WEAK_FUNC(sub_8249EAB0);
PPC_FUNC_IMPL(__imp__sub_8249EAB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824a0248
	sub_824A0248(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8249ded8
	sub_8249DED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824a0218
	sub_824A0218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8249e388
	sub_8249E388(ctx, base);
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8249eb94
	if (!cr6.eq) goto loc_8249EB94;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8249eb98
	if (cr6.eq) goto loc_8249EB98;
loc_8249EB94:
	// li r31,1
	r31.s64 = 1;
loc_8249EB98:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249EBB8"))) PPC_WEAK_FUNC(sub_8249EBB8);
PPC_FUNC_IMPL(__imp__sub_8249EBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249EBBC"))) PPC_WEAK_FUNC(sub_8249EBBC);
PPC_FUNC_IMPL(__imp__sub_8249EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249EBC0"))) PPC_WEAK_FUNC(sub_8249EBC0);
PPC_FUNC_IMPL(__imp__sub_8249EBC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8249eab0
	sub_8249EAB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e750
	sub_8249E750(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// bl 0x8249fb20
	sub_8249FB20(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a0fb8
	sub_824A0FB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8249EC10"))) PPC_WEAK_FUNC(sub_8249EC10);
PPC_FUNC_IMPL(__imp__sub_8249EC10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249EC14"))) PPC_WEAK_FUNC(sub_8249EC14);
PPC_FUNC_IMPL(__imp__sub_8249EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249EC18"))) PPC_WEAK_FUNC(sub_8249EC18);
PPC_FUNC_IMPL(__imp__sub_8249EC18) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8249EC44"))) PPC_WEAK_FUNC(sub_8249EC44);
PPC_FUNC_IMPL(__imp__sub_8249EC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249EC48"))) PPC_WEAK_FUNC(sub_8249EC48);
PPC_FUNC_IMPL(__imp__sub_8249EC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eaac8
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r28,r3,572
	r28.s64 = ctx.r3.s64 + 572;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// bl 0x824a0fb8
	sub_824A0FB8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f20,192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	f20.f64 = double(temp.f32);
	// lfs f19,200(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	f19.f64 = double(temp.f32);
	// lfs f18,204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	f18.f64 = double(temp.f32);
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
	// lwz r3,60(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x8249cb80
	sub_8249CB80(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8249ef98
	if (!cr6.gt) goto loc_8249EF98;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r24,-32254
	r24.s64 = -2113798144;
	// lis r20,-32254
	r20.s64 = -2113798144;
	// lfs f17,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f17.f64 = double(temp.f32);
	// lis r21,-32254
	r21.s64 = -2113798144;
	// lfs f16,4036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4036);
	f16.f64 = double(temp.f32);
	// addi r25,r11,-25180
	r25.s64 = r11.s64 + -25180;
loc_8249ECFC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8249cc38
	sub_8249CC38(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8249ef8c
	if (cr6.eq) goto loc_8249EF8C;
	// lfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,-4648(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + -4648);
	f0.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x8249ed40
	if (cr6.lt) goto loc_8249ED40;
	// li r11,0
	r11.s64 = 0;
loc_8249ED40:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249ef8c
	if (cr6.eq) goto loc_8249EF8C;
	// lfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fneg f30,f12
	f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f29,f13,f11
	f29.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f28,f0,f10
	f28.f64 = double(float(f0.f64 - ctx.f10.f64));
	// bl 0x8249cfb0
	sub_8249CFB0(ctx, base);
	// fmuls f9,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f30.f64 * f30.f64));
	// li r11,1
	r11.s64 = 1;
	// fmadds f8,f29,f29,f9
	ctx.f8.f64 = double(float(f29.f64 * f29.f64 + ctx.f9.f64));
	// fmadds f7,f28,f28,f8
	ctx.f7.f64 = double(float(f28.f64 * f28.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f1
	cr6.compare(ctx.f6.f64, ctx.f1.f64);
	// blt cr6,0x8249eda4
	if (cr6.lt) goto loc_8249EDA4;
	// li r11,0
	r11.s64 = 0;
loc_8249EDA4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249ef8c
	if (cr6.eq) goto loc_8249EF8C;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f22,f11,f12
	f22.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// li r23,1
	r23.s64 = 1;
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f21,f9,f10
	f21.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f23,80(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f22,84(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f21,88(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f30,-4624(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -4624);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lfs f5,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f19
	ctx.f4.f64 = double(float(ctx.f5.f64 * f19.f64));
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f20,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * f20.f64 + ctx.f4.f64));
	// fmadds f0,f2,f31,f1
	f0.f64 = double(float(ctx.f2.f64 * f31.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x8249ef8c
	if (cr6.lt) goto loc_8249EF8C;
	// lfs f28,192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f28.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f27,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f27.f64 = double(temp.f32);
	// fsubs f30,f28,f20
	f30.f64 = double(float(f28.f64 - f20.f64));
	// lfs f26,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f26.f64 = double(temp.f32);
	// fsubs f29,f27,f19
	f29.f64 = double(float(f27.f64 - f19.f64));
	// fsubs f0,f26,f18
	f0.f64 = double(float(f26.f64 - f18.f64));
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// fmuls f30,f30,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 * f30.f64));
	// fmuls f29,f29,f29
	f29.f64 = double(float(f29.f64 * f29.f64));
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// fadds f13,f29,f30
	ctx.f13.f64 = double(float(f29.f64 + f30.f64));
	// fsqrts f24,f13
	f24.f64 = double(float(sqrt(ctx.f13.f64)));
	// bl 0x8242c448
	sub_8242C448(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249ee94
	if (cr6.eq) goto loc_8249EE94;
	// lfs f25,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f25.f64 = double(temp.f32);
	// b 0x8249ee98
	goto loc_8249EE98;
loc_8249EE94:
	// lfs f25,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f25.f64 = double(temp.f32);
loc_8249EE98:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f13,f0,f19
	ctx.f13.f64 = double(float(f0.f64 * f19.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f20,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * f20.f64 + ctx.f13.f64));
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f31
	cr6.compare(ctx.f9.f64, f31.f64);
	// blt cr6,0x8249eec0
	if (cr6.lt) goto loc_8249EEC0;
	// li r11,0
	r11.s64 = 0;
loc_8249EEC0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249ef74
	if (cr6.eq) goto loc_8249EF74;
	// fmuls f13,f24,f16
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64 * f16.f64));
	// lfs f0,-4632(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + -4632);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8249ef74
	if (cr6.lt) goto loc_8249EF74;
	// fmuls f0,f21,f21
	f0.f64 = double(float(f21.f64 * f21.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f29,f30
	ctx.f12.f64 = double(float(f29.f64 + f30.f64));
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f9,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmadds f8,f23,f23,f0
	ctx.f8.f64 = double(float(f23.f64 * f23.f64 + f0.f64));
	// fsqrts f7,f12
	ctx.f7.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmadds f6,f22,f22,f8
	ctx.f6.f64 = double(float(f22.f64 * f22.f64 + ctx.f8.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f7.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f3,f28,f4
	ctx.f3.f64 = double(float(f28.f64 * ctx.f4.f64));
	// fmuls f0,f27,f4
	f0.f64 = double(float(f27.f64 * ctx.f4.f64));
	// fmuls f12,f26,f4
	ctx.f12.f64 = double(float(f26.f64 * ctx.f4.f64));
	// fadds f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f6,f0,f10
	ctx.f6.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f5,188(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f1,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a1068
	sub_824A1068(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lfs f2,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// fmuls f3,f25,f17
	ctx.f3.f64 = double(float(f25.f64 * f17.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x824a10f8
	sub_824A10F8(ctx, base);
	// b 0x8249ef8c
	goto loc_8249EF8C;
loc_8249EF74:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a1068
	sub_824A1068(ctx, base);
loc_8249EF8C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r22
	cr6.compare<int32_t>(r27.s32, r22.s32, xer);
	// blt cr6,0x8249ecfc
	if (cr6.lt) goto loc_8249ECFC;
loc_8249EF98:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stb r23,307(r11)
	PPC_STORE_U8(r11.u32 + 307, r23.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eab14
}

__attribute__((alias("__imp__sub_8249EFB4"))) PPC_WEAK_FUNC(sub_8249EFB4);
PPC_FUNC_IMPL(__imp__sub_8249EFB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8249EFB8"))) PPC_WEAK_FUNC(sub_8249EFB8);
PPC_FUNC_IMPL(__imp__sub_8249EFB8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r31,r3,636
	r31.s64 = ctx.r3.s64 + 636;
	// addi r28,r3,132
	r28.s64 = ctx.r3.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824a0b78
	sub_824A0B78(ctx, base);
	// addi r29,r30,100
	r29.s64 = r30.s64 + 100;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a14c0
	sub_824A14C0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249ec48
	sub_8249EC48(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,572
	ctx.r3.s64 = r30.s64 + 572;
	// bl 0x824a15f0
	sub_824A15F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,604
	ctx.r3.s64 = r30.s64 + 604;
	// bl 0x824a15f0
	sub_824A15F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8249cfb0
	sub_8249CFB0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f0,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	f0.f64 = double(temp.f32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x824a2240
	sub_824A2240(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249F078"))) PPC_WEAK_FUNC(sub_8249F078);
PPC_FUNC_IMPL(__imp__sub_8249F078) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8249F07C"))) PPC_WEAK_FUNC(sub_8249F07C);
PPC_FUNC_IMPL(__imp__sub_8249F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F080"))) PPC_WEAK_FUNC(sub_8249F080);
PPC_FUNC_IMPL(__imp__sub_8249F080) {
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
	// addi r3,r3,636
	ctx.r3.s64 = ctx.r3.s64 + 636;
	// addi r10,r11,-4612
	ctx.r10.s64 = r11.s64 + -4612;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r3,r31,572
	ctx.r3.s64 = r31.s64 + 572;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x824a0588
	sub_824A0588(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e508
	sub_8249E508(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249f0f0
	if (cr6.eq) goto loc_8249F0F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249F0F0:
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

__attribute__((alias("__imp__sub_8249F104"))) PPC_WEAK_FUNC(sub_8249F104);
PPC_FUNC_IMPL(__imp__sub_8249F104) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249F108"))) PPC_WEAK_FUNC(sub_8249F108);
PPC_FUNC_IMPL(__imp__sub_8249F108) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a00a8
	sub_824A00A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249F108"))) PPC_WEAK_FUNC(sub_8249F108);
PPC_FUNC_IMPL(__imp__sub_8249F108) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8249F10C"))) PPC_WEAK_FUNC(sub_8249F10C);
PPC_FUNC_IMPL(__imp__sub_8249F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F110"))) PPC_WEAK_FUNC(sub_8249F110);
PPC_FUNC_IMPL(__imp__sub_8249F110) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x8249f178
	if (!cr6.lt) goto loc_8249F178;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f1b8
	goto loc_8249F1B8;
loc_8249F178:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x8249f188
	if (!cr6.lt) goto loc_8249F188;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f1b8
	goto loc_8249F1B8;
loc_8249F188:
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// ble cr6,0x8249f1a0
	if (!cr6.gt) goto loc_8249F1A0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f1b8
	goto loc_8249F1B8;
loc_8249F1A0:
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r6,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 31;
	// subfc r5,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r5.s64 = r11.s64 - ctx.r9.s64;
	// adde r11,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8249F1B8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249f1ec
	if (cr6.eq) goto loc_8249F1EC;
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8249F1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249F200"))) PPC_WEAK_FUNC(sub_8249F200);
PPC_FUNC_IMPL(__imp__sub_8249F200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249F204"))) PPC_WEAK_FUNC(sub_8249F204);
PPC_FUNC_IMPL(__imp__sub_8249F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F208"))) PPC_WEAK_FUNC(sub_8249F208);
PPC_FUNC_IMPL(__imp__sub_8249F208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_8249F21C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8249f21c
	if (cr6.lt) goto loc_8249F21C;
}

__attribute__((alias("__imp__sub_8249F238"))) PPC_WEAK_FUNC(sub_8249F238);
PPC_FUNC_IMPL(__imp__sub_8249F238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249F23C"))) PPC_WEAK_FUNC(sub_8249F23C);
PPC_FUNC_IMPL(__imp__sub_8249F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F240"))) PPC_WEAK_FUNC(sub_8249F240);
PPC_FUNC_IMPL(__imp__sub_8249F240) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
}

__attribute__((alias("__imp__sub_8249F244"))) PPC_WEAK_FUNC(sub_8249F244);
PPC_FUNC_IMPL(__imp__sub_8249F244) {
	PPC_FUNC_PROLOGUE();
	// b 0x822c2fd8
	sub_822C2FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249F248"))) PPC_WEAK_FUNC(sub_8249F248);
PPC_FUNC_IMPL(__imp__sub_8249F248) {
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
	// mflr r12
	// bl 0x828e9408
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// subf r26,r11,r7
	r26.s64 = ctx.r7.s64 - r11.s64;
	// subf r30,r10,r8
	r30.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8249f330
	if (!cr6.gt) {
		sub_8249F330(ctx, base);
		return;
	}
loc_8249F26C:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8249f324
	if (!cr6.gt) goto loc_8249F324;
	// mullw r11,r5,r6
	r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// add r7,r28,r26
	ctx.r7.u64 = r28.u64 + r26.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// neg r27,r5
	r27.s64 = -ctx.r5.s64;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
loc_8249F294:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x8249f2a8
	if (!cr6.lt) goto loc_8249F2A8;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f2e8
	goto loc_8249F2E8;
loc_8249F2A8:
	// add. r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8249f2b8
	if (!cr0.lt) goto loc_8249F2B8;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f2e8
	goto loc_8249F2E8;
loc_8249F2B8:
	// lwz r11,60(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// ble cr6,0x8249f2d0
	if (!cr6.gt) goto loc_8249F2D0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f2e8
	goto loc_8249F2E8;
loc_8249F2D0:
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// rlwinm r25,r10,1,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r24,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r24.s64 = r11.s32 >> 31;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// adde r11,r25,r24
	temp.u8 = (r25.u32 + r24.u32 < r25.u32) | (r25.u32 + r24.u32 + xer.ca < xer.ca);
	r11.u64 = r25.u64 + r24.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8249F2E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249f318
	if (cr6.eq) goto loc_8249F318;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249f318
	if (cr6.eq) goto loc_8249F318;
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// stbx r9,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + r30.u32, ctx.r9.u8);
loc_8249F318:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// bdnz 0x8249f294
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8249F294;
loc_8249F324:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(r28.s32, ctx.r5.s32, xer);
	// blt cr6,0x8249f26c
	if (cr6.lt) goto loc_8249F26C;
}

__attribute__((alias("__imp__sub_8249F330"))) PPC_WEAK_FUNC(sub_8249F330);
PPC_FUNC_IMPL(__imp__sub_8249F330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8249F334"))) PPC_WEAK_FUNC(sub_8249F334);
PPC_FUNC_IMPL(__imp__sub_8249F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F338"))) PPC_WEAK_FUNC(sub_8249F338);
PPC_FUNC_IMPL(__imp__sub_8249F338) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// srawi r11,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r11.s64 = r30.s32 >> 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r27,r11,r9
	r27.s64 = ctx.r9.s64 - r11.s64;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ble cr6,0x8249f478
	if (!cr6.gt) goto loc_8249F478;
loc_8249F3B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8249f46c
	if (!cr6.gt) goto loc_8249F46C;
	// mullw r11,r30,r29
	r11.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mtctr r29
	ctr.u64 = r29.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r8,r4,r27
	ctx.r8.u64 = ctx.r4.u64 + r27.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// neg r3,r30
	ctx.r3.s64 = -r30.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
loc_8249F3DC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x8249f3f0
	if (!cr6.lt) goto loc_8249F3F0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f430
	goto loc_8249F430;
loc_8249F3F0:
	// add. r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8249f400
	if (!cr0.lt) goto loc_8249F400;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f430
	goto loc_8249F430;
loc_8249F400:
	// lwz r11,60(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// ble cr6,0x8249f418
	if (!cr6.gt) goto loc_8249F418;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249f430
	goto loc_8249F430;
loc_8249F418:
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r26,r10,1,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r25,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r25.s64 = r11.s32 >> 31;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// adde r11,r26,r25
	temp.u8 = (r26.u32 + r25.u32 < r26.u32) | (r26.u32 + r25.u32 + xer.ca < xer.ca);
	r11.u64 = r26.u64 + r25.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8249F430:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249f460
	if (cr6.eq) goto loc_8249F460;
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lbzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~r11.u32 + ctx.r9.u32 < ~r11.u32) | (~r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
loc_8249F460:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// bdnz 0x8249f3dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8249F3DC;
loc_8249F46C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r30
	cr6.compare<int32_t>(ctx.r4.s32, r30.s32, xer);
	// blt cr6,0x8249f3b4
	if (cr6.lt) goto loc_8249F3B4;
loc_8249F478:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8249F47C"))) PPC_WEAK_FUNC(sub_8249F47C);
PPC_FUNC_IMPL(__imp__sub_8249F47C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8249F480"))) PPC_WEAK_FUNC(sub_8249F480);
PPC_FUNC_IMPL(__imp__sub_8249F480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8249f584
	if (!cr6.gt) goto loc_8249F584;
	// li r29,0
	r29.s64 = 0;
loc_8249F4AC:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x8249f504
	if (!cr6.lt) goto loc_8249F504;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8249f544
	goto loc_8249F544;
loc_8249F504:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x8249f514
	if (!cr6.lt) goto loc_8249F514;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8249f544
	goto loc_8249F544;
loc_8249F514:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// ble cr6,0x8249f52c
	if (!cr6.gt) goto loc_8249F52C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8249f544
	goto loc_8249F544;
loc_8249F52C:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r6,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// subfc r5,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// adde r10,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8249F544:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249f56c
	if (cr6.eq) goto loc_8249F56C;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r6,r8,r30
	PPC_STORE_U8(ctx.r8.u32 + r30.u32, ctx.r6.u8);
loc_8249F56C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8249f4ac
	if (cr6.lt) goto loc_8249F4AC;
loc_8249F584:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249F588"))) PPC_WEAK_FUNC(sub_8249F588);
PPC_FUNC_IMPL(__imp__sub_8249F588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8249F58C"))) PPC_WEAK_FUNC(sub_8249F58C);
PPC_FUNC_IMPL(__imp__sub_8249F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F590"))) PPC_WEAK_FUNC(sub_8249F590);
PPC_FUNC_IMPL(__imp__sub_8249F590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eaaec
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// ble cr6,0x8249f7bc
	if (!cr6.gt) goto loc_8249F7BC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,11288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11288);
	f31.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8249F604:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249f61c
	if (cr6.eq) goto loc_8249F61C;
	// bl 0x8249d398
	sub_8249D398(ctx, base);
	// b 0x8249f620
	goto loc_8249F620;
loc_8249F61C:
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
loc_8249F620:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lfs f10,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f10,f31
	f30.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lfs f29,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f27,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f27.f64 = double(temp.f32);
	// lfs f26,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f26.f64 = double(temp.f32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// fneg f25,f30
	ctx.fpscr.disableFlushMode();
	f25.u64 = f30.u64 ^ 0x8000000000000000;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f25,88(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// stfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// stfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f8,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 + f29.f64));
	// lfs f9,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// fadds f1,f4,f26
	ctx.f1.f64 = double(float(ctx.f4.f64 + f26.f64));
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	f0.f64 = double(temp.f32);
	// fadds f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 + f28.f64));
	// lfs f6,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f0,f29
	ctx.f11.f64 = double(float(f0.f64 + f29.f64));
	// lfs f2,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f6,f27
	ctx.f3.f64 = double(float(ctx.f6.f64 + f27.f64));
	// lfs f12,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f2,f28
	ctx.f13.f64 = double(float(ctx.f2.f64 + f28.f64));
	// lfs f10,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fadds f6,f10,f26
	ctx.f6.f64 = double(float(ctx.f10.f64 + f26.f64));
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f11,212(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f9,216(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f6,220(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f8,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f8,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 + f28.f64));
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	f0.f64 = double(temp.f32);
	// fadds f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 + f29.f64));
	// lfs f8,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f0,f27
	ctx.f10.f64 = double(float(f0.f64 + f27.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f7,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f26
	ctx.f6.f64 = double(float(ctx.f8.f64 + f26.f64));
	// lfs f5,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 + f28.f64));
	// lfs f3,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 + f29.f64));
	// lfs f1,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f3,f27
	f0.f64 = double(float(ctx.f3.f64 + f27.f64));
	// fadds f13,f1,f26
	ctx.f13.f64 = double(float(ctx.f1.f64 + f26.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f4,192(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x8249f604
	if (cr6.lt) goto loc_8249F604;
loc_8249F7BC:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_8249F7D0"))) PPC_WEAK_FUNC(sub_8249F7D0);
PPC_FUNC_IMPL(__imp__sub_8249F7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249F7D4"))) PPC_WEAK_FUNC(sub_8249F7D4);
PPC_FUNC_IMPL(__imp__sub_8249F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249F7D8"))) PPC_WEAK_FUNC(sub_8249F7D8);
PPC_FUNC_IMPL(__imp__sub_8249F7D8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r27,44(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwz r26,60(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lfs f31,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lwz r25,64(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// stw r7,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r7.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// ble cr6,0x8249f9f8
	if (!cr6.gt) goto loc_8249F9F8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r29,r10,-12992
	r29.s64 = ctx.r10.s64 + -12992;
loc_8249F854:
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// divw r8,r30,r27
	ctx.r8.s32 = r30.s32 / r27.s32;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// lfsx f11,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// subf r5,r7,r30
	ctx.r5.s64 = r30.s64 - ctx.r7.s64;
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f8,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f7,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f10,f6,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f31,4(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmsubs f6,f10,f13,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,-4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmsubs f5,f2,f12,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f4,f11,f0,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f7.f64));
	// stfs f4,-8(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// blt cr6,0x8249f928
	if (cr6.lt) goto loc_8249F928;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_8249F928:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x8249f940
	if (cr6.lt) goto loc_8249F940;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8249F940:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// blt cr6,0x8249f968
	if (cr6.lt) goto loc_8249F968;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8249F968:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8249f980
	if (cr6.lt) goto loc_8249F980;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8249F980:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r26
	cr6.compare<int32_t>(ctx.r9.s32, r26.s32, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x8249f998
	if (cr6.lt) goto loc_8249F998;
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
loc_8249F998:
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r22,r9
	cr6.compare<int32_t>(r22.s32, ctx.r9.s32, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// blt cr6,0x8249f9b0
	if (cr6.lt) goto loc_8249F9B0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_8249F9B0:
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// blt cr6,0x8249f9c8
	if (cr6.lt) goto loc_8249F9C8;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_8249F9C8:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// blt cr6,0x8249f9e0
	if (cr6.lt) goto loc_8249F9E0;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_8249F9E0:
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// blt cr6,0x8249f854
	if (cr6.lt) goto loc_8249F854;
loc_8249F9F8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpw cr6,r26,r22
	cr6.compare<int32_t>(r26.s32, r22.s32, xer);
	// bgt cr6,0x8249fae4
	if (cr6.gt) goto loc_8249FAE4;
loc_8249FA04:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(r25.s32, r24.s32, xer);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r11,r10,r3
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// bgt cr6,0x8249fad8
	if (cr6.gt) goto loc_8249FAD8;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8249FA2C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x8249fab8
	if (!cr6.gt) goto loc_8249FAB8;
	// lwz r8,36(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8249FA5C:
	// lfsx f11,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 - ctx.f11.f64));
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmadds f1,f5,f7,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f11,f4,f3,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// bgt cr6,0x8249fab4
	if (cr6.gt) goto loc_8249FAB4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r7,r27
	cr6.compare<int32_t>(ctx.r7.s32, r27.s32, xer);
	// blt cr6,0x8249fa5c
	if (cr6.lt) goto loc_8249FA5C;
	// b 0x8249fab8
	goto loc_8249FAB8;
loc_8249FAB4:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
loc_8249FAB8:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249facc
	if (cr6.eq) goto loc_8249FACC;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stbx r21,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, r21.u8);
loc_8249FACC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x8249fa2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8249FA2C;
loc_8249FAD8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r22
	cr6.compare<int32_t>(ctx.r3.s32, r22.s32, xer);
	// ble cr6,0x8249fa04
	if (!cr6.gt) goto loc_8249FA04;
loc_8249FAE4:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r11,r28,32
	r11.s64 = r28.s64 + 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8249fb0c
	if (!cr6.gt) goto loc_8249FB0C;
loc_8249FAF4:
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
	// bgt cr6,0x8249faf4
	if (cr6.gt) goto loc_8249FAF4;
loc_8249FB0C:
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_8249FB1C"))) PPC_WEAK_FUNC(sub_8249FB1C);
PPC_FUNC_IMPL(__imp__sub_8249FB1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8249FB20"))) PPC_WEAK_FUNC(sub_8249FB20);
PPC_FUNC_IMPL(__imp__sub_8249FB20) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r3,56
	r29.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8249fb5c
	if (!cr6.gt) goto loc_8249FB5C;
loc_8249FB44:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8249fb44
	if (cr6.gt) goto loc_8249FB44;
loc_8249FB5C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8249fbe0
	if (!cr6.gt) goto loc_8249FBE0;
	// li r30,0
	r30.s64 = 0;
loc_8249FB74:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249fb90
	if (!cr6.eq) goto loc_8249FB90;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249fbc8
	if (cr6.eq) goto loc_8249FBC8;
loc_8249FB90:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8249fd90
	sub_8249FD90(ctx, base);
loc_8249FBC8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8249fb74
	if (cr6.lt) goto loc_8249FB74;
loc_8249FBE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249FBE4"))) PPC_WEAK_FUNC(sub_8249FBE4);
PPC_FUNC_IMPL(__imp__sub_8249FBE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249FBE8"))) PPC_WEAK_FUNC(sub_8249FBE8);
PPC_FUNC_IMPL(__imp__sub_8249FBE8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-4580
	ctx.r9.s64 = r11.s64 + -4580;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,9296
	ctx.r8.s64 = ctx.r10.s64 + 9296;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// addi r27,r3,8
	r27.s64 = ctx.r3.s64 + 8;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addi r4,r6,6684
	ctx.r4.s64 = ctx.r6.s64 + 6684;
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// or r9,r11,r3
	ctx.r9.u64 = r11.u64 | ctx.r3.u64;
	// addi r8,r10,-4592
	ctx.r8.s64 = ctx.r10.s64 + -4592;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// or r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 | ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r6,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r6.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// bl 0x8232bce0
	sub_8232BCE0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8249fcdc
	if (!cr6.gt) goto loc_8249FCDC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249FCDC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x8249fd00
	if (!cr6.lt) goto loc_8249FD00;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249FD00:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8249fd30
	if (!cr6.gt) goto loc_8249FD30;
loc_8249FD14:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8249fd14
	if (cr6.lt) goto loc_8249FD14;
loc_8249FD30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8249FD38"))) PPC_WEAK_FUNC(sub_8249FD38);
PPC_FUNC_IMPL(__imp__sub_8249FD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8249FD3C"))) PPC_WEAK_FUNC(sub_8249FD3C);
PPC_FUNC_IMPL(__imp__sub_8249FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FD40"))) PPC_WEAK_FUNC(sub_8249FD40);
PPC_FUNC_IMPL(__imp__sub_8249FD40) {
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
	// addi r10,r11,-4580
	ctx.r10.s64 = r11.s64 + -4580;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8249ffc0
	sub_8249FFC0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x823a9838
	sub_823A9838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249FD88"))) PPC_WEAK_FUNC(sub_8249FD88);
PPC_FUNC_IMPL(__imp__sub_8249FD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249FD8C"))) PPC_WEAK_FUNC(sub_8249FD8C);
PPC_FUNC_IMPL(__imp__sub_8249FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FD90"))) PPC_WEAK_FUNC(sub_8249FD90);
PPC_FUNC_IMPL(__imp__sub_8249FD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8249fdd0
	if (!cr6.gt) goto loc_8249FDD0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249FDD0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249fe1c
	if (cr0.eq) goto loc_8249FE1C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
loc_8249FE1C:
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

__attribute__((alias("__imp__sub_8249FE30"))) PPC_WEAK_FUNC(sub_8249FE30);
PPC_FUNC_IMPL(__imp__sub_8249FE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249FE34"))) PPC_WEAK_FUNC(sub_8249FE34);
PPC_FUNC_IMPL(__imp__sub_8249FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FE38"))) PPC_WEAK_FUNC(sub_8249FE38);
PPC_FUNC_IMPL(__imp__sub_8249FE38) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8249fe70
	if (!cr6.gt) goto loc_8249FE70;
loc_8249FE58:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8249fe58
	if (cr6.gt) goto loc_8249FE58;
loc_8249FE70:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8249fe94
	if (!cr6.gt) goto loc_8249FE94;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249FE94:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249fee4
	if (cr6.eq) goto loc_8249FEE4;
loc_8249FEB4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249fd90
	sub_8249FD90(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8249feb4
	if (!cr6.eq) goto loc_8249FEB4;
loc_8249FEE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8249FEE8"))) PPC_WEAK_FUNC(sub_8249FEE8);
PPC_FUNC_IMPL(__imp__sub_8249FEE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8249FEEC"))) PPC_WEAK_FUNC(sub_8249FEEC);
PPC_FUNC_IMPL(__imp__sub_8249FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FEF0"))) PPC_WEAK_FUNC(sub_8249FEF0);
PPC_FUNC_IMPL(__imp__sub_8249FEF0) {
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
	// addi r9,r11,-4604
	ctx.r9.s64 = r11.s64 + -4604;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8249ff34
	if (!cr6.gt) goto loc_8249FF34;
loc_8249FF1C:
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
	// bgt cr6,0x8249ff1c
	if (cr6.gt) goto loc_8249FF1C;
loc_8249FF34:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249ff4c
	if (cr6.eq) goto loc_8249FF4C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249FF4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249FF5C"))) PPC_WEAK_FUNC(sub_8249FF5C);
PPC_FUNC_IMPL(__imp__sub_8249FF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249FF60"))) PPC_WEAK_FUNC(sub_8249FF60);
PPC_FUNC_IMPL(__imp__sub_8249FF60) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4592
	ctx.r9.s64 = ctx.r10.s64 + -4592;
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

__attribute__((alias("__imp__sub_8249FFB8"))) PPC_WEAK_FUNC(sub_8249FFB8);
PPC_FUNC_IMPL(__imp__sub_8249FFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249FFBC"))) PPC_WEAK_FUNC(sub_8249FFBC);
PPC_FUNC_IMPL(__imp__sub_8249FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FFC0"))) PPC_WEAK_FUNC(sub_8249FFC0);
PPC_FUNC_IMPL(__imp__sub_8249FFC0) {
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
	// addi r9,r11,-4592
	ctx.r9.s64 = r11.s64 + -4592;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824a0004
	if (!cr6.gt) goto loc_824A0004;
loc_8249FFEC:
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
	// bgt cr6,0x8249ffec
	if (cr6.gt) goto loc_8249FFEC;
loc_824A0004:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a00a8
	sub_824A00A8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-4604
	ctx.r10.s64 = r11.s64 + -4604;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824a0040
	if (!cr6.gt) goto loc_824A0040;
loc_824A0028:
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
	// bgt cr6,0x824a0028
	if (cr6.gt) goto loc_824A0028;
loc_824A0040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A0050"))) PPC_WEAK_FUNC(sub_824A0050);
PPC_FUNC_IMPL(__imp__sub_824A0050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0054"))) PPC_WEAK_FUNC(sub_824A0054);
PPC_FUNC_IMPL(__imp__sub_824A0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0058"))) PPC_WEAK_FUNC(sub_824A0058);
PPC_FUNC_IMPL(__imp__sub_824A0058) {
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
	// bl 0x8249ffc0
	sub_8249FFC0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0090
	if (cr6.eq) goto loc_824A0090;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A0090:
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

__attribute__((alias("__imp__sub_824A00A4"))) PPC_WEAK_FUNC(sub_824A00A4);
PPC_FUNC_IMPL(__imp__sub_824A00A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A00A8"))) PPC_WEAK_FUNC(sub_824A00A8);
PPC_FUNC_IMPL(__imp__sub_824A00A8) {
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
	// beq cr6,0x824a018c
	if (cr6.eq) goto loc_824A018C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a011c
	if (!cr6.eq) goto loc_824A011C;
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
	// beq cr6,0x824a018c
	if (cr6.eq) goto loc_824A018C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x822c5890
	sub_822C5890(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x824a018c
	goto loc_824A018C;
loc_824A011C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ff60
	sub_8249FF60(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824a0148
	if (!cr6.gt) goto loc_824A0148;
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
loc_824A0148:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249fe38
	sub_8249FE38(ctx, base);
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
	// bl 0x8249ffc0
	sub_8249FFC0(ctx, base);
loc_824A018C:
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

__attribute__((alias("__imp__sub_824A01A0"))) PPC_WEAK_FUNC(sub_824A01A0);
PPC_FUNC_IMPL(__imp__sub_824A01A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A01A4"))) PPC_WEAK_FUNC(sub_824A01A4);
PPC_FUNC_IMPL(__imp__sub_824A01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A01A8"))) PPC_WEAK_FUNC(sub_824A01A8);
PPC_FUNC_IMPL(__imp__sub_824A01A8) {
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
	// addi r10,r11,-4580
	ctx.r10.s64 = r11.s64 + -4580;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8249ffc0
	sub_8249FFC0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x823a9838
	sub_823A9838(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a0200
	if (cr6.eq) goto loc_824A0200;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A0200:
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

__attribute__((alias("__imp__sub_824A0214"))) PPC_WEAK_FUNC(sub_824A0214);
PPC_FUNC_IMPL(__imp__sub_824A0214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0218"))) PPC_WEAK_FUNC(sub_824A0218);
PPC_FUNC_IMPL(__imp__sub_824A0218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
}

__attribute__((alias("__imp__sub_824A0244"))) PPC_WEAK_FUNC(sub_824A0244);
PPC_FUNC_IMPL(__imp__sub_824A0244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0248"))) PPC_WEAK_FUNC(sub_824A0248);
PPC_FUNC_IMPL(__imp__sub_824A0248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,6240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
}

__attribute__((alias("__imp__sub_824A0290"))) PPC_WEAK_FUNC(sub_824A0290);
PPC_FUNC_IMPL(__imp__sub_824A0290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0294"))) PPC_WEAK_FUNC(sub_824A0294);
PPC_FUNC_IMPL(__imp__sub_824A0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0298"))) PPC_WEAK_FUNC(sub_824A0298);
PPC_FUNC_IMPL(__imp__sub_824A0298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-4576(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4576);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f11,f10
	ctx.f11.f64 = double(float(sqrt(ctx.f10.f64)));
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// blt cr6,0x824a02c8
	if (cr6.lt) goto loc_824A02C8;
	// li r11,0
	r11.s64 = 0;
loc_824A02C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r7,r8,-12976
	ctx.r7.s64 = ctx.r8.s64 + -12976;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 / ctx.f11.f64));
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12976);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fmsubs f12,f10,f12,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmsubs f3,f8,f11,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmsubs f13,f9,f13,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
}

