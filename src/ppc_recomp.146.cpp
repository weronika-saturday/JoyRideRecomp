#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8255EAD0"))) PPC_WEAK_FUNC(sub_8255EAD0);
PPC_FUNC_IMPL(__imp__sub_8255EAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EAD4"))) PPC_WEAK_FUNC(sub_8255EAD4);
PPC_FUNC_IMPL(__imp__sub_8255EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAD8"))) PPC_WEAK_FUNC(sub_8255EAD8);
PPC_FUNC_IMPL(__imp__sub_8255EAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EADC"))) PPC_WEAK_FUNC(sub_8255EADC);
PPC_FUNC_IMPL(__imp__sub_8255EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAE0"))) PPC_WEAK_FUNC(sub_8255EAE0);
PPC_FUNC_IMPL(__imp__sub_8255EAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EAE4"))) PPC_WEAK_FUNC(sub_8255EAE4);
PPC_FUNC_IMPL(__imp__sub_8255EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAE8"))) PPC_WEAK_FUNC(sub_8255EAE8);
PPC_FUNC_IMPL(__imp__sub_8255EAE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EAEC"))) PPC_WEAK_FUNC(sub_8255EAEC);
PPC_FUNC_IMPL(__imp__sub_8255EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAF0"))) PPC_WEAK_FUNC(sub_8255EAF0);
PPC_FUNC_IMPL(__imp__sub_8255EAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EAF4"))) PPC_WEAK_FUNC(sub_8255EAF4);
PPC_FUNC_IMPL(__imp__sub_8255EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAF8"))) PPC_WEAK_FUNC(sub_8255EAF8);
PPC_FUNC_IMPL(__imp__sub_8255EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-24084
	ctx.r5.s64 = r11.s64 + -24084;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
}

__attribute__((alias("__imp__sub_8255EB10"))) PPC_WEAK_FUNC(sub_8255EB10);
PPC_FUNC_IMPL(__imp__sub_8255EB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255EB14"))) PPC_WEAK_FUNC(sub_8255EB14);
PPC_FUNC_IMPL(__imp__sub_8255EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EB18"))) PPC_WEAK_FUNC(sub_8255EB18);
PPC_FUNC_IMPL(__imp__sub_8255EB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,11
	r11.s64 = 11;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// bgt cr6,0x8255eb6c
	if (cr6.gt) goto loc_8255EB6C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255eb48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255EB48;
	// bdzf 4*cr6+eq,0x8255eb54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255EB54;
	// bne cr6,0x8255eb60
	if (!cr6.eq) goto loc_8255EB60;
	// li r11,6
	r11.s64 = 6;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EB48:
	// li r11,7
	r11.s64 = 7;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EB54:
	// li r11,8
	r11.s64 = 8;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EB60:
	// li r11,9
	r11.s64 = 9;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EB6C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
}

__attribute__((alias("__imp__sub_8255EB74"))) PPC_WEAK_FUNC(sub_8255EB74);
PPC_FUNC_IMPL(__imp__sub_8255EB74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EB78"))) PPC_WEAK_FUNC(sub_8255EB78);
PPC_FUNC_IMPL(__imp__sub_8255EB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EB7C"))) PPC_WEAK_FUNC(sub_8255EB7C);
PPC_FUNC_IMPL(__imp__sub_8255EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EB80"))) PPC_WEAK_FUNC(sub_8255EB80);
PPC_FUNC_IMPL(__imp__sub_8255EB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,11
	r11.s64 = 11;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// bgt cr6,0x8255ebd4
	if (cr6.gt) goto loc_8255EBD4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255ebb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255EBB0;
	// bdzf 4*cr6+eq,0x8255ebbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255EBBC;
	// bne cr6,0x8255ebc8
	if (!cr6.eq) goto loc_8255EBC8;
	// li r11,6
	r11.s64 = 6;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EBB0:
	// li r11,7
	r11.s64 = 7;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EBBC:
	// li r11,8
	r11.s64 = 8;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EBC8:
	// li r11,9
	r11.s64 = 9;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
loc_8255EBD4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EBE0"))) PPC_WEAK_FUNC(sub_8255EBE0);
PPC_FUNC_IMPL(__imp__sub_8255EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,1847(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1847, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EBEC"))) PPC_WEAK_FUNC(sub_8255EBEC);
PPC_FUNC_IMPL(__imp__sub_8255EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EBF0"))) PPC_WEAK_FUNC(sub_8255EBF0);
PPC_FUNC_IMPL(__imp__sub_8255EBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,1847(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1847, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EBFC"))) PPC_WEAK_FUNC(sub_8255EBFC);
PPC_FUNC_IMPL(__imp__sub_8255EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EC00"))) PPC_WEAK_FUNC(sub_8255EC00);
PPC_FUNC_IMPL(__imp__sub_8255EC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,1849(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1849, r11.u8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-24056
	ctx.r5.s64 = r11.s64 + -24056;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
}

__attribute__((alias("__imp__sub_8255EC38"))) PPC_WEAK_FUNC(sub_8255EC38);
PPC_FUNC_IMPL(__imp__sub_8255EC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255EC3C"))) PPC_WEAK_FUNC(sub_8255EC3C);
PPC_FUNC_IMPL(__imp__sub_8255EC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EC40"))) PPC_WEAK_FUNC(sub_8255EC40);
PPC_FUNC_IMPL(__imp__sub_8255EC40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1849(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1849);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EC48"))) PPC_WEAK_FUNC(sub_8255EC48);
PPC_FUNC_IMPL(__imp__sub_8255EC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8255EC4C"))) PPC_WEAK_FUNC(sub_8255EC4C);
PPC_FUNC_IMPL(__imp__sub_8255EC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EC50"))) PPC_WEAK_FUNC(sub_8255EC50);
PPC_FUNC_IMPL(__imp__sub_8255EC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,1664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255ec80
	if (cr6.eq) goto loc_8255EC80;
	// addi r10,r3,1004
	ctx.r10.s64 = ctx.r3.s64 + 1004;
loc_8255EC64:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x8255ec88
	if (cr6.eq) goto loc_8255EC88;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255ec64
	if (cr6.lt) goto loc_8255EC64;
loc_8255EC80:
	// addi r3,r3,992
	ctx.r3.s64 = ctx.r3.s64 + 992;
	// blr 
	return;
loc_8255EC88:
	// mulli r11,r11,168
	r11.s64 = r11.s64 * 168;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,992
	ctx.r3.s64 = r11.s64 + 992;
}

__attribute__((alias("__imp__sub_8255EC94"))) PPC_WEAK_FUNC(sub_8255EC94);
PPC_FUNC_IMPL(__imp__sub_8255EC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EC98"))) PPC_WEAK_FUNC(sub_8255EC98);
PPC_FUNC_IMPL(__imp__sub_8255EC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1688);
	// addi r3,r3,1672
	ctx.r3.s64 = ctx.r3.s64 + 1672;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8255ECAC"))) PPC_WEAK_FUNC(sub_8255ECAC);
PPC_FUNC_IMPL(__imp__sub_8255ECAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ECB0"))) PPC_WEAK_FUNC(sub_8255ECB0);
PPC_FUNC_IMPL(__imp__sub_8255ECB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,1664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255ece0
	if (cr6.eq) goto loc_8255ECE0;
	// addi r10,r3,1004
	ctx.r10.s64 = ctx.r3.s64 + 1004;
loc_8255ECC4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x8255ecec
	if (cr6.eq) goto loc_8255ECEC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255ecc4
	if (cr6.lt) goto loc_8255ECC4;
loc_8255ECE0:
	// addi r11,r3,992
	r11.s64 = ctx.r3.s64 + 992;
	// addi r3,r11,108
	ctx.r3.s64 = r11.s64 + 108;
	// blr 
	return;
loc_8255ECEC:
	// mulli r11,r11,168
	r11.s64 = r11.s64 * 168;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,992
	r11.s64 = r11.s64 + 992;
	// addi r3,r11,108
	ctx.r3.s64 = r11.s64 + 108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ED00"))) PPC_WEAK_FUNC(sub_8255ED00);
PPC_FUNC_IMPL(__imp__sub_8255ED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,1853(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1853, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ED0C"))) PPC_WEAK_FUNC(sub_8255ED0C);
PPC_FUNC_IMPL(__imp__sub_8255ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ED10"))) PPC_WEAK_FUNC(sub_8255ED10);
PPC_FUNC_IMPL(__imp__sub_8255ED10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ED24"))) PPC_WEAK_FUNC(sub_8255ED24);
PPC_FUNC_IMPL(__imp__sub_8255ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ED28"))) PPC_WEAK_FUNC(sub_8255ED28);
PPC_FUNC_IMPL(__imp__sub_8255ED28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8255ED48"))) PPC_WEAK_FUNC(sub_8255ED48);
PPC_FUNC_IMPL(__imp__sub_8255ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r5,r8,-24012
	ctx.r5.s64 = ctx.r8.s64 + -24012;
	// stw r9,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r7,22032
	ctx.r4.s64 = ctx.r7.s64 + 22032;
	// stw r9,980(r11)
	PPC_STORE_U32(r11.u32 + 980, ctx.r9.u32);
	// addi r3,r6,16564
	ctx.r3.s64 = ctx.r6.s64 + 16564;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,984(r11)
	PPC_STORE_U32(r11.u32 + 984, ctx.r8.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r7,988(r11)
	PPC_STORE_U32(r11.u32 + 988, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8255ED88"))) PPC_WEAK_FUNC(sub_8255ED88);
PPC_FUNC_IMPL(__imp__sub_8255ED88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255ED8C"))) PPC_WEAK_FUNC(sub_8255ED8C);
PPC_FUNC_IMPL(__imp__sub_8255ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ED90"))) PPC_WEAK_FUNC(sub_8255ED90);
PPC_FUNC_IMPL(__imp__sub_8255ED90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r31,r31,976
	r31.s64 = r31.s64 + 976;
	// li r30,4
	r30.s64 = 4;
loc_8255EDC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8255edec
	if (cr6.eq) goto loc_8255EDEC;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
loc_8255EDEC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8255edc8
	if (!cr0.eq) goto loc_8255EDC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
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

__attribute__((alias("__imp__sub_8255EE24"))) PPC_WEAK_FUNC(sub_8255EE24);
PPC_FUNC_IMPL(__imp__sub_8255EE24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EE28"))) PPC_WEAK_FUNC(sub_8255EE28);
PPC_FUNC_IMPL(__imp__sub_8255EE28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,992
	r27.s64 = ctx.r3.s64 + 992;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,4
	r31.s64 = 4;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8255EE48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232fb50
	sub_8232FB50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,168
	r30.s64 = r30.s64 + 168;
	// bne 0x8255ee48
	if (!cr0.eq) goto loc_8255EE48;
	// li r25,0
	r25.s64 = 0;
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// li r26,4
	r26.s64 = 4;
	// stw r25,1664(r29)
	PPC_STORE_U32(r29.u32 + 1664, r25.u32);
	// lis r28,-31970
	r28.s64 = -2095185920;
loc_8255EE70:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8255eefc
	if (!cr6.eq) goto loc_8255EEFC;
	// lwz r11,1664(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1664);
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// li r4,50
	ctx.r4.s64 = 50;
	// mulli r10,r11,168
	ctx.r10.s64 = r11.s64 * 168;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r10,992
	r31.s64 = ctx.r10.s64 + 992;
	// stw r11,1664(r29)
	PPC_STORE_U32(r29.u32 + 1664, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r9,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r9.u32);
	// lbz r8,54(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// stb r8,1150(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1150, ctx.r8.u8);
	// ld r7,-8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + -8);
	// std r7,992(r10)
	PPC_STORE_U64(ctx.r10.u32 + 992, ctx.r7.u64);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r11,100
	ctx.r6.s64 = r11.s64 + 100;
	// stw r6,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r6.u32);
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255eee4
	if (cr6.eq) goto loc_8255EEE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255eee8
	if (!cr6.eq) goto loc_8255EEE8;
loc_8255EEE4:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8255EEE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x82548560
	sub_82548560(ctx, base);
loc_8255EEFC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// bne 0x8255ee70
	if (!cr0.eq) goto loc_8255EE70;
	// lwz r11,1664(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8255ef24
	if (!cr6.gt) goto loc_8255EF24;
	// addi r3,r29,1672
	ctx.r3.s64 = r29.s64 + 1672;
	// bl 0x8232fb50
	sub_8232FB50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_8255EF24:
	// lwz r11,1688(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1688);
	// li r30,1
	r30.s64 = 1;
	// stw r30,1664(r29)
	PPC_STORE_U32(r29.u32 + 1664, r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8255ef4c
	if (cr6.eq) goto loc_8255EF4C;
	// addi r4,r29,1672
	ctx.r4.s64 = r29.s64 + 1672;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232fd50
	sub_8232FD50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_8255EF4C:
	// li r11,-1
	r11.s64 = -1;
	// stb r30,158(r27)
	PPC_STORE_U8(r27.u32 + 158, r30.u8);
	// std r25,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r25.u64);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// addi r31,r27,108
	r31.s64 = r27.s64 + 108;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-10904(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10904);
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r9,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r9.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255ef98
	if (cr6.eq) goto loc_8255EF98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255ef9c
	if (!cr6.eq) goto loc_8255EF9C;
loc_8255EF98:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8255EF9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r5,r27,84
	ctx.r5.s64 = r27.s64 + 84;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x82548560
	sub_82548560(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255efc8
	if (cr6.eq) goto loc_8255EFC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255efcc
	if (!cr6.eq) goto loc_8255EFCC;
loc_8255EFC8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8255EFCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-23984
	ctx.r5.s64 = ctx.r10.s64 + -23984;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255f0dc
	if (cr6.eq) goto loc_8255F0DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13852
	ctx.r5.s64 = r11.s64 + 13852;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,14076
	ctx.r5.s64 = ctx.r10.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,21088
	ctx.r5.s64 = ctx.r9.s64 + 21088;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8255f0c8
	if (cr6.eq) goto loc_8255F0C8;
loc_8255F0AC:
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
	// bne cr6,0x8255f0ac
	if (!cr6.eq) goto loc_8255F0AC;
loc_8255F0C8:
	// stw r10,104(r27)
	PPC_STORE_U32(r27.u32 + 104, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_8255F0DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// stb r30,159(r27)
	PPC_STORE_U8(r27.u32 + 159, r30.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,1672
	ctx.r3.s64 = r29.s64 + 1672;
	// bl 0x8232fd50
	sub_8232FD50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8255F0F8"))) PPC_WEAK_FUNC(sub_8255F0F8);
PPC_FUNC_IMPL(__imp__sub_8255F0F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8255F0FC"))) PPC_WEAK_FUNC(sub_8255F0FC);
PPC_FUNC_IMPL(__imp__sub_8255F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F100"))) PPC_WEAK_FUNC(sub_8255F100);
PPC_FUNC_IMPL(__imp__sub_8255F100) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8255f178
	if (!cr6.eq) goto loc_8255F178;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255f160
	if (cr6.eq) goto loc_8255F160;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255f164
	if (!cr6.eq) goto loc_8255F164;
loc_8255F160:
	// li r11,0
	r11.s64 = 0;
loc_8255F164:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// bl 0x8241a6e0
	sub_8241A6E0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8255F178:
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

__attribute__((alias("__imp__sub_8255F18C"))) PPC_WEAK_FUNC(sub_8255F18C);
PPC_FUNC_IMPL(__imp__sub_8255F18C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F190"))) PPC_WEAK_FUNC(sub_8255F190);
PPC_FUNC_IMPL(__imp__sub_8255F190) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1848(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1848, ctx.r10.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255f1c0
	if (cr6.eq) goto loc_8255F1C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255f1c4
	if (!cr6.eq) goto loc_8255F1C4;
loc_8255F1C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F1C4:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825102f8
	sub_825102F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255F1D8"))) PPC_WEAK_FUNC(sub_8255F1D8);
PPC_FUNC_IMPL(__imp__sub_8255F1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F1DC"))) PPC_WEAK_FUNC(sub_8255F1DC);
PPC_FUNC_IMPL(__imp__sub_8255F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F1E0"))) PPC_WEAK_FUNC(sub_8255F1E0);
PPC_FUNC_IMPL(__imp__sub_8255F1E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,20024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20024);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8255f230
	if (cr6.eq) goto loc_8255F230;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255f234
	if (!cr6.eq) goto loc_8255F234;
loc_8255F230:
	// li r11,0
	r11.s64 = 0;
loc_8255F234:
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
	// beq cr6,0x8255f280
	if (cr6.eq) goto loc_8255F280;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255f280
	if (!cr6.eq) goto loc_8255F280;
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
loc_8255F280:
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

__attribute__((alias("__imp__sub_8255F294"))) PPC_WEAK_FUNC(sub_8255F294);
PPC_FUNC_IMPL(__imp__sub_8255F294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F298"))) PPC_WEAK_FUNC(sub_8255F298);
PPC_FUNC_IMPL(__imp__sub_8255F298) {
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
	// lwz r31,600(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8255f2f8
	if (cr6.eq) goto loc_8255F2F8;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8255F2C0:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x8255f2e8
	if (cr6.eq) goto loc_8255F2E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436370
	sub_82436370(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255f2c0
	if (!cr6.eq) goto loc_8255F2C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8255F2E8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r8.u8);
loc_8255F2F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255F2FC"))) PPC_WEAK_FUNC(sub_8255F2FC);
PPC_FUNC_IMPL(__imp__sub_8255F2FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255F300"))) PPC_WEAK_FUNC(sub_8255F300);
PPC_FUNC_IMPL(__imp__sub_8255F300) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r11,r3,564
	r11.s64 = ctx.r3.s64 + 564;
	// stb r30,1840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1840, r30.u8);
	// lwz r10,584(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, r30.u32);
	// blt cr6,0x8255f334
	if (cr6.lt) goto loc_8255F334;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8255F334:
	// li r29,1
	r29.s64 = 1;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// stw r30,552(r31)
	PPC_STORE_U32(r31.u32 + 552, r30.u32);
	// addi r3,r31,616
	ctx.r3.s64 = r31.s64 + 616;
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// stw r29,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r29.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r30.u32);
	// stb r30,1844(r31)
	PPC_STORE_U8(r31.u32 + 1844, r30.u8);
	// stb r30,1843(r31)
	PPC_STORE_U8(r31.u32 + 1843, r30.u8);
	// stb r30,1847(r31)
	PPC_STORE_U8(r31.u32 + 1847, r30.u8);
	// bl 0x82561f90
	sub_82561F90(ctx, base);
	// stw r30,652(r31)
	PPC_STORE_U32(r31.u32 + 652, r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(r31.u32 + 656, r30.u32);
	// addi r3,r31,1672
	ctx.r3.s64 = r31.s64 + 1672;
	// stw r30,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r30.u32);
	// addi r11,r31,648
	r11.s64 = r31.s64 + 648;
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
	// stb r30,1850(r31)
	PPC_STORE_U8(r31.u32 + 1850, r30.u8);
	// bl 0x8232fb50
	sub_8232FB50(ctx, base);
	// stb r30,1852(r31)
	PPC_STORE_U8(r31.u32 + 1852, r30.u8);
	// stb r29,1848(r31)
	PPC_STORE_U8(r31.u32 + 1848, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8255F38C"))) PPC_WEAK_FUNC(sub_8255F38C);
PPC_FUNC_IMPL(__imp__sub_8255F38C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255F390"))) PPC_WEAK_FUNC(sub_8255F390);
PPC_FUNC_IMPL(__imp__sub_8255F390) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8255f414
	if (cr6.eq) goto loc_8255F414;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8255f3d8
	if (cr6.eq) goto loc_8255F3D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8255f3d0
	if (!cr6.eq) goto loc_8255F3D0;
	// lbz r11,1843(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1843);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255f3d0
	if (!cr6.eq) goto loc_8255F3D0;
loc_8255F3C8:
	// li r11,2
	r11.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8255F3D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8255F3D8:
	// li r31,0
	r31.s64 = 0;
	// addi r11,r3,628
	r11.s64 = ctx.r3.s64 + 628;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// addi r11,r3,648
	r11.s64 = ctx.r3.s64 + 648;
	// lwz r11,632(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// stw r11,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, r11.u32);
	// lwz r10,636(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// stw r10,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r10.u32);
	// lwz r9,644(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// stw r9,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r9.u32);
	// lwz r8,640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// stw r8,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r8.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8255F414:
	// lbz r11,1843(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1843);
	// li r29,3
	r29.s64 = 3;
	// li r31,0
	r31.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r31,1850(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1850, r31.u8);
	// beq cr6,0x8255f3c8
	if (cr6.eq) goto loc_8255F3C8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r31.u8);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,22060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22060);
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82561ff8
	sub_82561FF8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255f474
	if (cr6.eq) goto loc_8255F474;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255f474
	if (cr6.eq) goto loc_8255F474;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8255F474:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x82568918
	sub_82568918(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255F484"))) PPC_WEAK_FUNC(sub_8255F484);
PPC_FUNC_IMPL(__imp__sub_8255F484) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255F488"))) PPC_WEAK_FUNC(sub_8255F488);
PPC_FUNC_IMPL(__imp__sub_8255F488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r9,1664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255f594
	if (cr6.eq) goto loc_8255F594;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r3,992
	ctx.r10.s64 = ctx.r3.s64 + 992;
loc_8255F4B0:
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8255f4dc
	if (cr6.eq) goto loc_8255F4DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255f4b0
	if (cr6.lt) goto loc_8255F4B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255F4DC:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r10,84
	ctx.r9.s64 = ctx.r10.s64 + 84;
	// addi r11,r8,4
	r11.s64 = ctx.r8.s64 + 4;
	// stw r7,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r7.u32);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lfs f11,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x8255f544
	if (!cr6.eq) goto loc_8255F544;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r3,1756
	ctx.r9.s64 = ctx.r3.s64 + 1756;
	// stw r7,1756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1756, ctx.r7.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,1760(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1760, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1764(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1764, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1768(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1768, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1772(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1772, temp.u32);
loc_8255F544:
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,22048(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22048);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r10,20992(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82549358
	sub_82549358(ctx, base);
loc_8255F594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255F5A0"))) PPC_WEAK_FUNC(sub_8255F5A0);
PPC_FUNC_IMPL(__imp__sub_8255F5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F5A4"))) PPC_WEAK_FUNC(sub_8255F5A4);
PPC_FUNC_IMPL(__imp__sub_8255F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F5A8"))) PPC_WEAK_FUNC(sub_8255F5A8);
PPC_FUNC_IMPL(__imp__sub_8255F5A8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r31,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r10,26524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26524);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x825620f8
	sub_825620F8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,592(r30)
	PPC_STORE_U32(r30.u32 + 592, r31.u32);
	// stw r9,612(r30)
	PPC_STORE_U32(r30.u32 + 612, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8255F608"))) PPC_WEAK_FUNC(sub_8255F608);
PPC_FUNC_IMPL(__imp__sub_8255F608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F60C"))) PPC_WEAK_FUNC(sub_8255F60C);
PPC_FUNC_IMPL(__imp__sub_8255F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F610"))) PPC_WEAK_FUNC(sub_8255F610);
PPC_FUNC_IMPL(__imp__sub_8255F610) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r10,22024(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22024);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82562170
	sub_82562170(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255F650"))) PPC_WEAK_FUNC(sub_8255F650);
PPC_FUNC_IMPL(__imp__sub_8255F650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F654"))) PPC_WEAK_FUNC(sub_8255F654);
PPC_FUNC_IMPL(__imp__sub_8255F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F658"))) PPC_WEAK_FUNC(sub_8255F658);
PPC_FUNC_IMPL(__imp__sub_8255F658) {
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
	// lwz r11,22020(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22020);
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x825621e8
	sub_825621E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255F690"))) PPC_WEAK_FUNC(sub_8255F690);
PPC_FUNC_IMPL(__imp__sub_8255F690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F694"))) PPC_WEAK_FUNC(sub_8255F694);
PPC_FUNC_IMPL(__imp__sub_8255F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F698"))) PPC_WEAK_FUNC(sub_8255F698);
PPC_FUNC_IMPL(__imp__sub_8255F698) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// lwz r9,236(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r23,56(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// beq cr6,0x8255f75c
	if (cr6.eq) goto loc_8255F75C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r24,0
	r24.s64 = 0;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// addi r22,r11,-23864
	r22.s64 = r11.s64 + -23864;
loc_8255F6E0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x825538a0
	sub_825538A0(ctx, base);
	// lwz r11,20992(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20992);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r27,22012(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 22012);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r28,20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255f740
	if (cr6.eq) goto loc_8255F740;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// stw r24,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r24.u32);
	// stw r24,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r24.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8255F740:
	// stb r29,27(r30)
	PPC_STORE_U8(r30.u32 + 27, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436370
	sub_82436370(ctx, base);
	// lwz r11,600(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 600);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8255f6e0
	if (!cr6.eq) goto loc_8255F6E0;
loc_8255F75C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8255F760"))) PPC_WEAK_FUNC(sub_8255F760);
PPC_FUNC_IMPL(__imp__sub_8255F760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8255F764"))) PPC_WEAK_FUNC(sub_8255F764);
PPC_FUNC_IMPL(__imp__sub_8255F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F768"))) PPC_WEAK_FUNC(sub_8255F768);
PPC_FUNC_IMPL(__imp__sub_8255F768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,22036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22036);
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82562260
	sub_82562260(ctx, base);
	// lwz r9,560(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// stw r31,556(r30)
	PPC_STORE_U32(r30.u32 + 556, r31.u32);
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bne cr6,0x8255f7c4
	if (!cr6.eq) goto loc_8255F7C4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,560(r30)
	PPC_STORE_U32(r30.u32 + 560, r11.u32);
loc_8255F7C4:
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

__attribute__((alias("__imp__sub_8255F7D8"))) PPC_WEAK_FUNC(sub_8255F7D8);
PPC_FUNC_IMPL(__imp__sub_8255F7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F7DC"))) PPC_WEAK_FUNC(sub_8255F7DC);
PPC_FUNC_IMPL(__imp__sub_8255F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F7E0"))) PPC_WEAK_FUNC(sub_8255F7E0);
PPC_FUNC_IMPL(__imp__sub_8255F7E0) {
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
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r10,20360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20360);
	// lwz r9,20992(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,108(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x825622e8
	sub_825622E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255F828"))) PPC_WEAK_FUNC(sub_8255F828);
PPC_FUNC_IMPL(__imp__sub_8255F828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F82C"))) PPC_WEAK_FUNC(sub_8255F82C);
PPC_FUNC_IMPL(__imp__sub_8255F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F830"))) PPC_WEAK_FUNC(sub_8255F830);
PPC_FUNC_IMPL(__imp__sub_8255F830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,1512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1512, ctx.r9.u32);
	// bgt cr6,0x8255fcec
	if (cr6.gt) goto loc_8255FCEC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255fb00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255FB00;
	// bdzf 4*cr6+eq,0x8255fcec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255FCEC;
	// bdzf 4*cr6+eq,0x8255f8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255F8E8;
	// bdzf 4*cr6+eq,0x8255f990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255F990;
	// bdzf 4*cr6+eq,0x8255fcec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255FCEC;
	// bdzf 4*cr6+eq,0x8255fa48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255FA48;
	// bne cr6,0x8255fac8
	if (!cr6.eq) goto loc_8255FAC8;
	// lbz r11,1848(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1848);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255f8d0
	if (cr6.eq) goto loc_8255F8D0;
	// lbz r11,1847(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1847);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fcec
	if (!cr6.eq) goto loc_8255FCEC;
	// stb r11,1844(r31)
	PPC_STORE_U8(r31.u32 + 1844, r11.u8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,-24116
	ctx.r4.s64 = ctx.r10.s64 + -24116;
	// addi r3,r9,-24148
	ctx.r3.s64 = ctx.r9.s64 + -24148;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// stw r8,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r8.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255F8D0:
	// li r11,5
	r11.s64 = 5;
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255F8E8:
	// lbz r11,1844(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1844);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255fcec
	if (cr6.eq) goto loc_8255FCEC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,22212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22212);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8255f924
	if (cr6.eq) goto loc_8255F924;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255f928
	if (!cr6.eq) goto loc_8255F928;
loc_8255F924:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8255F928:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255f974
	if (cr6.eq) goto loc_8255F974;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255f974
	if (!cr6.eq) goto loc_8255F974;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8255F974:
	// li r11,5
	r11.s64 = 5;
	// stb r28,1848(r31)
	PPC_STORE_U8(r31.u32 + 1848, r28.u8);
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255F990:
	// lbz r11,1850(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1850);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fae8
	if (!cr6.eq) goto loc_8255FAE8;
	// lbz r11,1845(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1845);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255fcec
	if (cr6.eq) goto loc_8255FCEC;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,672
	r30.s64 = r31.s64 + 672;
	// stb r28,1846(r31)
	PPC_STORE_U8(r31.u32 + 1846, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8255ee28
	sub_8255EE28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82561ab0
	sub_82561AB0(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8232ff50
	sub_8232FF50(ctx, base);
	// lwz r11,1664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, r11.u32);
	// beq cr6,0x8255fa0c
	if (cr6.eq) goto loc_8255FA0C;
	// addi r29,r1,840
	r29.s64 = ctx.r1.s64 + 840;
	// addi r30,r31,992
	r30.s64 = r31.s64 + 992;
loc_8255F9E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8232fd50
	sub_8232FD50(ctx, base);
	// lwz r11,1664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1664);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,168
	r30.s64 = r30.s64 + 168;
	// addi r29,r29,168
	r29.s64 = r29.s64 + 168;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8255f9e8
	if (cr6.lt) goto loc_8255F9E8;
loc_8255FA0C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82561f38
	sub_82561F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825626a0
	sub_825626A0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// stw r10,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r10.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255FA48:
	// lbz r11,1846(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1846);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255fcec
	if (cr6.eq) goto loc_8255FCEC;
	// lbz r11,1850(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1850);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fae8
	if (!cr6.eq) goto loc_8255FAE8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,22064(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22064);
	// lwz r10,20992(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82562078
	sub_82562078(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r7,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r7.u32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255faac
	if (cr6.eq) goto loc_8255FAAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255fab0
	if (!cr6.eq) goto loc_8255FAB0;
loc_8255FAAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FAB0:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568900
	sub_82568900(ctx, base);
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255FAC8:
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8255fcec
	if (!cr6.eq) goto loc_8255FCEC;
	// lbz r11,549(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 549);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255fcec
	if (cr6.eq) goto loc_8255FCEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255f698
	sub_8255F698(ctx, base);
loc_8255FAE8:
	// li r11,2
	r11.s64 = 2;
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x828e945c
	return;
loc_8255FB00:
	// lis r26,-31970
	r26.s64 = -2095185920;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255fb20
	if (cr6.eq) goto loc_8255FB20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255fb24
	if (!cr6.eq) goto loc_8255FB24;
loc_8255FB20:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8255FB24:
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 640);
	// bl 0x8256a1b0
	sub_8256A1B0(ctx, base);
	// lbz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8255fb4c
	if (!cr6.eq) goto loc_8255FB4C;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255fb68
	if (cr6.eq) goto loc_8255FB68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
loc_8255FB4C:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255fb68
	if (cr6.eq) goto loc_8255FB68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255fb6c
	if (!cr6.eq) goto loc_8255FB6C;
loc_8255FB68:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8255FB6C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r10,14000
	ctx.r5.s64 = ctx.r10.s64 + 14000;
	// addi r4,r9,-23800
	ctx.r4.s64 = ctx.r9.s64 + -23800;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822bdb20
	sub_822BDB20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255fbd4
	if (cr6.eq) goto loc_8255FBD4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fbd4
	if (!cr6.eq) goto loc_8255FBD4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8255FBD4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// li r27,2
	r27.s64 = 2;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// lwz r11,20024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20024);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x8255fc08
	if (cr6.eq) goto loc_8255FC08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255fc0c
	if (!cr6.eq) goto loc_8255FC0C;
loc_8255FC08:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8255FC0C:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255fc58
	if (cr6.eq) goto loc_8255FC58;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fc58
	if (!cr6.eq) goto loc_8255FC58;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8255FC58:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r30,19956(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 19956);
	// lbz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 152);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255fca4
	if (!cr6.eq) goto loc_8255FCA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c8b98
	sub_825C8B98(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x825c8640
	sub_825C8640(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,18424
	ctx.r4.s64 = ctx.r10.s64 + 18424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c86b8
	sub_825C86B8(ctx, base);
loc_8255FCA4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lbz r5,1852(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 1852);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-24116
	ctx.r4.s64 = r11.s64 + -24116;
	// addi r3,r10,-23820
	ctx.r3.s64 = ctx.r10.s64 + -23820;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// stw r28,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r28.u32);
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// addi r11,r31,628
	r11.s64 = r31.s64 + 628;
	// stw r9,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r9.u32);
	// addi r11,r31,648
	r11.s64 = r31.s64 + 648;
	// lwz r8,636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// stw r8,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r8.u32);
	// lwz r7,644(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// stw r7,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r7.u32);
	// lwz r6,640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// stw r6,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r6.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
loc_8255FCEC:
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
}

__attribute__((alias("__imp__sub_8255FCF8"))) PPC_WEAK_FUNC(sub_8255FCF8);
PPC_FUNC_IMPL(__imp__sub_8255FCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8255FCFC"))) PPC_WEAK_FUNC(sub_8255FCFC);
PPC_FUNC_IMPL(__imp__sub_8255FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FD00"))) PPC_WEAK_FUNC(sub_8255FD00);
PPC_FUNC_IMPL(__imp__sub_8255FD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8255fd40
	if (cr6.eq) goto loc_8255FD40;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f1,-24184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8255f768
	sub_8255F768(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,560(r31)
	PPC_STORE_U32(r31.u32 + 560, ctx.r8.u32);
loc_8255FD40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255FD50"))) PPC_WEAK_FUNC(sub_8255FD50);
PPC_FUNC_IMPL(__imp__sub_8255FD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255FD54"))) PPC_WEAK_FUNC(sub_8255FD54);
PPC_FUNC_IMPL(__imp__sub_8255FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FD58"))) PPC_WEAK_FUNC(sub_8255FD58);
PPC_FUNC_IMPL(__imp__sub_8255FD58) {
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
	// lwz r31,600(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8255fdc4
	if (cr6.eq) goto loc_8255FDC4;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8255FD84:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x8255fdac
	if (cr6.eq) goto loc_8255FDAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436370
	sub_82436370(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255fd84
	if (!cr6.eq) goto loc_8255FD84;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255FDAC:
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r10,25(r11)
	PPC_STORE_U8(r11.u32 + 25, ctx.r10.u8);
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// stb r9,26(r11)
	PPC_STORE_U8(r11.u32 + 26, ctx.r9.u8);
	// bl 0x8255f698
	sub_8255F698(ctx, base);
loc_8255FDC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255FDC8"))) PPC_WEAK_FUNC(sub_8255FDC8);
PPC_FUNC_IMPL(__imp__sub_8255FDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255FDCC"))) PPC_WEAK_FUNC(sub_8255FDCC);
PPC_FUNC_IMPL(__imp__sub_8255FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FDD0"))) PPC_WEAK_FUNC(sub_8255FDD0);
PPC_FUNC_IMPL(__imp__sub_8255FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8255fe3c
	if (!cr6.eq) goto loc_8255FE3C;
	// lwz r11,620(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8255fe7c
	if (!cr6.gt) goto loc_8255FE7C;
	// lwz r10,616(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// addi r3,r3,616
	ctx.r3.s64 = ctx.r3.s64 + 616;
	// addi r11,r31,648
	r11.s64 = r31.s64 + 648;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r8.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r6.u32);
	// bl 0x82562580
	sub_82562580(ctx, base);
	// b 0x8255fe7c
	goto loc_8255FE7C;
loc_8255FE3C:
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fe58
	if (!cr6.eq) goto loc_8255FE58;
	// lwz r11,664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8255fe5c
	if (cr6.eq) goto loc_8255FE5C;
loc_8255FE58:
	// li r11,0
	r11.s64 = 0;
loc_8255FE5C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255fe7c
	if (!cr6.eq) goto loc_8255FE7C;
	// lwz r11,664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// addi r4,r31,648
	ctx.r4.s64 = r31.s64 + 648;
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FE7C:
	// lwz r11,560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8255feac
	if (cr6.eq) goto loc_8255FEAC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-24184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8255f768
	sub_8255F768(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,560(r31)
	PPC_STORE_U32(r31.u32 + 560, ctx.r8.u32);
loc_8255FEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255FEBC"))) PPC_WEAK_FUNC(sub_8255FEBC);
PPC_FUNC_IMPL(__imp__sub_8255FEBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255FEC0"))) PPC_WEAK_FUNC(sub_8255FEC0);
PPC_FUNC_IMPL(__imp__sub_8255FEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stb r10,1840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1840, ctx.r10.u8);
loc_8255FECC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255fecc
	if (!cr6.eq) goto loc_8255FECC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r3,564
	ctx.r3.s64 = ctx.r3.s64 + 564;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x822f09e0
	sub_822F09E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255FEF0"))) PPC_WEAK_FUNC(sub_8255FEF0);
PPC_FUNC_IMPL(__imp__sub_8255FEF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255ff24
	if (cr6.eq) goto loc_8255FF24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255ff28
	if (!cr6.eq) goto loc_8255FF28;
loc_8255FF24:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8255FF28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-23764
	ctx.r5.s64 = ctx.r9.s64 + -23764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r31.u8);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r31.u8);
	// stb r31,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r31.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82560058
	if (!cr6.eq) goto loc_82560058;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r26,r30,596
	r26.s64 = r30.s64 + 596;
	// addi r29,r11,-23780
	r29.s64 = r11.s64 + -23780;
	// addi r28,r10,-23788
	r28.s64 = ctx.r10.s64 + -23788;
loc_8255FF9C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82560024
	if (cr6.eq) goto loc_82560024;
loc_82560008:
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
	// bne cr6,0x82560008
	if (!cr6.eq) goto loc_82560008;
loc_82560024:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x82562700
	sub_82562700(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255ff9c
	if (cr6.eq) goto loc_8255FF9C;
loc_82560058:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8256006C"))) PPC_WEAK_FUNC(sub_8256006C);
PPC_FUNC_IMPL(__imp__sub_8256006C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82560070"))) PPC_WEAK_FUNC(sub_82560070);
PPC_FUNC_IMPL(__imp__sub_82560070) {
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
	// lwz r11,652(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825600f0
	if (!cr6.eq) goto loc_825600F0;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, r11.u32);
loc_825600A0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_825600A4:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82560148
	if (!cr6.eq) goto loc_82560148;
	// lwz r30,616(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 616);
	// addi r31,r29,616
	r31.s64 = r29.s64 + 616;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825625f0
	sub_825625F0(ctx, base);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r11,620(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 620);
	// ori r9,r10,52427
	ctx.r9.u64 = ctx.r10.u64 | 52427;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82560120
	if (!cr6.lt) goto loc_82560120;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825600F0:
	// lwz r8,616(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 616);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x825600a4
	if (cr6.eq) goto loc_825600A4;
loc_82560100:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// beq cr6,0x825600a0
	if (cr6.eq) goto loc_825600A0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,616(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 616);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82560100
	if (!cr6.eq) goto loc_82560100;
	// b 0x825600a4
	goto loc_825600A4;
loc_82560120:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x82560148
	if (!cr6.eq) goto loc_82560148;
	// li r11,1
	r11.s64 = 1;
	// stb r11,1850(r29)
	PPC_STORE_U8(r29.u32 + 1850, r11.u8);
loc_82560148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256014C"))) PPC_WEAK_FUNC(sub_8256014C);
PPC_FUNC_IMPL(__imp__sub_8256014C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82560150"))) PPC_WEAK_FUNC(sub_82560150);
PPC_FUNC_IMPL(__imp__sub_82560150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825601a4
	if (!cr6.gt) goto loc_825601A4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x825601a4
	if (cr6.gt) goto loc_825601A4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// addi r9,r10,-24152
	ctx.r9.s64 = ctx.r10.s64 + -24152;
	// addi r11,r11,-3184
	r11.s64 = r11.s64 + -3184;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82560070
	sub_82560070(ctx, base);
loc_825601A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825601B0"))) PPC_WEAK_FUNC(sub_825601B0);
PPC_FUNC_IMPL(__imp__sub_825601B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825601B4"))) PPC_WEAK_FUNC(sub_825601B4);
PPC_FUNC_IMPL(__imp__sub_825601B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825601B8"))) PPC_WEAK_FUNC(sub_825601B8);
PPC_FUNC_IMPL(__imp__sub_825601B8) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r4,1852(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1852, ctx.r4.u8);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r9,r10,-24152
	ctx.r9.s64 = ctx.r10.s64 + -24152;
	// addi r11,r11,-2000
	r11.s64 = r11.s64 + -2000;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82560070
	sub_82560070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82560208"))) PPC_WEAK_FUNC(sub_82560208);
PPC_FUNC_IMPL(__imp__sub_82560208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256020C"))) PPC_WEAK_FUNC(sub_8256020C);
PPC_FUNC_IMPL(__imp__sub_8256020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560210"))) PPC_WEAK_FUNC(sub_82560210);
PPC_FUNC_IMPL(__imp__sub_82560210) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,1845(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1845, r29.u8);
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r3,r3,672
	ctx.r3.s64 = ctx.r3.s64 + 672;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,301(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 301);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825602e8
	if (cr6.eq) goto loc_825602E8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,1848(r31)
	PPC_STORE_U8(r31.u32 + 1848, r29.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825602e8
	if (!cr6.eq) goto loc_825602E8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-23736
	ctx.r5.s64 = r11.s64 + -23736;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825602bc
	if (!cr6.gt) goto loc_825602BC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x825602bc
	if (cr6.gt) goto loc_825602BC;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825602a0
	if (cr6.eq) goto loc_825602A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825602a4
	if (!cr6.eq) goto loc_825602A4;
loc_825602A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825602A4:
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 640);
	// bl 0x8256a1b8
	sub_8256A1B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825602BC:
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825602e8
	if (!cr6.gt) goto loc_825602E8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bgt cr6,0x825602e8
	if (cr6.gt) goto loc_825602E8;
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x825602e8
	if (cr6.eq) goto loc_825602E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825601b8
	sub_825601B8(ctx, base);
loc_825602E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825602EC"))) PPC_WEAK_FUNC(sub_825602EC);
PPC_FUNC_IMPL(__imp__sub_825602EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825602F0"))) PPC_WEAK_FUNC(sub_825602F0);
PPC_FUNC_IMPL(__imp__sub_825602F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r10,616(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82560324
	if (cr6.eq) goto loc_82560324;
loc_8256030C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x82560358
	if (cr6.eq) goto loc_82560358;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256030c
	if (!cr6.eq) goto loc_8256030C;
loc_82560324:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// addi r9,r10,-24152
	ctx.r9.s64 = ctx.r10.s64 + -24152;
	// addi r11,r11,-3840
	r11.s64 = r11.s64 + -3840;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82560070
	sub_82560070(ctx, base);
loc_82560358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82560364"))) PPC_WEAK_FUNC(sub_82560364);
PPC_FUNC_IMPL(__imp__sub_82560364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560368"))) PPC_WEAK_FUNC(sub_82560368);
PPC_FUNC_IMPL(__imp__sub_82560368) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,1840(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1840);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// beq cr6,0x82560430
	if (cr6.eq) goto loc_82560430;
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r3,564
	ctx.r4.s64 = ctx.r3.s64 + 564;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,22564
	ctx.r4.s64 = ctx.r9.s64 + 22564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825603D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825603d4
	if (!cr6.eq) goto loc_825603D4;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82560410
	if (!cr6.lt) goto loc_82560410;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82560410:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82560430
	if (cr6.lt) goto loc_82560430;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82560430:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82560448"))) PPC_WEAK_FUNC(sub_82560448);
PPC_FUNC_IMPL(__imp__sub_82560448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256044C"))) PPC_WEAK_FUNC(sub_8256044C);
PPC_FUNC_IMPL(__imp__sub_8256044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560450"))) PPC_WEAK_FUNC(sub_82560450);
PPC_FUNC_IMPL(__imp__sub_82560450) {
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
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825604b4
	if (cr6.eq) goto loc_825604B4;
	// ble cr6,0x825604f0
	if (!cr6.gt) goto loc_825604F0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bgt cr6,0x825604f0
	if (cr6.gt) goto loc_825604F0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-23708
	ctx.r5.s64 = r11.s64 + -23708;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825602f0
	sub_825602F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825604B4:
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x825604f0
	if (!cr6.eq) goto loc_825604F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,628
	r11.s64 = r31.s64 + 628;
	// stw r10,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r10.u32);
	// addi r11,r31,648
	r11.s64 = r31.s64 + 648;
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// stw r9,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r9.u32);
	// lwz r8,636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// stw r8,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r8.u32);
	// lwz r7,644(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// stw r7,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r7.u32);
	// lwz r6,640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// stw r6,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r6.u32);
loc_825604F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82560500"))) PPC_WEAK_FUNC(sub_82560500);
PPC_FUNC_IMPL(__imp__sub_82560500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560504"))) PPC_WEAK_FUNC(sub_82560504);
PPC_FUNC_IMPL(__imp__sub_82560504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560508"))) PPC_WEAK_FUNC(sub_82560508);
PPC_FUNC_IMPL(__imp__sub_82560508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1853(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1853, ctx.r10.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgtlr cr6
	if (cr6.gt) return;
}

__attribute__((alias("__imp__sub_82560524"))) PPC_WEAK_FUNC(sub_82560524);
PPC_FUNC_IMPL(__imp__sub_82560524) {
	PPC_FUNC_PROLOGUE();
	// b 0x82560150
	sub_82560150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560528"))) PPC_WEAK_FUNC(sub_82560528);
PPC_FUNC_IMPL(__imp__sub_82560528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256052C"))) PPC_WEAK_FUNC(sub_8256052C);
PPC_FUNC_IMPL(__imp__sub_8256052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560530"))) PPC_WEAK_FUNC(sub_82560530);
PPC_FUNC_IMPL(__imp__sub_82560530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r30,0
	r30.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r15,r3,8
	r15.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r24,r31,36
	r24.s64 = r31.s64 + 36;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r23,r31,92
	r23.s64 = r31.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r21,r31,120
	r21.s64 = r31.s64 + 120;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r20,r31,148
	r20.s64 = r31.s64 + 148;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r19,r31,176
	r19.s64 = r31.s64 + 176;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r18,r31,204
	r18.s64 = r31.s64 + 204;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r17,r31,232
	r17.s64 = r31.s64 + 232;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r16,r31,260
	r16.s64 = r31.s64 + 260;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,316
	ctx.r3.s64 = r31.s64 + 316;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,428
	ctx.r3.s64 = r31.s64 + 428;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r27,r31,484
	r27.s64 = r31.s64 + 484;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,512
	r26.s64 = r31.s64 + 512;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r25,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r25.u32);
	// addi r3,r31,596
	ctx.r3.s64 = r31.s64 + 596;
	// stb r30,548(r31)
	PPC_STORE_U8(r31.u32 + 548, r30.u8);
	// addi r11,r31,540
	r11.s64 = r31.s64 + 540;
	// stb r30,549(r31)
	PPC_STORE_U8(r31.u32 + 549, r30.u8);
	// addi r11,r31,564
	r11.s64 = r31.s64 + 564;
	// stw r30,552(r31)
	PPC_STORE_U32(r31.u32 + 552, r30.u32);
	// stw r25,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r25.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r30.u32);
	// stw r10,584(r31)
	PPC_STORE_U32(r31.u32 + 584, ctx.r10.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(r31.u32 + 580, r30.u32);
	// stb r30,564(r31)
	PPC_STORE_U8(r31.u32 + 564, r30.u8);
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// bl 0x82561cc0
	sub_82561CC0(ctx, base);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// addi r3,r31,616
	ctx.r3.s64 = r31.s64 + 616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82561c38
	sub_82561C38(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,632(r31)
	PPC_STORE_U32(r31.u32 + 632, r30.u32);
	// addi r22,r31,648
	r22.s64 = r31.s64 + 648;
	// addi r11,r11,-24152
	r11.s64 = r11.s64 + -24152;
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
	// addi r3,r31,672
	ctx.r3.s64 = r31.s64 + 672;
	// stw r30,636(r31)
	PPC_STORE_U32(r31.u32 + 636, r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(r31.u32 + 640, r30.u32);
	// stw r11,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r11.u32);
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// stw r9,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r9.u32);
	// lwz r8,636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// stw r8,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r8.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r30.u32);
	// lwz r7,644(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// stw r7,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r7.u32);
	// lwz r6,640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// stw r6,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r6.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r11,r31,628
	r11.s64 = r31.s64 + 628;
	// addi r11,r22,12
	r11.s64 = r22.s64 + 12;
	// bl 0x82561dd0
	sub_82561DD0(ctx, base);
	// addi r28,r31,992
	r28.s64 = r31.s64 + 992;
	// li r29,3
	r29.s64 = 3;
loc_825606D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8232fe78
	sub_8232FE78(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,168
	r28.s64 = r28.s64 + 168;
	// bge 0x825606d8
	if (!cr0.lt) goto loc_825606D8;
	// stw r30,1664(r31)
	PPC_STORE_U32(r31.u32 + 1664, r30.u32);
	// addi r3,r31,1672
	ctx.r3.s64 = r31.s64 + 1672;
	// bl 0x8232fe78
	sub_8232FE78(ctx, base);
	// stb r30,1840(r31)
	PPC_STORE_U8(r31.u32 + 1840, r30.u8);
	// stb r30,1841(r31)
	PPC_STORE_U8(r31.u32 + 1841, r30.u8);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// stb r25,1848(r31)
	PPC_STORE_U8(r31.u32 + 1848, r25.u8);
	// stb r25,1849(r31)
	PPC_STORE_U8(r31.u32 + 1849, r25.u8);
	// stb r30,1850(r31)
	PPC_STORE_U8(r31.u32 + 1850, r30.u8);
	// stb r30,1851(r31)
	PPC_STORE_U8(r31.u32 + 1851, r30.u8);
	// stb r30,1852(r31)
	PPC_STORE_U8(r31.u32 + 1852, r30.u8);
	// stb r30,1843(r31)
	PPC_STORE_U8(r31.u32 + 1843, r30.u8);
	// stb r30,1844(r31)
	PPC_STORE_U8(r31.u32 + 1844, r30.u8);
	// stb r30,1845(r31)
	PPC_STORE_U8(r31.u32 + 1845, r30.u8);
	// stb r30,1846(r31)
	PPC_STORE_U8(r31.u32 + 1846, r30.u8);
	// stb r30,1847(r31)
	PPC_STORE_U8(r31.u32 + 1847, r30.u8);
	// stb r30,1853(r31)
	PPC_STORE_U8(r31.u32 + 1853, r30.u8);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256074c
	if (cr6.eq) goto loc_8256074C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560750
	if (!cr6.eq) goto loc_82560750;
loc_8256074C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560750:
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// stw r11,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r11.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82560774
	if (cr6.eq) goto loc_82560774;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560778
	if (!cr6.eq) goto loc_82560778;
loc_82560774:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560778:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825654c8
	sub_825654C8(ctx, base);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255fef0
	sub_8255FEF0(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r25,r11,1288
	r25.s64 = r11.s64 + 1288;
	// beq cr6,0x825607b8
	if (cr6.eq) goto loc_825607B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825607bc
	if (!cr6.eq) goto loc_825607BC;
loc_825607B8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825607BC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r14,12(r10)
	r14.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,-10860
	ctx.r3.s64 = ctx.r10.s64 + -10860;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,-22320(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22320);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-4864
	r27.s64 = r11.s64 + -4864;
	// beq cr6,0x82560830
	if (cr6.eq) goto loc_82560830;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560834
	if (!cr6.eq) goto loc_82560834;
loc_82560830:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560834:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r25,12(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-10812
	ctx.r3.s64 = ctx.r10.s64 + -10812;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,-22324(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22324);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,528
	r27.s64 = r11.s64 + 528;
	// beq cr6,0x825608a0
	if (cr6.eq) goto loc_825608A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825608a4
	if (!cr6.eq) goto loc_825608A4;
loc_825608A0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825608A4:
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20400(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20400);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5896
	r27.s64 = r11.s64 + -5896;
	// beq cr6,0x82560910
	if (cr6.eq) goto loc_82560910;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560914
	if (!cr6.eq) goto loc_82560914;
loc_82560910:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560914:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-27332
	ctx.r3.s64 = ctx.r10.s64 + -27332;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,22056(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22056);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5824
	r27.s64 = r11.s64 + -5824;
	// beq cr6,0x82560980
	if (cr6.eq) goto loc_82560980;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560984
	if (!cr6.eq) goto loc_82560984;
loc_82560980:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560984:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,26736
	ctx.r3.s64 = ctx.r10.s64 + 26736;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,26528(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26528);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5792
	r27.s64 = r11.s64 + -5792;
	// beq cr6,0x825609f0
	if (cr6.eq) goto loc_825609F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825609f4
	if (!cr6.eq) goto loc_825609F4;
loc_825609F0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825609F4:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-26940
	ctx.r3.s64 = ctx.r10.s64 + -26940;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,22028(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22028);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-3432
	r27.s64 = r11.s64 + -3432;
	// beq cr6,0x82560a60
	if (cr6.eq) goto loc_82560A60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560a64
	if (!cr6.eq) goto loc_82560A64;
loc_82560A60:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560A64:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-26792
	ctx.r3.s64 = ctx.r10.s64 + -26792;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,22016(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22016);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-680
	r27.s64 = r11.s64 + -680;
	// beq cr6,0x82560ad0
	if (cr6.eq) goto loc_82560AD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560ad4
	if (!cr6.eq) goto loc_82560AD4;
loc_82560AD0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560AD4:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-26688
	ctx.r3.s64 = ctx.r10.s64 + -26688;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,22008(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22008);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-4792
	r27.s64 = r11.s64 + -4792;
	// beq cr6,0x82560b40
	if (cr6.eq) goto loc_82560B40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560b44
	if (!cr6.eq) goto loc_82560B44;
loc_82560B40:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560B44:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,13116
	ctx.r3.s64 = ctx.r10.s64 + 13116;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20356(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20356);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5384
	r27.s64 = r11.s64 + -5384;
	// beq cr6,0x82560bb0
	if (cr6.eq) goto loc_82560BB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560bb4
	if (!cr6.eq) goto loc_82560BB4;
loc_82560BB0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560BB4:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,28680
	ctx.r3.s64 = ctx.r10.s64 + 28680;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,26816(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26816);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5920
	r27.s64 = r11.s64 + -5920;
	// beq cr6,0x82560c20
	if (cr6.eq) goto loc_82560C20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560c24
	if (!cr6.eq) goto loc_82560C24;
loc_82560C20:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560C24:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-26848
	ctx.r3.s64 = ctx.r10.s64 + -26848;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23864(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23864);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5152
	r27.s64 = r11.s64 + -5152;
	// beq cr6,0x82560c90
	if (cr6.eq) goto loc_82560C90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560c94
	if (!cr6.eq) goto loc_82560C94;
loc_82560C90:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560C94:
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23868(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23868);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5136
	r27.s64 = r11.s64 + -5136;
	// beq cr6,0x82560d00
	if (cr6.eq) goto loc_82560D00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560d04
	if (!cr6.eq) goto loc_82560D04;
loc_82560D00:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560D04:
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23872(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23872);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r31,344
	ctx.r4.s64 = r31.s64 + 344;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,1104
	r27.s64 = r11.s64 + 1104;
	// beq cr6,0x82560d70
	if (cr6.eq) goto loc_82560D70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560d74
	if (!cr6.eq) goto loc_82560D74;
loc_82560D70:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560D74:
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,10500
	ctx.r3.s64 = ctx.r10.s64 + 10500;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-29420(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29420);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r31,372
	ctx.r4.s64 = r31.s64 + 372;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-5120
	r27.s64 = r11.s64 + -5120;
	// beq cr6,0x82560de0
	if (cr6.eq) goto loc_82560DE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560de4
	if (!cr6.eq) goto loc_82560DE4;
loc_82560DE0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560DE4:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-26996
	ctx.r3.s64 = ctx.r10.s64 + -26996;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,22032(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22032);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r31,400
	ctx.r4.s64 = r31.s64 + 400;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-2936
	r27.s64 = r11.s64 + -2936;
	// beq cr6,0x82560e50
	if (cr6.eq) goto loc_82560E50;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560e54
	if (!cr6.eq) goto loc_82560E54;
loc_82560E50:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82560E54:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-27224
	ctx.r3.s64 = ctx.r10.s64 + -27224;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,22048(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22048);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r31,428
	ctx.r4.s64 = r31.s64 + 428;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r28,r31,992
	r28.s64 = r31.s64 + 992;
	// stw r11,976(r31)
	PPC_STORE_U32(r31.u32 + 976, r11.u32);
	// addi r10,r31,976
	ctx.r10.s64 = r31.s64 + 976;
	// stw r11,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r11.u32);
	// li r29,4
	r29.s64 = 4;
	// stw r11,984(r31)
	PPC_STORE_U32(r31.u32 + 984, r11.u32);
	// stw r11,988(r31)
	PPC_STORE_U32(r31.u32 + 988, r11.u32);
loc_82560EBC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8232fb50
	sub_8232FB50(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,168
	r28.s64 = r28.s64 + 168;
	// bne 0x82560ebc
	if (!cr0.eq) goto loc_82560EBC;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r11,r31,564
	r11.s64 = r31.s64 + 564;
	// stb r30,1840(r31)
	PPC_STORE_U8(r31.u32 + 1840, r30.u8);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,580(r31)
	PPC_STORE_U32(r31.u32 + 580, r30.u32);
	// blt cr6,0x82560ef0
	if (cr6.lt) goto loc_82560EF0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82560EF0:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// li r26,1
	r26.s64 = 1;
	// stw r30,552(r31)
	PPC_STORE_U32(r31.u32 + 552, r30.u32);
	// addi r28,r31,616
	r28.s64 = r31.s64 + 616;
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r30.u32);
	// stb r30,1844(r31)
	PPC_STORE_U8(r31.u32 + 1844, r30.u8);
	// stb r30,1843(r31)
	PPC_STORE_U8(r31.u32 + 1843, r30.u8);
	// stb r30,1847(r31)
	PPC_STORE_U8(r31.u32 + 1847, r30.u8);
	// stw r26,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r26.u32);
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r30,620(r31)
	PPC_STORE_U32(r31.u32 + 620, r30.u32);
	// beq cr6,0x82560f5c
	if (cr6.eq) goto loc_82560F5C;
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82560F40:
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82560f40
	if (!cr6.eq) goto loc_82560F40;
loc_82560F5C:
	// stw r30,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r30.u32);
	// addi r3,r31,1672
	ctx.r3.s64 = r31.s64 + 1672;
	// stw r30,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r30.u32);
	// stw r30,16(r22)
	PPC_STORE_U32(r22.u32 + 16, r30.u32);
	// stw r30,12(r22)
	PPC_STORE_U32(r22.u32 + 12, r30.u32);
	// stb r30,1850(r31)
	PPC_STORE_U8(r31.u32 + 1850, r30.u8);
	// bl 0x8232fb50
	sub_8232FB50(ctx, base);
	// stb r30,1852(r31)
	PPC_STORE_U8(r31.u32 + 1852, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,1848(r31)
	PPC_STORE_U8(r31.u32 + 1848, r26.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82560F88"))) PPC_WEAK_FUNC(sub_82560F88);
PPC_FUNC_IMPL(__imp__sub_82560F88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82560F8C"))) PPC_WEAK_FUNC(sub_82560F8C);
PPC_FUNC_IMPL(__imp__sub_82560F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560F90"))) PPC_WEAK_FUNC(sub_82560F90);
PPC_FUNC_IMPL(__imp__sub_82560F90) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82560fc0
	if (cr6.eq) goto loc_82560FC0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560fc4
	if (!cr6.eq) goto loc_82560FC4;
loc_82560FC0:
	// li r11,0
	r11.s64 = 0;
loc_82560FC4:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22320);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r27,484
	ctx.r4.s64 = r27.s64 + 484;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82561018
	if (!cr6.eq) goto loc_82561018;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82561018
	if (!cr6.eq) goto loc_82561018;
	// lwz r11,-22320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22320);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82561018:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561034
	if (cr6.eq) goto loc_82561034;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561038
	if (!cr6.eq) goto loc_82561038;
loc_82561034:
	// li r11,0
	r11.s64 = 0;
loc_82561038:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22324(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22324);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r27,512
	ctx.r4.s64 = r27.s64 + 512;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256108c
	if (!cr6.eq) goto loc_8256108C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256108c
	if (!cr6.eq) goto loc_8256108C;
	// lwz r11,-22324(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22324);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256108C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825610a8
	if (cr6.eq) goto loc_825610A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825610ac
	if (!cr6.eq) goto loc_825610AC;
loc_825610A8:
	// li r11,0
	r11.s64 = 0;
loc_825610AC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20400(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20400);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r14,r27,36
	r14.s64 = r27.s64 + 36;
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
	// bne cr6,0x82561104
	if (!cr6.eq) goto loc_82561104;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82561104
	if (!cr6.eq) goto loc_82561104;
	// lwz r11,20400(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20400);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82561104:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561120
	if (cr6.eq) goto loc_82561120;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561124
	if (!cr6.eq) goto loc_82561124;
loc_82561120:
	// li r11,0
	r11.s64 = 0;
loc_82561124:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22056);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r15,r27,92
	r15.s64 = r27.s64 + 92;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256117c
	if (!cr6.eq) goto loc_8256117C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256117c
	if (!cr6.eq) goto loc_8256117C;
	// lwz r11,22056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22056);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256117C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561198
	if (cr6.eq) goto loc_82561198;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256119c
	if (!cr6.eq) goto loc_8256119C;
loc_82561198:
	// li r11,0
	r11.s64 = 0;
loc_8256119C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,26528(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26528);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r16,r27,120
	r16.s64 = r27.s64 + 120;
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
	// bne cr6,0x825611f4
	if (!cr6.eq) goto loc_825611F4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825611f4
	if (!cr6.eq) goto loc_825611F4;
	// lwz r11,26528(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26528);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825611F4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561210
	if (cr6.eq) goto loc_82561210;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561214
	if (!cr6.eq) goto loc_82561214;
loc_82561210:
	// li r11,0
	r11.s64 = 0;
loc_82561214:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r17,r27,148
	r17.s64 = r27.s64 + 148;
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
	// bne cr6,0x8256126c
	if (!cr6.eq) goto loc_8256126C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256126c
	if (!cr6.eq) goto loc_8256126C;
	// lwz r11,22028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22028);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256126C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561288
	if (cr6.eq) goto loc_82561288;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256128c
	if (!cr6.eq) goto loc_8256128C;
loc_82561288:
	// li r11,0
	r11.s64 = 0;
loc_8256128C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r18,r27,176
	r18.s64 = r27.s64 + 176;
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
	// bne cr6,0x825612e4
	if (!cr6.eq) goto loc_825612E4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825612e4
	if (!cr6.eq) goto loc_825612E4;
	// lwz r11,22016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22016);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825612E4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561300
	if (cr6.eq) goto loc_82561300;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561304
	if (!cr6.eq) goto loc_82561304;
loc_82561300:
	// li r11,0
	r11.s64 = 0;
loc_82561304:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22008(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22008);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r19,r27,204
	r19.s64 = r27.s64 + 204;
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
	// bne cr6,0x8256135c
	if (!cr6.eq) goto loc_8256135C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256135c
	if (!cr6.eq) goto loc_8256135C;
	// lwz r11,22008(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22008);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256135C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561378
	if (cr6.eq) goto loc_82561378;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256137c
	if (!cr6.eq) goto loc_8256137C;
loc_82561378:
	// li r11,0
	r11.s64 = 0;
loc_8256137C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20356(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20356);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r20,r27,232
	r20.s64 = r27.s64 + 232;
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
	// bne cr6,0x825613d4
	if (!cr6.eq) goto loc_825613D4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825613d4
	if (!cr6.eq) goto loc_825613D4;
	// lwz r11,20356(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20356);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825613D4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825613f0
	if (cr6.eq) goto loc_825613F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825613f4
	if (!cr6.eq) goto loc_825613F4;
loc_825613F0:
	// li r11,0
	r11.s64 = 0;
loc_825613F4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,26816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26816);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r21,r27,260
	r21.s64 = r27.s64 + 260;
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
	// bne cr6,0x8256144c
	if (!cr6.eq) goto loc_8256144C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256144c
	if (!cr6.eq) goto loc_8256144C;
	// lwz r11,26816(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26816);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256144C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561468
	if (cr6.eq) goto loc_82561468;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256146c
	if (!cr6.eq) goto loc_8256146C;
loc_82561468:
	// li r11,0
	r11.s64 = 0;
loc_8256146C:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-23864(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r22,r27,8
	r22.s64 = r27.s64 + 8;
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
	// bne cr6,0x825614c4
	if (!cr6.eq) goto loc_825614C4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825614c4
	if (!cr6.eq) goto loc_825614C4;
	// lwz r11,-23864(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23864);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825614C4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825614e0
	if (cr6.eq) goto loc_825614E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825614e4
	if (!cr6.eq) goto loc_825614E4;
loc_825614E0:
	// li r11,0
	r11.s64 = 0;
loc_825614E4:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-23868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23868);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r23,r27,316
	r23.s64 = r27.s64 + 316;
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
	// bne cr6,0x8256153c
	if (!cr6.eq) goto loc_8256153C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256153c
	if (!cr6.eq) goto loc_8256153C;
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
loc_8256153C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561558
	if (cr6.eq) goto loc_82561558;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256155c
	if (!cr6.eq) goto loc_8256155C;
loc_82561558:
	// li r11,0
	r11.s64 = 0;
loc_8256155C:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-23872(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23872);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r24,r27,344
	r24.s64 = r27.s64 + 344;
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
	// bne cr6,0x825615b4
	if (!cr6.eq) goto loc_825615B4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825615b4
	if (!cr6.eq) goto loc_825615B4;
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
loc_825615B4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825615d0
	if (cr6.eq) goto loc_825615D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825615d4
	if (!cr6.eq) goto loc_825615D4;
loc_825615D0:
	// li r11,0
	r11.s64 = 0;
loc_825615D4:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-29420(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -29420);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r27,372
	r25.s64 = r27.s64 + 372;
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
	// bne cr6,0x8256162c
	if (!cr6.eq) goto loc_8256162C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256162c
	if (!cr6.eq) goto loc_8256162C;
	// lwz r11,-29420(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -29420);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256162C:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82561648
	if (cr6.eq) goto loc_82561648;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256164c
	if (!cr6.eq) goto loc_8256164C;
loc_82561648:
	// li r11,0
	r11.s64 = 0;
loc_8256164C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22032(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22032);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r27,400
	r26.s64 = r27.s64 + 400;
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
	// bne cr6,0x825616a4
	if (!cr6.eq) goto loc_825616A4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825616a4
	if (!cr6.eq) goto loc_825616A4;
	// lwz r11,22032(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22032);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825616A4:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825616c0
	if (cr6.eq) goto loc_825616C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825616c4
	if (!cr6.eq) goto loc_825616C4;
loc_825616C0:
	// li r11,0
	r11.s64 = 0;
loc_825616C4:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,22048(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 22048);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r30,r27,428
	r30.s64 = r27.s64 + 428;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256171c
	if (!cr6.eq) goto loc_8256171C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256171c
	if (!cr6.eq) goto loc_8256171C;
	// lwz r11,22048(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 22048);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256171C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r27,616
	ctx.r3.s64 = r27.s64 + 616;
	// addi r10,r11,-24152
	ctx.r10.s64 = r11.s64 + -24152;
	// stw r10,648(r27)
	PPC_STORE_U32(r27.u32 + 648, ctx.r10.u32);
	// stw r10,628(r27)
	PPC_STORE_U32(r27.u32 + 628, ctx.r10.u32);
	// bl 0x82561f90
	sub_82561F90(ctx, base);
	// lwz r3,616(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 616);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,600(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// addi r4,r27,596
	ctx.r4.s64 = r27.s64 + 596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82436db0
	sub_82436DB0(ctx, base);
	// lwz r3,600(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r9,584(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 584);
	// addi r31,r27,564
	r31.s64 = r27.s64 + 564;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82561770
	if (cr6.lt) goto loc_82561770;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82561770:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r3,r27,512
	ctx.r3.s64 = r27.s64 + 512;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r27,484
	ctx.r3.s64 = r27.s64 + 484;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r27,456
	ctx.r3.s64 = r27.s64 + 456;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r27,288
	ctx.r3.s64 = r27.s64 + 288;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r27,64
	ctx.r3.s64 = r27.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82561820"))) PPC_WEAK_FUNC(sub_82561820);
PPC_FUNC_IMPL(__imp__sub_82561820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82561824"))) PPC_WEAK_FUNC(sub_82561824);
PPC_FUNC_IMPL(__imp__sub_82561824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561828"))) PPC_WEAK_FUNC(sub_82561828);
PPC_FUNC_IMPL(__imp__sub_82561828) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825618bc
	if (cr6.eq) goto loc_825618BC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82561948
	if (!cr6.eq) goto loc_82561948;
	// lbz r11,548(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82561948
	if (cr6.eq) goto loc_82561948;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,628
	ctx.r10.s64 = ctx.r3.s64 + 628;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// addi r9,r3,648
	ctx.r9.s64 = ctx.r3.s64 + 648;
	// lwz r10,632(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// stw r10,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, ctx.r10.u32);
	// lwz r9,636(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// stw r9,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r9.u32);
	// lwz r8,644(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// stw r8,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r8.u32);
	// lwz r7,640(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// stw r7,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r7.u32);
	// lbz r6,1850(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1850);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82561948
	if (!cr6.eq) goto loc_82561948;
	// stb r11,1845(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1845, r11.u8);
	// lwz r3,668(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// bl 0x82569878
	sub_82569878(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825601b8
	sub_825601B8(ctx, base);
	// b 0x82561948
	goto loc_82561948;
loc_825618BC:
	// lbz r11,1850(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1850);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825618fc
	if (cr6.eq) goto loc_825618FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,628
	r11.s64 = r31.s64 + 628;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// addi r10,r31,648
	ctx.r10.s64 = r31.s64 + 648;
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// stw r9,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r9.u32);
	// lwz r8,636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// stw r8,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r8.u32);
	// lwz r7,644(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// stw r7,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r7.u32);
	// lwz r6,640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// stw r6,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r6.u32);
	// b 0x82561948
	goto loc_82561948;
loc_825618FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,544(r31)
	PPC_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r11,548(r31)
	PPC_STORE_U8(r31.u32 + 548, r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,549(r31)
	PPC_STORE_U8(r31.u32 + 549, r11.u8);
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// stb r11,1843(r31)
	PPC_STORE_U8(r31.u32 + 1843, r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r10,22060(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22060);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,20992(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82561ff8
	sub_82561FF8(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
loc_82561948:
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

__attribute__((alias("__imp__sub_8256195C"))) PPC_WEAK_FUNC(sub_8256195C);
PPC_FUNC_IMPL(__imp__sub_8256195C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561960"))) PPC_WEAK_FUNC(sub_82561960);
PPC_FUNC_IMPL(__imp__sub_82561960) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82561988
	if (!cr6.gt) goto loc_82561988;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x825619cc
	if (!cr6.gt) goto loc_825619CC;
loc_82561988:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1852(r31)
	PPC_STORE_U8(r31.u32 + 1852, r11.u8);
	// bl 0x825602f0
	sub_825602F0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,6184
	r11.s64 = r11.s64 + 6184;
	// addi r8,r9,-24152
	ctx.r8.s64 = ctx.r9.s64 + -24152;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82560070
	sub_82560070(ctx, base);
loc_825619CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825619DC"))) PPC_WEAK_FUNC(sub_825619DC);
PPC_FUNC_IMPL(__imp__sub_825619DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825619E0"))) PPC_WEAK_FUNC(sub_825619E0);
PPC_FUNC_IMPL(__imp__sub_825619E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,1853(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1853);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
}

__attribute__((alias("__imp__sub_825619EC"))) PPC_WEAK_FUNC(sub_825619EC);
PPC_FUNC_IMPL(__imp__sub_825619EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82561960
	sub_82561960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825619F0"))) PPC_WEAK_FUNC(sub_825619F0);
PPC_FUNC_IMPL(__imp__sub_825619F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825619F4"))) PPC_WEAK_FUNC(sub_825619F4);
PPC_FUNC_IMPL(__imp__sub_825619F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825619F8"))) PPC_WEAK_FUNC(sub_825619F8);
PPC_FUNC_IMPL(__imp__sub_825619F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,1853(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1853, r11.u8);
}

__attribute__((alias("__imp__sub_82561A00"))) PPC_WEAK_FUNC(sub_82561A00);
PPC_FUNC_IMPL(__imp__sub_82561A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82561960
	sub_82561960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561A04"))) PPC_WEAK_FUNC(sub_82561A04);
PPC_FUNC_IMPL(__imp__sub_82561A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561A08"))) PPC_WEAK_FUNC(sub_82561A08);
PPC_FUNC_IMPL(__imp__sub_82561A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82561a24
	if (cr6.eq) goto loc_82561A24;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_82561A24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82561a60
	if (!cr6.eq) goto loc_82561A60;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82561a58
	if (!cr6.eq) goto loc_82561A58;
loc_82561A44:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82561a44
	if (cr6.eq) goto loc_82561A44;
loc_82561A58:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82561A60:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82561a98
	if (!cr6.eq) goto loc_82561A98;
loc_82561A70:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82561a98
	if (!cr6.eq) goto loc_82561A98;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82561a70
	if (cr6.eq) goto loc_82561A70;
loc_82561A98:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_82561AAC"))) PPC_WEAK_FUNC(sub_82561AAC);
PPC_FUNC_IMPL(__imp__sub_82561AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561AB0"))) PPC_WEAK_FUNC(sub_82561AB0);
PPC_FUNC_IMPL(__imp__sub_82561AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, r11.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, r11.u64);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, r11.u8);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// std r11,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, r11.u64);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// stb r11,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, r11.u8);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, r11.u8);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// std r11,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, r11.u64);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, r11.u8);
	// stb r11,286(r3)
	PPC_STORE_U8(ctx.r3.u32 + 286, r11.u8);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, r11.u8);
	// stw r7,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_82561B40"))) PPC_WEAK_FUNC(sub_82561B40);
PPC_FUNC_IMPL(__imp__sub_82561B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561B44"))) PPC_WEAK_FUNC(sub_82561B44);
PPC_FUNC_IMPL(__imp__sub_82561B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561B48"))) PPC_WEAK_FUNC(sub_82561B48);
PPC_FUNC_IMPL(__imp__sub_82561B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82561b68
	if (!cr6.eq) goto loc_82561B68;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82561B68:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82561b90
	if (!cr6.eq) goto loc_82561B90;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_82561B90:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82561bb0
	if (!cr6.eq) goto loc_82561BB0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_82561BB0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_82561BBC"))) PPC_WEAK_FUNC(sub_82561BBC);
PPC_FUNC_IMPL(__imp__sub_82561BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561BC0"))) PPC_WEAK_FUNC(sub_82561BC0);
PPC_FUNC_IMPL(__imp__sub_82561BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82561be0
	if (!cr6.eq) goto loc_82561BE0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82561BE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82561c08
	if (!cr6.eq) goto loc_82561C08;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_82561C08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82561c28
	if (!cr6.eq) goto loc_82561C28;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_82561C28:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_82561C34"))) PPC_WEAK_FUNC(sub_82561C34);
PPC_FUNC_IMPL(__imp__sub_82561C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561C38"))) PPC_WEAK_FUNC(sub_82561C38);
PPC_FUNC_IMPL(__imp__sub_82561C38) {
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
	// li r3,28
	ctx.r3.s64 = 28;
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

__attribute__((alias("__imp__sub_82561CBC"))) PPC_WEAK_FUNC(sub_82561CBC);
PPC_FUNC_IMPL(__imp__sub_82561CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561CC0"))) PPC_WEAK_FUNC(sub_82561CC0);
PPC_FUNC_IMPL(__imp__sub_82561CC0) {
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,28(r4)
	PPC_STORE_U8(ctx.r4.u32 + 28, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82561D60"))) PPC_WEAK_FUNC(sub_82561D60);
PPC_FUNC_IMPL(__imp__sub_82561D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561D64"))) PPC_WEAK_FUNC(sub_82561D64);
PPC_FUNC_IMPL(__imp__sub_82561D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561D68"))) PPC_WEAK_FUNC(sub_82561D68);
PPC_FUNC_IMPL(__imp__sub_82561D68) {
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
	// lbz r11,29(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82561db4
	if (!cr6.eq) goto loc_82561DB4;
loc_82561D90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82561d68
	sub_82561D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,29(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82561d90
	if (cr6.eq) goto loc_82561D90;
loc_82561DB4:
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

__attribute__((alias("__imp__sub_82561DC8"))) PPC_WEAK_FUNC(sub_82561DC8);
PPC_FUNC_IMPL(__imp__sub_82561DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561DCC"))) PPC_WEAK_FUNC(sub_82561DCC);
PPC_FUNC_IMPL(__imp__sub_82561DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561DD0"))) PPC_WEAK_FUNC(sub_82561DD0);
PPC_FUNC_IMPL(__imp__sub_82561DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,20400(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20400);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, r11.u64);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, r11.u8);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// std r11,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, r11.u64);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// stb r11,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, r11.u8);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, r11.u8);
	// std r11,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, r11.u64);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, r11.u8);
	// stb r11,286(r3)
	PPC_STORE_U8(ctx.r3.u32 + 286, r11.u8);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, r11.u8);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, r11.u8);
	// stb r11,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, r11.u8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, r11.u64);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, r11.u8);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// std r11,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, r11.u64);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// stb r11,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, r11.u8);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, r11.u8);
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// std r11,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, r11.u64);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// addi r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 + 152;
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, r11.u8);
	// stb r11,286(r3)
	PPC_STORE_U8(ctx.r3.u32 + 286, r11.u8);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, r11.u8);
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// stw r6,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_82561ED8"))) PPC_WEAK_FUNC(sub_82561ED8);
PPC_FUNC_IMPL(__imp__sub_82561ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561EDC"))) PPC_WEAK_FUNC(sub_82561EDC);
PPC_FUNC_IMPL(__imp__sub_82561EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561EE0"))) PPC_WEAK_FUNC(sub_82561EE0);
PPC_FUNC_IMPL(__imp__sub_82561EE0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82561d68
	sub_82561D68(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82561F30"))) PPC_WEAK_FUNC(sub_82561F30);
PPC_FUNC_IMPL(__imp__sub_82561F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561F34"))) PPC_WEAK_FUNC(sub_82561F34);
PPC_FUNC_IMPL(__imp__sub_82561F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561F38"))) PPC_WEAK_FUNC(sub_82561F38);
PPC_FUNC_IMPL(__imp__sub_82561F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,3
	r30.s64 = 3;
	// subf r28,r31,r11
	r28.s64 = r11.s64 - r31.s64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82561F68:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// bl 0x823322f8
	sub_823322F8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,168
	r31.s64 = r31.s64 + 168;
	// bge 0x82561f68
	if (!cr0.lt) goto loc_82561F68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82561F88"))) PPC_WEAK_FUNC(sub_82561F88);
PPC_FUNC_IMPL(__imp__sub_82561F88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82561F8C"))) PPC_WEAK_FUNC(sub_82561F8C);
PPC_FUNC_IMPL(__imp__sub_82561F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561F90"))) PPC_WEAK_FUNC(sub_82561F90);
PPC_FUNC_IMPL(__imp__sub_82561F90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82561fec
	if (cr6.eq) goto loc_82561FEC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-24152
	r29.s64 = r11.s64 + -24152;
loc_82561FD0:
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82561fd0
	if (!cr6.eq) goto loc_82561FD0;
loc_82561FEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82561FF0"))) PPC_WEAK_FUNC(sub_82561FF0);
PPC_FUNC_IMPL(__imp__sub_82561FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82561FF4"))) PPC_WEAK_FUNC(sub_82561FF4);
PPC_FUNC_IMPL(__imp__sub_82561FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561FF8"))) PPC_WEAK_FUNC(sub_82561FF8);
PPC_FUNC_IMPL(__imp__sub_82561FF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256205c
	if (cr6.eq) goto loc_8256205C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23924
	ctx.r8.s64 = ctx.r9.s64 + -23924;
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
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256205C:
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

__attribute__((alias("__imp__sub_82562070"))) PPC_WEAK_FUNC(sub_82562070);
PPC_FUNC_IMPL(__imp__sub_82562070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562074"))) PPC_WEAK_FUNC(sub_82562074);
PPC_FUNC_IMPL(__imp__sub_82562074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562078"))) PPC_WEAK_FUNC(sub_82562078);
PPC_FUNC_IMPL(__imp__sub_82562078) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825620dc
	if (cr6.eq) goto loc_825620DC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23912
	ctx.r8.s64 = ctx.r9.s64 + -23912;
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
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825620DC:
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

__attribute__((alias("__imp__sub_825620F0"))) PPC_WEAK_FUNC(sub_825620F0);
PPC_FUNC_IMPL(__imp__sub_825620F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825620F4"))) PPC_WEAK_FUNC(sub_825620F4);
PPC_FUNC_IMPL(__imp__sub_825620F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825620F8"))) PPC_WEAK_FUNC(sub_825620F8);
PPC_FUNC_IMPL(__imp__sub_825620F8) {
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
	// beq cr6,0x82562154
	if (cr6.eq) goto loc_82562154;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23900
	ctx.r8.s64 = ctx.r9.s64 + -23900;
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
loc_82562154:
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

__attribute__((alias("__imp__sub_82562168"))) PPC_WEAK_FUNC(sub_82562168);
PPC_FUNC_IMPL(__imp__sub_82562168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256216C"))) PPC_WEAK_FUNC(sub_8256216C);
PPC_FUNC_IMPL(__imp__sub_8256216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562170"))) PPC_WEAK_FUNC(sub_82562170);
PPC_FUNC_IMPL(__imp__sub_82562170) {
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
	// beq cr6,0x825621cc
	if (cr6.eq) goto loc_825621CC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23888
	ctx.r8.s64 = ctx.r9.s64 + -23888;
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
loc_825621CC:
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

__attribute__((alias("__imp__sub_825621E0"))) PPC_WEAK_FUNC(sub_825621E0);
PPC_FUNC_IMPL(__imp__sub_825621E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825621E4"))) PPC_WEAK_FUNC(sub_825621E4);
PPC_FUNC_IMPL(__imp__sub_825621E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825621E8"))) PPC_WEAK_FUNC(sub_825621E8);
PPC_FUNC_IMPL(__imp__sub_825621E8) {
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
	// beq cr6,0x82562244
	if (cr6.eq) goto loc_82562244;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23876
	ctx.r8.s64 = ctx.r9.s64 + -23876;
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
loc_82562244:
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

__attribute__((alias("__imp__sub_82562258"))) PPC_WEAK_FUNC(sub_82562258);
PPC_FUNC_IMPL(__imp__sub_82562258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256225C"))) PPC_WEAK_FUNC(sub_8256225C);
PPC_FUNC_IMPL(__imp__sub_8256225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562260"))) PPC_WEAK_FUNC(sub_82562260);
PPC_FUNC_IMPL(__imp__sub_82562260) {
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
	// beq cr6,0x825622cc
	if (cr6.eq) goto loc_825622CC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23852
	ctx.r8.s64 = ctx.r9.s64 + -23852;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
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
loc_825622CC:
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

__attribute__((alias("__imp__sub_825622E0"))) PPC_WEAK_FUNC(sub_825622E0);
PPC_FUNC_IMPL(__imp__sub_825622E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825622E4"))) PPC_WEAK_FUNC(sub_825622E4);
PPC_FUNC_IMPL(__imp__sub_825622E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825622E8"))) PPC_WEAK_FUNC(sub_825622E8);
PPC_FUNC_IMPL(__imp__sub_825622E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256234c
	if (cr6.eq) goto loc_8256234C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23840
	ctx.r8.s64 = ctx.r9.s64 + -23840;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256234C:
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

__attribute__((alias("__imp__sub_82562360"))) PPC_WEAK_FUNC(sub_82562360);
PPC_FUNC_IMPL(__imp__sub_82562360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562364"))) PPC_WEAK_FUNC(sub_82562364);
PPC_FUNC_IMPL(__imp__sub_82562364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562368"))) PPC_WEAK_FUNC(sub_82562368);
PPC_FUNC_IMPL(__imp__sub_82562368) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825623ac
	if (!cr6.eq) goto loc_825623AC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82436800
	sub_82436800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825623AC:
	// lwz r25,4(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825623f0
	if (!cr6.eq) goto loc_825623F0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825624ec
	if (!cr6.lt) goto loc_825624EC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82436800
	sub_82436800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825623F0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x8256242c
	if (!cr6.eq) goto loc_8256242C;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x825624ec
	if (!cr6.lt) goto loc_825624EC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82436800
	sub_82436800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8256242C:
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x82562490
	if (!cr6.gt) goto loc_82562490;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82561a08
	sub_82561A08(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x8256248c
	if (!cr6.lt) goto loc_8256248C;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825624d8
	if (!cr6.eq) goto loc_825624D8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82562478:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82436800
	sub_82436800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8256248C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
loc_82562490:
	// bge cr6,0x825624ec
	if (!cr6.lt) goto loc_825624EC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436370
	sub_82436370(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x825624b8
	if (cr6.eq) goto loc_825624B8;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x825624ec
	if (!cr6.lt) goto loc_825624EC;
loc_825624B8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82562478
	if (cr6.eq) goto loc_82562478;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_825624D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82436800
	sub_82436800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825624EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436e48
	sub_82436E48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82562514"))) PPC_WEAK_FUNC(sub_82562514);
PPC_FUNC_IMPL(__imp__sub_82562514) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82562518"))) PPC_WEAK_FUNC(sub_82562518);
PPC_FUNC_IMPL(__imp__sub_82562518) {
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
	// beq cr6,0x82562548
	if (cr6.eq) goto loc_82562548;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256254c
	if (!cr6.eq) goto loc_8256254C;
loc_82562548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256254C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82562568
	if (cr6.eq) goto loc_82562568;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,700(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 700);
	// lwz r5,696(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82562568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82562578"))) PPC_WEAK_FUNC(sub_82562578);
PPC_FUNC_IMPL(__imp__sub_82562578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256257C"))) PPC_WEAK_FUNC(sub_8256257C);
PPC_FUNC_IMPL(__imp__sub_8256257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562580"))) PPC_WEAK_FUNC(sub_82562580);
PPC_FUNC_IMPL(__imp__sub_82562580) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825625d8
	if (cr6.eq) goto loc_825625D8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,-24152
	ctx.r8.s64 = ctx.r10.s64 + -24152;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
loc_825625D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825625E8"))) PPC_WEAK_FUNC(sub_825625E8);
PPC_FUNC_IMPL(__imp__sub_825625E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825625EC"))) PPC_WEAK_FUNC(sub_825625EC);
PPC_FUNC_IMPL(__imp__sub_825625EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825625F0"))) PPC_WEAK_FUNC(sub_825625F0);
PPC_FUNC_IMPL(__imp__sub_825625F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r6,r9,4776
	ctx.r6.s64 = ctx.r9.s64 + 4776;
	// li r7,57
	ctx.r7.s64 = 57;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x82562698
	if (cr0.eq) goto loc_82562698;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r8,r9,-24152
	ctx.r8.s64 = ctx.r9.s64 + -24152;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
loc_82562698:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8256269C"))) PPC_WEAK_FUNC(sub_8256269C);
PPC_FUNC_IMPL(__imp__sub_8256269C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825626A0"))) PPC_WEAK_FUNC(sub_825626A0);
PPC_FUNC_IMPL(__imp__sub_825626A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,704
	ctx.r4.s64 = 704;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825626f8
	if (cr6.eq) goto loc_825626F8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,-23828
	ctx.r10.s64 = r11.s64 + -23828;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82561f38
	sub_82561F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,696(r31)
	PPC_STORE_U32(r31.u32 + 696, r11.u32);
	// stw r11,700(r31)
	PPC_STORE_U32(r31.u32 + 700, r11.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825626F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825626FC"))) PPC_WEAK_FUNC(sub_825626FC);
PPC_FUNC_IMPL(__imp__sub_825626FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82562700"))) PPC_WEAK_FUNC(sub_82562700);
PPC_FUNC_IMPL(__imp__sub_82562700) {
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
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82562754
	if (!cr6.eq) goto loc_82562754;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8256272C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82562740
	if (!cr6.lt) goto loc_82562740;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82562748
	goto loc_82562748;
loc_82562740:
	// mr r27,r11
	r27.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82562748:
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256272c
	if (cr6.eq) goto loc_8256272C;
loc_82562754:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82562770
	if (cr6.eq) goto loc_82562770;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825627e4
	if (!cr6.lt) goto loc_825627E4;
loc_82562770:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r11.u8);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r11.u8);
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r11.u8);
	// bl 0x82436400
	sub_82436400(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825627c4
	if (cr0.eq) goto loc_825627C4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_825627C4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562368
	sub_82562368(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825627E4:
	// addi r3,r27,16
	ctx.r3.s64 = r27.s64 + 16;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825627EC"))) PPC_WEAK_FUNC(sub_825627EC);
PPC_FUNC_IMPL(__imp__sub_825627EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825627F0"))) PPC_WEAK_FUNC(sub_825627F0);
PPC_FUNC_IMPL(__imp__sub_825627F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1851(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1851);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825627F8"))) PPC_WEAK_FUNC(sub_825627F8);
PPC_FUNC_IMPL(__imp__sub_825627F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,1851(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1851, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562804"))) PPC_WEAK_FUNC(sub_82562804);
PPC_FUNC_IMPL(__imp__sub_82562804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562808"))) PPC_WEAK_FUNC(sub_82562808);
PPC_FUNC_IMPL(__imp__sub_82562808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562840
	if (!cr6.eq) goto loc_82562840;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256286c
	if (cr6.eq) goto loc_8256286C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256286c
	goto loc_8256286C;
loc_82562840:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256286c
	if (cr6.eq) goto loc_8256286C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8808
	ctx.r4.s64 = r11.s64 + -8808;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8256286C:
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

__attribute__((alias("__imp__sub_82562880"))) PPC_WEAK_FUNC(sub_82562880);
PPC_FUNC_IMPL(__imp__sub_82562880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562884"))) PPC_WEAK_FUNC(sub_82562884);
PPC_FUNC_IMPL(__imp__sub_82562884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562888"))) PPC_WEAK_FUNC(sub_82562888);
PPC_FUNC_IMPL(__imp__sub_82562888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x825628c0
	if (!cr6.eq) goto loc_825628C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825628ec
	if (cr6.eq) goto loc_825628EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x825628ec
	goto loc_825628EC;
loc_825628C0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x825628ec
	if (cr6.eq) goto loc_825628EC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8696
	ctx.r4.s64 = r11.s64 + -8696;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_825628EC:
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

__attribute__((alias("__imp__sub_82562900"))) PPC_WEAK_FUNC(sub_82562900);
PPC_FUNC_IMPL(__imp__sub_82562900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562904"))) PPC_WEAK_FUNC(sub_82562904);
PPC_FUNC_IMPL(__imp__sub_82562904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562908"))) PPC_WEAK_FUNC(sub_82562908);
PPC_FUNC_IMPL(__imp__sub_82562908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562940
	if (!cr6.eq) goto loc_82562940;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256296c
	if (cr6.eq) goto loc_8256296C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256296c
	goto loc_8256296C;
loc_82562940:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256296c
	if (cr6.eq) goto loc_8256296C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8584
	ctx.r4.s64 = r11.s64 + -8584;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8256296C:
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

__attribute__((alias("__imp__sub_82562980"))) PPC_WEAK_FUNC(sub_82562980);
PPC_FUNC_IMPL(__imp__sub_82562980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562984"))) PPC_WEAK_FUNC(sub_82562984);
PPC_FUNC_IMPL(__imp__sub_82562984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562988"))) PPC_WEAK_FUNC(sub_82562988);
PPC_FUNC_IMPL(__imp__sub_82562988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x825629c0
	if (!cr6.eq) goto loc_825629C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825629ec
	if (cr6.eq) goto loc_825629EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x825629ec
	goto loc_825629EC;
loc_825629C0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x825629ec
	if (cr6.eq) goto loc_825629EC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8472
	ctx.r4.s64 = r11.s64 + -8472;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_825629EC:
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

__attribute__((alias("__imp__sub_82562A00"))) PPC_WEAK_FUNC(sub_82562A00);
PPC_FUNC_IMPL(__imp__sub_82562A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A04"))) PPC_WEAK_FUNC(sub_82562A04);
PPC_FUNC_IMPL(__imp__sub_82562A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562A08"))) PPC_WEAK_FUNC(sub_82562A08);
PPC_FUNC_IMPL(__imp__sub_82562A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562a40
	if (!cr6.eq) goto loc_82562A40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562a6c
	if (cr6.eq) goto loc_82562A6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562a6c
	goto loc_82562A6C;
loc_82562A40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562a6c
	if (cr6.eq) goto loc_82562A6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8360
	ctx.r4.s64 = r11.s64 + -8360;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562A6C:
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

__attribute__((alias("__imp__sub_82562A80"))) PPC_WEAK_FUNC(sub_82562A80);
PPC_FUNC_IMPL(__imp__sub_82562A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A84"))) PPC_WEAK_FUNC(sub_82562A84);
PPC_FUNC_IMPL(__imp__sub_82562A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562A88"))) PPC_WEAK_FUNC(sub_82562A88);
PPC_FUNC_IMPL(__imp__sub_82562A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562ac0
	if (!cr6.eq) goto loc_82562AC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562aec
	if (cr6.eq) goto loc_82562AEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562aec
	goto loc_82562AEC;
loc_82562AC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562aec
	if (cr6.eq) goto loc_82562AEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8248
	ctx.r4.s64 = r11.s64 + -8248;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562AEC:
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

__attribute__((alias("__imp__sub_82562B00"))) PPC_WEAK_FUNC(sub_82562B00);
PPC_FUNC_IMPL(__imp__sub_82562B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562B04"))) PPC_WEAK_FUNC(sub_82562B04);
PPC_FUNC_IMPL(__imp__sub_82562B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562B08"))) PPC_WEAK_FUNC(sub_82562B08);
PPC_FUNC_IMPL(__imp__sub_82562B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562b40
	if (!cr6.eq) goto loc_82562B40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562b6c
	if (cr6.eq) goto loc_82562B6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562b6c
	goto loc_82562B6C;
loc_82562B40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562b6c
	if (cr6.eq) goto loc_82562B6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8136
	ctx.r4.s64 = r11.s64 + -8136;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562B6C:
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

__attribute__((alias("__imp__sub_82562B80"))) PPC_WEAK_FUNC(sub_82562B80);
PPC_FUNC_IMPL(__imp__sub_82562B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562B84"))) PPC_WEAK_FUNC(sub_82562B84);
PPC_FUNC_IMPL(__imp__sub_82562B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562B88"))) PPC_WEAK_FUNC(sub_82562B88);
PPC_FUNC_IMPL(__imp__sub_82562B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562bc0
	if (!cr6.eq) goto loc_82562BC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562bec
	if (cr6.eq) goto loc_82562BEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562bec
	goto loc_82562BEC;
loc_82562BC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562bec
	if (cr6.eq) goto loc_82562BEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-8024
	ctx.r4.s64 = r11.s64 + -8024;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562BEC:
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

__attribute__((alias("__imp__sub_82562C00"))) PPC_WEAK_FUNC(sub_82562C00);
PPC_FUNC_IMPL(__imp__sub_82562C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562C04"))) PPC_WEAK_FUNC(sub_82562C04);
PPC_FUNC_IMPL(__imp__sub_82562C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562C08"))) PPC_WEAK_FUNC(sub_82562C08);
PPC_FUNC_IMPL(__imp__sub_82562C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562c40
	if (!cr6.eq) goto loc_82562C40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562c6c
	if (cr6.eq) goto loc_82562C6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562c6c
	goto loc_82562C6C;
loc_82562C40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562c6c
	if (cr6.eq) goto loc_82562C6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7912
	ctx.r4.s64 = r11.s64 + -7912;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562C6C:
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

__attribute__((alias("__imp__sub_82562C80"))) PPC_WEAK_FUNC(sub_82562C80);
PPC_FUNC_IMPL(__imp__sub_82562C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562C84"))) PPC_WEAK_FUNC(sub_82562C84);
PPC_FUNC_IMPL(__imp__sub_82562C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562C88"))) PPC_WEAK_FUNC(sub_82562C88);
PPC_FUNC_IMPL(__imp__sub_82562C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562cc0
	if (!cr6.eq) goto loc_82562CC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562cec
	if (cr6.eq) goto loc_82562CEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562cec
	goto loc_82562CEC;
loc_82562CC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562cec
	if (cr6.eq) goto loc_82562CEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7800
	ctx.r4.s64 = r11.s64 + -7800;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562CEC:
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

__attribute__((alias("__imp__sub_82562D00"))) PPC_WEAK_FUNC(sub_82562D00);
PPC_FUNC_IMPL(__imp__sub_82562D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562D04"))) PPC_WEAK_FUNC(sub_82562D04);
PPC_FUNC_IMPL(__imp__sub_82562D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562D08"))) PPC_WEAK_FUNC(sub_82562D08);
PPC_FUNC_IMPL(__imp__sub_82562D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562d40
	if (!cr6.eq) goto loc_82562D40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562d6c
	if (cr6.eq) goto loc_82562D6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562d6c
	goto loc_82562D6C;
loc_82562D40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562d6c
	if (cr6.eq) goto loc_82562D6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7688
	ctx.r4.s64 = r11.s64 + -7688;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562D6C:
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

__attribute__((alias("__imp__sub_82562D80"))) PPC_WEAK_FUNC(sub_82562D80);
PPC_FUNC_IMPL(__imp__sub_82562D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562D84"))) PPC_WEAK_FUNC(sub_82562D84);
PPC_FUNC_IMPL(__imp__sub_82562D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562D88"))) PPC_WEAK_FUNC(sub_82562D88);
PPC_FUNC_IMPL(__imp__sub_82562D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562dc0
	if (!cr6.eq) goto loc_82562DC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562dec
	if (cr6.eq) goto loc_82562DEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562dec
	goto loc_82562DEC;
loc_82562DC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562dec
	if (cr6.eq) goto loc_82562DEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7576
	ctx.r4.s64 = r11.s64 + -7576;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562DEC:
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

__attribute__((alias("__imp__sub_82562E00"))) PPC_WEAK_FUNC(sub_82562E00);
PPC_FUNC_IMPL(__imp__sub_82562E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562E04"))) PPC_WEAK_FUNC(sub_82562E04);
PPC_FUNC_IMPL(__imp__sub_82562E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562E08"))) PPC_WEAK_FUNC(sub_82562E08);
PPC_FUNC_IMPL(__imp__sub_82562E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562e40
	if (!cr6.eq) goto loc_82562E40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562e6c
	if (cr6.eq) goto loc_82562E6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562e6c
	goto loc_82562E6C;
loc_82562E40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562e6c
	if (cr6.eq) goto loc_82562E6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7464
	ctx.r4.s64 = r11.s64 + -7464;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562E6C:
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

__attribute__((alias("__imp__sub_82562E80"))) PPC_WEAK_FUNC(sub_82562E80);
PPC_FUNC_IMPL(__imp__sub_82562E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562E84"))) PPC_WEAK_FUNC(sub_82562E84);
PPC_FUNC_IMPL(__imp__sub_82562E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562E88"))) PPC_WEAK_FUNC(sub_82562E88);
PPC_FUNC_IMPL(__imp__sub_82562E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562ec0
	if (!cr6.eq) goto loc_82562EC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562eec
	if (cr6.eq) goto loc_82562EEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562eec
	goto loc_82562EEC;
loc_82562EC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562eec
	if (cr6.eq) goto loc_82562EEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7352
	ctx.r4.s64 = r11.s64 + -7352;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562EEC:
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

__attribute__((alias("__imp__sub_82562F00"))) PPC_WEAK_FUNC(sub_82562F00);
PPC_FUNC_IMPL(__imp__sub_82562F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562F04"))) PPC_WEAK_FUNC(sub_82562F04);
PPC_FUNC_IMPL(__imp__sub_82562F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562F08"))) PPC_WEAK_FUNC(sub_82562F08);
PPC_FUNC_IMPL(__imp__sub_82562F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562f40
	if (!cr6.eq) goto loc_82562F40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562f6c
	if (cr6.eq) goto loc_82562F6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562f6c
	goto loc_82562F6C;
loc_82562F40:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562f6c
	if (cr6.eq) goto loc_82562F6C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7240
	ctx.r4.s64 = r11.s64 + -7240;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562F6C:
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

__attribute__((alias("__imp__sub_82562F80"))) PPC_WEAK_FUNC(sub_82562F80);
PPC_FUNC_IMPL(__imp__sub_82562F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562F84"))) PPC_WEAK_FUNC(sub_82562F84);
PPC_FUNC_IMPL(__imp__sub_82562F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562F88"))) PPC_WEAK_FUNC(sub_82562F88);
PPC_FUNC_IMPL(__imp__sub_82562F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82562fc0
	if (!cr6.eq) goto loc_82562FC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82562fec
	if (cr6.eq) goto loc_82562FEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82562fec
	goto loc_82562FEC;
loc_82562FC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82562fec
	if (cr6.eq) goto loc_82562FEC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7128
	ctx.r4.s64 = r11.s64 + -7128;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_82562FEC:
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

__attribute__((alias("__imp__sub_82563000"))) PPC_WEAK_FUNC(sub_82563000);
PPC_FUNC_IMPL(__imp__sub_82563000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563004"))) PPC_WEAK_FUNC(sub_82563004);
PPC_FUNC_IMPL(__imp__sub_82563004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563008"))) PPC_WEAK_FUNC(sub_82563008);
PPC_FUNC_IMPL(__imp__sub_82563008) {
	PPC_FUNC_PROLOGUE();
	// b 0x82560f90
	sub_82560F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256300C"))) PPC_WEAK_FUNC(sub_8256300C);
PPC_FUNC_IMPL(__imp__sub_8256300C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563010"))) PPC_WEAK_FUNC(sub_82563010);
PPC_FUNC_IMPL(__imp__sub_82563010) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82563038
	if (cr6.eq) goto loc_82563038;
	// bl 0x82560f90
	sub_82560F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_82563038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82563048"))) PPC_WEAK_FUNC(sub_82563048);
PPC_FUNC_IMPL(__imp__sub_82563048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256304C"))) PPC_WEAK_FUNC(sub_8256304C);
PPC_FUNC_IMPL(__imp__sub_8256304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563050"))) PPC_WEAK_FUNC(sub_82563050);
PPC_FUNC_IMPL(__imp__sub_82563050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x825630e4
	if (!cr6.eq) goto loc_825630E4;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r31,r11,-7016
	r31.s64 = r11.s64 + -7016;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825630a8
	if (!cr6.eq) goto loc_825630A8;
loc_825630A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82563188
	goto loc_82563188;
loc_825630A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825630c8
	if (cr6.eq) goto loc_825630C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82563188
	goto loc_82563188;
loc_825630C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82563188
	goto loc_82563188;
loc_825630E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825630a0
	if (cr6.eq) goto loc_825630A0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r11,-7016
	r30.s64 = r11.s64 + -7016;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82563130
	if (cr6.eq) goto loc_82563130;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82563188
	goto loc_82563188;
loc_82563130:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256315c
	if (cr6.eq) goto loc_8256315C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// b 0x82563188
	goto loc_82563188;
loc_8256315C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825630a0
	if (cr6.eq) goto loc_825630A0;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_82563188:
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

__attribute__((alias("__imp__sub_8256319C"))) PPC_WEAK_FUNC(sub_8256319C);
PPC_FUNC_IMPL(__imp__sub_8256319C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825631A0"))) PPC_WEAK_FUNC(sub_825631A0);
PPC_FUNC_IMPL(__imp__sub_825631A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82563278
	if (cr6.eq) goto loc_82563278;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825631ec
	if (!cr6.eq) goto loc_825631EC;
loc_825631E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82563278
	goto loc_82563278;
loc_825631EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825631e4
	if (!cr6.eq) goto loc_825631E4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-7016
	r30.s64 = r11.s64 + -7016;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82563234
	if (cr6.eq) goto loc_82563234;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82563278
	goto loc_82563278;
loc_82563234:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82563264
	if (cr6.eq) goto loc_82563264;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82563278
	goto loc_82563278;
loc_82563264:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_82563278:
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

