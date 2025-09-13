#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F411D4"))) PPC_WEAK_FUNC(sub_82F411D4);
PPC_FUNC_IMPL(__imp__sub_82F411D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F411D8"))) PPC_WEAK_FUNC(sub_82F411D8);
PPC_FUNC_IMPL(__imp__sub_82F411D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19112
	ctx.r3.s64 = r11.s64 + -19112;
}

__attribute__((alias("__imp__sub_82F411E0"))) PPC_WEAK_FUNC(sub_82F411E0);
PPC_FUNC_IMPL(__imp__sub_82F411E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F411E4"))) PPC_WEAK_FUNC(sub_82F411E4);
PPC_FUNC_IMPL(__imp__sub_82F411E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F411E8"))) PPC_WEAK_FUNC(sub_82F411E8);
PPC_FUNC_IMPL(__imp__sub_82F411E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19104
	ctx.r3.s64 = r11.s64 + -19104;
}

__attribute__((alias("__imp__sub_82F411F0"))) PPC_WEAK_FUNC(sub_82F411F0);
PPC_FUNC_IMPL(__imp__sub_82F411F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F411F4"))) PPC_WEAK_FUNC(sub_82F411F4);
PPC_FUNC_IMPL(__imp__sub_82F411F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F411F8"))) PPC_WEAK_FUNC(sub_82F411F8);
PPC_FUNC_IMPL(__imp__sub_82F411F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19096
	ctx.r3.s64 = r11.s64 + -19096;
}

__attribute__((alias("__imp__sub_82F41200"))) PPC_WEAK_FUNC(sub_82F41200);
PPC_FUNC_IMPL(__imp__sub_82F41200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41204"))) PPC_WEAK_FUNC(sub_82F41204);
PPC_FUNC_IMPL(__imp__sub_82F41204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41208"))) PPC_WEAK_FUNC(sub_82F41208);
PPC_FUNC_IMPL(__imp__sub_82F41208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19088
	ctx.r3.s64 = r11.s64 + -19088;
}

__attribute__((alias("__imp__sub_82F41210"))) PPC_WEAK_FUNC(sub_82F41210);
PPC_FUNC_IMPL(__imp__sub_82F41210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41214"))) PPC_WEAK_FUNC(sub_82F41214);
PPC_FUNC_IMPL(__imp__sub_82F41214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41218"))) PPC_WEAK_FUNC(sub_82F41218);
PPC_FUNC_IMPL(__imp__sub_82F41218) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-20656
	ctx.r3.s64 = r11.s64 + -20656;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-20296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41244"))) PPC_WEAK_FUNC(sub_82F41244);
PPC_FUNC_IMPL(__imp__sub_82F41244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41248"))) PPC_WEAK_FUNC(sub_82F41248);
PPC_FUNC_IMPL(__imp__sub_82F41248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19080
	ctx.r3.s64 = r11.s64 + -19080;
}

__attribute__((alias("__imp__sub_82F41250"))) PPC_WEAK_FUNC(sub_82F41250);
PPC_FUNC_IMPL(__imp__sub_82F41250) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41254"))) PPC_WEAK_FUNC(sub_82F41254);
PPC_FUNC_IMPL(__imp__sub_82F41254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41258"))) PPC_WEAK_FUNC(sub_82F41258);
PPC_FUNC_IMPL(__imp__sub_82F41258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19072
	ctx.r3.s64 = r11.s64 + -19072;
}

__attribute__((alias("__imp__sub_82F41260"))) PPC_WEAK_FUNC(sub_82F41260);
PPC_FUNC_IMPL(__imp__sub_82F41260) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41264"))) PPC_WEAK_FUNC(sub_82F41264);
PPC_FUNC_IMPL(__imp__sub_82F41264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41268"))) PPC_WEAK_FUNC(sub_82F41268);
PPC_FUNC_IMPL(__imp__sub_82F41268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19064
	ctx.r3.s64 = r11.s64 + -19064;
}

__attribute__((alias("__imp__sub_82F41270"))) PPC_WEAK_FUNC(sub_82F41270);
PPC_FUNC_IMPL(__imp__sub_82F41270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41274"))) PPC_WEAK_FUNC(sub_82F41274);
PPC_FUNC_IMPL(__imp__sub_82F41274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41278"))) PPC_WEAK_FUNC(sub_82F41278);
PPC_FUNC_IMPL(__imp__sub_82F41278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19056
	ctx.r3.s64 = r11.s64 + -19056;
}

__attribute__((alias("__imp__sub_82F41280"))) PPC_WEAK_FUNC(sub_82F41280);
PPC_FUNC_IMPL(__imp__sub_82F41280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41284"))) PPC_WEAK_FUNC(sub_82F41284);
PPC_FUNC_IMPL(__imp__sub_82F41284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41288"))) PPC_WEAK_FUNC(sub_82F41288);
PPC_FUNC_IMPL(__imp__sub_82F41288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19048
	ctx.r3.s64 = r11.s64 + -19048;
}

__attribute__((alias("__imp__sub_82F41290"))) PPC_WEAK_FUNC(sub_82F41290);
PPC_FUNC_IMPL(__imp__sub_82F41290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41294"))) PPC_WEAK_FUNC(sub_82F41294);
PPC_FUNC_IMPL(__imp__sub_82F41294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41298"))) PPC_WEAK_FUNC(sub_82F41298);
PPC_FUNC_IMPL(__imp__sub_82F41298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19040
	ctx.r3.s64 = r11.s64 + -19040;
}

__attribute__((alias("__imp__sub_82F412A0"))) PPC_WEAK_FUNC(sub_82F412A0);
PPC_FUNC_IMPL(__imp__sub_82F412A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F412A4"))) PPC_WEAK_FUNC(sub_82F412A4);
PPC_FUNC_IMPL(__imp__sub_82F412A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F412A8"))) PPC_WEAK_FUNC(sub_82F412A8);
PPC_FUNC_IMPL(__imp__sub_82F412A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19032
	ctx.r3.s64 = r11.s64 + -19032;
}

__attribute__((alias("__imp__sub_82F412B0"))) PPC_WEAK_FUNC(sub_82F412B0);
PPC_FUNC_IMPL(__imp__sub_82F412B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F412B4"))) PPC_WEAK_FUNC(sub_82F412B4);
PPC_FUNC_IMPL(__imp__sub_82F412B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F412B8"))) PPC_WEAK_FUNC(sub_82F412B8);
PPC_FUNC_IMPL(__imp__sub_82F412B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19024
	ctx.r3.s64 = r11.s64 + -19024;
}

__attribute__((alias("__imp__sub_82F412C0"))) PPC_WEAK_FUNC(sub_82F412C0);
PPC_FUNC_IMPL(__imp__sub_82F412C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F412C4"))) PPC_WEAK_FUNC(sub_82F412C4);
PPC_FUNC_IMPL(__imp__sub_82F412C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F412C8"))) PPC_WEAK_FUNC(sub_82F412C8);
PPC_FUNC_IMPL(__imp__sub_82F412C8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-20260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20260, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F412F0"))) PPC_WEAK_FUNC(sub_82F412F0);
PPC_FUNC_IMPL(__imp__sub_82F412F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F412F4"))) PPC_WEAK_FUNC(sub_82F412F4);
PPC_FUNC_IMPL(__imp__sub_82F412F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F412F8"))) PPC_WEAK_FUNC(sub_82F412F8);
PPC_FUNC_IMPL(__imp__sub_82F412F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19016
	ctx.r3.s64 = r11.s64 + -19016;
}

__attribute__((alias("__imp__sub_82F41300"))) PPC_WEAK_FUNC(sub_82F41300);
PPC_FUNC_IMPL(__imp__sub_82F41300) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41304"))) PPC_WEAK_FUNC(sub_82F41304);
PPC_FUNC_IMPL(__imp__sub_82F41304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41308"))) PPC_WEAK_FUNC(sub_82F41308);
PPC_FUNC_IMPL(__imp__sub_82F41308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19008
	ctx.r3.s64 = r11.s64 + -19008;
}

__attribute__((alias("__imp__sub_82F41310"))) PPC_WEAK_FUNC(sub_82F41310);
PPC_FUNC_IMPL(__imp__sub_82F41310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41314"))) PPC_WEAK_FUNC(sub_82F41314);
PPC_FUNC_IMPL(__imp__sub_82F41314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41318"))) PPC_WEAK_FUNC(sub_82F41318);
PPC_FUNC_IMPL(__imp__sub_82F41318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19000
	ctx.r3.s64 = r11.s64 + -19000;
}

__attribute__((alias("__imp__sub_82F41320"))) PPC_WEAK_FUNC(sub_82F41320);
PPC_FUNC_IMPL(__imp__sub_82F41320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41324"))) PPC_WEAK_FUNC(sub_82F41324);
PPC_FUNC_IMPL(__imp__sub_82F41324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41328"))) PPC_WEAK_FUNC(sub_82F41328);
PPC_FUNC_IMPL(__imp__sub_82F41328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18992
	ctx.r3.s64 = r11.s64 + -18992;
}

__attribute__((alias("__imp__sub_82F41330"))) PPC_WEAK_FUNC(sub_82F41330);
PPC_FUNC_IMPL(__imp__sub_82F41330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41334"))) PPC_WEAK_FUNC(sub_82F41334);
PPC_FUNC_IMPL(__imp__sub_82F41334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41338"))) PPC_WEAK_FUNC(sub_82F41338);
PPC_FUNC_IMPL(__imp__sub_82F41338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18984
	ctx.r3.s64 = r11.s64 + -18984;
}

__attribute__((alias("__imp__sub_82F41340"))) PPC_WEAK_FUNC(sub_82F41340);
PPC_FUNC_IMPL(__imp__sub_82F41340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41344"))) PPC_WEAK_FUNC(sub_82F41344);
PPC_FUNC_IMPL(__imp__sub_82F41344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41348"))) PPC_WEAK_FUNC(sub_82F41348);
PPC_FUNC_IMPL(__imp__sub_82F41348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18976
	ctx.r3.s64 = r11.s64 + -18976;
}

__attribute__((alias("__imp__sub_82F41350"))) PPC_WEAK_FUNC(sub_82F41350);
PPC_FUNC_IMPL(__imp__sub_82F41350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41354"))) PPC_WEAK_FUNC(sub_82F41354);
PPC_FUNC_IMPL(__imp__sub_82F41354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41358"))) PPC_WEAK_FUNC(sub_82F41358);
PPC_FUNC_IMPL(__imp__sub_82F41358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18968
	ctx.r3.s64 = r11.s64 + -18968;
}

__attribute__((alias("__imp__sub_82F41360"))) PPC_WEAK_FUNC(sub_82F41360);
PPC_FUNC_IMPL(__imp__sub_82F41360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41364"))) PPC_WEAK_FUNC(sub_82F41364);
PPC_FUNC_IMPL(__imp__sub_82F41364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41368"))) PPC_WEAK_FUNC(sub_82F41368);
PPC_FUNC_IMPL(__imp__sub_82F41368) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-20240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20240, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41390"))) PPC_WEAK_FUNC(sub_82F41390);
PPC_FUNC_IMPL(__imp__sub_82F41390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41394"))) PPC_WEAK_FUNC(sub_82F41394);
PPC_FUNC_IMPL(__imp__sub_82F41394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41398"))) PPC_WEAK_FUNC(sub_82F41398);
PPC_FUNC_IMPL(__imp__sub_82F41398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18960
	ctx.r3.s64 = r11.s64 + -18960;
}

__attribute__((alias("__imp__sub_82F413A0"))) PPC_WEAK_FUNC(sub_82F413A0);
PPC_FUNC_IMPL(__imp__sub_82F413A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F413A4"))) PPC_WEAK_FUNC(sub_82F413A4);
PPC_FUNC_IMPL(__imp__sub_82F413A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F413A8"))) PPC_WEAK_FUNC(sub_82F413A8);
PPC_FUNC_IMPL(__imp__sub_82F413A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18952
	ctx.r3.s64 = r11.s64 + -18952;
}

__attribute__((alias("__imp__sub_82F413B0"))) PPC_WEAK_FUNC(sub_82F413B0);
PPC_FUNC_IMPL(__imp__sub_82F413B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F413B4"))) PPC_WEAK_FUNC(sub_82F413B4);
PPC_FUNC_IMPL(__imp__sub_82F413B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F413B8"))) PPC_WEAK_FUNC(sub_82F413B8);
PPC_FUNC_IMPL(__imp__sub_82F413B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18944
	ctx.r3.s64 = r11.s64 + -18944;
}

__attribute__((alias("__imp__sub_82F413C0"))) PPC_WEAK_FUNC(sub_82F413C0);
PPC_FUNC_IMPL(__imp__sub_82F413C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F413C4"))) PPC_WEAK_FUNC(sub_82F413C4);
PPC_FUNC_IMPL(__imp__sub_82F413C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F413C8"))) PPC_WEAK_FUNC(sub_82F413C8);
PPC_FUNC_IMPL(__imp__sub_82F413C8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-20220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20220, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F413F0"))) PPC_WEAK_FUNC(sub_82F413F0);
PPC_FUNC_IMPL(__imp__sub_82F413F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F413F4"))) PPC_WEAK_FUNC(sub_82F413F4);
PPC_FUNC_IMPL(__imp__sub_82F413F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F413F8"))) PPC_WEAK_FUNC(sub_82F413F8);
PPC_FUNC_IMPL(__imp__sub_82F413F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18936
	ctx.r3.s64 = r11.s64 + -18936;
}

__attribute__((alias("__imp__sub_82F41400"))) PPC_WEAK_FUNC(sub_82F41400);
PPC_FUNC_IMPL(__imp__sub_82F41400) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41404"))) PPC_WEAK_FUNC(sub_82F41404);
PPC_FUNC_IMPL(__imp__sub_82F41404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41408"))) PPC_WEAK_FUNC(sub_82F41408);
PPC_FUNC_IMPL(__imp__sub_82F41408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18928
	ctx.r3.s64 = r11.s64 + -18928;
}

__attribute__((alias("__imp__sub_82F41410"))) PPC_WEAK_FUNC(sub_82F41410);
PPC_FUNC_IMPL(__imp__sub_82F41410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41414"))) PPC_WEAK_FUNC(sub_82F41414);
PPC_FUNC_IMPL(__imp__sub_82F41414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41418"))) PPC_WEAK_FUNC(sub_82F41418);
PPC_FUNC_IMPL(__imp__sub_82F41418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18920
	ctx.r3.s64 = r11.s64 + -18920;
}

__attribute__((alias("__imp__sub_82F41420"))) PPC_WEAK_FUNC(sub_82F41420);
PPC_FUNC_IMPL(__imp__sub_82F41420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41424"))) PPC_WEAK_FUNC(sub_82F41424);
PPC_FUNC_IMPL(__imp__sub_82F41424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41428"))) PPC_WEAK_FUNC(sub_82F41428);
PPC_FUNC_IMPL(__imp__sub_82F41428) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-20200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20200, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41450"))) PPC_WEAK_FUNC(sub_82F41450);
PPC_FUNC_IMPL(__imp__sub_82F41450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41454"))) PPC_WEAK_FUNC(sub_82F41454);
PPC_FUNC_IMPL(__imp__sub_82F41454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41458"))) PPC_WEAK_FUNC(sub_82F41458);
PPC_FUNC_IMPL(__imp__sub_82F41458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18912
	ctx.r3.s64 = r11.s64 + -18912;
}

__attribute__((alias("__imp__sub_82F41460"))) PPC_WEAK_FUNC(sub_82F41460);
PPC_FUNC_IMPL(__imp__sub_82F41460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41464"))) PPC_WEAK_FUNC(sub_82F41464);
PPC_FUNC_IMPL(__imp__sub_82F41464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41468"))) PPC_WEAK_FUNC(sub_82F41468);
PPC_FUNC_IMPL(__imp__sub_82F41468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18904
	ctx.r3.s64 = r11.s64 + -18904;
}

__attribute__((alias("__imp__sub_82F41470"))) PPC_WEAK_FUNC(sub_82F41470);
PPC_FUNC_IMPL(__imp__sub_82F41470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41474"))) PPC_WEAK_FUNC(sub_82F41474);
PPC_FUNC_IMPL(__imp__sub_82F41474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41478"))) PPC_WEAK_FUNC(sub_82F41478);
PPC_FUNC_IMPL(__imp__sub_82F41478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18896
	ctx.r3.s64 = r11.s64 + -18896;
}

__attribute__((alias("__imp__sub_82F41480"))) PPC_WEAK_FUNC(sub_82F41480);
PPC_FUNC_IMPL(__imp__sub_82F41480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41484"))) PPC_WEAK_FUNC(sub_82F41484);
PPC_FUNC_IMPL(__imp__sub_82F41484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41488"))) PPC_WEAK_FUNC(sub_82F41488);
PPC_FUNC_IMPL(__imp__sub_82F41488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18888
	ctx.r3.s64 = r11.s64 + -18888;
}

__attribute__((alias("__imp__sub_82F41490"))) PPC_WEAK_FUNC(sub_82F41490);
PPC_FUNC_IMPL(__imp__sub_82F41490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41494"))) PPC_WEAK_FUNC(sub_82F41494);
PPC_FUNC_IMPL(__imp__sub_82F41494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41498"))) PPC_WEAK_FUNC(sub_82F41498);
PPC_FUNC_IMPL(__imp__sub_82F41498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18880
	ctx.r3.s64 = r11.s64 + -18880;
}

__attribute__((alias("__imp__sub_82F414A0"))) PPC_WEAK_FUNC(sub_82F414A0);
PPC_FUNC_IMPL(__imp__sub_82F414A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414A4"))) PPC_WEAK_FUNC(sub_82F414A4);
PPC_FUNC_IMPL(__imp__sub_82F414A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414A8"))) PPC_WEAK_FUNC(sub_82F414A8);
PPC_FUNC_IMPL(__imp__sub_82F414A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18872
	ctx.r3.s64 = r11.s64 + -18872;
}

__attribute__((alias("__imp__sub_82F414B0"))) PPC_WEAK_FUNC(sub_82F414B0);
PPC_FUNC_IMPL(__imp__sub_82F414B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414B4"))) PPC_WEAK_FUNC(sub_82F414B4);
PPC_FUNC_IMPL(__imp__sub_82F414B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414B8"))) PPC_WEAK_FUNC(sub_82F414B8);
PPC_FUNC_IMPL(__imp__sub_82F414B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18864
	ctx.r3.s64 = r11.s64 + -18864;
}

__attribute__((alias("__imp__sub_82F414C0"))) PPC_WEAK_FUNC(sub_82F414C0);
PPC_FUNC_IMPL(__imp__sub_82F414C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414C4"))) PPC_WEAK_FUNC(sub_82F414C4);
PPC_FUNC_IMPL(__imp__sub_82F414C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414C8"))) PPC_WEAK_FUNC(sub_82F414C8);
PPC_FUNC_IMPL(__imp__sub_82F414C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18856
	ctx.r3.s64 = r11.s64 + -18856;
}

__attribute__((alias("__imp__sub_82F414D0"))) PPC_WEAK_FUNC(sub_82F414D0);
PPC_FUNC_IMPL(__imp__sub_82F414D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414D4"))) PPC_WEAK_FUNC(sub_82F414D4);
PPC_FUNC_IMPL(__imp__sub_82F414D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414D8"))) PPC_WEAK_FUNC(sub_82F414D8);
PPC_FUNC_IMPL(__imp__sub_82F414D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18848
	ctx.r3.s64 = r11.s64 + -18848;
}

__attribute__((alias("__imp__sub_82F414E0"))) PPC_WEAK_FUNC(sub_82F414E0);
PPC_FUNC_IMPL(__imp__sub_82F414E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414E4"))) PPC_WEAK_FUNC(sub_82F414E4);
PPC_FUNC_IMPL(__imp__sub_82F414E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414E8"))) PPC_WEAK_FUNC(sub_82F414E8);
PPC_FUNC_IMPL(__imp__sub_82F414E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18840
	ctx.r3.s64 = r11.s64 + -18840;
}

__attribute__((alias("__imp__sub_82F414F0"))) PPC_WEAK_FUNC(sub_82F414F0);
PPC_FUNC_IMPL(__imp__sub_82F414F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F414F4"))) PPC_WEAK_FUNC(sub_82F414F4);
PPC_FUNC_IMPL(__imp__sub_82F414F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F414F8"))) PPC_WEAK_FUNC(sub_82F414F8);
PPC_FUNC_IMPL(__imp__sub_82F414F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18832
	ctx.r3.s64 = r11.s64 + -18832;
}

__attribute__((alias("__imp__sub_82F41500"))) PPC_WEAK_FUNC(sub_82F41500);
PPC_FUNC_IMPL(__imp__sub_82F41500) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41504"))) PPC_WEAK_FUNC(sub_82F41504);
PPC_FUNC_IMPL(__imp__sub_82F41504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41508"))) PPC_WEAK_FUNC(sub_82F41508);
PPC_FUNC_IMPL(__imp__sub_82F41508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18824
	ctx.r3.s64 = r11.s64 + -18824;
}

__attribute__((alias("__imp__sub_82F41510"))) PPC_WEAK_FUNC(sub_82F41510);
PPC_FUNC_IMPL(__imp__sub_82F41510) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41514"))) PPC_WEAK_FUNC(sub_82F41514);
PPC_FUNC_IMPL(__imp__sub_82F41514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41518"))) PPC_WEAK_FUNC(sub_82F41518);
PPC_FUNC_IMPL(__imp__sub_82F41518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18816
	ctx.r3.s64 = r11.s64 + -18816;
}

__attribute__((alias("__imp__sub_82F41520"))) PPC_WEAK_FUNC(sub_82F41520);
PPC_FUNC_IMPL(__imp__sub_82F41520) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41524"))) PPC_WEAK_FUNC(sub_82F41524);
PPC_FUNC_IMPL(__imp__sub_82F41524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41528"))) PPC_WEAK_FUNC(sub_82F41528);
PPC_FUNC_IMPL(__imp__sub_82F41528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18808
	ctx.r3.s64 = r11.s64 + -18808;
}

__attribute__((alias("__imp__sub_82F41530"))) PPC_WEAK_FUNC(sub_82F41530);
PPC_FUNC_IMPL(__imp__sub_82F41530) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41534"))) PPC_WEAK_FUNC(sub_82F41534);
PPC_FUNC_IMPL(__imp__sub_82F41534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41538"))) PPC_WEAK_FUNC(sub_82F41538);
PPC_FUNC_IMPL(__imp__sub_82F41538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18800
	ctx.r3.s64 = r11.s64 + -18800;
}

__attribute__((alias("__imp__sub_82F41540"))) PPC_WEAK_FUNC(sub_82F41540);
PPC_FUNC_IMPL(__imp__sub_82F41540) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41544"))) PPC_WEAK_FUNC(sub_82F41544);
PPC_FUNC_IMPL(__imp__sub_82F41544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41548"))) PPC_WEAK_FUNC(sub_82F41548);
PPC_FUNC_IMPL(__imp__sub_82F41548) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-20148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41574"))) PPC_WEAK_FUNC(sub_82F41574);
PPC_FUNC_IMPL(__imp__sub_82F41574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41578"))) PPC_WEAK_FUNC(sub_82F41578);
PPC_FUNC_IMPL(__imp__sub_82F41578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-20144
	ctx.r3.s64 = ctx.r7.s64 + -20144;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-18792
	ctx.r3.s64 = ctx.r6.s64 + -18792;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F415F0"))) PPC_WEAK_FUNC(sub_82F415F0);
PPC_FUNC_IMPL(__imp__sub_82F415F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F415F4"))) PPC_WEAK_FUNC(sub_82F415F4);
PPC_FUNC_IMPL(__imp__sub_82F415F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F415F8"))) PPC_WEAK_FUNC(sub_82F415F8);
PPC_FUNC_IMPL(__imp__sub_82F415F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18784
	ctx.r3.s64 = r11.s64 + -18784;
}

__attribute__((alias("__imp__sub_82F41600"))) PPC_WEAK_FUNC(sub_82F41600);
PPC_FUNC_IMPL(__imp__sub_82F41600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41604"))) PPC_WEAK_FUNC(sub_82F41604);
PPC_FUNC_IMPL(__imp__sub_82F41604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41608"))) PPC_WEAK_FUNC(sub_82F41608);
PPC_FUNC_IMPL(__imp__sub_82F41608) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-20088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41634"))) PPC_WEAK_FUNC(sub_82F41634);
PPC_FUNC_IMPL(__imp__sub_82F41634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41638"))) PPC_WEAK_FUNC(sub_82F41638);
PPC_FUNC_IMPL(__imp__sub_82F41638) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8352
	ctx.r3.s64 = r11.s64 + -8352;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r10,-20080
	r31.s64 = ctx.r10.s64 + -20080;
	// addi r3,r9,-8376
	ctx.r3.s64 = ctx.r9.s64 + -8376;
	// stw r11,-20080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20080, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-8404
	ctx.r3.s64 = ctx.r8.s64 + -8404;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-8428
	ctx.r3.s64 = ctx.r7.s64 + -8428;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-8448
	ctx.r3.s64 = ctx.r6.s64 + -8448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-8472
	ctx.r3.s64 = ctx.r5.s64 + -8472;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-8496
	ctx.r3.s64 = ctx.r4.s64 + -8496;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8520
	ctx.r3.s64 = r11.s64 + -8520;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-8544
	ctx.r3.s64 = ctx.r10.s64 + -8544;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-8568
	ctx.r3.s64 = ctx.r9.s64 + -8568;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-8592
	ctx.r3.s64 = ctx.r8.s64 + -8592;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-8612
	ctx.r3.s64 = ctx.r7.s64 + -8612;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-8640
	ctx.r3.s64 = ctx.r6.s64 + -8640;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-8668
	ctx.r3.s64 = ctx.r5.s64 + -8668;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-8696
	ctx.r3.s64 = ctx.r4.s64 + -8696;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8720
	ctx.r3.s64 = r11.s64 + -8720;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F41764"))) PPC_WEAK_FUNC(sub_82F41764);
PPC_FUNC_IMPL(__imp__sub_82F41764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41768"))) PPC_WEAK_FUNC(sub_82F41768);
PPC_FUNC_IMPL(__imp__sub_82F41768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18776
	ctx.r3.s64 = r11.s64 + -18776;
}

__attribute__((alias("__imp__sub_82F41770"))) PPC_WEAK_FUNC(sub_82F41770);
PPC_FUNC_IMPL(__imp__sub_82F41770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41774"))) PPC_WEAK_FUNC(sub_82F41774);
PPC_FUNC_IMPL(__imp__sub_82F41774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41778"))) PPC_WEAK_FUNC(sub_82F41778);
PPC_FUNC_IMPL(__imp__sub_82F41778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18768
	ctx.r3.s64 = r11.s64 + -18768;
}

__attribute__((alias("__imp__sub_82F41780"))) PPC_WEAK_FUNC(sub_82F41780);
PPC_FUNC_IMPL(__imp__sub_82F41780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41784"))) PPC_WEAK_FUNC(sub_82F41784);
PPC_FUNC_IMPL(__imp__sub_82F41784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41788"))) PPC_WEAK_FUNC(sub_82F41788);
PPC_FUNC_IMPL(__imp__sub_82F41788) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-16728
	ctx.r3.s64 = r11.s64 + -16728;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F417B4"))) PPC_WEAK_FUNC(sub_82F417B4);
PPC_FUNC_IMPL(__imp__sub_82F417B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F417B8"))) PPC_WEAK_FUNC(sub_82F417B8);
PPC_FUNC_IMPL(__imp__sub_82F417B8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F417E4"))) PPC_WEAK_FUNC(sub_82F417E4);
PPC_FUNC_IMPL(__imp__sub_82F417E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F417E8"))) PPC_WEAK_FUNC(sub_82F417E8);
PPC_FUNC_IMPL(__imp__sub_82F417E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18760
	ctx.r3.s64 = r11.s64 + -18760;
}

__attribute__((alias("__imp__sub_82F417F0"))) PPC_WEAK_FUNC(sub_82F417F0);
PPC_FUNC_IMPL(__imp__sub_82F417F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F417F4"))) PPC_WEAK_FUNC(sub_82F417F4);
PPC_FUNC_IMPL(__imp__sub_82F417F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F417F8"))) PPC_WEAK_FUNC(sub_82F417F8);
PPC_FUNC_IMPL(__imp__sub_82F417F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18752
	ctx.r3.s64 = r11.s64 + -18752;
}

__attribute__((alias("__imp__sub_82F41800"))) PPC_WEAK_FUNC(sub_82F41800);
PPC_FUNC_IMPL(__imp__sub_82F41800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41804"))) PPC_WEAK_FUNC(sub_82F41804);
PPC_FUNC_IMPL(__imp__sub_82F41804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41808"))) PPC_WEAK_FUNC(sub_82F41808);
PPC_FUNC_IMPL(__imp__sub_82F41808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18744
	ctx.r3.s64 = r11.s64 + -18744;
}

__attribute__((alias("__imp__sub_82F41810"))) PPC_WEAK_FUNC(sub_82F41810);
PPC_FUNC_IMPL(__imp__sub_82F41810) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41814"))) PPC_WEAK_FUNC(sub_82F41814);
PPC_FUNC_IMPL(__imp__sub_82F41814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41818"))) PPC_WEAK_FUNC(sub_82F41818);
PPC_FUNC_IMPL(__imp__sub_82F41818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18736
	ctx.r3.s64 = r11.s64 + -18736;
}

__attribute__((alias("__imp__sub_82F41820"))) PPC_WEAK_FUNC(sub_82F41820);
PPC_FUNC_IMPL(__imp__sub_82F41820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41824"))) PPC_WEAK_FUNC(sub_82F41824);
PPC_FUNC_IMPL(__imp__sub_82F41824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41828"))) PPC_WEAK_FUNC(sub_82F41828);
PPC_FUNC_IMPL(__imp__sub_82F41828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18728
	ctx.r3.s64 = r11.s64 + -18728;
}

__attribute__((alias("__imp__sub_82F41830"))) PPC_WEAK_FUNC(sub_82F41830);
PPC_FUNC_IMPL(__imp__sub_82F41830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41834"))) PPC_WEAK_FUNC(sub_82F41834);
PPC_FUNC_IMPL(__imp__sub_82F41834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41838"))) PPC_WEAK_FUNC(sub_82F41838);
PPC_FUNC_IMPL(__imp__sub_82F41838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18720
	ctx.r3.s64 = r11.s64 + -18720;
}

__attribute__((alias("__imp__sub_82F41840"))) PPC_WEAK_FUNC(sub_82F41840);
PPC_FUNC_IMPL(__imp__sub_82F41840) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41844"))) PPC_WEAK_FUNC(sub_82F41844);
PPC_FUNC_IMPL(__imp__sub_82F41844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41848"))) PPC_WEAK_FUNC(sub_82F41848);
PPC_FUNC_IMPL(__imp__sub_82F41848) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41874"))) PPC_WEAK_FUNC(sub_82F41874);
PPC_FUNC_IMPL(__imp__sub_82F41874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41878"))) PPC_WEAK_FUNC(sub_82F41878);
PPC_FUNC_IMPL(__imp__sub_82F41878) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F418A4"))) PPC_WEAK_FUNC(sub_82F418A4);
PPC_FUNC_IMPL(__imp__sub_82F418A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F418A8"))) PPC_WEAK_FUNC(sub_82F418A8);
PPC_FUNC_IMPL(__imp__sub_82F418A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-19936
	ctx.r3.s64 = ctx.r7.s64 + -19936;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-18712
	ctx.r3.s64 = ctx.r6.s64 + -18712;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41920"))) PPC_WEAK_FUNC(sub_82F41920);
PPC_FUNC_IMPL(__imp__sub_82F41920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41924"))) PPC_WEAK_FUNC(sub_82F41924);
PPC_FUNC_IMPL(__imp__sub_82F41924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41928"))) PPC_WEAK_FUNC(sub_82F41928);
PPC_FUNC_IMPL(__imp__sub_82F41928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18704
	ctx.r3.s64 = r11.s64 + -18704;
}

__attribute__((alias("__imp__sub_82F41930"))) PPC_WEAK_FUNC(sub_82F41930);
PPC_FUNC_IMPL(__imp__sub_82F41930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41934"))) PPC_WEAK_FUNC(sub_82F41934);
PPC_FUNC_IMPL(__imp__sub_82F41934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41938"))) PPC_WEAK_FUNC(sub_82F41938);
PPC_FUNC_IMPL(__imp__sub_82F41938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18696
	ctx.r3.s64 = r11.s64 + -18696;
}

__attribute__((alias("__imp__sub_82F41940"))) PPC_WEAK_FUNC(sub_82F41940);
PPC_FUNC_IMPL(__imp__sub_82F41940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41944"))) PPC_WEAK_FUNC(sub_82F41944);
PPC_FUNC_IMPL(__imp__sub_82F41944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41948"))) PPC_WEAK_FUNC(sub_82F41948);
PPC_FUNC_IMPL(__imp__sub_82F41948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18688
	ctx.r3.s64 = r11.s64 + -18688;
}

__attribute__((alias("__imp__sub_82F41950"))) PPC_WEAK_FUNC(sub_82F41950);
PPC_FUNC_IMPL(__imp__sub_82F41950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41954"))) PPC_WEAK_FUNC(sub_82F41954);
PPC_FUNC_IMPL(__imp__sub_82F41954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41958"))) PPC_WEAK_FUNC(sub_82F41958);
PPC_FUNC_IMPL(__imp__sub_82F41958) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41984"))) PPC_WEAK_FUNC(sub_82F41984);
PPC_FUNC_IMPL(__imp__sub_82F41984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41988"))) PPC_WEAK_FUNC(sub_82F41988);
PPC_FUNC_IMPL(__imp__sub_82F41988) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F419B4"))) PPC_WEAK_FUNC(sub_82F419B4);
PPC_FUNC_IMPL(__imp__sub_82F419B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F419B8"))) PPC_WEAK_FUNC(sub_82F419B8);
PPC_FUNC_IMPL(__imp__sub_82F419B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-19880
	ctx.r3.s64 = ctx.r7.s64 + -19880;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-18680
	ctx.r3.s64 = ctx.r6.s64 + -18680;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41A30"))) PPC_WEAK_FUNC(sub_82F41A30);
PPC_FUNC_IMPL(__imp__sub_82F41A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41A34"))) PPC_WEAK_FUNC(sub_82F41A34);
PPC_FUNC_IMPL(__imp__sub_82F41A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41A38"))) PPC_WEAK_FUNC(sub_82F41A38);
PPC_FUNC_IMPL(__imp__sub_82F41A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18672
	ctx.r3.s64 = r11.s64 + -18672;
}

__attribute__((alias("__imp__sub_82F41A40"))) PPC_WEAK_FUNC(sub_82F41A40);
PPC_FUNC_IMPL(__imp__sub_82F41A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41A44"))) PPC_WEAK_FUNC(sub_82F41A44);
PPC_FUNC_IMPL(__imp__sub_82F41A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41A48"))) PPC_WEAK_FUNC(sub_82F41A48);
PPC_FUNC_IMPL(__imp__sub_82F41A48) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41A74"))) PPC_WEAK_FUNC(sub_82F41A74);
PPC_FUNC_IMPL(__imp__sub_82F41A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41A78"))) PPC_WEAK_FUNC(sub_82F41A78);
PPC_FUNC_IMPL(__imp__sub_82F41A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18664
	ctx.r3.s64 = r11.s64 + -18664;
}

__attribute__((alias("__imp__sub_82F41A80"))) PPC_WEAK_FUNC(sub_82F41A80);
PPC_FUNC_IMPL(__imp__sub_82F41A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41A84"))) PPC_WEAK_FUNC(sub_82F41A84);
PPC_FUNC_IMPL(__imp__sub_82F41A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41A88"))) PPC_WEAK_FUNC(sub_82F41A88);
PPC_FUNC_IMPL(__imp__sub_82F41A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18656
	ctx.r3.s64 = r11.s64 + -18656;
}

__attribute__((alias("__imp__sub_82F41A90"))) PPC_WEAK_FUNC(sub_82F41A90);
PPC_FUNC_IMPL(__imp__sub_82F41A90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41A94"))) PPC_WEAK_FUNC(sub_82F41A94);
PPC_FUNC_IMPL(__imp__sub_82F41A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41A98"))) PPC_WEAK_FUNC(sub_82F41A98);
PPC_FUNC_IMPL(__imp__sub_82F41A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18648
	ctx.r3.s64 = r11.s64 + -18648;
}

__attribute__((alias("__imp__sub_82F41AA0"))) PPC_WEAK_FUNC(sub_82F41AA0);
PPC_FUNC_IMPL(__imp__sub_82F41AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41AA4"))) PPC_WEAK_FUNC(sub_82F41AA4);
PPC_FUNC_IMPL(__imp__sub_82F41AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41AA8"))) PPC_WEAK_FUNC(sub_82F41AA8);
PPC_FUNC_IMPL(__imp__sub_82F41AA8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19812, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41AD0"))) PPC_WEAK_FUNC(sub_82F41AD0);
PPC_FUNC_IMPL(__imp__sub_82F41AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41AD4"))) PPC_WEAK_FUNC(sub_82F41AD4);
PPC_FUNC_IMPL(__imp__sub_82F41AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41AD8"))) PPC_WEAK_FUNC(sub_82F41AD8);
PPC_FUNC_IMPL(__imp__sub_82F41AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18640
	ctx.r3.s64 = r11.s64 + -18640;
}

__attribute__((alias("__imp__sub_82F41AE0"))) PPC_WEAK_FUNC(sub_82F41AE0);
PPC_FUNC_IMPL(__imp__sub_82F41AE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41AE4"))) PPC_WEAK_FUNC(sub_82F41AE4);
PPC_FUNC_IMPL(__imp__sub_82F41AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41AE8"))) PPC_WEAK_FUNC(sub_82F41AE8);
PPC_FUNC_IMPL(__imp__sub_82F41AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18632
	ctx.r3.s64 = r11.s64 + -18632;
}

__attribute__((alias("__imp__sub_82F41AF0"))) PPC_WEAK_FUNC(sub_82F41AF0);
PPC_FUNC_IMPL(__imp__sub_82F41AF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41AF4"))) PPC_WEAK_FUNC(sub_82F41AF4);
PPC_FUNC_IMPL(__imp__sub_82F41AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41AF8"))) PPC_WEAK_FUNC(sub_82F41AF8);
PPC_FUNC_IMPL(__imp__sub_82F41AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18624
	ctx.r3.s64 = r11.s64 + -18624;
}

__attribute__((alias("__imp__sub_82F41B00"))) PPC_WEAK_FUNC(sub_82F41B00);
PPC_FUNC_IMPL(__imp__sub_82F41B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41B04"))) PPC_WEAK_FUNC(sub_82F41B04);
PPC_FUNC_IMPL(__imp__sub_82F41B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41B08"))) PPC_WEAK_FUNC(sub_82F41B08);
PPC_FUNC_IMPL(__imp__sub_82F41B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18616
	ctx.r3.s64 = r11.s64 + -18616;
}

__attribute__((alias("__imp__sub_82F41B10"))) PPC_WEAK_FUNC(sub_82F41B10);
PPC_FUNC_IMPL(__imp__sub_82F41B10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41B14"))) PPC_WEAK_FUNC(sub_82F41B14);
PPC_FUNC_IMPL(__imp__sub_82F41B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41B18"))) PPC_WEAK_FUNC(sub_82F41B18);
PPC_FUNC_IMPL(__imp__sub_82F41B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18608
	ctx.r3.s64 = r11.s64 + -18608;
}

__attribute__((alias("__imp__sub_82F41B20"))) PPC_WEAK_FUNC(sub_82F41B20);
PPC_FUNC_IMPL(__imp__sub_82F41B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41B24"))) PPC_WEAK_FUNC(sub_82F41B24);
PPC_FUNC_IMPL(__imp__sub_82F41B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41B28"))) PPC_WEAK_FUNC(sub_82F41B28);
PPC_FUNC_IMPL(__imp__sub_82F41B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18600
	ctx.r3.s64 = r11.s64 + -18600;
}

__attribute__((alias("__imp__sub_82F41B30"))) PPC_WEAK_FUNC(sub_82F41B30);
PPC_FUNC_IMPL(__imp__sub_82F41B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41B34"))) PPC_WEAK_FUNC(sub_82F41B34);
PPC_FUNC_IMPL(__imp__sub_82F41B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41B38"))) PPC_WEAK_FUNC(sub_82F41B38);
PPC_FUNC_IMPL(__imp__sub_82F41B38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41B64"))) PPC_WEAK_FUNC(sub_82F41B64);
PPC_FUNC_IMPL(__imp__sub_82F41B64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41B68"))) PPC_WEAK_FUNC(sub_82F41B68);
PPC_FUNC_IMPL(__imp__sub_82F41B68) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41B94"))) PPC_WEAK_FUNC(sub_82F41B94);
PPC_FUNC_IMPL(__imp__sub_82F41B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41B98"))) PPC_WEAK_FUNC(sub_82F41B98);
PPC_FUNC_IMPL(__imp__sub_82F41B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-19784
	ctx.r3.s64 = ctx.r7.s64 + -19784;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-18592
	ctx.r3.s64 = ctx.r6.s64 + -18592;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41C10"))) PPC_WEAK_FUNC(sub_82F41C10);
PPC_FUNC_IMPL(__imp__sub_82F41C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41C14"))) PPC_WEAK_FUNC(sub_82F41C14);
PPC_FUNC_IMPL(__imp__sub_82F41C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C18"))) PPC_WEAK_FUNC(sub_82F41C18);
PPC_FUNC_IMPL(__imp__sub_82F41C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18584
	ctx.r3.s64 = r11.s64 + -18584;
}

__attribute__((alias("__imp__sub_82F41C20"))) PPC_WEAK_FUNC(sub_82F41C20);
PPC_FUNC_IMPL(__imp__sub_82F41C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41C24"))) PPC_WEAK_FUNC(sub_82F41C24);
PPC_FUNC_IMPL(__imp__sub_82F41C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C28"))) PPC_WEAK_FUNC(sub_82F41C28);
PPC_FUNC_IMPL(__imp__sub_82F41C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18576
	ctx.r3.s64 = r11.s64 + -18576;
}

__attribute__((alias("__imp__sub_82F41C30"))) PPC_WEAK_FUNC(sub_82F41C30);
PPC_FUNC_IMPL(__imp__sub_82F41C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41C34"))) PPC_WEAK_FUNC(sub_82F41C34);
PPC_FUNC_IMPL(__imp__sub_82F41C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C38"))) PPC_WEAK_FUNC(sub_82F41C38);
PPC_FUNC_IMPL(__imp__sub_82F41C38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41C64"))) PPC_WEAK_FUNC(sub_82F41C64);
PPC_FUNC_IMPL(__imp__sub_82F41C64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41C68"))) PPC_WEAK_FUNC(sub_82F41C68);
PPC_FUNC_IMPL(__imp__sub_82F41C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18568
	ctx.r3.s64 = r11.s64 + -18568;
}

__attribute__((alias("__imp__sub_82F41C70"))) PPC_WEAK_FUNC(sub_82F41C70);
PPC_FUNC_IMPL(__imp__sub_82F41C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41C74"))) PPC_WEAK_FUNC(sub_82F41C74);
PPC_FUNC_IMPL(__imp__sub_82F41C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C78"))) PPC_WEAK_FUNC(sub_82F41C78);
PPC_FUNC_IMPL(__imp__sub_82F41C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18560
	ctx.r3.s64 = r11.s64 + -18560;
}

__attribute__((alias("__imp__sub_82F41C80"))) PPC_WEAK_FUNC(sub_82F41C80);
PPC_FUNC_IMPL(__imp__sub_82F41C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41C84"))) PPC_WEAK_FUNC(sub_82F41C84);
PPC_FUNC_IMPL(__imp__sub_82F41C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C88"))) PPC_WEAK_FUNC(sub_82F41C88);
PPC_FUNC_IMPL(__imp__sub_82F41C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18552
	ctx.r3.s64 = r11.s64 + -18552;
}

__attribute__((alias("__imp__sub_82F41C90"))) PPC_WEAK_FUNC(sub_82F41C90);
PPC_FUNC_IMPL(__imp__sub_82F41C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

