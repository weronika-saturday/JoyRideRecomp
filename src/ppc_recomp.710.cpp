#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83147DAC"))) PPC_WEAK_FUNC(sub_83147DAC);
PPC_FUNC_IMPL(__imp__sub_83147DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147DB0"))) PPC_WEAK_FUNC(sub_83147DB0);
PPC_FUNC_IMPL(__imp__sub_83147DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DB4"))) PPC_WEAK_FUNC(sub_83147DB4);
PPC_FUNC_IMPL(__imp__sub_83147DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147DB8"))) PPC_WEAK_FUNC(sub_83147DB8);
PPC_FUNC_IMPL(__imp__sub_83147DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DBC"))) PPC_WEAK_FUNC(sub_83147DBC);
PPC_FUNC_IMPL(__imp__sub_83147DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147DC0"))) PPC_WEAK_FUNC(sub_83147DC0);
PPC_FUNC_IMPL(__imp__sub_83147DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DC4"))) PPC_WEAK_FUNC(sub_83147DC4);
PPC_FUNC_IMPL(__imp__sub_83147DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147DC8"))) PPC_WEAK_FUNC(sub_83147DC8);
PPC_FUNC_IMPL(__imp__sub_83147DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DCC"))) PPC_WEAK_FUNC(sub_83147DCC);
PPC_FUNC_IMPL(__imp__sub_83147DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147DD0"))) PPC_WEAK_FUNC(sub_83147DD0);
PPC_FUNC_IMPL(__imp__sub_83147DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d06c
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147DE4"))) PPC_WEAK_FUNC(sub_83147DE4);
PPC_FUNC_IMPL(__imp__sub_83147DE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DE8"))) PPC_WEAK_FUNC(sub_83147DE8);
PPC_FUNC_IMPL(__imp__sub_83147DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d06c
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147DFC"))) PPC_WEAK_FUNC(sub_83147DFC);
PPC_FUNC_IMPL(__imp__sub_83147DFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E00"))) PPC_WEAK_FUNC(sub_83147E00);
PPC_FUNC_IMPL(__imp__sub_83147E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d06c
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147E14"))) PPC_WEAK_FUNC(sub_83147E14);
PPC_FUNC_IMPL(__imp__sub_83147E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E18"))) PPC_WEAK_FUNC(sub_83147E18);
PPC_FUNC_IMPL(__imp__sub_83147E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E1C"))) PPC_WEAK_FUNC(sub_83147E1C);
PPC_FUNC_IMPL(__imp__sub_83147E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E20"))) PPC_WEAK_FUNC(sub_83147E20);
PPC_FUNC_IMPL(__imp__sub_83147E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,17696
	ctx.r3.s64 = r11.s64 + 17696;
}

__attribute__((alias("__imp__sub_83147E28"))) PPC_WEAK_FUNC(sub_83147E28);
PPC_FUNC_IMPL(__imp__sub_83147E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c8e48
	sub_826C8E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147E2C"))) PPC_WEAK_FUNC(sub_83147E2C);
PPC_FUNC_IMPL(__imp__sub_83147E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E30"))) PPC_WEAK_FUNC(sub_83147E30);
PPC_FUNC_IMPL(__imp__sub_83147E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E34"))) PPC_WEAK_FUNC(sub_83147E34);
PPC_FUNC_IMPL(__imp__sub_83147E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E38"))) PPC_WEAK_FUNC(sub_83147E38);
PPC_FUNC_IMPL(__imp__sub_83147E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E3C"))) PPC_WEAK_FUNC(sub_83147E3C);
PPC_FUNC_IMPL(__imp__sub_83147E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E40"))) PPC_WEAK_FUNC(sub_83147E40);
PPC_FUNC_IMPL(__imp__sub_83147E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E44"))) PPC_WEAK_FUNC(sub_83147E44);
PPC_FUNC_IMPL(__imp__sub_83147E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E48"))) PPC_WEAK_FUNC(sub_83147E48);
PPC_FUNC_IMPL(__imp__sub_83147E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E4C"))) PPC_WEAK_FUNC(sub_83147E4C);
PPC_FUNC_IMPL(__imp__sub_83147E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E50"))) PPC_WEAK_FUNC(sub_83147E50);
PPC_FUNC_IMPL(__imp__sub_83147E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E54"))) PPC_WEAK_FUNC(sub_83147E54);
PPC_FUNC_IMPL(__imp__sub_83147E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E58"))) PPC_WEAK_FUNC(sub_83147E58);
PPC_FUNC_IMPL(__imp__sub_83147E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E5C"))) PPC_WEAK_FUNC(sub_83147E5C);
PPC_FUNC_IMPL(__imp__sub_83147E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E60"))) PPC_WEAK_FUNC(sub_83147E60);
PPC_FUNC_IMPL(__imp__sub_83147E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E64"))) PPC_WEAK_FUNC(sub_83147E64);
PPC_FUNC_IMPL(__imp__sub_83147E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E68"))) PPC_WEAK_FUNC(sub_83147E68);
PPC_FUNC_IMPL(__imp__sub_83147E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E6C"))) PPC_WEAK_FUNC(sub_83147E6C);
PPC_FUNC_IMPL(__imp__sub_83147E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E70"))) PPC_WEAK_FUNC(sub_83147E70);
PPC_FUNC_IMPL(__imp__sub_83147E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E74"))) PPC_WEAK_FUNC(sub_83147E74);
PPC_FUNC_IMPL(__imp__sub_83147E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E78"))) PPC_WEAK_FUNC(sub_83147E78);
PPC_FUNC_IMPL(__imp__sub_83147E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E7C"))) PPC_WEAK_FUNC(sub_83147E7C);
PPC_FUNC_IMPL(__imp__sub_83147E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E80"))) PPC_WEAK_FUNC(sub_83147E80);
PPC_FUNC_IMPL(__imp__sub_83147E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E84"))) PPC_WEAK_FUNC(sub_83147E84);
PPC_FUNC_IMPL(__imp__sub_83147E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E88"))) PPC_WEAK_FUNC(sub_83147E88);
PPC_FUNC_IMPL(__imp__sub_83147E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E8C"))) PPC_WEAK_FUNC(sub_83147E8C);
PPC_FUNC_IMPL(__imp__sub_83147E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E90"))) PPC_WEAK_FUNC(sub_83147E90);
PPC_FUNC_IMPL(__imp__sub_83147E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E94"))) PPC_WEAK_FUNC(sub_83147E94);
PPC_FUNC_IMPL(__imp__sub_83147E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147E98"))) PPC_WEAK_FUNC(sub_83147E98);
PPC_FUNC_IMPL(__imp__sub_83147E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E9C"))) PPC_WEAK_FUNC(sub_83147E9C);
PPC_FUNC_IMPL(__imp__sub_83147E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EA0"))) PPC_WEAK_FUNC(sub_83147EA0);
PPC_FUNC_IMPL(__imp__sub_83147EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EA4"))) PPC_WEAK_FUNC(sub_83147EA4);
PPC_FUNC_IMPL(__imp__sub_83147EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EA8"))) PPC_WEAK_FUNC(sub_83147EA8);
PPC_FUNC_IMPL(__imp__sub_83147EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EAC"))) PPC_WEAK_FUNC(sub_83147EAC);
PPC_FUNC_IMPL(__imp__sub_83147EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EB0"))) PPC_WEAK_FUNC(sub_83147EB0);
PPC_FUNC_IMPL(__imp__sub_83147EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EB4"))) PPC_WEAK_FUNC(sub_83147EB4);
PPC_FUNC_IMPL(__imp__sub_83147EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EB8"))) PPC_WEAK_FUNC(sub_83147EB8);
PPC_FUNC_IMPL(__imp__sub_83147EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EBC"))) PPC_WEAK_FUNC(sub_83147EBC);
PPC_FUNC_IMPL(__imp__sub_83147EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EC0"))) PPC_WEAK_FUNC(sub_83147EC0);
PPC_FUNC_IMPL(__imp__sub_83147EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EC4"))) PPC_WEAK_FUNC(sub_83147EC4);
PPC_FUNC_IMPL(__imp__sub_83147EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EC8"))) PPC_WEAK_FUNC(sub_83147EC8);
PPC_FUNC_IMPL(__imp__sub_83147EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147ECC"))) PPC_WEAK_FUNC(sub_83147ECC);
PPC_FUNC_IMPL(__imp__sub_83147ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147ED0"))) PPC_WEAK_FUNC(sub_83147ED0);
PPC_FUNC_IMPL(__imp__sub_83147ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147ED4"))) PPC_WEAK_FUNC(sub_83147ED4);
PPC_FUNC_IMPL(__imp__sub_83147ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147ED8"))) PPC_WEAK_FUNC(sub_83147ED8);
PPC_FUNC_IMPL(__imp__sub_83147ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EDC"))) PPC_WEAK_FUNC(sub_83147EDC);
PPC_FUNC_IMPL(__imp__sub_83147EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EE0"))) PPC_WEAK_FUNC(sub_83147EE0);
PPC_FUNC_IMPL(__imp__sub_83147EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EE4"))) PPC_WEAK_FUNC(sub_83147EE4);
PPC_FUNC_IMPL(__imp__sub_83147EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EE8"))) PPC_WEAK_FUNC(sub_83147EE8);
PPC_FUNC_IMPL(__imp__sub_83147EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EEC"))) PPC_WEAK_FUNC(sub_83147EEC);
PPC_FUNC_IMPL(__imp__sub_83147EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EF0"))) PPC_WEAK_FUNC(sub_83147EF0);
PPC_FUNC_IMPL(__imp__sub_83147EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EF4"))) PPC_WEAK_FUNC(sub_83147EF4);
PPC_FUNC_IMPL(__imp__sub_83147EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EF8"))) PPC_WEAK_FUNC(sub_83147EF8);
PPC_FUNC_IMPL(__imp__sub_83147EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EFC"))) PPC_WEAK_FUNC(sub_83147EFC);
PPC_FUNC_IMPL(__imp__sub_83147EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F00"))) PPC_WEAK_FUNC(sub_83147F00);
PPC_FUNC_IMPL(__imp__sub_83147F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F04"))) PPC_WEAK_FUNC(sub_83147F04);
PPC_FUNC_IMPL(__imp__sub_83147F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F08"))) PPC_WEAK_FUNC(sub_83147F08);
PPC_FUNC_IMPL(__imp__sub_83147F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F0C"))) PPC_WEAK_FUNC(sub_83147F0C);
PPC_FUNC_IMPL(__imp__sub_83147F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F10"))) PPC_WEAK_FUNC(sub_83147F10);
PPC_FUNC_IMPL(__imp__sub_83147F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F14"))) PPC_WEAK_FUNC(sub_83147F14);
PPC_FUNC_IMPL(__imp__sub_83147F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F18"))) PPC_WEAK_FUNC(sub_83147F18);
PPC_FUNC_IMPL(__imp__sub_83147F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F1C"))) PPC_WEAK_FUNC(sub_83147F1C);
PPC_FUNC_IMPL(__imp__sub_83147F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F20"))) PPC_WEAK_FUNC(sub_83147F20);
PPC_FUNC_IMPL(__imp__sub_83147F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F24"))) PPC_WEAK_FUNC(sub_83147F24);
PPC_FUNC_IMPL(__imp__sub_83147F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F28"))) PPC_WEAK_FUNC(sub_83147F28);
PPC_FUNC_IMPL(__imp__sub_83147F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F2C"))) PPC_WEAK_FUNC(sub_83147F2C);
PPC_FUNC_IMPL(__imp__sub_83147F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F30"))) PPC_WEAK_FUNC(sub_83147F30);
PPC_FUNC_IMPL(__imp__sub_83147F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F34"))) PPC_WEAK_FUNC(sub_83147F34);
PPC_FUNC_IMPL(__imp__sub_83147F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F38"))) PPC_WEAK_FUNC(sub_83147F38);
PPC_FUNC_IMPL(__imp__sub_83147F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F3C"))) PPC_WEAK_FUNC(sub_83147F3C);
PPC_FUNC_IMPL(__imp__sub_83147F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F40"))) PPC_WEAK_FUNC(sub_83147F40);
PPC_FUNC_IMPL(__imp__sub_83147F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F44"))) PPC_WEAK_FUNC(sub_83147F44);
PPC_FUNC_IMPL(__imp__sub_83147F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F48"))) PPC_WEAK_FUNC(sub_83147F48);
PPC_FUNC_IMPL(__imp__sub_83147F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F4C"))) PPC_WEAK_FUNC(sub_83147F4C);
PPC_FUNC_IMPL(__imp__sub_83147F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F50"))) PPC_WEAK_FUNC(sub_83147F50);
PPC_FUNC_IMPL(__imp__sub_83147F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F54"))) PPC_WEAK_FUNC(sub_83147F54);
PPC_FUNC_IMPL(__imp__sub_83147F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F58"))) PPC_WEAK_FUNC(sub_83147F58);
PPC_FUNC_IMPL(__imp__sub_83147F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F5C"))) PPC_WEAK_FUNC(sub_83147F5C);
PPC_FUNC_IMPL(__imp__sub_83147F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F60"))) PPC_WEAK_FUNC(sub_83147F60);
PPC_FUNC_IMPL(__imp__sub_83147F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F64"))) PPC_WEAK_FUNC(sub_83147F64);
PPC_FUNC_IMPL(__imp__sub_83147F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F68"))) PPC_WEAK_FUNC(sub_83147F68);
PPC_FUNC_IMPL(__imp__sub_83147F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F6C"))) PPC_WEAK_FUNC(sub_83147F6C);
PPC_FUNC_IMPL(__imp__sub_83147F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F70"))) PPC_WEAK_FUNC(sub_83147F70);
PPC_FUNC_IMPL(__imp__sub_83147F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F74"))) PPC_WEAK_FUNC(sub_83147F74);
PPC_FUNC_IMPL(__imp__sub_83147F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F78"))) PPC_WEAK_FUNC(sub_83147F78);
PPC_FUNC_IMPL(__imp__sub_83147F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F7C"))) PPC_WEAK_FUNC(sub_83147F7C);
PPC_FUNC_IMPL(__imp__sub_83147F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F80"))) PPC_WEAK_FUNC(sub_83147F80);
PPC_FUNC_IMPL(__imp__sub_83147F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F84"))) PPC_WEAK_FUNC(sub_83147F84);
PPC_FUNC_IMPL(__imp__sub_83147F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F88"))) PPC_WEAK_FUNC(sub_83147F88);
PPC_FUNC_IMPL(__imp__sub_83147F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F8C"))) PPC_WEAK_FUNC(sub_83147F8C);
PPC_FUNC_IMPL(__imp__sub_83147F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F90"))) PPC_WEAK_FUNC(sub_83147F90);
PPC_FUNC_IMPL(__imp__sub_83147F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F94"))) PPC_WEAK_FUNC(sub_83147F94);
PPC_FUNC_IMPL(__imp__sub_83147F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F98"))) PPC_WEAK_FUNC(sub_83147F98);
PPC_FUNC_IMPL(__imp__sub_83147F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F9C"))) PPC_WEAK_FUNC(sub_83147F9C);
PPC_FUNC_IMPL(__imp__sub_83147F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FA0"))) PPC_WEAK_FUNC(sub_83147FA0);
PPC_FUNC_IMPL(__imp__sub_83147FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FA4"))) PPC_WEAK_FUNC(sub_83147FA4);
PPC_FUNC_IMPL(__imp__sub_83147FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FA8"))) PPC_WEAK_FUNC(sub_83147FA8);
PPC_FUNC_IMPL(__imp__sub_83147FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FAC"))) PPC_WEAK_FUNC(sub_83147FAC);
PPC_FUNC_IMPL(__imp__sub_83147FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FB0"))) PPC_WEAK_FUNC(sub_83147FB0);
PPC_FUNC_IMPL(__imp__sub_83147FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FB4"))) PPC_WEAK_FUNC(sub_83147FB4);
PPC_FUNC_IMPL(__imp__sub_83147FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FB8"))) PPC_WEAK_FUNC(sub_83147FB8);
PPC_FUNC_IMPL(__imp__sub_83147FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FBC"))) PPC_WEAK_FUNC(sub_83147FBC);
PPC_FUNC_IMPL(__imp__sub_83147FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FC0"))) PPC_WEAK_FUNC(sub_83147FC0);
PPC_FUNC_IMPL(__imp__sub_83147FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FC4"))) PPC_WEAK_FUNC(sub_83147FC4);
PPC_FUNC_IMPL(__imp__sub_83147FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FC8"))) PPC_WEAK_FUNC(sub_83147FC8);
PPC_FUNC_IMPL(__imp__sub_83147FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FCC"))) PPC_WEAK_FUNC(sub_83147FCC);
PPC_FUNC_IMPL(__imp__sub_83147FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FD0"))) PPC_WEAK_FUNC(sub_83147FD0);
PPC_FUNC_IMPL(__imp__sub_83147FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FD4"))) PPC_WEAK_FUNC(sub_83147FD4);
PPC_FUNC_IMPL(__imp__sub_83147FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FD8"))) PPC_WEAK_FUNC(sub_83147FD8);
PPC_FUNC_IMPL(__imp__sub_83147FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FDC"))) PPC_WEAK_FUNC(sub_83147FDC);
PPC_FUNC_IMPL(__imp__sub_83147FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FE0"))) PPC_WEAK_FUNC(sub_83147FE0);
PPC_FUNC_IMPL(__imp__sub_83147FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FE4"))) PPC_WEAK_FUNC(sub_83147FE4);
PPC_FUNC_IMPL(__imp__sub_83147FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FE8"))) PPC_WEAK_FUNC(sub_83147FE8);
PPC_FUNC_IMPL(__imp__sub_83147FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FEC"))) PPC_WEAK_FUNC(sub_83147FEC);
PPC_FUNC_IMPL(__imp__sub_83147FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FF0"))) PPC_WEAK_FUNC(sub_83147FF0);
PPC_FUNC_IMPL(__imp__sub_83147FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FF4"))) PPC_WEAK_FUNC(sub_83147FF4);
PPC_FUNC_IMPL(__imp__sub_83147FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147FF8"))) PPC_WEAK_FUNC(sub_83147FF8);
PPC_FUNC_IMPL(__imp__sub_83147FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FFC"))) PPC_WEAK_FUNC(sub_83147FFC);
PPC_FUNC_IMPL(__imp__sub_83147FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148000"))) PPC_WEAK_FUNC(sub_83148000);
PPC_FUNC_IMPL(__imp__sub_83148000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148004"))) PPC_WEAK_FUNC(sub_83148004);
PPC_FUNC_IMPL(__imp__sub_83148004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148008"))) PPC_WEAK_FUNC(sub_83148008);
PPC_FUNC_IMPL(__imp__sub_83148008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314800C"))) PPC_WEAK_FUNC(sub_8314800C);
PPC_FUNC_IMPL(__imp__sub_8314800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148010"))) PPC_WEAK_FUNC(sub_83148010);
PPC_FUNC_IMPL(__imp__sub_83148010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148014"))) PPC_WEAK_FUNC(sub_83148014);
PPC_FUNC_IMPL(__imp__sub_83148014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148018"))) PPC_WEAK_FUNC(sub_83148018);
PPC_FUNC_IMPL(__imp__sub_83148018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314801C"))) PPC_WEAK_FUNC(sub_8314801C);
PPC_FUNC_IMPL(__imp__sub_8314801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148020"))) PPC_WEAK_FUNC(sub_83148020);
PPC_FUNC_IMPL(__imp__sub_83148020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148024"))) PPC_WEAK_FUNC(sub_83148024);
PPC_FUNC_IMPL(__imp__sub_83148024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148028"))) PPC_WEAK_FUNC(sub_83148028);
PPC_FUNC_IMPL(__imp__sub_83148028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314802C"))) PPC_WEAK_FUNC(sub_8314802C);
PPC_FUNC_IMPL(__imp__sub_8314802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148030"))) PPC_WEAK_FUNC(sub_83148030);
PPC_FUNC_IMPL(__imp__sub_83148030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148034"))) PPC_WEAK_FUNC(sub_83148034);
PPC_FUNC_IMPL(__imp__sub_83148034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148038"))) PPC_WEAK_FUNC(sub_83148038);
PPC_FUNC_IMPL(__imp__sub_83148038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314803C"))) PPC_WEAK_FUNC(sub_8314803C);
PPC_FUNC_IMPL(__imp__sub_8314803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148040"))) PPC_WEAK_FUNC(sub_83148040);
PPC_FUNC_IMPL(__imp__sub_83148040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148044"))) PPC_WEAK_FUNC(sub_83148044);
PPC_FUNC_IMPL(__imp__sub_83148044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148048"))) PPC_WEAK_FUNC(sub_83148048);
PPC_FUNC_IMPL(__imp__sub_83148048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314804C"))) PPC_WEAK_FUNC(sub_8314804C);
PPC_FUNC_IMPL(__imp__sub_8314804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148050"))) PPC_WEAK_FUNC(sub_83148050);
PPC_FUNC_IMPL(__imp__sub_83148050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148054"))) PPC_WEAK_FUNC(sub_83148054);
PPC_FUNC_IMPL(__imp__sub_83148054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148058"))) PPC_WEAK_FUNC(sub_83148058);
PPC_FUNC_IMPL(__imp__sub_83148058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314805C"))) PPC_WEAK_FUNC(sub_8314805C);
PPC_FUNC_IMPL(__imp__sub_8314805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148060"))) PPC_WEAK_FUNC(sub_83148060);
PPC_FUNC_IMPL(__imp__sub_83148060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148064"))) PPC_WEAK_FUNC(sub_83148064);
PPC_FUNC_IMPL(__imp__sub_83148064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148068"))) PPC_WEAK_FUNC(sub_83148068);
PPC_FUNC_IMPL(__imp__sub_83148068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314806C"))) PPC_WEAK_FUNC(sub_8314806C);
PPC_FUNC_IMPL(__imp__sub_8314806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148070"))) PPC_WEAK_FUNC(sub_83148070);
PPC_FUNC_IMPL(__imp__sub_83148070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148074"))) PPC_WEAK_FUNC(sub_83148074);
PPC_FUNC_IMPL(__imp__sub_83148074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148078"))) PPC_WEAK_FUNC(sub_83148078);
PPC_FUNC_IMPL(__imp__sub_83148078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314807C"))) PPC_WEAK_FUNC(sub_8314807C);
PPC_FUNC_IMPL(__imp__sub_8314807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148080"))) PPC_WEAK_FUNC(sub_83148080);
PPC_FUNC_IMPL(__imp__sub_83148080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148084"))) PPC_WEAK_FUNC(sub_83148084);
PPC_FUNC_IMPL(__imp__sub_83148084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148088"))) PPC_WEAK_FUNC(sub_83148088);
PPC_FUNC_IMPL(__imp__sub_83148088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314808C"))) PPC_WEAK_FUNC(sub_8314808C);
PPC_FUNC_IMPL(__imp__sub_8314808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148090"))) PPC_WEAK_FUNC(sub_83148090);
PPC_FUNC_IMPL(__imp__sub_83148090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148094"))) PPC_WEAK_FUNC(sub_83148094);
PPC_FUNC_IMPL(__imp__sub_83148094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148098"))) PPC_WEAK_FUNC(sub_83148098);
PPC_FUNC_IMPL(__imp__sub_83148098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314809C"))) PPC_WEAK_FUNC(sub_8314809C);
PPC_FUNC_IMPL(__imp__sub_8314809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480A0"))) PPC_WEAK_FUNC(sub_831480A0);
PPC_FUNC_IMPL(__imp__sub_831480A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480A4"))) PPC_WEAK_FUNC(sub_831480A4);
PPC_FUNC_IMPL(__imp__sub_831480A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480A8"))) PPC_WEAK_FUNC(sub_831480A8);
PPC_FUNC_IMPL(__imp__sub_831480A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480AC"))) PPC_WEAK_FUNC(sub_831480AC);
PPC_FUNC_IMPL(__imp__sub_831480AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480B0"))) PPC_WEAK_FUNC(sub_831480B0);
PPC_FUNC_IMPL(__imp__sub_831480B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480B4"))) PPC_WEAK_FUNC(sub_831480B4);
PPC_FUNC_IMPL(__imp__sub_831480B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480B8"))) PPC_WEAK_FUNC(sub_831480B8);
PPC_FUNC_IMPL(__imp__sub_831480B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480BC"))) PPC_WEAK_FUNC(sub_831480BC);
PPC_FUNC_IMPL(__imp__sub_831480BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480C0"))) PPC_WEAK_FUNC(sub_831480C0);
PPC_FUNC_IMPL(__imp__sub_831480C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480C4"))) PPC_WEAK_FUNC(sub_831480C4);
PPC_FUNC_IMPL(__imp__sub_831480C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480C8"))) PPC_WEAK_FUNC(sub_831480C8);
PPC_FUNC_IMPL(__imp__sub_831480C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480CC"))) PPC_WEAK_FUNC(sub_831480CC);
PPC_FUNC_IMPL(__imp__sub_831480CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480D0"))) PPC_WEAK_FUNC(sub_831480D0);
PPC_FUNC_IMPL(__imp__sub_831480D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480D4"))) PPC_WEAK_FUNC(sub_831480D4);
PPC_FUNC_IMPL(__imp__sub_831480D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480D8"))) PPC_WEAK_FUNC(sub_831480D8);
PPC_FUNC_IMPL(__imp__sub_831480D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480DC"))) PPC_WEAK_FUNC(sub_831480DC);
PPC_FUNC_IMPL(__imp__sub_831480DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480E0"))) PPC_WEAK_FUNC(sub_831480E0);
PPC_FUNC_IMPL(__imp__sub_831480E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480E4"))) PPC_WEAK_FUNC(sub_831480E4);
PPC_FUNC_IMPL(__imp__sub_831480E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480E8"))) PPC_WEAK_FUNC(sub_831480E8);
PPC_FUNC_IMPL(__imp__sub_831480E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480EC"))) PPC_WEAK_FUNC(sub_831480EC);
PPC_FUNC_IMPL(__imp__sub_831480EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480F0"))) PPC_WEAK_FUNC(sub_831480F0);
PPC_FUNC_IMPL(__imp__sub_831480F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480F4"))) PPC_WEAK_FUNC(sub_831480F4);
PPC_FUNC_IMPL(__imp__sub_831480F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831480F8"))) PPC_WEAK_FUNC(sub_831480F8);
PPC_FUNC_IMPL(__imp__sub_831480F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480FC"))) PPC_WEAK_FUNC(sub_831480FC);
PPC_FUNC_IMPL(__imp__sub_831480FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148100"))) PPC_WEAK_FUNC(sub_83148100);
PPC_FUNC_IMPL(__imp__sub_83148100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148104"))) PPC_WEAK_FUNC(sub_83148104);
PPC_FUNC_IMPL(__imp__sub_83148104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148108"))) PPC_WEAK_FUNC(sub_83148108);
PPC_FUNC_IMPL(__imp__sub_83148108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314810C"))) PPC_WEAK_FUNC(sub_8314810C);
PPC_FUNC_IMPL(__imp__sub_8314810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148110"))) PPC_WEAK_FUNC(sub_83148110);
PPC_FUNC_IMPL(__imp__sub_83148110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148114"))) PPC_WEAK_FUNC(sub_83148114);
PPC_FUNC_IMPL(__imp__sub_83148114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148118"))) PPC_WEAK_FUNC(sub_83148118);
PPC_FUNC_IMPL(__imp__sub_83148118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314811C"))) PPC_WEAK_FUNC(sub_8314811C);
PPC_FUNC_IMPL(__imp__sub_8314811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148120"))) PPC_WEAK_FUNC(sub_83148120);
PPC_FUNC_IMPL(__imp__sub_83148120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148124"))) PPC_WEAK_FUNC(sub_83148124);
PPC_FUNC_IMPL(__imp__sub_83148124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148128"))) PPC_WEAK_FUNC(sub_83148128);
PPC_FUNC_IMPL(__imp__sub_83148128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314812C"))) PPC_WEAK_FUNC(sub_8314812C);
PPC_FUNC_IMPL(__imp__sub_8314812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148130"))) PPC_WEAK_FUNC(sub_83148130);
PPC_FUNC_IMPL(__imp__sub_83148130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148134"))) PPC_WEAK_FUNC(sub_83148134);
PPC_FUNC_IMPL(__imp__sub_83148134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148138"))) PPC_WEAK_FUNC(sub_83148138);
PPC_FUNC_IMPL(__imp__sub_83148138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314813C"))) PPC_WEAK_FUNC(sub_8314813C);
PPC_FUNC_IMPL(__imp__sub_8314813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148140"))) PPC_WEAK_FUNC(sub_83148140);
PPC_FUNC_IMPL(__imp__sub_83148140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148144"))) PPC_WEAK_FUNC(sub_83148144);
PPC_FUNC_IMPL(__imp__sub_83148144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148148"))) PPC_WEAK_FUNC(sub_83148148);
PPC_FUNC_IMPL(__imp__sub_83148148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314814C"))) PPC_WEAK_FUNC(sub_8314814C);
PPC_FUNC_IMPL(__imp__sub_8314814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148150"))) PPC_WEAK_FUNC(sub_83148150);
PPC_FUNC_IMPL(__imp__sub_83148150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148154"))) PPC_WEAK_FUNC(sub_83148154);
PPC_FUNC_IMPL(__imp__sub_83148154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148158"))) PPC_WEAK_FUNC(sub_83148158);
PPC_FUNC_IMPL(__imp__sub_83148158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314815C"))) PPC_WEAK_FUNC(sub_8314815C);
PPC_FUNC_IMPL(__imp__sub_8314815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148160"))) PPC_WEAK_FUNC(sub_83148160);
PPC_FUNC_IMPL(__imp__sub_83148160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148164"))) PPC_WEAK_FUNC(sub_83148164);
PPC_FUNC_IMPL(__imp__sub_83148164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148168"))) PPC_WEAK_FUNC(sub_83148168);
PPC_FUNC_IMPL(__imp__sub_83148168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314816C"))) PPC_WEAK_FUNC(sub_8314816C);
PPC_FUNC_IMPL(__imp__sub_8314816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148170"))) PPC_WEAK_FUNC(sub_83148170);
PPC_FUNC_IMPL(__imp__sub_83148170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148174"))) PPC_WEAK_FUNC(sub_83148174);
PPC_FUNC_IMPL(__imp__sub_83148174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148178"))) PPC_WEAK_FUNC(sub_83148178);
PPC_FUNC_IMPL(__imp__sub_83148178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314817C"))) PPC_WEAK_FUNC(sub_8314817C);
PPC_FUNC_IMPL(__imp__sub_8314817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148180"))) PPC_WEAK_FUNC(sub_83148180);
PPC_FUNC_IMPL(__imp__sub_83148180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148184"))) PPC_WEAK_FUNC(sub_83148184);
PPC_FUNC_IMPL(__imp__sub_83148184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148188"))) PPC_WEAK_FUNC(sub_83148188);
PPC_FUNC_IMPL(__imp__sub_83148188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314818C"))) PPC_WEAK_FUNC(sub_8314818C);
PPC_FUNC_IMPL(__imp__sub_8314818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148190"))) PPC_WEAK_FUNC(sub_83148190);
PPC_FUNC_IMPL(__imp__sub_83148190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148194"))) PPC_WEAK_FUNC(sub_83148194);
PPC_FUNC_IMPL(__imp__sub_83148194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148198"))) PPC_WEAK_FUNC(sub_83148198);
PPC_FUNC_IMPL(__imp__sub_83148198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314819C"))) PPC_WEAK_FUNC(sub_8314819C);
PPC_FUNC_IMPL(__imp__sub_8314819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481A0"))) PPC_WEAK_FUNC(sub_831481A0);
PPC_FUNC_IMPL(__imp__sub_831481A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481A4"))) PPC_WEAK_FUNC(sub_831481A4);
PPC_FUNC_IMPL(__imp__sub_831481A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481A8"))) PPC_WEAK_FUNC(sub_831481A8);
PPC_FUNC_IMPL(__imp__sub_831481A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481AC"))) PPC_WEAK_FUNC(sub_831481AC);
PPC_FUNC_IMPL(__imp__sub_831481AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481B0"))) PPC_WEAK_FUNC(sub_831481B0);
PPC_FUNC_IMPL(__imp__sub_831481B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481B4"))) PPC_WEAK_FUNC(sub_831481B4);
PPC_FUNC_IMPL(__imp__sub_831481B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481B8"))) PPC_WEAK_FUNC(sub_831481B8);
PPC_FUNC_IMPL(__imp__sub_831481B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481BC"))) PPC_WEAK_FUNC(sub_831481BC);
PPC_FUNC_IMPL(__imp__sub_831481BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481C0"))) PPC_WEAK_FUNC(sub_831481C0);
PPC_FUNC_IMPL(__imp__sub_831481C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,21204
	ctx.r3.s64 = r11.s64 + 21204;
}

__attribute__((alias("__imp__sub_831481C8"))) PPC_WEAK_FUNC(sub_831481C8);
PPC_FUNC_IMPL(__imp__sub_831481C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ce840
	sub_826CE840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831481CC"))) PPC_WEAK_FUNC(sub_831481CC);
PPC_FUNC_IMPL(__imp__sub_831481CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481D0"))) PPC_WEAK_FUNC(sub_831481D0);
PPC_FUNC_IMPL(__imp__sub_831481D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481D4"))) PPC_WEAK_FUNC(sub_831481D4);
PPC_FUNC_IMPL(__imp__sub_831481D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481D8"))) PPC_WEAK_FUNC(sub_831481D8);
PPC_FUNC_IMPL(__imp__sub_831481D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481DC"))) PPC_WEAK_FUNC(sub_831481DC);
PPC_FUNC_IMPL(__imp__sub_831481DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831481E0"))) PPC_WEAK_FUNC(sub_831481E0);
PPC_FUNC_IMPL(__imp__sub_831481E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

