#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83149848"))) PPC_WEAK_FUNC(sub_83149848);
PPC_FUNC_IMPL(__imp__sub_83149848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314984C"))) PPC_WEAK_FUNC(sub_8314984C);
PPC_FUNC_IMPL(__imp__sub_8314984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149850"))) PPC_WEAK_FUNC(sub_83149850);
PPC_FUNC_IMPL(__imp__sub_83149850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149854"))) PPC_WEAK_FUNC(sub_83149854);
PPC_FUNC_IMPL(__imp__sub_83149854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149858"))) PPC_WEAK_FUNC(sub_83149858);
PPC_FUNC_IMPL(__imp__sub_83149858) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-31588
	r31.s64 = r11.s64 + -31588;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x83149884
	if (cr6.lt) goto loc_83149884;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_83149884:
	// li r11,15
	r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831498AC"))) PPC_WEAK_FUNC(sub_831498AC);
PPC_FUNC_IMPL(__imp__sub_831498AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498B0"))) PPC_WEAK_FUNC(sub_831498B0);
PPC_FUNC_IMPL(__imp__sub_831498B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498B4"))) PPC_WEAK_FUNC(sub_831498B4);
PPC_FUNC_IMPL(__imp__sub_831498B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498B8"))) PPC_WEAK_FUNC(sub_831498B8);
PPC_FUNC_IMPL(__imp__sub_831498B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498BC"))) PPC_WEAK_FUNC(sub_831498BC);
PPC_FUNC_IMPL(__imp__sub_831498BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498C0"))) PPC_WEAK_FUNC(sub_831498C0);
PPC_FUNC_IMPL(__imp__sub_831498C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498C4"))) PPC_WEAK_FUNC(sub_831498C4);
PPC_FUNC_IMPL(__imp__sub_831498C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498C8"))) PPC_WEAK_FUNC(sub_831498C8);
PPC_FUNC_IMPL(__imp__sub_831498C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498CC"))) PPC_WEAK_FUNC(sub_831498CC);
PPC_FUNC_IMPL(__imp__sub_831498CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498D0"))) PPC_WEAK_FUNC(sub_831498D0);
PPC_FUNC_IMPL(__imp__sub_831498D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498D4"))) PPC_WEAK_FUNC(sub_831498D4);
PPC_FUNC_IMPL(__imp__sub_831498D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498D8"))) PPC_WEAK_FUNC(sub_831498D8);
PPC_FUNC_IMPL(__imp__sub_831498D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498DC"))) PPC_WEAK_FUNC(sub_831498DC);
PPC_FUNC_IMPL(__imp__sub_831498DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498E0"))) PPC_WEAK_FUNC(sub_831498E0);
PPC_FUNC_IMPL(__imp__sub_831498E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498E4"))) PPC_WEAK_FUNC(sub_831498E4);
PPC_FUNC_IMPL(__imp__sub_831498E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498E8"))) PPC_WEAK_FUNC(sub_831498E8);
PPC_FUNC_IMPL(__imp__sub_831498E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498EC"))) PPC_WEAK_FUNC(sub_831498EC);
PPC_FUNC_IMPL(__imp__sub_831498EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498F0"))) PPC_WEAK_FUNC(sub_831498F0);
PPC_FUNC_IMPL(__imp__sub_831498F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498F4"))) PPC_WEAK_FUNC(sub_831498F4);
PPC_FUNC_IMPL(__imp__sub_831498F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831498F8"))) PPC_WEAK_FUNC(sub_831498F8);
PPC_FUNC_IMPL(__imp__sub_831498F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831498FC"))) PPC_WEAK_FUNC(sub_831498FC);
PPC_FUNC_IMPL(__imp__sub_831498FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149900"))) PPC_WEAK_FUNC(sub_83149900);
PPC_FUNC_IMPL(__imp__sub_83149900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149904"))) PPC_WEAK_FUNC(sub_83149904);
PPC_FUNC_IMPL(__imp__sub_83149904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149908"))) PPC_WEAK_FUNC(sub_83149908);
PPC_FUNC_IMPL(__imp__sub_83149908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314990C"))) PPC_WEAK_FUNC(sub_8314990C);
PPC_FUNC_IMPL(__imp__sub_8314990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149910"))) PPC_WEAK_FUNC(sub_83149910);
PPC_FUNC_IMPL(__imp__sub_83149910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149914"))) PPC_WEAK_FUNC(sub_83149914);
PPC_FUNC_IMPL(__imp__sub_83149914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149918"))) PPC_WEAK_FUNC(sub_83149918);
PPC_FUNC_IMPL(__imp__sub_83149918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314991C"))) PPC_WEAK_FUNC(sub_8314991C);
PPC_FUNC_IMPL(__imp__sub_8314991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149920"))) PPC_WEAK_FUNC(sub_83149920);
PPC_FUNC_IMPL(__imp__sub_83149920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149924"))) PPC_WEAK_FUNC(sub_83149924);
PPC_FUNC_IMPL(__imp__sub_83149924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149928"))) PPC_WEAK_FUNC(sub_83149928);
PPC_FUNC_IMPL(__imp__sub_83149928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314992C"))) PPC_WEAK_FUNC(sub_8314992C);
PPC_FUNC_IMPL(__imp__sub_8314992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149930"))) PPC_WEAK_FUNC(sub_83149930);
PPC_FUNC_IMPL(__imp__sub_83149930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149934"))) PPC_WEAK_FUNC(sub_83149934);
PPC_FUNC_IMPL(__imp__sub_83149934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149938"))) PPC_WEAK_FUNC(sub_83149938);
PPC_FUNC_IMPL(__imp__sub_83149938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314993C"))) PPC_WEAK_FUNC(sub_8314993C);
PPC_FUNC_IMPL(__imp__sub_8314993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149940"))) PPC_WEAK_FUNC(sub_83149940);
PPC_FUNC_IMPL(__imp__sub_83149940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149944"))) PPC_WEAK_FUNC(sub_83149944);
PPC_FUNC_IMPL(__imp__sub_83149944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149948"))) PPC_WEAK_FUNC(sub_83149948);
PPC_FUNC_IMPL(__imp__sub_83149948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314994C"))) PPC_WEAK_FUNC(sub_8314994C);
PPC_FUNC_IMPL(__imp__sub_8314994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149950"))) PPC_WEAK_FUNC(sub_83149950);
PPC_FUNC_IMPL(__imp__sub_83149950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149954"))) PPC_WEAK_FUNC(sub_83149954);
PPC_FUNC_IMPL(__imp__sub_83149954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149958"))) PPC_WEAK_FUNC(sub_83149958);
PPC_FUNC_IMPL(__imp__sub_83149958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314995C"))) PPC_WEAK_FUNC(sub_8314995C);
PPC_FUNC_IMPL(__imp__sub_8314995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149960"))) PPC_WEAK_FUNC(sub_83149960);
PPC_FUNC_IMPL(__imp__sub_83149960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149964"))) PPC_WEAK_FUNC(sub_83149964);
PPC_FUNC_IMPL(__imp__sub_83149964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149968"))) PPC_WEAK_FUNC(sub_83149968);
PPC_FUNC_IMPL(__imp__sub_83149968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314996C"))) PPC_WEAK_FUNC(sub_8314996C);
PPC_FUNC_IMPL(__imp__sub_8314996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149970"))) PPC_WEAK_FUNC(sub_83149970);
PPC_FUNC_IMPL(__imp__sub_83149970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149974"))) PPC_WEAK_FUNC(sub_83149974);
PPC_FUNC_IMPL(__imp__sub_83149974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149978"))) PPC_WEAK_FUNC(sub_83149978);
PPC_FUNC_IMPL(__imp__sub_83149978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314997C"))) PPC_WEAK_FUNC(sub_8314997C);
PPC_FUNC_IMPL(__imp__sub_8314997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149980"))) PPC_WEAK_FUNC(sub_83149980);
PPC_FUNC_IMPL(__imp__sub_83149980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149984"))) PPC_WEAK_FUNC(sub_83149984);
PPC_FUNC_IMPL(__imp__sub_83149984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149988"))) PPC_WEAK_FUNC(sub_83149988);
PPC_FUNC_IMPL(__imp__sub_83149988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314998C"))) PPC_WEAK_FUNC(sub_8314998C);
PPC_FUNC_IMPL(__imp__sub_8314998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149990"))) PPC_WEAK_FUNC(sub_83149990);
PPC_FUNC_IMPL(__imp__sub_83149990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149994"))) PPC_WEAK_FUNC(sub_83149994);
PPC_FUNC_IMPL(__imp__sub_83149994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149998"))) PPC_WEAK_FUNC(sub_83149998);
PPC_FUNC_IMPL(__imp__sub_83149998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314999C"))) PPC_WEAK_FUNC(sub_8314999C);
PPC_FUNC_IMPL(__imp__sub_8314999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499A0"))) PPC_WEAK_FUNC(sub_831499A0);
PPC_FUNC_IMPL(__imp__sub_831499A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499A4"))) PPC_WEAK_FUNC(sub_831499A4);
PPC_FUNC_IMPL(__imp__sub_831499A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499A8"))) PPC_WEAK_FUNC(sub_831499A8);
PPC_FUNC_IMPL(__imp__sub_831499A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499AC"))) PPC_WEAK_FUNC(sub_831499AC);
PPC_FUNC_IMPL(__imp__sub_831499AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499B0"))) PPC_WEAK_FUNC(sub_831499B0);
PPC_FUNC_IMPL(__imp__sub_831499B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499B4"))) PPC_WEAK_FUNC(sub_831499B4);
PPC_FUNC_IMPL(__imp__sub_831499B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499B8"))) PPC_WEAK_FUNC(sub_831499B8);
PPC_FUNC_IMPL(__imp__sub_831499B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499BC"))) PPC_WEAK_FUNC(sub_831499BC);
PPC_FUNC_IMPL(__imp__sub_831499BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499C0"))) PPC_WEAK_FUNC(sub_831499C0);
PPC_FUNC_IMPL(__imp__sub_831499C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499C4"))) PPC_WEAK_FUNC(sub_831499C4);
PPC_FUNC_IMPL(__imp__sub_831499C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499C8"))) PPC_WEAK_FUNC(sub_831499C8);
PPC_FUNC_IMPL(__imp__sub_831499C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499CC"))) PPC_WEAK_FUNC(sub_831499CC);
PPC_FUNC_IMPL(__imp__sub_831499CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499D0"))) PPC_WEAK_FUNC(sub_831499D0);
PPC_FUNC_IMPL(__imp__sub_831499D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499D4"))) PPC_WEAK_FUNC(sub_831499D4);
PPC_FUNC_IMPL(__imp__sub_831499D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499D8"))) PPC_WEAK_FUNC(sub_831499D8);
PPC_FUNC_IMPL(__imp__sub_831499D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499DC"))) PPC_WEAK_FUNC(sub_831499DC);
PPC_FUNC_IMPL(__imp__sub_831499DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499E0"))) PPC_WEAK_FUNC(sub_831499E0);
PPC_FUNC_IMPL(__imp__sub_831499E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499E4"))) PPC_WEAK_FUNC(sub_831499E4);
PPC_FUNC_IMPL(__imp__sub_831499E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499E8"))) PPC_WEAK_FUNC(sub_831499E8);
PPC_FUNC_IMPL(__imp__sub_831499E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499EC"))) PPC_WEAK_FUNC(sub_831499EC);
PPC_FUNC_IMPL(__imp__sub_831499EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499F0"))) PPC_WEAK_FUNC(sub_831499F0);
PPC_FUNC_IMPL(__imp__sub_831499F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499F4"))) PPC_WEAK_FUNC(sub_831499F4);
PPC_FUNC_IMPL(__imp__sub_831499F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831499F8"))) PPC_WEAK_FUNC(sub_831499F8);
PPC_FUNC_IMPL(__imp__sub_831499F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831499FC"))) PPC_WEAK_FUNC(sub_831499FC);
PPC_FUNC_IMPL(__imp__sub_831499FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A00"))) PPC_WEAK_FUNC(sub_83149A00);
PPC_FUNC_IMPL(__imp__sub_83149A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A04"))) PPC_WEAK_FUNC(sub_83149A04);
PPC_FUNC_IMPL(__imp__sub_83149A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A08"))) PPC_WEAK_FUNC(sub_83149A08);
PPC_FUNC_IMPL(__imp__sub_83149A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A0C"))) PPC_WEAK_FUNC(sub_83149A0C);
PPC_FUNC_IMPL(__imp__sub_83149A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A10"))) PPC_WEAK_FUNC(sub_83149A10);
PPC_FUNC_IMPL(__imp__sub_83149A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A14"))) PPC_WEAK_FUNC(sub_83149A14);
PPC_FUNC_IMPL(__imp__sub_83149A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A18"))) PPC_WEAK_FUNC(sub_83149A18);
PPC_FUNC_IMPL(__imp__sub_83149A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A1C"))) PPC_WEAK_FUNC(sub_83149A1C);
PPC_FUNC_IMPL(__imp__sub_83149A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A20"))) PPC_WEAK_FUNC(sub_83149A20);
PPC_FUNC_IMPL(__imp__sub_83149A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A24"))) PPC_WEAK_FUNC(sub_83149A24);
PPC_FUNC_IMPL(__imp__sub_83149A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A28"))) PPC_WEAK_FUNC(sub_83149A28);
PPC_FUNC_IMPL(__imp__sub_83149A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A2C"))) PPC_WEAK_FUNC(sub_83149A2C);
PPC_FUNC_IMPL(__imp__sub_83149A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A30"))) PPC_WEAK_FUNC(sub_83149A30);
PPC_FUNC_IMPL(__imp__sub_83149A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A34"))) PPC_WEAK_FUNC(sub_83149A34);
PPC_FUNC_IMPL(__imp__sub_83149A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A38"))) PPC_WEAK_FUNC(sub_83149A38);
PPC_FUNC_IMPL(__imp__sub_83149A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A3C"))) PPC_WEAK_FUNC(sub_83149A3C);
PPC_FUNC_IMPL(__imp__sub_83149A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A40"))) PPC_WEAK_FUNC(sub_83149A40);
PPC_FUNC_IMPL(__imp__sub_83149A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A44"))) PPC_WEAK_FUNC(sub_83149A44);
PPC_FUNC_IMPL(__imp__sub_83149A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A48"))) PPC_WEAK_FUNC(sub_83149A48);
PPC_FUNC_IMPL(__imp__sub_83149A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A4C"))) PPC_WEAK_FUNC(sub_83149A4C);
PPC_FUNC_IMPL(__imp__sub_83149A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A50"))) PPC_WEAK_FUNC(sub_83149A50);
PPC_FUNC_IMPL(__imp__sub_83149A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A54"))) PPC_WEAK_FUNC(sub_83149A54);
PPC_FUNC_IMPL(__imp__sub_83149A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A58"))) PPC_WEAK_FUNC(sub_83149A58);
PPC_FUNC_IMPL(__imp__sub_83149A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A5C"))) PPC_WEAK_FUNC(sub_83149A5C);
PPC_FUNC_IMPL(__imp__sub_83149A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A60"))) PPC_WEAK_FUNC(sub_83149A60);
PPC_FUNC_IMPL(__imp__sub_83149A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A64"))) PPC_WEAK_FUNC(sub_83149A64);
PPC_FUNC_IMPL(__imp__sub_83149A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A68"))) PPC_WEAK_FUNC(sub_83149A68);
PPC_FUNC_IMPL(__imp__sub_83149A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A6C"))) PPC_WEAK_FUNC(sub_83149A6C);
PPC_FUNC_IMPL(__imp__sub_83149A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A70"))) PPC_WEAK_FUNC(sub_83149A70);
PPC_FUNC_IMPL(__imp__sub_83149A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A74"))) PPC_WEAK_FUNC(sub_83149A74);
PPC_FUNC_IMPL(__imp__sub_83149A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A78"))) PPC_WEAK_FUNC(sub_83149A78);
PPC_FUNC_IMPL(__imp__sub_83149A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r11,r11,14704
	r11.s64 = r11.s64 + 14704;
	// stw r11,-30444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30444, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A8C"))) PPC_WEAK_FUNC(sub_83149A8C);
PPC_FUNC_IMPL(__imp__sub_83149A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A90"))) PPC_WEAK_FUNC(sub_83149A90);
PPC_FUNC_IMPL(__imp__sub_83149A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A94"))) PPC_WEAK_FUNC(sub_83149A94);
PPC_FUNC_IMPL(__imp__sub_83149A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149A98"))) PPC_WEAK_FUNC(sub_83149A98);
PPC_FUNC_IMPL(__imp__sub_83149A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149A9C"))) PPC_WEAK_FUNC(sub_83149A9C);
PPC_FUNC_IMPL(__imp__sub_83149A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AA0"))) PPC_WEAK_FUNC(sub_83149AA0);
PPC_FUNC_IMPL(__imp__sub_83149AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AA4"))) PPC_WEAK_FUNC(sub_83149AA4);
PPC_FUNC_IMPL(__imp__sub_83149AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AA8"))) PPC_WEAK_FUNC(sub_83149AA8);
PPC_FUNC_IMPL(__imp__sub_83149AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AAC"))) PPC_WEAK_FUNC(sub_83149AAC);
PPC_FUNC_IMPL(__imp__sub_83149AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AB0"))) PPC_WEAK_FUNC(sub_83149AB0);
PPC_FUNC_IMPL(__imp__sub_83149AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AB4"))) PPC_WEAK_FUNC(sub_83149AB4);
PPC_FUNC_IMPL(__imp__sub_83149AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AB8"))) PPC_WEAK_FUNC(sub_83149AB8);
PPC_FUNC_IMPL(__imp__sub_83149AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149ABC"))) PPC_WEAK_FUNC(sub_83149ABC);
PPC_FUNC_IMPL(__imp__sub_83149ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AC0"))) PPC_WEAK_FUNC(sub_83149AC0);
PPC_FUNC_IMPL(__imp__sub_83149AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AC4"))) PPC_WEAK_FUNC(sub_83149AC4);
PPC_FUNC_IMPL(__imp__sub_83149AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AC8"))) PPC_WEAK_FUNC(sub_83149AC8);
PPC_FUNC_IMPL(__imp__sub_83149AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149ACC"))) PPC_WEAK_FUNC(sub_83149ACC);
PPC_FUNC_IMPL(__imp__sub_83149ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AD0"))) PPC_WEAK_FUNC(sub_83149AD0);
PPC_FUNC_IMPL(__imp__sub_83149AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AD4"))) PPC_WEAK_FUNC(sub_83149AD4);
PPC_FUNC_IMPL(__imp__sub_83149AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AD8"))) PPC_WEAK_FUNC(sub_83149AD8);
PPC_FUNC_IMPL(__imp__sub_83149AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149ADC"))) PPC_WEAK_FUNC(sub_83149ADC);
PPC_FUNC_IMPL(__imp__sub_83149ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AE0"))) PPC_WEAK_FUNC(sub_83149AE0);
PPC_FUNC_IMPL(__imp__sub_83149AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AE4"))) PPC_WEAK_FUNC(sub_83149AE4);
PPC_FUNC_IMPL(__imp__sub_83149AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AE8"))) PPC_WEAK_FUNC(sub_83149AE8);
PPC_FUNC_IMPL(__imp__sub_83149AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AEC"))) PPC_WEAK_FUNC(sub_83149AEC);
PPC_FUNC_IMPL(__imp__sub_83149AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AF0"))) PPC_WEAK_FUNC(sub_83149AF0);
PPC_FUNC_IMPL(__imp__sub_83149AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AF4"))) PPC_WEAK_FUNC(sub_83149AF4);
PPC_FUNC_IMPL(__imp__sub_83149AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149AF8"))) PPC_WEAK_FUNC(sub_83149AF8);
PPC_FUNC_IMPL(__imp__sub_83149AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149AFC"))) PPC_WEAK_FUNC(sub_83149AFC);
PPC_FUNC_IMPL(__imp__sub_83149AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B00"))) PPC_WEAK_FUNC(sub_83149B00);
PPC_FUNC_IMPL(__imp__sub_83149B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B04"))) PPC_WEAK_FUNC(sub_83149B04);
PPC_FUNC_IMPL(__imp__sub_83149B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B08"))) PPC_WEAK_FUNC(sub_83149B08);
PPC_FUNC_IMPL(__imp__sub_83149B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B0C"))) PPC_WEAK_FUNC(sub_83149B0C);
PPC_FUNC_IMPL(__imp__sub_83149B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B10"))) PPC_WEAK_FUNC(sub_83149B10);
PPC_FUNC_IMPL(__imp__sub_83149B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B14"))) PPC_WEAK_FUNC(sub_83149B14);
PPC_FUNC_IMPL(__imp__sub_83149B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B18"))) PPC_WEAK_FUNC(sub_83149B18);
PPC_FUNC_IMPL(__imp__sub_83149B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B1C"))) PPC_WEAK_FUNC(sub_83149B1C);
PPC_FUNC_IMPL(__imp__sub_83149B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B20"))) PPC_WEAK_FUNC(sub_83149B20);
PPC_FUNC_IMPL(__imp__sub_83149B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B24"))) PPC_WEAK_FUNC(sub_83149B24);
PPC_FUNC_IMPL(__imp__sub_83149B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B28"))) PPC_WEAK_FUNC(sub_83149B28);
PPC_FUNC_IMPL(__imp__sub_83149B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B2C"))) PPC_WEAK_FUNC(sub_83149B2C);
PPC_FUNC_IMPL(__imp__sub_83149B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B30"))) PPC_WEAK_FUNC(sub_83149B30);
PPC_FUNC_IMPL(__imp__sub_83149B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B34"))) PPC_WEAK_FUNC(sub_83149B34);
PPC_FUNC_IMPL(__imp__sub_83149B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B38"))) PPC_WEAK_FUNC(sub_83149B38);
PPC_FUNC_IMPL(__imp__sub_83149B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B3C"))) PPC_WEAK_FUNC(sub_83149B3C);
PPC_FUNC_IMPL(__imp__sub_83149B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B40"))) PPC_WEAK_FUNC(sub_83149B40);
PPC_FUNC_IMPL(__imp__sub_83149B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B44"))) PPC_WEAK_FUNC(sub_83149B44);
PPC_FUNC_IMPL(__imp__sub_83149B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B48"))) PPC_WEAK_FUNC(sub_83149B48);
PPC_FUNC_IMPL(__imp__sub_83149B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B4C"))) PPC_WEAK_FUNC(sub_83149B4C);
PPC_FUNC_IMPL(__imp__sub_83149B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B50"))) PPC_WEAK_FUNC(sub_83149B50);
PPC_FUNC_IMPL(__imp__sub_83149B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B54"))) PPC_WEAK_FUNC(sub_83149B54);
PPC_FUNC_IMPL(__imp__sub_83149B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B58"))) PPC_WEAK_FUNC(sub_83149B58);
PPC_FUNC_IMPL(__imp__sub_83149B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B5C"))) PPC_WEAK_FUNC(sub_83149B5C);
PPC_FUNC_IMPL(__imp__sub_83149B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B60"))) PPC_WEAK_FUNC(sub_83149B60);
PPC_FUNC_IMPL(__imp__sub_83149B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B64"))) PPC_WEAK_FUNC(sub_83149B64);
PPC_FUNC_IMPL(__imp__sub_83149B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B68"))) PPC_WEAK_FUNC(sub_83149B68);
PPC_FUNC_IMPL(__imp__sub_83149B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B6C"))) PPC_WEAK_FUNC(sub_83149B6C);
PPC_FUNC_IMPL(__imp__sub_83149B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B70"))) PPC_WEAK_FUNC(sub_83149B70);
PPC_FUNC_IMPL(__imp__sub_83149B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B74"))) PPC_WEAK_FUNC(sub_83149B74);
PPC_FUNC_IMPL(__imp__sub_83149B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B78"))) PPC_WEAK_FUNC(sub_83149B78);
PPC_FUNC_IMPL(__imp__sub_83149B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B7C"))) PPC_WEAK_FUNC(sub_83149B7C);
PPC_FUNC_IMPL(__imp__sub_83149B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B80"))) PPC_WEAK_FUNC(sub_83149B80);
PPC_FUNC_IMPL(__imp__sub_83149B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B84"))) PPC_WEAK_FUNC(sub_83149B84);
PPC_FUNC_IMPL(__imp__sub_83149B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B88"))) PPC_WEAK_FUNC(sub_83149B88);
PPC_FUNC_IMPL(__imp__sub_83149B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B8C"))) PPC_WEAK_FUNC(sub_83149B8C);
PPC_FUNC_IMPL(__imp__sub_83149B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B90"))) PPC_WEAK_FUNC(sub_83149B90);
PPC_FUNC_IMPL(__imp__sub_83149B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B94"))) PPC_WEAK_FUNC(sub_83149B94);
PPC_FUNC_IMPL(__imp__sub_83149B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149B98"))) PPC_WEAK_FUNC(sub_83149B98);
PPC_FUNC_IMPL(__imp__sub_83149B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149B9C"))) PPC_WEAK_FUNC(sub_83149B9C);
PPC_FUNC_IMPL(__imp__sub_83149B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BA0"))) PPC_WEAK_FUNC(sub_83149BA0);
PPC_FUNC_IMPL(__imp__sub_83149BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BA4"))) PPC_WEAK_FUNC(sub_83149BA4);
PPC_FUNC_IMPL(__imp__sub_83149BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BA8"))) PPC_WEAK_FUNC(sub_83149BA8);
PPC_FUNC_IMPL(__imp__sub_83149BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BAC"))) PPC_WEAK_FUNC(sub_83149BAC);
PPC_FUNC_IMPL(__imp__sub_83149BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BB0"))) PPC_WEAK_FUNC(sub_83149BB0);
PPC_FUNC_IMPL(__imp__sub_83149BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BB4"))) PPC_WEAK_FUNC(sub_83149BB4);
PPC_FUNC_IMPL(__imp__sub_83149BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BB8"))) PPC_WEAK_FUNC(sub_83149BB8);
PPC_FUNC_IMPL(__imp__sub_83149BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BBC"))) PPC_WEAK_FUNC(sub_83149BBC);
PPC_FUNC_IMPL(__imp__sub_83149BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BC0"))) PPC_WEAK_FUNC(sub_83149BC0);
PPC_FUNC_IMPL(__imp__sub_83149BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BC4"))) PPC_WEAK_FUNC(sub_83149BC4);
PPC_FUNC_IMPL(__imp__sub_83149BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BC8"))) PPC_WEAK_FUNC(sub_83149BC8);
PPC_FUNC_IMPL(__imp__sub_83149BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BCC"))) PPC_WEAK_FUNC(sub_83149BCC);
PPC_FUNC_IMPL(__imp__sub_83149BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BD0"))) PPC_WEAK_FUNC(sub_83149BD0);
PPC_FUNC_IMPL(__imp__sub_83149BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BD4"))) PPC_WEAK_FUNC(sub_83149BD4);
PPC_FUNC_IMPL(__imp__sub_83149BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BD8"))) PPC_WEAK_FUNC(sub_83149BD8);
PPC_FUNC_IMPL(__imp__sub_83149BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BDC"))) PPC_WEAK_FUNC(sub_83149BDC);
PPC_FUNC_IMPL(__imp__sub_83149BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BE0"))) PPC_WEAK_FUNC(sub_83149BE0);
PPC_FUNC_IMPL(__imp__sub_83149BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BE4"))) PPC_WEAK_FUNC(sub_83149BE4);
PPC_FUNC_IMPL(__imp__sub_83149BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BE8"))) PPC_WEAK_FUNC(sub_83149BE8);
PPC_FUNC_IMPL(__imp__sub_83149BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BEC"))) PPC_WEAK_FUNC(sub_83149BEC);
PPC_FUNC_IMPL(__imp__sub_83149BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BF0"))) PPC_WEAK_FUNC(sub_83149BF0);
PPC_FUNC_IMPL(__imp__sub_83149BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BF4"))) PPC_WEAK_FUNC(sub_83149BF4);
PPC_FUNC_IMPL(__imp__sub_83149BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149BF8"))) PPC_WEAK_FUNC(sub_83149BF8);
PPC_FUNC_IMPL(__imp__sub_83149BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149BFC"))) PPC_WEAK_FUNC(sub_83149BFC);
PPC_FUNC_IMPL(__imp__sub_83149BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C00"))) PPC_WEAK_FUNC(sub_83149C00);
PPC_FUNC_IMPL(__imp__sub_83149C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C04"))) PPC_WEAK_FUNC(sub_83149C04);
PPC_FUNC_IMPL(__imp__sub_83149C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C08"))) PPC_WEAK_FUNC(sub_83149C08);
PPC_FUNC_IMPL(__imp__sub_83149C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C0C"))) PPC_WEAK_FUNC(sub_83149C0C);
PPC_FUNC_IMPL(__imp__sub_83149C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C10"))) PPC_WEAK_FUNC(sub_83149C10);
PPC_FUNC_IMPL(__imp__sub_83149C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C14"))) PPC_WEAK_FUNC(sub_83149C14);
PPC_FUNC_IMPL(__imp__sub_83149C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C18"))) PPC_WEAK_FUNC(sub_83149C18);
PPC_FUNC_IMPL(__imp__sub_83149C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C1C"))) PPC_WEAK_FUNC(sub_83149C1C);
PPC_FUNC_IMPL(__imp__sub_83149C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C20"))) PPC_WEAK_FUNC(sub_83149C20);
PPC_FUNC_IMPL(__imp__sub_83149C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C24"))) PPC_WEAK_FUNC(sub_83149C24);
PPC_FUNC_IMPL(__imp__sub_83149C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C28"))) PPC_WEAK_FUNC(sub_83149C28);
PPC_FUNC_IMPL(__imp__sub_83149C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C2C"))) PPC_WEAK_FUNC(sub_83149C2C);
PPC_FUNC_IMPL(__imp__sub_83149C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C30"))) PPC_WEAK_FUNC(sub_83149C30);
PPC_FUNC_IMPL(__imp__sub_83149C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C34"))) PPC_WEAK_FUNC(sub_83149C34);
PPC_FUNC_IMPL(__imp__sub_83149C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C38"))) PPC_WEAK_FUNC(sub_83149C38);
PPC_FUNC_IMPL(__imp__sub_83149C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C3C"))) PPC_WEAK_FUNC(sub_83149C3C);
PPC_FUNC_IMPL(__imp__sub_83149C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C40"))) PPC_WEAK_FUNC(sub_83149C40);
PPC_FUNC_IMPL(__imp__sub_83149C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C44"))) PPC_WEAK_FUNC(sub_83149C44);
PPC_FUNC_IMPL(__imp__sub_83149C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C48"))) PPC_WEAK_FUNC(sub_83149C48);
PPC_FUNC_IMPL(__imp__sub_83149C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C4C"))) PPC_WEAK_FUNC(sub_83149C4C);
PPC_FUNC_IMPL(__imp__sub_83149C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C50"))) PPC_WEAK_FUNC(sub_83149C50);
PPC_FUNC_IMPL(__imp__sub_83149C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C54"))) PPC_WEAK_FUNC(sub_83149C54);
PPC_FUNC_IMPL(__imp__sub_83149C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C58"))) PPC_WEAK_FUNC(sub_83149C58);
PPC_FUNC_IMPL(__imp__sub_83149C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C5C"))) PPC_WEAK_FUNC(sub_83149C5C);
PPC_FUNC_IMPL(__imp__sub_83149C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C60"))) PPC_WEAK_FUNC(sub_83149C60);
PPC_FUNC_IMPL(__imp__sub_83149C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C64"))) PPC_WEAK_FUNC(sub_83149C64);
PPC_FUNC_IMPL(__imp__sub_83149C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C68"))) PPC_WEAK_FUNC(sub_83149C68);
PPC_FUNC_IMPL(__imp__sub_83149C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C6C"))) PPC_WEAK_FUNC(sub_83149C6C);
PPC_FUNC_IMPL(__imp__sub_83149C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C70"))) PPC_WEAK_FUNC(sub_83149C70);
PPC_FUNC_IMPL(__imp__sub_83149C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C74"))) PPC_WEAK_FUNC(sub_83149C74);
PPC_FUNC_IMPL(__imp__sub_83149C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C78"))) PPC_WEAK_FUNC(sub_83149C78);
PPC_FUNC_IMPL(__imp__sub_83149C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C7C"))) PPC_WEAK_FUNC(sub_83149C7C);
PPC_FUNC_IMPL(__imp__sub_83149C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C80"))) PPC_WEAK_FUNC(sub_83149C80);
PPC_FUNC_IMPL(__imp__sub_83149C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C84"))) PPC_WEAK_FUNC(sub_83149C84);
PPC_FUNC_IMPL(__imp__sub_83149C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C88"))) PPC_WEAK_FUNC(sub_83149C88);
PPC_FUNC_IMPL(__imp__sub_83149C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C8C"))) PPC_WEAK_FUNC(sub_83149C8C);
PPC_FUNC_IMPL(__imp__sub_83149C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C90"))) PPC_WEAK_FUNC(sub_83149C90);
PPC_FUNC_IMPL(__imp__sub_83149C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C94"))) PPC_WEAK_FUNC(sub_83149C94);
PPC_FUNC_IMPL(__imp__sub_83149C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149C98"))) PPC_WEAK_FUNC(sub_83149C98);
PPC_FUNC_IMPL(__imp__sub_83149C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149C9C"))) PPC_WEAK_FUNC(sub_83149C9C);
PPC_FUNC_IMPL(__imp__sub_83149C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149CA0"))) PPC_WEAK_FUNC(sub_83149CA0);
PPC_FUNC_IMPL(__imp__sub_83149CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149CA4"))) PPC_WEAK_FUNC(sub_83149CA4);
PPC_FUNC_IMPL(__imp__sub_83149CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

