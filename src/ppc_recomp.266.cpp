#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827994BC"))) PPC_WEAK_FUNC(sub_827994BC);
PPC_FUNC_IMPL(__imp__sub_827994BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827994C0"))) PPC_WEAK_FUNC(sub_827994C0);
PPC_FUNC_IMPL(__imp__sub_827994C0) {
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
	// bl 0x828f35e8
	sub_828F35E8(ctx, base);
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

__attribute__((alias("__imp__sub_827994EC"))) PPC_WEAK_FUNC(sub_827994EC);
PPC_FUNC_IMPL(__imp__sub_827994EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827994F0"))) PPC_WEAK_FUNC(sub_827994F0);
PPC_FUNC_IMPL(__imp__sub_827994F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ee2b0
	sub_828EE2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827994F0"))) PPC_WEAK_FUNC(sub_827994F0);
PPC_FUNC_IMPL(__imp__sub_827994F0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_827994F4"))) PPC_WEAK_FUNC(sub_827994F4);
PPC_FUNC_IMPL(__imp__sub_827994F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827994F8"))) PPC_WEAK_FUNC(sub_827994F8);
PPC_FUNC_IMPL(__imp__sub_827994F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828efc88
	sub_828EFC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827994FC"))) PPC_WEAK_FUNC(sub_827994FC);
PPC_FUNC_IMPL(__imp__sub_827994FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799500"))) PPC_WEAK_FUNC(sub_82799500);
PPC_FUNC_IMPL(__imp__sub_82799500) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82799500"))) PPC_WEAK_FUNC(sub_82799500);
PPC_FUNC_IMPL(__imp__sub_82799500) {
	PPC_FUNC_PROLOGUE();
	// b 0x828f36d0
	sub_828F36D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799504"))) PPC_WEAK_FUNC(sub_82799504);
PPC_FUNC_IMPL(__imp__sub_82799504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799508"))) PPC_WEAK_FUNC(sub_82799508);
PPC_FUNC_IMPL(__imp__sub_82799508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799520"))) PPC_WEAK_FUNC(sub_82799520);
PPC_FUNC_IMPL(__imp__sub_82799520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
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
	// stw r10,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r10.u32);
	// bl 0x828f1e68
	sub_828F1E68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r30,0(r9)
	r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,46
	cr6.compare<uint32_t>(r30.u32, 46, xer);
	// beq cr6,0x827995a4
	if (cr6.eq) goto loc_827995A4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,348
	ctx.r4.s64 = 348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279959c
	if (cr6.eq) goto loc_8279959C;
loc_82799578:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// beq cr6,0x82799598
	if (cr6.eq) goto loc_82799598;
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82799578
	if (!cr6.eq) goto loc_82799578;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x827995a8
	goto loc_827995A8;
loc_82799598:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
loc_8279959C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x827995a8
	goto loc_827995A8;
loc_827995A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827995A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828eecf8
	sub_828EECF8(ctx, base);
	// lwz r3,428(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_827995C8"))) PPC_WEAK_FUNC(sub_827995C8);
PPC_FUNC_IMPL(__imp__sub_827995C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827995CC"))) PPC_WEAK_FUNC(sub_827995CC);
PPC_FUNC_IMPL(__imp__sub_827995CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827995D0"))) PPC_WEAK_FUNC(sub_827995D0);
PPC_FUNC_IMPL(__imp__sub_827995D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r10,r3,25,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FE;
	// addi r7,r11,-7776
	ctx.r7.s64 = r11.s64 + -7776;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r9,r7,-1760
	ctx.r9.s64 = ctx.r7.s64 + -1760;
	// lhzx r11,r10,r9
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82799628
	if (cr6.eq) goto loc_82799628;
	// rlwinm r10,r3,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// addi r9,r7,-1760
	ctx.r9.s64 = ctx.r7.s64 + -1760;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r6,r3,28
	ctx.r6.u64 = ctx.r3.u32 & 0xF;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r11,r4,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lhzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_82799628:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,636
	r11.s64 = 636;
loc_82799630:
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bge cr6,0x82799658
	if (!cr6.lt) goto loc_82799658;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8279965c
	goto loc_8279965C;
loc_82799658:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279965C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82799630
	if (cr6.gt) goto loc_82799630;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82799670"))) PPC_WEAK_FUNC(sub_82799670);
PPC_FUNC_IMPL(__imp__sub_82799670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799674"))) PPC_WEAK_FUNC(sub_82799674);
PPC_FUNC_IMPL(__imp__sub_82799674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799678"))) PPC_WEAK_FUNC(sub_82799678);
PPC_FUNC_IMPL(__imp__sub_82799678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r10,r3,25,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FE;
	// addi r7,r11,-5224
	ctx.r7.s64 = r11.s64 + -5224;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r9,r7,-3448
	ctx.r9.s64 = ctx.r7.s64 + -3448;
	// lhzx r11,r10,r9
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827996d0
	if (cr6.eq) goto loc_827996D0;
	// rlwinm r10,r3,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// addi r9,r7,-3448
	ctx.r9.s64 = ctx.r7.s64 + -3448;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r6,r3,28
	ctx.r6.u64 = ctx.r3.u32 & 0xF;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r11,r4,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lhzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_827996D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,673
	r11.s64 = 673;
loc_827996D8:
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bge cr6,0x82799700
	if (!cr6.lt) goto loc_82799700;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82799704
	goto loc_82799704;
loc_82799700:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82799704:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x827996d8
	if (cr6.gt) goto loc_827996D8;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82799718"))) PPC_WEAK_FUNC(sub_82799718);
PPC_FUNC_IMPL(__imp__sub_82799718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279971C"))) PPC_WEAK_FUNC(sub_8279971C);
PPC_FUNC_IMPL(__imp__sub_8279971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799720"))) PPC_WEAK_FUNC(sub_82799720);
PPC_FUNC_IMPL(__imp__sub_82799720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r8,r3,25,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FE;
	// addi r9,r11,-10752
	ctx.r9.s64 = r11.s64 + -10752;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lhzx r11,r8,r9
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82799744
	if (!cr6.eq) goto loc_82799744;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82799744:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82799754
	if (!cr6.eq) goto loc_82799754;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82799754:
	// rlwinm r8,r10,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// lhzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_8279977C"))) PPC_WEAK_FUNC(sub_8279977C);
PPC_FUNC_IMPL(__imp__sub_8279977C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799780"))) PPC_WEAK_FUNC(sub_82799780);
PPC_FUNC_IMPL(__imp__sub_82799780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799790"))) PPC_WEAK_FUNC(sub_82799790);
PPC_FUNC_IMPL(__imp__sub_82799790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997A4"))) PPC_WEAK_FUNC(sub_827997A4);
PPC_FUNC_IMPL(__imp__sub_827997A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827997A8"))) PPC_WEAK_FUNC(sub_827997A8);
PPC_FUNC_IMPL(__imp__sub_827997A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997B0"))) PPC_WEAK_FUNC(sub_827997B0);
PPC_FUNC_IMPL(__imp__sub_827997B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-2524
	ctx.r10.s64 = r11.s64 + -2524;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_827997BC"))) PPC_WEAK_FUNC(sub_827997BC);
PPC_FUNC_IMPL(__imp__sub_827997BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997C0"))) PPC_WEAK_FUNC(sub_827997C0);
PPC_FUNC_IMPL(__imp__sub_827997C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997C4"))) PPC_WEAK_FUNC(sub_827997C4);
PPC_FUNC_IMPL(__imp__sub_827997C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827997C8"))) PPC_WEAK_FUNC(sub_827997C8);
PPC_FUNC_IMPL(__imp__sub_827997C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997D0"))) PPC_WEAK_FUNC(sub_827997D0);
PPC_FUNC_IMPL(__imp__sub_827997D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997D4"))) PPC_WEAK_FUNC(sub_827997D4);
PPC_FUNC_IMPL(__imp__sub_827997D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827997D8"))) PPC_WEAK_FUNC(sub_827997D8);
PPC_FUNC_IMPL(__imp__sub_827997D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997E8"))) PPC_WEAK_FUNC(sub_827997E8);
PPC_FUNC_IMPL(__imp__sub_827997E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997EC"))) PPC_WEAK_FUNC(sub_827997EC);
PPC_FUNC_IMPL(__imp__sub_827997EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827997F0"))) PPC_WEAK_FUNC(sub_827997F0);
PPC_FUNC_IMPL(__imp__sub_827997F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799800"))) PPC_WEAK_FUNC(sub_82799800);
PPC_FUNC_IMPL(__imp__sub_82799800) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799808"))) PPC_WEAK_FUNC(sub_82799808);
PPC_FUNC_IMPL(__imp__sub_82799808) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799810"))) PPC_WEAK_FUNC(sub_82799810);
PPC_FUNC_IMPL(__imp__sub_82799810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799814"))) PPC_WEAK_FUNC(sub_82799814);
PPC_FUNC_IMPL(__imp__sub_82799814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799818"))) PPC_WEAK_FUNC(sub_82799818);
PPC_FUNC_IMPL(__imp__sub_82799818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279981C"))) PPC_WEAK_FUNC(sub_8279981C);
PPC_FUNC_IMPL(__imp__sub_8279981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799820"))) PPC_WEAK_FUNC(sub_82799820);
PPC_FUNC_IMPL(__imp__sub_82799820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799824"))) PPC_WEAK_FUNC(sub_82799824);
PPC_FUNC_IMPL(__imp__sub_82799824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799828"))) PPC_WEAK_FUNC(sub_82799828);
PPC_FUNC_IMPL(__imp__sub_82799828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799834"))) PPC_WEAK_FUNC(sub_82799834);
PPC_FUNC_IMPL(__imp__sub_82799834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799838"))) PPC_WEAK_FUNC(sub_82799838);
PPC_FUNC_IMPL(__imp__sub_82799838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279984C"))) PPC_WEAK_FUNC(sub_8279984C);
PPC_FUNC_IMPL(__imp__sub_8279984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799850"))) PPC_WEAK_FUNC(sub_82799850);
PPC_FUNC_IMPL(__imp__sub_82799850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799858"))) PPC_WEAK_FUNC(sub_82799858);
PPC_FUNC_IMPL(__imp__sub_82799858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827998b8
	if (!cr6.eq) goto loc_827998B8;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799890
	if (cr6.eq) goto loc_82799890;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,13556
	ctx.r9.s64 = r11.s64 + 13556;
	// b 0x8279989c
	goto loc_8279989C;
loc_82799890:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,13564
	ctx.r9.s64 = r11.s64 + 13564;
loc_8279989C:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_827998B8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827998C4"))) PPC_WEAK_FUNC(sub_827998C4);
PPC_FUNC_IMPL(__imp__sub_827998C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827998C8"))) PPC_WEAK_FUNC(sub_827998C8);
PPC_FUNC_IMPL(__imp__sub_827998C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827998DC"))) PPC_WEAK_FUNC(sub_827998DC);
PPC_FUNC_IMPL(__imp__sub_827998DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827998E0"))) PPC_WEAK_FUNC(sub_827998E0);
PPC_FUNC_IMPL(__imp__sub_827998E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827998E8"))) PPC_WEAK_FUNC(sub_827998E8);
PPC_FUNC_IMPL(__imp__sub_827998E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82799940
	if (cr6.eq) goto loc_82799940;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82794e68
	sub_82794E68(ctx, base);
	// subf r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x82799928
	if (!cr6.gt) goto loc_82799928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82799928:
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82795280
	sub_82795280(ctx, base);
loc_82799940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82799948"))) PPC_WEAK_FUNC(sub_82799948);
PPC_FUNC_IMPL(__imp__sub_82799948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279994C"))) PPC_WEAK_FUNC(sub_8279994C);
PPC_FUNC_IMPL(__imp__sub_8279994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799950"))) PPC_WEAK_FUNC(sub_82799950);
PPC_FUNC_IMPL(__imp__sub_82799950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r7,33
	ctx.r7.s64 = 33;
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// li r11,0
	r11.s64 = 0;
	// rlwimi r9,r7,22,0,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 22) & 0xFFC00000) | (ctx.r9.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r8,r10,6,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// rlwimi r6,r10,7,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stb r6,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r6.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279998C"))) PPC_WEAK_FUNC(sub_8279998C);
PPC_FUNC_IMPL(__imp__sub_8279998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799990"))) PPC_WEAK_FUNC(sub_82799990);
PPC_FUNC_IMPL(__imp__sub_82799990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827999bc
	if (cr6.eq) goto loc_827999BC;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// bne cr6,0x827999bc
	if (!cr6.eq) goto loc_827999BC;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// bne cr6,0x827999c0
	if (!cr6.eq) goto loc_827999C0;
loc_827999BC:
	// li r10,1000
	ctx.r10.s64 = 1000;
loc_827999C0:
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827999dc
	if (cr6.eq) goto loc_827999DC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,-2496
	ctx.r6.s64 = r11.s64 + -2496;
	// b 0x827999e4
	goto loc_827999E4;
loc_827999DC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,-2516
	ctx.r6.s64 = r11.s64 + -2516;
loc_827999E4:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_827999F4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// divdu r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 / ctx.r8.u64;
	// mulld r5,r5,r8
	ctx.r5.s64 = ctx.r5.s64 * ctx.r8.s64;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divdu r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 / ctx.r8.u64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// bne cr6,0x82799a3c
	if (!cr6.eq) goto loc_82799A3C;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// rotlwi r5,r5,24
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 24);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// srawi r5,r5,25
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 25;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
loc_82799A3C:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lbzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// bne cr6,0x827999f4
	if (!cr6.eq) goto loc_827999F4;
}

__attribute__((alias("__imp__sub_82799A60"))) PPC_WEAK_FUNC(sub_82799A60);
PPC_FUNC_IMPL(__imp__sub_82799A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799A64"))) PPC_WEAK_FUNC(sub_82799A64);
PPC_FUNC_IMPL(__imp__sub_82799A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799A68"))) PPC_WEAK_FUNC(sub_82799A68);
PPC_FUNC_IMPL(__imp__sub_82799A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799a94
	if (cr6.eq) goto loc_82799A94;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// bne cr6,0x82799a94
	if (!cr6.eq) goto loc_82799A94;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// bne cr6,0x82799a98
	if (!cr6.eq) goto loc_82799A98;
loc_82799A94:
	// li r10,1000
	ctx.r10.s64 = 1000;
loc_82799A98:
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82799ab4
	if (cr6.eq) goto loc_82799AB4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,-2496
	ctx.r6.s64 = r11.s64 + -2496;
	// b 0x82799abc
	goto loc_82799ABC;
loc_82799AB4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,-2516
	ctx.r6.s64 = r11.s64 + -2516;
loc_82799ABC:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82799ACC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// divwu r8,r9,r7
	ctx.r8.u32 = ctx.r9.u32 / ctx.r7.u32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divwu r9,r9,r7
	ctx.r9.u32 = ctx.r9.u32 / ctx.r7.u32;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// bne cr6,0x82799b10
	if (!cr6.eq) goto loc_82799B10;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// rotlwi r5,r5,24
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 24);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// srawi r5,r5,25
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 25;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
loc_82799B10:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lbzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// bne cr6,0x82799acc
	if (!cr6.eq) goto loc_82799ACC;
}

__attribute__((alias("__imp__sub_82799B34"))) PPC_WEAK_FUNC(sub_82799B34);
PPC_FUNC_IMPL(__imp__sub_82799B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799B38"))) PPC_WEAK_FUNC(sub_82799B38);
PPC_FUNC_IMPL(__imp__sub_82799B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82799B8C"))) PPC_WEAK_FUNC(sub_82799B8C);
PPC_FUNC_IMPL(__imp__sub_82799B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799B90"))) PPC_WEAK_FUNC(sub_82799B90);
PPC_FUNC_IMPL(__imp__sub_82799B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
}

__attribute__((alias("__imp__sub_82799B9C"))) PPC_WEAK_FUNC(sub_82799B9C);
PPC_FUNC_IMPL(__imp__sub_82799B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799BA0"))) PPC_WEAK_FUNC(sub_82799BA0);
PPC_FUNC_IMPL(__imp__sub_82799BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
}

__attribute__((alias("__imp__sub_82799BB8"))) PPC_WEAK_FUNC(sub_82799BB8);
PPC_FUNC_IMPL(__imp__sub_82799BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799BBC"))) PPC_WEAK_FUNC(sub_82799BBC);
PPC_FUNC_IMPL(__imp__sub_82799BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799BC0"))) PPC_WEAK_FUNC(sub_82799BC0);
PPC_FUNC_IMPL(__imp__sub_82799BC0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799c50
	if (cr6.eq) goto loc_82799C50;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82799c50
	if (cr6.eq) goto loc_82799C50;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82799c28
	if (cr6.eq) goto loc_82799C28;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827998e8
	sub_827998E8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// b 0x82799c88
	goto loc_82799C88;
loc_82799C28:
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82799c88
	if (cr6.eq) goto loc_82799C88;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827998e8
	sub_827998E8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// b 0x82799c88
	goto loc_82799C88;
loc_82799C50:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799c64
	if (cr6.eq) goto loc_82799C64;
	// li r10,45
	ctx.r10.s64 = 45;
	// b 0x82799c78
	goto loc_82799C78;
loc_82799C64:
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82799c88
	if (cr6.eq) goto loc_82799C88;
	// li r10,43
	ctx.r10.s64 = 43;
loc_82799C78:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82799C88:
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

__attribute__((alias("__imp__sub_82799C9C"))) PPC_WEAK_FUNC(sub_82799C9C);
PPC_FUNC_IMPL(__imp__sub_82799C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799CA0"))) PPC_WEAK_FUNC(sub_82799CA0);
PPC_FUNC_IMPL(__imp__sub_82799CA0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bne cr6,0x82799e9c
	if (!cr6.eq) goto loc_82799E9C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r5,32
	ctx.r5.s64 = 32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82799d1c
	if (cr6.lt) goto loc_82799D1C;
	// beq cr6,0x82799d00
	if (cr6.eq) goto loc_82799D00;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82799d20
	if (!cr6.lt) goto loc_82799D20;
	// lbz r11,22(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r5,r11,103
	ctx.r5.s64 = r11.s64 + 103;
	// b 0x82799d20
	goto loc_82799D20;
loc_82799D00:
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r5,r11,101
	ctx.r5.s64 = r11.s64 + 101;
	// b 0x82799d20
	goto loc_82799D20;
loc_82799D1C:
	// li r5,102
	ctx.r5.s64 = 102;
loc_82799D20:
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// li r8,37
	ctx.r8.s64 = 37;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82799d4c
	if (cr6.eq) goto loc_82799D4C;
	// li r10,43
	ctx.r10.s64 = 43;
	// addi r11,r1,83
	r11.s64 = ctx.r1.s64 + 83;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
loc_82799D4C:
	// lbz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82799d68
	if (cr6.eq) goto loc_82799D68;
	// li r9,35
	ctx.r9.s64 = 35;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82799D68:
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82799d80
	if (cr6.eq) goto loc_82799D80;
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82799D80:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82799d98
	if (cr6.eq) goto loc_82799D98;
	// li r10,45
	ctx.r10.s64 = 45;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82799D98:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,96
	cr6.compare<uint32_t>(ctx.r9.u32, 96, xer);
	// bne cr6,0x82799db4
	if (!cr6.eq) goto loc_82799DB4;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82799DB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r30,46
	r30.s64 = 46;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r6,r10,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x82799e04
	if (cr6.eq) goto loc_82799E04;
	// li r9,100
	ctx.r9.s64 = 100;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// li r29,0
	r29.s64 = 0;
	// stbu r9,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// rlwinm r7,r10,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// stbu r30,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, r30.u8);
	r11.u32 = ea;
	// stbu r8,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	r11.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	r11.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x82799e2c
	goto loc_82799E2C;
loc_82799E04:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// li r9,100
	ctx.r9.s64 = 100;
	// stbu r8,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r10,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// stbu r9,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	r11.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r7,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r7.u8);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_82799E2C:
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,348
	ctx.r4.s64 = 348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799e90
	if (cr6.eq) goto loc_82799E90;
loc_82799E60:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,44
	cr6.compare<uint32_t>(ctx.r10.u32, 44, xer);
	// beq cr6,0x82799e8c
	if (cr6.eq) goto loc_82799E8C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82799e60
	if (!cr6.eq) goto loc_82799E60;
	// b 0x82799e90
	goto loc_82799E90;
loc_82799E8C:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
loc_82799E90:
	// li r11,1
	r11.s64 = 1;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_82799E9C:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82799EA8"))) PPC_WEAK_FUNC(sub_82799EA8);
PPC_FUNC_IMPL(__imp__sub_82799EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82799EAC"))) PPC_WEAK_FUNC(sub_82799EAC);
PPC_FUNC_IMPL(__imp__sub_82799EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799EB0"))) PPC_WEAK_FUNC(sub_82799EB0);
PPC_FUNC_IMPL(__imp__sub_82799EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82799F04"))) PPC_WEAK_FUNC(sub_82799F04);
PPC_FUNC_IMPL(__imp__sub_82799F04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799F08"))) PPC_WEAK_FUNC(sub_82799F08);
PPC_FUNC_IMPL(__imp__sub_82799F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799F10"))) PPC_WEAK_FUNC(sub_82799F10);
PPC_FUNC_IMPL(__imp__sub_82799F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799F2C"))) PPC_WEAK_FUNC(sub_82799F2C);
PPC_FUNC_IMPL(__imp__sub_82799F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799F30"))) PPC_WEAK_FUNC(sub_82799F30);
PPC_FUNC_IMPL(__imp__sub_82799F30) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799fc0
	if (cr6.eq) goto loc_82799FC0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82799fc0
	if (cr6.eq) goto loc_82799FC0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82799f98
	if (cr6.eq) goto loc_82799F98;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827998e8
	sub_827998E8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82799F98:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799ff4
	if (cr6.eq) goto loc_82799FF4;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827998e8
	sub_827998E8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82799FC0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799fd4
	if (cr6.eq) goto loc_82799FD4;
	// li r10,45
	ctx.r10.s64 = 45;
	// b 0x82799fe4
	goto loc_82799FE4;
loc_82799FD4:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82799ff4
	if (cr6.eq) goto loc_82799FF4;
	// li r10,43
	ctx.r10.s64 = 43;
loc_82799FE4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82799FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82799FF8"))) PPC_WEAK_FUNC(sub_82799FF8);
PPC_FUNC_IMPL(__imp__sub_82799FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82799FFC"))) PPC_WEAK_FUNC(sub_82799FFC);
PPC_FUNC_IMPL(__imp__sub_82799FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A000"))) PPC_WEAK_FUNC(sub_8279A000);
PPC_FUNC_IMPL(__imp__sub_8279A000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A014"))) PPC_WEAK_FUNC(sub_8279A014);
PPC_FUNC_IMPL(__imp__sub_8279A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A018"))) PPC_WEAK_FUNC(sub_8279A018);
PPC_FUNC_IMPL(__imp__sub_8279A018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A02C"))) PPC_WEAK_FUNC(sub_8279A02C);
PPC_FUNC_IMPL(__imp__sub_8279A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A030"))) PPC_WEAK_FUNC(sub_8279A030);
PPC_FUNC_IMPL(__imp__sub_8279A030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A048"))) PPC_WEAK_FUNC(sub_8279A048);
PPC_FUNC_IMPL(__imp__sub_8279A048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A05C"))) PPC_WEAK_FUNC(sub_8279A05C);
PPC_FUNC_IMPL(__imp__sub_8279A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A060"))) PPC_WEAK_FUNC(sub_8279A060);
PPC_FUNC_IMPL(__imp__sub_8279A060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A078"))) PPC_WEAK_FUNC(sub_8279A078);
PPC_FUNC_IMPL(__imp__sub_8279A078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A08C"))) PPC_WEAK_FUNC(sub_8279A08C);
PPC_FUNC_IMPL(__imp__sub_8279A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A090"))) PPC_WEAK_FUNC(sub_8279A090);
PPC_FUNC_IMPL(__imp__sub_8279A090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-2524
	ctx.r10.s64 = r11.s64 + -2524;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A0A0"))) PPC_WEAK_FUNC(sub_8279A0A0);
PPC_FUNC_IMPL(__imp__sub_8279A0A0) {
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
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279a0f8
	if (cr6.eq) goto loc_8279A0F8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_8279A0F8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279A114"))) PPC_WEAK_FUNC(sub_8279A114);
PPC_FUNC_IMPL(__imp__sub_8279A114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A118"))) PPC_WEAK_FUNC(sub_8279A118);
PPC_FUNC_IMPL(__imp__sub_8279A118) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279a168
	if (!cr6.eq) goto loc_8279A168;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8279a0a0
	sub_8279A0A0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_8279A168:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279A178"))) PPC_WEAK_FUNC(sub_8279A178);
PPC_FUNC_IMPL(__imp__sub_8279A178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A17C"))) PPC_WEAK_FUNC(sub_8279A17C);
PPC_FUNC_IMPL(__imp__sub_8279A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A180"))) PPC_WEAK_FUNC(sub_8279A180);
PPC_FUNC_IMPL(__imp__sub_8279A180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A194"))) PPC_WEAK_FUNC(sub_8279A194);
PPC_FUNC_IMPL(__imp__sub_8279A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A198"))) PPC_WEAK_FUNC(sub_8279A198);
PPC_FUNC_IMPL(__imp__sub_8279A198) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A1A0"))) PPC_WEAK_FUNC(sub_8279A1A0);
PPC_FUNC_IMPL(__imp__sub_8279A1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8279a230
	if (cr6.eq) goto loc_8279A230;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,1
	r30.s64 = 1;
	// addi r31,r11,-10752
	r31.s64 = r11.s64 + -10752;
loc_8279A1D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279a23c
	if (cr6.eq) goto loc_8279A23C;
	// rlwinm r11,r3,25,23,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FE;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279a23c
	if (cr6.eq) goto loc_8279A23C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8279a224
	if (cr6.eq) goto loc_8279A224;
	// rlwinm r9,r10,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// slw r8,r30,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe. r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279a23c
	if (cr0.eq) goto loc_8279A23C;
loc_8279A224:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x8279a1d0
	if (cr6.lt) goto loc_8279A1D0;
loc_8279A230:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8279A23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8279A244"))) PPC_WEAK_FUNC(sub_8279A244);
PPC_FUNC_IMPL(__imp__sub_8279A244) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279A248"))) PPC_WEAK_FUNC(sub_8279A248);
PPC_FUNC_IMPL(__imp__sub_8279A248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2396
	ctx.r9.s64 = ctx.r10.s64 + -2396;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// beq cr6,0x8279a288
	if (cr6.eq) goto loc_8279A288;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8279A270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279a270
	if (!cr6.eq) goto loc_8279A270;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8279A288:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A290"))) PPC_WEAK_FUNC(sub_8279A290);
PPC_FUNC_IMPL(__imp__sub_8279A290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2396
	ctx.r9.s64 = ctx.r10.s64 + -2396;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A2BC"))) PPC_WEAK_FUNC(sub_8279A2BC);
PPC_FUNC_IMPL(__imp__sub_8279A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A2C0"))) PPC_WEAK_FUNC(sub_8279A2C0);
PPC_FUNC_IMPL(__imp__sub_8279A2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2396
	ctx.r9.s64 = ctx.r10.s64 + -2396;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r4,1
	r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A300"))) PPC_WEAK_FUNC(sub_8279A300);
PPC_FUNC_IMPL(__imp__sub_8279A300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2396
	ctx.r9.s64 = ctx.r10.s64 + -2396;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// beq cr6,0x8279a340
	if (cr6.eq) goto loc_8279A340;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8279A328:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279a328
	if (!cr6.eq) goto loc_8279A328;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8279A340:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
}

__attribute__((alias("__imp__sub_8279A344"))) PPC_WEAK_FUNC(sub_8279A344);
PPC_FUNC_IMPL(__imp__sub_8279A344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A348"))) PPC_WEAK_FUNC(sub_8279A348);
PPC_FUNC_IMPL(__imp__sub_8279A348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2396
	ctx.r9.s64 = r11.s64 + -2396;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8279A370"))) PPC_WEAK_FUNC(sub_8279A370);
PPC_FUNC_IMPL(__imp__sub_8279A370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A374"))) PPC_WEAK_FUNC(sub_8279A374);
PPC_FUNC_IMPL(__imp__sub_8279A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A378"))) PPC_WEAK_FUNC(sub_8279A378);
PPC_FUNC_IMPL(__imp__sub_8279A378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2396
	ctx.r9.s64 = r11.s64 + -2396;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r4,1
	r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
}

__attribute__((alias("__imp__sub_8279A3B4"))) PPC_WEAK_FUNC(sub_8279A3B4);
PPC_FUNC_IMPL(__imp__sub_8279A3B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A3B8"))) PPC_WEAK_FUNC(sub_8279A3B8);
PPC_FUNC_IMPL(__imp__sub_8279A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// rlwimi r10,r5,7,17,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 7) & 0x7F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF807F);
	// addi r8,r9,-2324
	ctx.r8.s64 = ctx.r9.s64 + -2324;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r7,r7,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_8279A3EC"))) PPC_WEAK_FUNC(sub_8279A3EC);
PPC_FUNC_IMPL(__imp__sub_8279A3EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A3F0"))) PPC_WEAK_FUNC(sub_8279A3F0);
PPC_FUNC_IMPL(__imp__sub_8279A3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r5,r5,-2244
	ctx.r5.s64 = ctx.r5.s64 + -2244;
	// lbz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r8,r8,-2256
	ctx.r8.s64 = ctx.r8.s64 + -2256;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// rlwimi r7,r10,7,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stb r7,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r7.u8);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A49C"))) PPC_WEAK_FUNC(sub_8279A49C);
PPC_FUNC_IMPL(__imp__sub_8279A49C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A4A0"))) PPC_WEAK_FUNC(sub_8279A4A0);
PPC_FUNC_IMPL(__imp__sub_8279A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r7,r5,-2244
	ctx.r7.s64 = ctx.r5.s64 + -2244;
	// lbz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r5,r9,-2256
	ctx.r5.s64 = ctx.r9.s64 + -2256;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r9,r8,28,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// clrlwi r8,r6,26
	ctx.r8.u64 = ctx.r6.u32 & 0x3F;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// clrldi r6,r4,32
	ctx.r6.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A54C"))) PPC_WEAK_FUNC(sub_8279A54C);
PPC_FUNC_IMPL(__imp__sub_8279A54C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A550"))) PPC_WEAK_FUNC(sub_8279A550);
PPC_FUNC_IMPL(__imp__sub_8279A550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r5,r5,-2244
	ctx.r5.s64 = ctx.r5.s64 + -2244;
	// lbz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r8,r8,-2256
	ctx.r8.s64 = ctx.r8.s64 + -2256;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// rlwimi r7,r10,7,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stb r7,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r7.u8);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A5FC"))) PPC_WEAK_FUNC(sub_8279A5FC);
PPC_FUNC_IMPL(__imp__sub_8279A5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A600"))) PPC_WEAK_FUNC(sub_8279A600);
PPC_FUNC_IMPL(__imp__sub_8279A600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r7,r5,-2244
	ctx.r7.s64 = ctx.r5.s64 + -2244;
	// lbz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r5,r9,-2256
	ctx.r5.s64 = ctx.r9.s64 + -2256;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r9,r8,28,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// clrlwi r8,r6,26
	ctx.r8.u64 = ctx.r6.u32 & 0x3F;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// clrldi r6,r4,32
	ctx.r6.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A6AC"))) PPC_WEAK_FUNC(sub_8279A6AC);
PPC_FUNC_IMPL(__imp__sub_8279A6AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A6B0"))) PPC_WEAK_FUNC(sub_8279A6B0);
PPC_FUNC_IMPL(__imp__sub_8279A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r7,r5,-2244
	ctx.r7.s64 = ctx.r5.s64 + -2244;
	// lbz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r5,r9,-2256
	ctx.r5.s64 = ctx.r9.s64 + -2256;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r9,r8,28,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// ori r8,r6,192
	ctx.r8.u64 = ctx.r6.u64 | 192;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// std r4,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r4.u64);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A758"))) PPC_WEAK_FUNC(sub_8279A758);
PPC_FUNC_IMPL(__imp__sub_8279A758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A75C"))) PPC_WEAK_FUNC(sub_8279A75C);
PPC_FUNC_IMPL(__imp__sub_8279A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A760"))) PPC_WEAK_FUNC(sub_8279A760);
PPC_FUNC_IMPL(__imp__sub_8279A760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addi r7,r7,-22596
	ctx.r7.s64 = ctx.r7.s64 + -22596;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rlwimi r9,r10,6,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r5,r5,-2244
	ctx.r5.s64 = ctx.r5.s64 + -2244;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r8,-2256
	ctx.r8.s64 = ctx.r8.s64 + -2256;
	// lbz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// rlwimi r7,r10,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// std r4,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r4.u64);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stb r7,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r7.u8);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A808"))) PPC_WEAK_FUNC(sub_8279A808);
PPC_FUNC_IMPL(__imp__sub_8279A808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A80C"))) PPC_WEAK_FUNC(sub_8279A80C);
PPC_FUNC_IMPL(__imp__sub_8279A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A810"))) PPC_WEAK_FUNC(sub_8279A810);
PPC_FUNC_IMPL(__imp__sub_8279A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r9,22(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r9,r10,7,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// stb r9,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r9.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r8,r31,-2244
	ctx.r8.s64 = r31.s64 + -2244;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// rlwimi r4,r10,7,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A8BC"))) PPC_WEAK_FUNC(sub_8279A8BC);
PPC_FUNC_IMPL(__imp__sub_8279A8BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A8C0"))) PPC_WEAK_FUNC(sub_8279A8C0);
PPC_FUNC_IMPL(__imp__sub_8279A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r9,r9,-2244
	ctx.r9.s64 = ctx.r9.s64 + -2244;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r8,r6,28,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// clrlwi r6,r4,26
	ctx.r6.u64 = ctx.r4.u32 & 0x3F;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stb r6,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r6.u8);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// std r5,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r5.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279A96C"))) PPC_WEAK_FUNC(sub_8279A96C);
PPC_FUNC_IMPL(__imp__sub_8279A96C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A970"))) PPC_WEAK_FUNC(sub_8279A970);
PPC_FUNC_IMPL(__imp__sub_8279A970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r9,22(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r9,r10,7,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// stb r9,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r9.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r8,r31,-2244
	ctx.r8.s64 = r31.s64 + -2244;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// rlwimi r4,r10,7,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279AA1C"))) PPC_WEAK_FUNC(sub_8279AA1C);
PPC_FUNC_IMPL(__imp__sub_8279AA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AA20"))) PPC_WEAK_FUNC(sub_8279AA20);
PPC_FUNC_IMPL(__imp__sub_8279AA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r9,r9,-2244
	ctx.r9.s64 = ctx.r9.s64 + -2244;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r8,r6,28,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// clrlwi r6,r4,26
	ctx.r6.u64 = ctx.r4.u32 & 0x3F;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stb r6,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r6.u8);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// std r5,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r5.u64);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279AACC"))) PPC_WEAK_FUNC(sub_8279AACC);
PPC_FUNC_IMPL(__imp__sub_8279AACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AAD0"))) PPC_WEAK_FUNC(sub_8279AAD0);
PPC_FUNC_IMPL(__imp__sub_8279AAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r9,r9,-2244
	ctx.r9.s64 = ctx.r9.s64 + -2244;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r8,r6,28,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// ori r6,r4,192
	ctx.r6.u64 = ctx.r4.u64 | 192;
	// std r5,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r5.u64);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stb r6,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r6.u8);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279AB78"))) PPC_WEAK_FUNC(sub_8279AB78);
PPC_FUNC_IMPL(__imp__sub_8279AB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AB7C"))) PPC_WEAK_FUNC(sub_8279AB7C);
PPC_FUNC_IMPL(__imp__sub_8279AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AB80"))) PPC_WEAK_FUNC(sub_8279AB80);
PPC_FUNC_IMPL(__imp__sub_8279AB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r9,22(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r9,r10,7,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// stb r9,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r9.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r8,r31,-2244
	ctx.r8.s64 = r31.s64 + -2244;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// rlwimi r4,r10,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// addi r7,r7,-2256
	ctx.r7.s64 = ctx.r7.s64 + -2256;
	// std r5,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r5.u64);
	// rlwimi r31,r6,28,0,4
	r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF8000000) | (r31.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279AC28"))) PPC_WEAK_FUNC(sub_8279AC28);
PPC_FUNC_IMPL(__imp__sub_8279AC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AC2C"))) PPC_WEAK_FUNC(sub_8279AC2C);
PPC_FUNC_IMPL(__imp__sub_8279AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AC30"))) PPC_WEAK_FUNC(sub_8279AC30);
PPC_FUNC_IMPL(__imp__sub_8279AC30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279afe4
	if (!cr6.eq) goto loc_8279AFE4;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279ac6c
	if (!cr6.eq) goto loc_8279AC6C;
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x8279ace8
	if (cr6.eq) goto loc_8279ACE8;
loc_8279AC6C:
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279aca8
	if (cr6.eq) goto loc_8279ACA8;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// sradi r9,r11,63
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r9.s64 = r11.s64 >> 63;
	// rlwinm r7,r10,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// xor r8,r11,r9
	ctx.r8.u64 = r11.u64 ^ ctx.r9.u64;
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// bl 0x82799990
	sub_82799990(ctx, base);
	// b 0x8279ace8
	goto loc_8279ACE8;
loc_8279ACA8:
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279acd4
	if (cr6.eq) goto loc_8279ACD4;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// rlwinm r7,r10,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// b 0x8279ace4
	goto loc_8279ACE4;
loc_8279ACD4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// rlwinm r7,r11,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1F;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8279ACE4:
	// bl 0x82799a68
	sub_82799A68(ctx, base);
loc_8279ACE8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8279ad2c
	if (!cr6.lt) goto loc_8279AD2C;
loc_8279AD08:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279ad08
	if (cr6.lt) goto loc_8279AD08;
loc_8279AD2C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279ad4c
	if (cr6.eq) goto loc_8279AD4C;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x8279ad58
	if (!cr6.eq) goto loc_8279AD58;
loc_8279AD4C:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// rlwimi r11,r26,6,0,30
	r11.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
loc_8279AD58:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x8279ae08
	if (!cr6.eq) goto loc_8279AE08;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, xer);
	// bne cr6,0x8279ade8
	if (!cr6.eq) goto loc_8279ADE8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r10,r11,76
	ctx.r10.s64 = r11.s64 + 76;
loc_8279AD84:
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279ada8
	if (!cr6.eq) goto loc_8279ADA8;
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279adac
	if (cr6.eq) goto loc_8279ADAC;
loc_8279ADA8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8279ADAC:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r9,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x8279ade8
	if (!cr6.lt) goto loc_8279ADE8;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rotlwi r8,r9,24
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r7,r8,25
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 25;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// b 0x8279ad84
	goto loc_8279AD84;
loc_8279ADE8:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x8279adfc
	if (cr6.lt) goto loc_8279ADFC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279ADFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82799bc0
	sub_82799BC0(ctx, base);
	// b 0x8279ae70
	goto loc_8279AE70;
loc_8279AE08:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x8279ae18
	if (cr6.eq) goto loc_8279AE18;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x8279ae70
	if (!cr6.eq) goto loc_8279AE70;
loc_8279AE18:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x8279ae70
	if (cr6.eq) goto loc_8279AE70;
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279ae70
	if (cr6.eq) goto loc_8279AE70;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x8279ae60
	if (!cr6.eq) goto loc_8279AE60;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// rlwinm r10,r7,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r6,r10,120
	ctx.r6.s64 = ctx.r10.s64 + 120;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
loc_8279AE60:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_8279AE70:
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// li r28,32
	r28.s64 = 32;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279aecc
	if (cr6.eq) goto loc_8279AECC;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279aecc
	if (!cr6.eq) goto loc_8279AECC;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// rlwimi r11,r26,6,0,30
	r11.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279aecc
	if (cr6.eq) goto loc_8279AECC;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x8279aecc
	if (cr6.lt) goto loc_8279AECC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
loc_8279AECC:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// subf r11,r4,r31
	r11.s64 = r31.s64 - ctx.r4.s64;
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// addi r30,r11,76
	r30.s64 = r11.s64 + 76;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279af80
	if (cr6.eq) goto loc_8279AF80;
	// rlwinm r11,r11,10,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8279afe0
	if (!cr6.lt) goto loc_8279AFE0;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// rlwinm r8,r9,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x8279afe0
	if (!cr6.lt) goto loc_8279AFE0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
loc_8279AF30:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r7,r8,0,0,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8279af5c
	if (cr6.eq) goto loc_8279AF5C;
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// rotlwi r7,r8,24
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// srawi r6,r7,25
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 25;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stb r5,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r5.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x8279af60
	goto loc_8279AF60;
loc_8279AF5C:
	// stbu r28,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, r28.u8);
	r11.u32 = ea;
loc_8279AF60:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,10,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1F;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8279af30
	if (cr6.lt) goto loc_8279AF30;
	// stb r26,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8279AF80:
	// rlwinm r9,r11,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1F;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8279afe0
	if (!cr6.lt) goto loc_8279AFE0;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
loc_8279AF94:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r8,r11,0,0,4
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF8000000;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// beq cr6,0x8279afc8
	if (cr6.eq) goto loc_8279AFC8;
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// rotlwi r7,r8,24
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// srawi r6,r7,25
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 25;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// b 0x8279afcc
	goto loc_8279AFCC;
loc_8279AFC8:
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
loc_8279AFCC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1F;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279af94
	if (cr6.lt) goto loc_8279AF94;
loc_8279AFE0:
	// stb r26,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r26.u8);
loc_8279AFE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8279AFE8"))) PPC_WEAK_FUNC(sub_8279AFE8);
PPC_FUNC_IMPL(__imp__sub_8279AFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8279AFEC"))) PPC_WEAK_FUNC(sub_8279AFEC);
PPC_FUNC_IMPL(__imp__sub_8279AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AFF0"))) PPC_WEAK_FUNC(sub_8279AFF0);
PPC_FUNC_IMPL(__imp__sub_8279AFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lbz r31,22(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r6,r8,22,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// rlwimi r4,r10,6,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rlwimi r31,r10,7,0,27
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (r31.u64 & 0xFFFFFFFF0000000F);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r8,r7,-22596
	ctx.r8.s64 = ctx.r7.s64 + -22596;
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// addi r10,r3,391
	ctx.r10.s64 = ctx.r3.s64 + 391;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r7,r5,-2164
	ctx.r7.s64 = ctx.r5.s64 + -2164;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// addi r6,r9,-2176
	ctx.r6.s64 = ctx.r9.s64 + -2176;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stfd f1,32(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f1.u64);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stb r11,391(r3)
	PPC_STORE_U8(ctx.r3.u32 + 391, r11.u8);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r4,r5,28,0,4
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 28) & 0xF8000000) | (ctx.r4.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279B094"))) PPC_WEAK_FUNC(sub_8279B094);
PPC_FUNC_IMPL(__imp__sub_8279B094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B098"))) PPC_WEAK_FUNC(sub_8279B098);
PPC_FUNC_IMPL(__imp__sub_8279B098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2468
	ctx.r9.s64 = ctx.r10.s64 + -2468;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lbz r9,22(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r8,22,0,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r7.u64 & 0xFFFFFFFF003FFFFF);
	// lis r31,-32248
	r31.s64 = -2113404928;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwimi r5,r10,6,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// rlwimi r9,r10,7,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r8,r6,-22596
	ctx.r8.s64 = ctx.r6.s64 + -22596;
	// stb r5,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r5.u8);
	// addi r7,r4,-2164
	ctx.r7.s64 = ctx.r4.s64 + -2164;
	// stb r9,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r9.u8);
	// addi r10,r3,391
	ctx.r10.s64 = ctx.r3.s64 + 391;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r6,r31,-2176
	ctx.r6.s64 = r31.s64 + -2176;
	// stfd f1,32(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f1.u64);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stb r11,391(r3)
	PPC_STORE_U8(ctx.r3.u32 + 391, r11.u8);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r4,r5,28,0,4
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 28) & 0xF8000000) | (ctx.r4.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8279B13C"))) PPC_WEAK_FUNC(sub_8279B13C);
PPC_FUNC_IMPL(__imp__sub_8279B13C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B140"))) PPC_WEAK_FUNC(sub_8279B140);
PPC_FUNC_IMPL(__imp__sub_8279B140) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2092
	ctx.r9.s64 = ctx.r10.s64 + -2092;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// bne cr6,0x8279b1c4
	if (!cr6.eq) goto loc_8279B1C4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279b1c4
	if (cr6.eq) goto loc_8279B1C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_8279B1C4:
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

__attribute__((alias("__imp__sub_8279B1D8"))) PPC_WEAK_FUNC(sub_8279B1D8);
PPC_FUNC_IMPL(__imp__sub_8279B1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B1DC"))) PPC_WEAK_FUNC(sub_8279B1DC);
PPC_FUNC_IMPL(__imp__sub_8279B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B1E0"))) PPC_WEAK_FUNC(sub_8279B1E0);
PPC_FUNC_IMPL(__imp__sub_8279B1E0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8279b234
	if (!cr6.gt) goto loc_8279B234;
loc_8279B208:
	// lbzx r11,r28,r30
	r11.u64 = PPC_LOAD_U8(r28.u32 + r30.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279b234
	if (cr6.eq) goto loc_8279B234;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8279b234
	if (cr6.eq) goto loc_8279B234;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8279b208
	if (cr6.lt) goto loc_8279B208;
loc_8279B234:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8279b2bc
	if (cr6.eq) goto loc_8279B2BC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8279b2bc
	if (cr6.eq) goto loc_8279B2BC;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279b2bc
	if (cr6.eq) goto loc_8279B2BC;
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// ble cr6,0x8279b284
	if (!cr6.gt) goto loc_8279B284;
loc_8279B264:
	// lbzx r11,r28,r31
	r11.u64 = PPC_LOAD_U8(r28.u32 + r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279b284
	if (cr6.eq) goto loc_8279B284;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8279b264
	if (cr6.lt) goto loc_8279B264;
loc_8279B284:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x8279b298
	if (!cr6.lt) goto loc_8279B298;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279B298:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8279B2BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8279B2C4"))) PPC_WEAK_FUNC(sub_8279B2C4);
PPC_FUNC_IMPL(__imp__sub_8279B2C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8279B2C8"))) PPC_WEAK_FUNC(sub_8279B2C8);
PPC_FUNC_IMPL(__imp__sub_8279B2C8) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279b388
	if (cr6.eq) goto loc_8279B388;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
loc_8279B2F0:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,46
	cr6.compare<uint32_t>(ctx.r9.u32, 46, xer);
	// beq cr6,0x8279b390
	if (cr6.eq) goto loc_8279B390;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279b2f0
	if (cr6.lt) goto loc_8279B2F0;
	// li r29,-1
	r29.s64 = -1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,58
	ctx.r5.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1F;
	// bl 0x8279b1e0
	sub_8279B1E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// rlwimi r11,r3,22,5,9
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 22) & 0x7C00000) | (r11.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// blt cr6,0x8279b388
	if (cr6.lt) goto loc_8279B388;
	// clrlwi r10,r11,5
	ctx.r10.u64 = r11.u32 & 0x7FFFFFF;
	// li r11,1
	r11.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x8279b354
	if (!cr6.lt) goto loc_8279B354;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279B354:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r5,58
	ctx.r5.s64 = 58;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r8,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// bl 0x8279b1e0
	sub_8279B1E0(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwimi r7,r3,27,0,4
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 27) & 0xF8000000) | (ctx.r7.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
loc_8279B388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8279B390:
	// mr r29,r11
	r29.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8279B394"))) PPC_WEAK_FUNC(sub_8279B394);
PPC_FUNC_IMPL(__imp__sub_8279B394) {
	PPC_FUNC_PROLOGUE();
	// b 0x8279b310
	// ERROR 8279B310
	return;
}

__attribute__((alias("__imp__sub_8279B398"))) PPC_WEAK_FUNC(sub_8279B398);
PPC_FUNC_IMPL(__imp__sub_8279B398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8279b3f8
	if (cr6.eq) goto loc_8279B3F8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8279B3B0:
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8279b3c4
	if (!cr6.lt) goto loc_8279B3C4;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b3d0
	goto loc_8279B3D0;
loc_8279B3C4:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B3D0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8279b3e8
	if (!cr6.eq) goto loc_8279B3E8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8279b400
	if (cr6.eq) goto loc_8279B400;
loc_8279B3E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x8279b3b0
	if (cr6.lt) goto loc_8279B3B0;
loc_8279B3F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8279B400:
	// stb r6,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r6.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-12(r1)
	PPC_STORE_U64(ctx.r1.u32 + -12, ctx.r9.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8279B42C"))) PPC_WEAK_FUNC(sub_8279B42C);
PPC_FUNC_IMPL(__imp__sub_8279B42C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B430"))) PPC_WEAK_FUNC(sub_8279B430);
PPC_FUNC_IMPL(__imp__sub_8279B430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,-1
	r11.s64 = -1;
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bge cr6,0x8279b4dc
	if (!cr6.lt) goto loc_8279B4DC;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8279B45C:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8279b470
	if (!cr6.lt) goto loc_8279B470;
	// add r11,r10,r8
	r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b47c
	goto loc_8279B47C;
loc_8279B470:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B47C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8279b4b4
	if (!cr6.eq) goto loc_8279B4B4;
	// ld r11,4(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 4);
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lbz r11,-11(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -11);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// beq cr6,0x8279b4e4
	if (cr6.eq) goto loc_8279B4E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279b4cc
	if (cr6.eq) goto loc_8279B4CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8279b4cc
	goto loc_8279B4CC;
loc_8279B4B4:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279b4cc
	if (cr6.eq) goto loc_8279B4CC;
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r11.u16);
loc_8279B4CC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8279b45c
	if (cr6.lt) goto loc_8279B45C;
loc_8279B4DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8279B4E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279b4f8
	if (cr6.eq) goto loc_8279B4F8;
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r11.u16);
loc_8279B4F8:
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8279B500"))) PPC_WEAK_FUNC(sub_8279B500);
PPC_FUNC_IMPL(__imp__sub_8279B500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B504"))) PPC_WEAK_FUNC(sub_8279B504);
PPC_FUNC_IMPL(__imp__sub_8279B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B508"))) PPC_WEAK_FUNC(sub_8279B508);
PPC_FUNC_IMPL(__imp__sub_8279B508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8279b544
	if (!cr6.lt) goto loc_8279B544;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// b 0x8279b55c
	goto loc_8279B55C;
loc_8279B544:
	// addi r9,r11,-16
	ctx.r9.s64 = r11.s64 + -16;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8279B55C:
	// ld r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bge cr6,0x8279b58c
	if (!cr6.lt) goto loc_8279B58C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b5a4
	goto loc_8279B5A4;
loc_8279B58C:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8279B5A4:
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,2
	ctx.r9.s64 = 2;
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r8,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r8.u64);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// beq cr6,0x8279b5f0
	if (cr6.eq) goto loc_8279B5F0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279B5F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8279B5FC"))) PPC_WEAK_FUNC(sub_8279B5FC);
PPC_FUNC_IMPL(__imp__sub_8279B5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B600"))) PPC_WEAK_FUNC(sub_8279B600);
PPC_FUNC_IMPL(__imp__sub_8279B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8279b638
	if (!cr6.lt) goto loc_8279B638;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b650
	goto loc_8279B650;
loc_8279B638:
	// addi r11,r23,-16
	r11.s64 = r23.s64 + -16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8279B650:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279bea0
	if (!cr6.eq) goto loc_8279BEA0;
	// cmplwi cr6,r23,16
	cr6.compare<uint32_t>(r23.u32, 16, xer);
	// bge cr6,0x8279b67c
	if (!cr6.lt) goto loc_8279B67C;
	// rlwinm r11,r23,1,0,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	r11.u64 = r23.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b694
	goto loc_8279B694;
loc_8279B67C:
	// addi r11,r23,-16
	r11.s64 = r23.s64 + -16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8279B694:
	// lwz r24,4(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r21,r3,24
	r21.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8279be80
	if (cr6.eq) goto loc_8279BE80;
	// rlwinm r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279b8d4
	if (cr6.eq) goto loc_8279B8D4;
	// addi r27,r23,-1
	r27.s64 = r23.s64 + -1;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x8279b8a8
	if (cr6.eq) goto loc_8279B8A8;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,4
	r25.s64 = 4;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,-2028
	r26.s64 = r11.s64 + -2028;
loc_8279B6F0:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279b8a8
	if (!cr6.eq) goto loc_8279B8A8;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bge cr6,0x8279b710
	if (!cr6.lt) goto loc_8279B710;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b71c
	goto loc_8279B71C;
loc_8279B710:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B71C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279b830
	if (cr6.eq) goto loc_8279B830;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279b898
	if (!cr6.eq) goto loc_8279B898;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bge cr6,0x8279b744
	if (!cr6.lt) goto loc_8279B744;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b750
	goto loc_8279B750;
loc_8279B744:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B750:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279b784
	if (cr6.eq) goto loc_8279B784;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// b 0x8279b880
	goto loc_8279B880;
loc_8279B784:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r3,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279b7d0
	if (cr6.eq) goto loc_8279B7D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8279b7d0
	if (!cr6.eq) goto loc_8279B7D0;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// b 0x8279b880
	goto loc_8279B880;
loc_8279B7D0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279b898
	if (!cr6.eq) goto loc_8279B898;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8279b88c
	goto loc_8279B88C;
loc_8279B830:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bge cr6,0x8279b844
	if (!cr6.lt) goto loc_8279B844;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b850
	goto loc_8279B850;
loc_8279B844:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B850:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279b898
	if (!cr6.eq) goto loc_8279B898;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_8279B880:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8279B88C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,1
	r28.s64 = 1;
loc_8279B898:
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x8279b6f0
	if (!cr6.eq) goto loc_8279B6F0;
loc_8279B8A8:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279b8d4
	if (!cr6.eq) goto loc_8279B8D4;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279B8D4:
	// clrlwi r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279ba78
	if (cr6.eq) goto loc_8279BA78;
	// addi r28,r23,-1
	r28.s64 = r23.s64 + -1;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8279ba4c
	if (cr6.eq) goto loc_8279BA4C;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8279B8FC:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279ba4c
	if (!cr6.eq) goto loc_8279BA4C;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279b91c
	if (!cr6.lt) goto loc_8279B91C;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b928
	goto loc_8279B928;
loc_8279B91C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B928:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279b9d4
	if (cr6.eq) goto loc_8279B9D4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279ba3c
	if (!cr6.eq) goto loc_8279BA3C;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279b950
	if (!cr6.lt) goto loc_8279B950;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b95c
	goto loc_8279B95C;
loc_8279B950:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B95C:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8279ba3c
	if (!cr6.eq) goto loc_8279BA3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8279ba30
	goto loc_8279BA30;
loc_8279B9D4:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279b9e8
	if (!cr6.lt) goto loc_8279B9E8;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279b9f4
	goto loc_8279B9F4;
loc_8279B9E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279B9F4:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279ba3c
	if (!cr6.eq) goto loc_8279BA3C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8279BA30:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,1
	r27.s64 = 1;
loc_8279BA3C:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x8279b8fc
	if (!cr6.eq) goto loc_8279B8FC;
loc_8279BA4C:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279ba78
	if (!cr6.eq) goto loc_8279BA78;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279BA78:
	// rlwinm r11,r21,0,29,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279bc20
	if (cr6.eq) goto loc_8279BC20;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r23,1
	r28.s64 = r23.s64 + 1;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bge cr6,0x8279bbf4
	if (!cr6.lt) goto loc_8279BBF4;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8279BAA4:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279bbf4
	if (!cr6.eq) goto loc_8279BBF4;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279bac4
	if (!cr6.lt) goto loc_8279BAC4;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bad0
	goto loc_8279BAD0;
loc_8279BAC4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279BAD0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279bb7c
	if (cr6.eq) goto loc_8279BB7C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279bbe4
	if (!cr6.eq) goto loc_8279BBE4;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279baf8
	if (!cr6.lt) goto loc_8279BAF8;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bb04
	goto loc_8279BB04;
loc_8279BAF8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279BB04:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8279bbe4
	if (!cr6.eq) goto loc_8279BBE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8279bbd8
	goto loc_8279BBD8;
loc_8279BB7C:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279bb90
	if (!cr6.lt) goto loc_8279BB90;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bb9c
	goto loc_8279BB9C;
loc_8279BB90:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279BB9C:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8279a1a0
	sub_8279A1A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279bbe4
	if (!cr6.eq) goto loc_8279BBE4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8279BBD8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,1
	r27.s64 = 1;
loc_8279BBE4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x8279baa4
	if (cr6.lt) goto loc_8279BAA4;
loc_8279BBF4:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279bc20
	if (!cr6.eq) goto loc_8279BC20;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279BC20:
	// rlwinm r11,r21,0,28,28
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279be80
	if (cr6.eq) goto loc_8279BE80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8279bda4
	if (cr6.eq) goto loc_8279BDA4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8279bd48
	if (cr6.eq) goto loc_8279BD48;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8279be80
	if (!cr6.eq) goto loc_8279BE80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279bce4
	if (cr6.eq) goto loc_8279BCE4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8279BC88:
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8279bc9c
	if (!cr6.lt) goto loc_8279BC9C;
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bca8
	goto loc_8279BCA8;
loc_8279BC9C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279BCA8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279bccc
	if (!cr6.eq) goto loc_8279BCCC;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8279bce0
	if (cr6.eq) goto loc_8279BCE0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
loc_8279BCCC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279bc88
	if (cr6.lt) goto loc_8279BC88;
	// b 0x8279bce4
	goto loc_8279BCE4;
loc_8279BCE0:
	// li r29,1
	r29.s64 = 1;
loc_8279BCE4:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279be80
	if (cr6.eq) goto loc_8279BE80;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8279bd10
	if (!cr6.lt) goto loc_8279BD10;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bd28
	goto loc_8279BD28;
loc_8279BD10:
	// addi r11,r4,-16
	r11.s64 = ctx.r4.s64 + -16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8279BD28:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8279be78
	goto loc_8279BE78;
loc_8279BD48:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r23,1
	r31.s64 = r23.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x8279be00
	if (!cr6.lt) goto loc_8279BE00;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8279BD64:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// bge cr6,0x8279bd78
	if (!cr6.lt) goto loc_8279BD78;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x8279bd84
	goto loc_8279BD84;
loc_8279BD78:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-192
	ctx.r10.s64 = ctx.r10.s64 + -192;
loc_8279BD84:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x8279bdfc
	if (cr6.eq) goto loc_8279BDFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279bd64
	if (cr6.lt) goto loc_8279BD64;
	// b 0x8279be00
	goto loc_8279BE00;
loc_8279BDA4:
	// addi r31,r23,-1
	r31.s64 = r23.s64 + -1;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x8279be00
	if (cr6.eq) goto loc_8279BE00;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8279BDBC:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// bge cr6,0x8279bdd0
	if (!cr6.lt) goto loc_8279BDD0;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x8279bddc
	goto loc_8279BDDC;
loc_8279BDD0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-192
	ctx.r10.s64 = ctx.r10.s64 + -192;
loc_8279BDDC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x8279bdfc
	if (cr6.eq) goto loc_8279BDFC;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x8279bdbc
	if (!cr6.eq) goto loc_8279BDBC;
	// b 0x8279be00
	goto loc_8279BE00;
loc_8279BDFC:
	// li r29,1
	r29.s64 = 1;
loc_8279BE00:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279be80
	if (cr6.eq) goto loc_8279BE80;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// bge cr6,0x8279be2c
	if (!cr6.lt) goto loc_8279BE2C;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279be44
	goto loc_8279BE44;
loc_8279BE2C:
	// addi r11,r31,-16
	r11.s64 = r31.s64 + -16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8279BE44:
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8279BE78:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279BE80:
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279bea0
	if (!cr6.eq) goto loc_8279BEA0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279BEA0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8279BEA4"))) PPC_WEAK_FUNC(sub_8279BEA4);
PPC_FUNC_IMPL(__imp__sub_8279BEA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8279BEA8"))) PPC_WEAK_FUNC(sub_8279BEA8);
PPC_FUNC_IMPL(__imp__sub_8279BEA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,36(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,36
	r29.s64 = ctx.r3.s64 + 36;
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8279bf84
	if (cr6.eq) goto loc_8279BF84;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8279BED8:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bge cr6,0x8279beec
	if (!cr6.lt) goto loc_8279BEEC;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r28,r11,16
	r28.s64 = r11.s64 + 16;
	// b 0x8279bef8
	goto loc_8279BEF8;
loc_8279BEEC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r28,r11,-192
	r28.s64 = r11.s64 + -192;
loc_8279BEF8:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bge cr6,0x8279bf0c
	if (!cr6.lt) goto loc_8279BF0C;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279bf18
	goto loc_8279BF18;
loc_8279BF0C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279BF18:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279bf64
	if (cr6.eq) goto loc_8279BF64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279bf74
	if (!cr6.eq) goto loc_8279BF74;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279b600
	sub_8279B600(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279bf74
	if (cr6.eq) goto loc_8279BF74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// b 0x8279bf74
	goto loc_8279BF74;
loc_8279BF64:
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8279BF74:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x8279bed8
	if (cr6.lt) goto loc_8279BED8;
loc_8279BF84:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8279c0b8
	if (cr6.lt) goto loc_8279C0B8;
	// beq cr6,0x8279bfe4
	if (cr6.eq) goto loc_8279BFE4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8279c0c8
	if (!cr6.lt) goto loc_8279C0C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8279bfd8
	if (!cr6.lt) goto loc_8279BFD8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279BFD8:
	// stbx r25,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8279BFE4:
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82760fc0
	sub_82760FC0(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8279c0c8
	if (cr6.eq) goto loc_8279C0C8;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8279C010:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// bge cr6,0x8279c024
	if (!cr6.lt) goto loc_8279C024;
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// b 0x8279c030
	goto loc_8279C030;
loc_8279C024:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,-192
	ctx.r10.s64 = r11.s64 + -192;
loc_8279C030:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// bge cr6,0x8279c044
	if (!cr6.lt) goto loc_8279C044;
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279c050
	goto loc_8279C050;
loc_8279C044:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279C050:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279c090
	if (cr6.eq) goto loc_8279C090;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279c0a0
	if (!cr6.eq) goto loc_8279C0A0;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8279c0a0
	if (cr6.eq) goto loc_8279C0A0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8279c098
	goto loc_8279C098;
loc_8279C090:
	// lbz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8279C098:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8279C0A0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x8279c010
	if (cr6.lt) goto loc_8279C010;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8279C0B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82761988
	sub_82761988(ctx, base);
loc_8279C0C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8279C0CC"))) PPC_WEAK_FUNC(sub_8279C0CC);
PPC_FUNC_IMPL(__imp__sub_8279C0CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8279C0D0"))) PPC_WEAK_FUNC(sub_8279C0D0);
PPC_FUNC_IMPL(__imp__sub_8279C0D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,36(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,36
	r28.s64 = ctx.r3.s64 + 36;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8279c1c8
	if (cr6.eq) goto loc_8279C1C8;
	// li r29,0
	r29.s64 = 0;
loc_8279C0FC:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// bge cr6,0x8279c1c8
	if (!cr6.lt) goto loc_8279C1C8;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// bge cr6,0x8279c118
	if (!cr6.lt) goto loc_8279C118;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// b 0x8279c124
	goto loc_8279C124;
loc_8279C118:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r10,r11,-192
	ctx.r10.s64 = r11.s64 + -192;
loc_8279C124:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// bge cr6,0x8279c138
	if (!cr6.lt) goto loc_8279C138;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279c144
	goto loc_8279C144;
loc_8279C138:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279C144:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279c190
	if (cr6.eq) goto loc_8279C190;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8279c1b8
	if (!cr6.eq) goto loc_8279C1B8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8279c1b8
	if (cr6.eq) goto loc_8279C1B8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x8279c188
	if (!cr6.lt) goto loc_8279C188;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8279C188:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8279c1a4
	goto loc_8279C1A4;
loc_8279C190:
	// lbz r31,8(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x8279c1a0
	if (!cr6.lt) goto loc_8279C1A0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8279C1A0:
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8279C1A4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r27,r31,r27
	r27.u64 = r31.u64 + r27.u64;
	// subf r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
loc_8279C1B8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8279c0fc
	if (!cr6.eq) goto loc_8279C0FC;
loc_8279C1C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8279C1CC"))) PPC_WEAK_FUNC(sub_8279C1CC);
PPC_FUNC_IMPL(__imp__sub_8279C1CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8279C1D0"))) PPC_WEAK_FUNC(sub_8279C1D0);
PPC_FUNC_IMPL(__imp__sub_8279C1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279c21c
	if (cr6.eq) goto loc_8279C21C;
loc_8279C1F8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279c21c
	if (cr6.eq) goto loc_8279C21C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279c21c
	if (cr6.eq) goto loc_8279C21C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279c1f8
	if (cr6.lt) goto loc_8279C1F8;
loc_8279C21C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279c2ec
	if (cr6.eq) goto loc_8279C2EC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279c2ec
	if (cr6.eq) goto loc_8279C2EC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279c2ec
	if (cr6.eq) goto loc_8279C2EC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8279c2a8
	if (!cr6.lt) goto loc_8279C2A8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279C2A8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq 0x8279c2d8
	if (cr0.eq) goto loc_8279C2D8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279C2D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279b398
	sub_8279B398(ctx, base);
loc_8279C2EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8279C2F0"))) PPC_WEAK_FUNC(sub_8279C2F0);
PPC_FUNC_IMPL(__imp__sub_8279C2F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279C2F4"))) PPC_WEAK_FUNC(sub_8279C2F4);
PPC_FUNC_IMPL(__imp__sub_8279C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C2F8"))) PPC_WEAK_FUNC(sub_8279C2F8);
PPC_FUNC_IMPL(__imp__sub_8279C2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279c344
	if (cr6.eq) goto loc_8279C344;
loc_8279C320:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279c344
	if (cr6.eq) goto loc_8279C344;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279c344
	if (cr6.eq) goto loc_8279C344;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279c320
	if (cr6.lt) goto loc_8279C320;
loc_8279C344:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279c508
	if (cr6.eq) goto loc_8279C508;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279c508
	if (cr6.eq) goto loc_8279C508;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,115
	cr6.compare<uint32_t>(ctx.r7.u32, 115, xer);
	// bne cr6,0x8279c448
	if (!cr6.eq) goto loc_8279C448;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,119
	cr6.compare<uint32_t>(ctx.r10.u32, 119, xer);
	// bne cr6,0x8279c448
	if (!cr6.eq) goto loc_8279C448;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8279c388
	if (!cr6.lt) goto loc_8279C388;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8279C388:
	// subf. r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// li r11,0
	r11.s64 = 0;
	// beq 0x8279c3bc
	if (cr0.eq) goto loc_8279C3BC;
loc_8279C398:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8279c3bc
	if (cr6.eq) goto loc_8279C3BC;
	// cmpwi cr6,r9,58
	cr6.compare<int32_t>(ctx.r9.s32, 58, xer);
	// beq cr6,0x8279c3bc
	if (cr6.eq) goto loc_8279C3BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8279c398
	if (cr6.lt) goto loc_8279C398;
loc_8279C3BC:
	// lbz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// rlwinm r9,r7,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r6.u64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279c434
	if (!cr6.eq) goto loc_8279C434;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8279c3f0
	if (!cr6.lt) goto loc_8279C3F0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279C3F0:
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// li r11,0
	r11.s64 = 0;
	// beq 0x8279c424
	if (cr0.eq) goto loc_8279C424;
loc_8279C400:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279c424
	if (cr6.eq) goto loc_8279C424;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279c424
	if (cr6.eq) goto loc_8279C424;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279c400
	if (cr6.lt) goto loc_8279C400;
loc_8279C424:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,16(r29)
	PPC_STORE_U64(r29.u32 + 16, r11.u64);
loc_8279C434:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// stb r10,12(r29)
	PPC_STORE_U8(r29.u32 + 12, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8279C448:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279c508
	if (cr6.eq) goto loc_8279C508;
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// rlwinm r7,r10,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279c508
	if (cr6.eq) goto loc_8279C508;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8279c4c4
	if (!cr6.lt) goto loc_8279C4C4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279C4C4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq 0x8279c4f4
	if (cr0.eq) goto loc_8279C4F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279C4F4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279b398
	sub_8279B398(ctx, base);
loc_8279C508:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8279C50C"))) PPC_WEAK_FUNC(sub_8279C50C);
PPC_FUNC_IMPL(__imp__sub_8279C50C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279C510"))) PPC_WEAK_FUNC(sub_8279C510);
PPC_FUNC_IMPL(__imp__sub_8279C510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r25{};
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
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279c7f8
	if (cr6.eq) goto loc_8279C7F8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279c7f8
	if (cr6.eq) goto loc_8279C7F8;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bgt cr6,0x8279c7e4
	if (cr6.gt) goto loc_8279C7E4;
	// lis r12,-32134
	r12.s64 = -2105933824;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15000
	r12.s64 = r12.s64 + -15000;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8279C608;
	case 1:
		goto loc_8279C7E4;
	case 2:
		goto loc_8279C7E4;
	case 3:
		goto loc_8279C728;
	case 4:
		goto loc_8279C7E4;
	case 5:
		goto loc_8279C7E4;
	case 6:
		goto loc_8279C7E4;
	case 7:
		goto loc_8279C7E4;
	case 8:
		goto loc_8279C7E4;
	case 9:
		goto loc_8279C7E4;
	case 10:
		goto loc_8279C7E4;
	case 11:
		goto loc_8279C6CC;
	case 12:
		goto loc_8279C7E4;
	case 13:
		goto loc_8279C5AC;
	case 14:
		goto loc_8279C664;
	case 15:
		goto loc_8279C7E4;
	case 16:
		goto loc_8279C784;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-14840(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14840);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14552(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14552);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14644(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14644);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14932(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14932);
	// lwz r19,-14748(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14748);
	// lwz r19,-14364(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14364);
	// lwz r19,-14460(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -14460);
loc_8279C5AC:
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c5cc
	if (!cr6.lt) goto loc_8279C5CC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C5CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8279c510
	sub_8279C510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C608:
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 64;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c628
	if (!cr6.lt) goto loc_8279C628;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C628:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8279c510
	sub_8279C510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C664:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r8,r9,5
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c684
	if (!cr6.lt) goto loc_8279C684;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C684:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r5,58
	ctx.r5.s64 = 58;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r7,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F;
	// bl 0x8279b1e0
	sub_8279B1E0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r6,r3,27,0,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 27) & 0xF8000000) | (ctx.r6.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C6CC:
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r8.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c6ec
	if (!cr6.lt) goto loc_8279C6EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C6EC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8279c510
	sub_8279C510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C728:
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c748
	if (!cr6.lt) goto loc_8279C748;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C748:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8279c510
	sub_8279C510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C784:
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r9,r8,5,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 5) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stb r9,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x8279c7a8
	if (!cr6.lt) goto loc_8279C7A8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8279C7A8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x8279c510
	sub_8279C510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C7E4:
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279b2c8
	sub_8279B2C8(ctx, base);
loc_8279C7F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279C808"))) PPC_WEAK_FUNC(sub_8279C808);
PPC_FUNC_IMPL(__imp__sub_8279C808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279C80C"))) PPC_WEAK_FUNC(sub_8279C80C);
PPC_FUNC_IMPL(__imp__sub_8279C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C810"))) PPC_WEAK_FUNC(sub_8279C810);
PPC_FUNC_IMPL(__imp__sub_8279C810) {
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
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279c868
	if (cr6.eq) goto loc_8279C868;
loc_8279C844:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279c868
	if (cr6.eq) goto loc_8279C868;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279c868
	if (cr6.eq) goto loc_8279C868;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279c844
	if (cr6.lt) goto loc_8279C844;
loc_8279C868:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8279c8b4
	if (cr6.eq) goto loc_8279C8B4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r29,12
	ctx.r9.s64 = r29.s64 + 12;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8279C8B4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8279c8cc
	if (!cr6.lt) goto loc_8279C8CC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279C8CC:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// beq cr6,0x8279c924
	if (cr6.eq) goto loc_8279C924;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279c910
	if (cr6.eq) goto loc_8279C910;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279C910:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279b398
	sub_8279B398(ctx, base);
loc_8279C924:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8279C928"))) PPC_WEAK_FUNC(sub_8279C928);
PPC_FUNC_IMPL(__imp__sub_8279C928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279C92C"))) PPC_WEAK_FUNC(sub_8279C92C);
PPC_FUNC_IMPL(__imp__sub_8279C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C930"))) PPC_WEAK_FUNC(sub_8279C930);
PPC_FUNC_IMPL(__imp__sub_8279C930) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279b140
	sub_8279B140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279c98c
	if (cr6.eq) goto loc_8279C98C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279b508
	sub_8279B508(ctx, base);
loc_8279C98C:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279c9c4
	if (cr6.eq) goto loc_8279C9C4;
	// bl 0x8279c930
	sub_8279C930(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279C9C4:
	// bl 0x8279bea8
	sub_8279BEA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279C9D8"))) PPC_WEAK_FUNC(sub_8279C9D8);
PPC_FUNC_IMPL(__imp__sub_8279C9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279C9DC"))) PPC_WEAK_FUNC(sub_8279C9DC);
PPC_FUNC_IMPL(__imp__sub_8279C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C9E0"))) PPC_WEAK_FUNC(sub_8279C9E0);
PPC_FUNC_IMPL(__imp__sub_8279C9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279c9f8
	if (cr6.eq) {
		sub_8279C9F8(ctx, base);
		return;
	}
	// li r11,255
	r11.s64 = 255;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// b 0x8279c930
	sub_8279C930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C9F8"))) PPC_WEAK_FUNC(sub_8279C9F8);
PPC_FUNC_IMPL(__imp__sub_8279C9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8279bea8
	sub_8279BEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C9FC"))) PPC_WEAK_FUNC(sub_8279C9FC);
PPC_FUNC_IMPL(__imp__sub_8279C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279CA00"))) PPC_WEAK_FUNC(sub_8279CA00);
PPC_FUNC_IMPL(__imp__sub_8279CA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2012
	ctx.r9.s64 = ctx.r10.s64 + -2012;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279CA38"))) PPC_WEAK_FUNC(sub_8279CA38);
PPC_FUNC_IMPL(__imp__sub_8279CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// bl 0x828e9400
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8279ce70
	if (cr6.eq) goto loc_8279CE70;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r26,1
	r26.s64 = 1;
	// addi r24,r10,-1948
	r24.s64 = ctx.r10.s64 + -1948;
	// addi r23,r9,14856
	r23.s64 = ctx.r9.s64 + 14856;
loc_8279CA80:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279cab0
	if (cr6.eq) goto loc_8279CAB0;
loc_8279CA8C:
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cab0
	if (cr6.eq) goto loc_8279CAB0;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279cab0
	if (cr6.eq) goto loc_8279CAB0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8279ca8c
	if (cr6.lt) goto loc_8279CA8C;
loc_8279CAB0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8279ce70
	if (cr6.eq) goto loc_8279CE70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279ce70
	if (cr6.eq) goto loc_8279CE70;
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x8279cad4
	if (!cr6.lt) goto loc_8279CAD4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8279CAD4:
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279cb08
	if (cr6.eq) goto loc_8279CB08;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// b 0x8279cd88
	goto loc_8279CD88;
loc_8279CB08:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// bgt cr6,0x8279cb88
	if (cr6.gt) goto loc_8279CB88;
	// beq cr6,0x8279cd38
	if (cr6.eq) goto loc_8279CD38;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x8279ccd4
	if (cr6.gt) goto loc_8279CCD4;
	// lis r12,-32134
	r12.s64 = -2105933824;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13508
	r12.s64 = r12.s64 + -13508;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8279CB78;
	case 1:
		goto loc_8279CCD4;
	case 2:
		goto loc_8279CCD4;
	case 3:
		goto loc_8279CB78;
	case 4:
		goto loc_8279CCD4;
	case 5:
		goto loc_8279CCD4;
	case 6:
		goto loc_8279CCD4;
	case 7:
		goto loc_8279CCD4;
	case 8:
		goto loc_8279CCD4;
	case 9:
		goto loc_8279CCD4;
	case 10:
		goto loc_8279CCD4;
	case 11:
		goto loc_8279CB78;
	case 12:
		goto loc_8279CCD4;
	case 13:
		goto loc_8279CB78;
	case 14:
		goto loc_8279CB78;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-13448(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13448);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13448(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13448);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13448(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13448);
	// lwz r19,-13100(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13100);
	// lwz r19,-13448(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13448);
	// lwz r19,-13448(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -13448);
loc_8279CB78:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// b 0x8279cd88
	goto loc_8279CD88;
loc_8279CB88:
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bgt cr6,0x8279cccc
	if (cr6.gt) goto loc_8279CCCC;
	// beq cr6,0x8279cc30
	if (cr6.eq) goto loc_8279CC30;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(r11.u32, 98, xer);
	// beq cr6,0x8279cbf8
	if (cr6.eq) goto loc_8279CBF8;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x8279ccd4
	if (!cr6.eq) goto loc_8279CCD4;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r10,r26,30,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(r26.u32, 30) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// beq cr6,0x8279cbe8
	if (cr6.eq) goto loc_8279CBE8;
loc_8279CBC4:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cbe8
	if (cr6.eq) goto loc_8279CBE8;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279cbe8
	if (cr6.eq) goto loc_8279CBE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279cbc4
	if (cr6.lt) goto loc_8279CBC4;
loc_8279CBE8:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// b 0x8279cd88
	goto loc_8279CD88;
loc_8279CBF8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8279cd90
	if (!cr6.eq) goto loc_8279CD90;
	// li r5,58
	ctx.r5.s64 = 58;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279b1e0
	sub_8279B1E0(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwimi r10,r3,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// b 0x8279cd90
	goto loc_8279CD90;
loc_8279CC30:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(r11.u32, 119, xer);
	// beq cr6,0x8279cda4
	if (cr6.eq) goto loc_8279CDA4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8279cd90
	if (!cr6.eq) goto loc_8279CD90;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279ccac
	if (cr6.eq) goto loc_8279CCAC;
loc_8279CC68:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cc8c
	if (cr6.eq) goto loc_8279CC8C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279cc8c
	if (cr6.eq) goto loc_8279CC8C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279cc68
	if (cr6.lt) goto loc_8279CC68;
loc_8279CC8C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279ccac
	if (cr6.eq) goto loc_8279CCAC;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// lbz r6,21(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 21);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// rlwimi r6,r5,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// stb r6,21(r29)
	PPC_STORE_U8(r29.u32 + 21, ctx.r6.u8);
loc_8279CCAC:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8279ccb8
	if (!cr6.lt) goto loc_8279CCB8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8279CCB8:
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x8279cd94
	goto loc_8279CD94;
loc_8279CCCC:
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x8279cd28
	if (cr6.eq) goto loc_8279CD28;
loc_8279CCD4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cd90
	if (cr6.eq) goto loc_8279CD90;
	// ld r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 40);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r28.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8279cd90
	goto loc_8279CD90;
loc_8279CD28:
	// lbz r10,22(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 22);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,22(r29)
	PPC_STORE_U8(r29.u32 + 22, ctx.r9.u8);
loc_8279CD38:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r10,r26,31,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(r26.u32, 31) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// beq cr6,0x8279cd7c
	if (cr6.eq) goto loc_8279CD7C;
loc_8279CD58:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cd7c
	if (cr6.eq) goto loc_8279CD7C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279cd7c
	if (cr6.eq) goto loc_8279CD7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279cd58
	if (cr6.lt) goto loc_8279CD58;
loc_8279CD7C:
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
loc_8279CD88:
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x8279c510
	sub_8279C510(ctx, base);
loc_8279CD90:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8279CD94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279ce10
	if (cr6.eq) goto loc_8279CE10;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8279ca80
	goto loc_8279CA80;
loc_8279CDA4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r4,r11,244
	ctx.r4.s64 = r11.s64 + 244;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279cdf8
	if (cr6.eq) goto loc_8279CDF8;
	// ld r11,40(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 40);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r8,r10,-2012
	ctx.r8.s64 = ctx.r10.s64 + -2012;
	// stb r28,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r28.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// b 0x8279cdfc
	goto loc_8279CDFC;
loc_8279CDF8:
	// mr r25,r28
	r25.u64 = r28.u64;
loc_8279CDFC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8279CE10:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8279ce70
	if (cr6.eq) goto loc_8279CE70;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bge cr6,0x8279ce2c
	if (!cr6.lt) goto loc_8279CE2C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279CE2C:
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq 0x8279ce5c
	if (cr0.eq) goto loc_8279CE5C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279CE5C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279b398
	sub_8279B398(ctx, base);
loc_8279CE70:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8279CE74"))) PPC_WEAK_FUNC(sub_8279CE74);
PPC_FUNC_IMPL(__imp__sub_8279CE74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8279CE78"))) PPC_WEAK_FUNC(sub_8279CE78);
PPC_FUNC_IMPL(__imp__sub_8279CE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8279d340
	if (cr6.eq) goto loc_8279D340;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r26,1
	r26.s64 = 1;
	// li r24,2
	r24.s64 = 2;
	// lfd f31,7288(r10)
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7288);
	// addi r23,r11,-1948
	r23.s64 = r11.s64 + -1948;
	// lfd f30,16944(r8)
	f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16944);
loc_8279CED4:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279cf04
	if (cr6.eq) goto loc_8279CF04;
loc_8279CEE0:
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279cf04
	if (cr6.eq) goto loc_8279CF04;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// beq cr6,0x8279cf04
	if (cr6.eq) goto loc_8279CF04;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279cee0
	if (cr6.lt) goto loc_8279CEE0;
loc_8279CF04:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8279d340
	if (cr6.eq) goto loc_8279D340;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279d340
	if (cr6.eq) goto loc_8279D340;
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, xer);
	// bge cr6,0x8279cf28
	if (!cr6.lt) goto loc_8279CF28;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8279CF28:
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279cf74
	if (cr6.eq) goto loc_8279CF74;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_8279CF5C:
	// bl 0x8279c510
	sub_8279C510(ctx, base);
loc_8279CF60:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8279CF64:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8279CF68:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8279ced4
	if (!cr6.eq) goto loc_8279CED4;
	// b 0x8279d2e0
	goto loc_8279D2E0;
loc_8279CF74:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(r11.u32, 71, xer);
	// bgt cr6,0x8279d000
	if (cr6.gt) goto loc_8279D000;
	// beq cr6,0x8279d120
	if (cr6.eq) goto loc_8279D120;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bgt cr6,0x8279cfd0
	if (cr6.gt) goto loc_8279CFD0;
	// beq cr6,0x8279cfec
	if (cr6.eq) goto loc_8279CFEC;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x8279cfec
	if (cr6.eq) goto loc_8279CFEC;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x8279cfec
	if (cr6.eq) goto loc_8279CFEC;
loc_8279CFA0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279cf60
	if (cr6.eq) goto loc_8279CF60;
	// lfd f0,32(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8279d1f0
	if (!cr6.gt) goto loc_8279D1F0;
	// fadd f0,f0,f31
	f0.f64 = f0.f64 + f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8279d200
	goto loc_8279D200;
loc_8279CFD0:
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// blt cr6,0x8279cfa0
	if (cr6.lt) goto loc_8279CFA0;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// ble cr6,0x8279cfec
	if (!cr6.gt) goto loc_8279CFEC;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(r11.u32, 69, xer);
	// beq cr6,0x8279d0c0
	if (cr6.eq) goto loc_8279D0C0;
	// b 0x8279cfa0
	goto loc_8279CFA0;
loc_8279CFEC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x8279cf5c
	goto loc_8279CF5C;
loc_8279D000:
	// addi r11,r11,-101
	r11.s64 = r11.s64 + -101;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x8279cfa0
	if (cr6.gt) goto loc_8279CFA0;
	// lis r12,-32134
	r12.s64 = -2105933824;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12252
	r12.s64 = r12.s64 + -12252;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8279D0B0;
	case 1:
		goto loc_8279D060;
	case 2:
		goto loc_8279D110;
	case 3:
		goto loc_8279CFA0;
	case 4:
		goto loc_8279CFA0;
	case 5:
		goto loc_8279CFA0;
	case 6:
		goto loc_8279CFA0;
	case 7:
		goto loc_8279CFA0;
	case 8:
		goto loc_8279CFA0;
	case 9:
		goto loc_8279CFA0;
	case 10:
		goto loc_8279CFA0;
	case 11:
		goto loc_8279CFA0;
	case 12:
		goto loc_8279CFA0;
	case 13:
		goto loc_8279CFA0;
	case 14:
		goto loc_8279D170;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-12112(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12112);
	// lwz r19,-12192(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12192);
	// lwz r19,-12016(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12016);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-12384(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -12384);
	// lwz r19,-11920(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -11920);
loc_8279D060:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279d09c
	if (cr6.eq) goto loc_8279D09C;
loc_8279D078:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279d09c
	if (cr6.eq) goto loc_8279D09C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279d09c
	if (cr6.eq) goto loc_8279D09C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279d078
	if (cr6.lt) goto loc_8279D078;
loc_8279D09C:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// b 0x8279cf5c
	goto loc_8279CF5C;
loc_8279D0B0:
	// lbz r10,22(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 22);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,22(r29)
	PPC_STORE_U8(r29.u32 + 22, ctx.r9.u8);
loc_8279D0C0:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r26.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279d0fc
	if (cr6.eq) goto loc_8279D0FC;
loc_8279D0D8:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279d0fc
	if (cr6.eq) goto loc_8279D0FC;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279d0fc
	if (cr6.eq) goto loc_8279D0FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279d0d8
	if (cr6.lt) goto loc_8279D0D8;
loc_8279D0FC:
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// b 0x8279cf5c
	goto loc_8279CF5C;
loc_8279D110:
	// lbz r10,22(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 22);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,22(r29)
	PPC_STORE_U8(r29.u32 + 22, ctx.r9.u8);
loc_8279D120:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r24.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279d15c
	if (cr6.eq) goto loc_8279D15C;
loc_8279D138:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279d15c
	if (cr6.eq) goto loc_8279D15C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279d15c
	if (cr6.eq) goto loc_8279D15C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8279d138
	if (cr6.lt) goto loc_8279D138;
loc_8279D15C:
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// b 0x8279cf5c
	goto loc_8279CF5C;
loc_8279D170:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(r11.u32, 119, xer);
	// beq cr6,0x8279d248
	if (cr6.eq) goto loc_8279D248;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8279cf60
	if (!cr6.eq) goto loc_8279CF60;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279cf64
	if (cr6.eq) goto loc_8279CF64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8279D1A8:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279d1cc
	if (cr6.eq) goto loc_8279D1CC;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279d1cc
	if (cr6.eq) goto loc_8279D1CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279d1a8
	if (cr6.lt) goto loc_8279D1A8;
loc_8279D1CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279cf68
	if (cr6.eq) goto loc_8279CF68;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// lbz r8,21(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 21);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// rlwimi r8,r7,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// stb r8,21(r29)
	PPC_STORE_U8(r29.u32 + 21, ctx.r8.u8);
	// b 0x8279cf68
	goto loc_8279CF68;
loc_8279D1F0:
	// fsub f0,f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8279D200:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// stb r26,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r26.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8279cf68
	goto loc_8279CF68;
loc_8279D248:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r4,r11,244
	ctx.r4.s64 = r11.s64 + 244;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279d2c8
	if (cr6.eq) goto loc_8279D2C8;
	// lfd f0,32(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8279d280
	if (!cr6.gt) goto loc_8279D280;
	// fadd f0,f0,f31
	f0.f64 = f0.f64 + f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8279d290
	goto loc_8279D290;
loc_8279D280:
	// fsub f0,f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8279D290:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r8,r9,-2012
	ctx.r8.s64 = ctx.r9.s64 + -2012;
	// stb r28,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r28.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// b 0x8279d2cc
	goto loc_8279D2CC;
loc_8279D2C8:
	// mr r25,r28
	r25.u64 = r28.u64;
loc_8279D2CC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8279D2E0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8279d340
	if (cr6.eq) goto loc_8279D340;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bge cr6,0x8279d2fc
	if (!cr6.lt) goto loc_8279D2FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8279D2FC:
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq 0x8279d32c
	if (cr0.eq) goto loc_8279D32C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279D32C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279b398
	sub_8279B398(ctx, base);
loc_8279D340:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_8279D34C"))) PPC_WEAK_FUNC(sub_8279D34C);
PPC_FUNC_IMPL(__imp__sub_8279D34C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8279D350"))) PPC_WEAK_FUNC(sub_8279D350);
PPC_FUNC_IMPL(__imp__sub_8279D350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-1940
	ctx.r8.s64 = ctx.r10.s64 + -1940;
	// li r9,37
	ctx.r9.s64 = 37;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// addi r10,r3,244
	ctx.r10.s64 = ctx.r3.s64 + 244;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r6,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r6,r10,516
	ctx.r6.s64 = ctx.r10.s64 + 516;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, r11.u32);
	// stw r9,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r9.u32);
	// stw r6,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D3D4"))) PPC_WEAK_FUNC(sub_8279D3D4);
PPC_FUNC_IMPL(__imp__sub_8279D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D3D8"))) PPC_WEAK_FUNC(sub_8279D3D8);
PPC_FUNC_IMPL(__imp__sub_8279D3D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r26,36(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r10,r11,-1940
	ctx.r10.s64 = r11.s64 + -1940;
	// addi r29,r3,36
	r29.s64 = ctx.r3.s64 + 36;
	// li r28,0
	r28.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8279d49c
	if (cr6.eq) goto loc_8279D49C;
	// li r30,0
	r30.s64 = 0;
loc_8279D40C:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bge cr6,0x8279d420
	if (!cr6.lt) goto loc_8279D420;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8279d42c
	goto loc_8279D42C;
loc_8279D420:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
loc_8279D42C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8279d48c
	if (!cr6.eq) goto loc_8279D48C;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279d48c
	if (cr6.eq) goto loc_8279D48C;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279d48c
	if (cr6.eq) goto loc_8279D48C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r27,244
	r11.s64 = r27.s64 + 244;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8279d484
	if (cr6.lt) goto loc_8279D484;
	// addi r11,r11,516
	r11.s64 = r11.s64 + 516;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8279d48c
	if (cr6.lt) goto loc_8279D48C;
loc_8279D484:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8279D48C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x8279d40c
	if (cr6.lt) goto loc_8279D40C;
loc_8279D49C:
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-22596
	ctx.r10.s64 = r11.s64 + -22596;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8279D4B4"))) PPC_WEAK_FUNC(sub_8279D4B4);
PPC_FUNC_IMPL(__imp__sub_8279D4B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8279D4B8"))) PPC_WEAK_FUNC(sub_8279D4B8);
PPC_FUNC_IMPL(__imp__sub_8279D4B8) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279d514
	if (!cr6.eq) goto loc_8279D514;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8279e6f8
	sub_8279E6F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279d50c
	if (!cr6.eq) goto loc_8279D50C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8279D50C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_8279D514:
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

__attribute__((alias("__imp__sub_8279D528"))) PPC_WEAK_FUNC(sub_8279D528);
PPC_FUNC_IMPL(__imp__sub_8279D528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D52C"))) PPC_WEAK_FUNC(sub_8279D52C);
PPC_FUNC_IMPL(__imp__sub_8279D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D530"))) PPC_WEAK_FUNC(sub_8279D530);
PPC_FUNC_IMPL(__imp__sub_8279D530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r3,244
	ctx.r10.s64 = ctx.r3.s64 + 244;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-1940
	ctx.r7.s64 = ctx.r9.s64 + -1940;
	// li r6,37
	ctx.r6.s64 = 37;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r7,r10,516
	ctx.r7.s64 = ctx.r10.s64 + 516;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, r11.u32);
	// stw r9,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r9.u32);
	// stw r7,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8279D5B0"))) PPC_WEAK_FUNC(sub_8279D5B0);
PPC_FUNC_IMPL(__imp__sub_8279D5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D5B4"))) PPC_WEAK_FUNC(sub_8279D5B4);
PPC_FUNC_IMPL(__imp__sub_8279D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D5B8"))) PPC_WEAK_FUNC(sub_8279D5B8);
PPC_FUNC_IMPL(__imp__sub_8279D5B8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r7.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8279D5FC"))) PPC_WEAK_FUNC(sub_8279D5FC);
PPC_FUNC_IMPL(__imp__sub_8279D5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D600"))) PPC_WEAK_FUNC(sub_8279D600);
PPC_FUNC_IMPL(__imp__sub_8279D600) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// std r11,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, r11.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8279D63C"))) PPC_WEAK_FUNC(sub_8279D63C);
PPC_FUNC_IMPL(__imp__sub_8279D63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D640"))) PPC_WEAK_FUNC(sub_8279D640);
PPC_FUNC_IMPL(__imp__sub_8279D640) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	r11.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// ori r23,r11,65535
	r23.u64 = r11.u64 | 65535;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// sth r23,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r23.u16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8279d7f4
	if (cr6.eq) goto loc_8279D7F4;
	// sth r25,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r25.u16);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279d7f4
	if (cr6.eq) goto loc_8279D7F4;
	// li r24,1
	r24.s64 = 1;
loc_8279D68C:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// blt cr6,0x8279d7a0
	if (cr6.lt) goto loc_8279D7A0;
	// bne cr6,0x8279d7b4
	if (!cr6.eq) goto loc_8279D7B4;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(r11.u32, 125, xer);
	// bne cr6,0x8279d7b0
	if (!cr6.eq) goto loc_8279D7B0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8279d790
	if (cr6.eq) goto loc_8279D790;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r29,255
	r29.s64 = 255;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb8c0
	sub_828EB8C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279d6d8
	if (cr6.eq) goto loc_8279D6D8;
loc_8279D6C4:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb8c0
	sub_828EB8C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8279d6c4
	if (!cr6.eq) goto loc_8279D6C4;
loc_8279D6D8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279d740
	if (cr6.eq) goto loc_8279D740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279d74c
	if (cr6.eq) goto loc_8279D74C;
loc_8279D708:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// beq cr6,0x8279d728
	if (cr6.eq) goto loc_8279D728;
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x8279d728
	if (cr6.eq) goto loc_8279D728;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8279d708
	if (!cr6.eq) goto loc_8279D708;
loc_8279D728:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279d74c
	if (cr6.eq) goto loc_8279D74C;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// bne cr6,0x8279d74c
	if (!cr6.eq) goto loc_8279D74C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8279d74c
	goto loc_8279D74C;
loc_8279D740:
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r27)
	PPC_STORE_U16(r27.u32 + 6, r11.u16);
loc_8279D74C:
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r31,r27,36
	r31.s64 = r27.s64 + 36;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r8.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
	// lhz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U16(r27.u32 + 8);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x8279d790
	if (!cr6.eq) goto loc_8279D790;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r23
	ctx.r10.u64 = r11.u64 + r23.u64;
	// sth r10,8(r27)
	PPC_STORE_U16(r27.u32 + 8, ctx.r10.u16);
loc_8279D790:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x8279d7b4
	goto loc_8279D7B4;
loc_8279D7A0:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279d7fc
	if (cr6.eq) goto loc_8279D7FC;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8279D7B0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8279D7B4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279d68c
	if (!cr6.eq) goto loc_8279D68C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8279d7f4
	if (!cr6.eq) goto loc_8279D7F4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8279d7f4
	if (cr6.eq) goto loc_8279D7F4;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// addi r3,r27,36
	ctx.r3.s64 = r27.s64 + 36;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,140(r1)
	PPC_STORE_U64(ctx.r1.u32 + 140, ctx.r9.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
loc_8279D7F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9454
	return;
loc_8279D7FC:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x8279d848
	if (!cr6.eq) goto loc_8279D848;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8279d838
	if (cr6.eq) goto loc_8279D838;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r11.u8);
	// addi r3,r27,36
	ctx.r3.s64 = r27.s64 + 36;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,124(r1)
	PPC_STORE_U64(ctx.r1.u32 + 124, ctx.r9.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
loc_8279D838:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x8279d7b4
	goto loc_8279D7B4;
loc_8279D848:
	// lbz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8279d7b0
	if (!cr6.eq) goto loc_8279D7B0;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279d7b0
	if (cr6.eq) goto loc_8279D7B0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8279d890
	if (cr6.eq) goto loc_8279D890;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// addi r3,r27,36
	ctx.r3.s64 = r27.s64 + 36;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,140(r1)
	PPC_STORE_U64(ctx.r1.u32 + 140, ctx.r9.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
loc_8279D890:
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
}

__attribute__((alias("__imp__sub_8279D89C"))) PPC_WEAK_FUNC(sub_8279D89C);
PPC_FUNC_IMPL(__imp__sub_8279D89C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8279d7b4
	// ERROR 8279D7B4
	return;
}

__attribute__((alias("__imp__sub_8279D8A0"))) PPC_WEAK_FUNC(sub_8279D8A0);
PPC_FUNC_IMPL(__imp__sub_8279D8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279df78
	if (cr6.eq) goto loc_8279DF78;
	// mr r21,r11
	r21.u64 = r11.u64;
	// lwz r20,0(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r17,0
	r17.s64 = 0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r22,1
	r22.s64 = 1;
	// li r18,2
	r18.s64 = 2;
	// addi r16,r11,-2396
	r16.s64 = r11.s64 + -2396;
loc_8279D8E0:
	// mr r11,r17
	r11.u64 = r17.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8279d904
	if (cr6.eq) goto loc_8279D904;
loc_8279D8EC:
	// lbzx r10,r11,r20
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r20.u32);
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// beq cr6,0x8279d954
	if (cr6.eq) goto loc_8279D954;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// blt cr6,0x8279d8ec
	if (cr6.lt) goto loc_8279D8EC;
loc_8279D904:
	// lwz r11,36(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 36);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// addi r31,r19,36
	r31.s64 = r19.s64 + 36;
	// stb r21,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r21.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// std r8,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r8.u64);
	// bge cr6,0x8279df58
	if (!cr6.lt) goto loc_8279DF58;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r17,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r17.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r7.u32);
	// b 0x8279df64
	goto loc_8279DF64;
loc_8279D954:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8279d904
	if (cr6.lt) goto loc_8279D904;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, xer);
	// ble cr6,0x8279df0c
	if (!cr6.gt) goto loc_8279DF0C;
	// lbzx r9,r20,r10
	ctx.r9.u64 = PPC_LOAD_U8(r20.u32 + ctx.r10.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,37
	cr6.compare<uint32_t>(ctx.r9.u32, 37, xer);
	// beq cr6,0x8279ded8
	if (cr6.eq) goto loc_8279DED8;
	// li r25,10
	r25.s64 = 10;
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279d9c8
	if (cr6.eq) goto loc_8279D9C8;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bge cr6,0x8279d9a4
	if (!cr6.lt) goto loc_8279D9A4;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8279D9A4:
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r20.u32);
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r17.u32);
	// addi r3,r19,36
	ctx.r3.s64 = r19.s64 + 36;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r11.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,180(r1)
	PPC_STORE_U64(ctx.r1.u32 + 180, ctx.r9.u64);
	// bl 0x8279e680
	sub_8279E680(ctx, base);
loc_8279D9C8:
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(r23.u32, r21.u32, xer);
	// bge cr6,0x8279dc50
	if (!cr6.lt) goto loc_8279DC50;
loc_8279D9E4:
	// lbzx r11,r20,r23
	r11.u64 = PPC_LOAD_U8(r20.u32 + r23.u32);
	// addi r11,r11,-69
	r11.s64 = r11.s64 + -69;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(r11.u32, 51, xer);
	// bgt cr6,0x8279daf4
	if (cr6.gt) goto loc_8279DAF4;
	// lis r12,-32134
	r12.s64 = -2105933824;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9716
	r12.s64 = r12.s64 + -9716;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8279DC18;
	case 1:
		goto loc_8279DAF4;
	case 2:
		goto loc_8279DC24;
	case 3:
		goto loc_8279DAF4;
	case 4:
		goto loc_8279DAEC;
	case 5:
		goto loc_8279DAF4;
	case 6:
		goto loc_8279DAF4;
	case 7:
		goto loc_8279DAF4;
	case 8:
		goto loc_8279DAF4;
	case 9:
		goto loc_8279DAF4;
	case 10:
		goto loc_8279DAF4;
	case 11:
		goto loc_8279DAF4;
	case 12:
		goto loc_8279DAF4;
	case 13:
		goto loc_8279DAF4;
	case 14:
		goto loc_8279DAF4;
	case 15:
		goto loc_8279DAF4;
	case 16:
		goto loc_8279DAF4;
	case 17:
		goto loc_8279DAF4;
	case 18:
		goto loc_8279DAF4;
	case 19:
		goto loc_8279DBD0;
	case 20:
		goto loc_8279DAF4;
	case 21:
		goto loc_8279DAF4;
	case 22:
		goto loc_8279DAF4;
	case 23:
		goto loc_8279DAF4;
	case 24:
		goto loc_8279DAF4;
	case 25:
		goto loc_8279DAF4;
	case 26:
		goto loc_8279DAF4;
	case 27:
		goto loc_8279DAF4;
	case 28:
		goto loc_8279DAF4;
	case 29:
		goto loc_8279DAF4;
	case 30:
		goto loc_8279DAF4;
	case 31:
		goto loc_8279DB24;
	case 32:
		goto loc_8279DC1C;
	case 33:
		goto loc_8279DC30;
	case 34:
		goto loc_8279DC28;
	case 35:
		goto loc_8279DADC;
	case 36:
		goto loc_8279DB24;
	case 37:
		goto loc_8279DAF4;
	case 38:
		goto loc_8279DAF4;
	case 39:
		goto loc_8279DAE4;
	case 40:
		goto loc_8279DAF4;
	case 41:
		goto loc_8279DB60;
	case 42:
		goto loc_8279DBB0;
	case 43:
		goto loc_8279DBF4;
	case 44:
		goto loc_8279DAF4;
	case 45:
		goto loc_8279DAF4;
	case 46:
		goto loc_8279DB0C;
	case 47:
		goto loc_8279DAF4;
	case 48:
		goto loc_8279DB7C;
	case 49:
		goto loc_8279DAF4;
	case 50:
		goto loc_8279DAF4;
	case 51:
		goto loc_8279DBD4;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-9192(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9192);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9180(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9180);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9492(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9492);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9264(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9264);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9436(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9436);
	// lwz r19,-9188(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9188);
	// lwz r19,-9168(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9168);
	// lwz r19,-9176(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9176);
	// lwz r19,-9508(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9508);
	// lwz r19,-9436(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9436);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9500(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9500);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9376(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9376);
	// lwz r19,-9296(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9296);
	// lwz r19,-9228(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9228);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9460(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9460);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9348(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9348);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9484(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9484);
	// lwz r19,-9260(r25)
	r19.u64 = PPC_LOAD_U32(r25.u32 + -9260);
loc_8279DADC:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// b 0x8279daf0
	goto loc_8279DAF0;
loc_8279DAE4:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x8279daf0
	goto loc_8279DAF0;
loc_8279DAEC:
	// li r10,3
	ctx.r10.s64 = 3;
loc_8279DAF0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8279DAF4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8279dc50
	if (!cr6.eq) goto loc_8279DC50;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(r23.u32, r21.u32, xer);
	// blt cr6,0x8279d9e4
	if (cr6.lt) goto loc_8279D9E4;
	// b 0x8279dc50
	goto loc_8279DC50;
loc_8279DB0C:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// li r26,4
	r26.s64 = 4;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc4c
	goto loc_8279DC4C;
loc_8279DB24:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// bne cr6,0x8279db50
	if (!cr6.eq) goto loc_8279DB50;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r26,r18
	r26.u64 = r18.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8279dc50
	goto loc_8279DC50;
loc_8279DB50:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc50
	goto loc_8279DC50;
loc_8279DB60:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// mr r26,r22
	r26.u64 = r22.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc4c
	goto loc_8279DC4C;
loc_8279DB7C:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bne cr6,0x8279dba4
	if (!cr6.eq) goto loc_8279DBA4;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8279dc50
	goto loc_8279DC50;
loc_8279DBA4:
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8279dc50
	goto loc_8279DC50;
loc_8279DBB0:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// mr r26,r22
	r26.u64 = r22.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r25,8
	r25.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc4c
	goto loc_8279DC4C;
loc_8279DBD0:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8279DBD4:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// mr r26,r22
	r26.u64 = r22.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// li r25,16
	r25.s64 = 16;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc4c
	goto loc_8279DC4C;
loc_8279DBF4:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// mr r26,r22
	r26.u64 = r22.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// li r25,16
	r25.s64 = 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8279dc4c
	goto loc_8279DC4C;
loc_8279DC18:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8279DC1C:
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8279dc34
	goto loc_8279DC34;
loc_8279DC24:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8279DC28:
	// mr r28,r18
	r28.u64 = r18.u64;
	// b 0x8279dc34
	goto loc_8279DC34;
loc_8279DC30:
	// mr r28,r17
	r28.u64 = r17.u64;
loc_8279DC34:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// li r26,3
	r26.s64 = 3;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8279DC4C:
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_8279DC50:
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8279df2c
	if (cr6.gt) goto loc_8279DF2C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8279dd24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8279DD24;
	// bdzf 4*cr6+eq,0x8279ddd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8279DDD8;
	// bne cr6,0x8279de58
	if (!cr6.eq) goto loc_8279DE58;
	// subf r11,r9,r23
	r11.s64 = r23.s64 - ctx.r9.s64;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// add r9,r20,r27
	ctx.r9.u64 = r20.u64 + r27.u64;
	// subf r8,r27,r11
	ctx.r8.s64 = r11.s64 - r27.s64;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r19,244
	ctx.r4.s64 = r19.s64 + 244;
	// li r3,80
	ctx.r3.s64 = 80;
	// beq cr6,0x8279dcb4
	if (cr6.eq) goto loc_8279DCB4;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279dcd0
	if (cr6.eq) goto loc_8279DCD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8279a4a0
	sub_8279A4A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279dcd4
	goto loc_8279DCD4;
loc_8279DCB4:
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279dcd0
	if (cr6.eq) goto loc_8279DCD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8279a3f0
	sub_8279A3F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279dcd4
	goto loc_8279DCD4;
loc_8279DCD0:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_8279DCD4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r10,r25,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lbz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwimi r9,r24,7,17,24
	ctx.r9.u64 = (__builtin_rotateleft32(r24.u32, 7) & 0x7F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFF807F);
	// stb r9,22(r31)
	PPC_STORE_U8(r31.u32 + 22, ctx.r9.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stb r22,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r22.u8);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r18,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r18.u32);
	// std r5,260(r1)
	PPC_STORE_U64(ctx.r1.u32 + 260, ctx.r5.u64);
	// b 0x8279df24
	goto loc_8279DF24;
loc_8279DD24:
	// subf r11,r9,r23
	r11.s64 = r23.s64 - ctx.r9.s64;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// add r9,r20,r27
	ctx.r9.u64 = r20.u64 + r27.u64;
	// subf r8,r27,r11
	ctx.r8.s64 = r11.s64 - r27.s64;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r4,r19,244
	ctx.r4.s64 = r19.s64 + 244;
	// li r3,80
	ctx.r3.s64 = 80;
	// beq cr6,0x8279dd68
	if (cr6.eq) goto loc_8279DD68;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279dd84
	if (cr6.eq) goto loc_8279DD84;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8279a760
	sub_8279A760(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279dd88
	goto loc_8279DD88;
loc_8279DD68:
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279dd84
	if (cr6.eq) goto loc_8279DD84;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8279a6b0
	sub_8279A6B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279dd88
	goto loc_8279DD88;
loc_8279DD84:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_8279DD88:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r10,r25,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lbz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwimi r9,r24,7,17,24
	ctx.r9.u64 = (__builtin_rotateleft32(r24.u32, 7) & 0x7F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFF807F);
	// stb r9,22(r31)
	PPC_STORE_U8(r31.u32 + 22, ctx.r9.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r22,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, r22.u8);
	// stw r18,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r18.u32);
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r5,228(r1)
	PPC_STORE_U64(ctx.r1.u32 + 228, ctx.r5.u64);
	// b 0x8279df24
	goto loc_8279DF24;
loc_8279DDD8:
	// addi r4,r19,244
	ctx.r4.s64 = r19.s64 + 244;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279ddfc
	if (cr6.eq) goto loc_8279DDFC;
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8279aff0
	sub_8279AFF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279de00
	goto loc_8279DE00;
loc_8279DDFC:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_8279DE00:
	// add r10,r20,r27
	ctx.r10.u64 = r20.u64 + r27.u64;
	// subf r11,r27,r23
	r11.s64 = r23.s64 - r27.s64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lbz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// rlwimi r9,r24,7,17,24
	ctx.r9.u64 = (__builtin_rotateleft32(r24.u32, 7) & 0x7F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFF807F);
	// stb r9,22(r31)
	PPC_STORE_U8(r31.u32 + 22, ctx.r9.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r22,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r22.u8);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r18.u32);
	// std r5,196(r1)
	PPC_STORE_U64(ctx.r1.u32 + 196, ctx.r5.u64);
	// b 0x8279df24
	goto loc_8279DF24;
loc_8279DE58:
	// addi r4,r19,244
	ctx.r4.s64 = r19.s64 + 244;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82764238
	sub_82764238(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279deb8
	if (cr6.eq) goto loc_8279DEB8;
	// stw r16,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r16.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r17,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r17.u32);
	// stb r17,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r17.u8);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// beq cr6,0x8279deac
	if (cr6.eq) goto loc_8279DEAC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8279DE88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279de88
	if (!cr6.eq) goto loc_8279DE88;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x8279debc
	goto loc_8279DEBC;
loc_8279DEAC:
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r17,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r17.u32);
	// b 0x8279debc
	goto loc_8279DEBC;
loc_8279DEB8:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8279DEBC:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r22.u8);
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r18.u32);
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,212(r1)
	PPC_STORE_U64(ctx.r1.u32 + 212, r11.u64);
	// b 0x8279df24
	goto loc_8279DF24;
loc_8279DED8:
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bge cr6,0x8279deec
	if (!cr6.lt) goto loc_8279DEEC;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8279DEEC:
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r17.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,244(r1)
	PPC_STORE_U64(ctx.r1.u32 + 244, ctx.r9.u64);
	// b 0x8279df24
	goto loc_8279DF24;
loc_8279DF0C:
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stb r21,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r21.u8);
	// stw r17,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r17.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,276(r1)
	PPC_STORE_U64(ctx.r1.u32 + 276, ctx.r10.u64);
loc_8279DF24:
	// addi r3,r19,36
	ctx.r3.s64 = r19.s64 + 36;
	// bl 0x8279e680
	sub_8279E680(ctx, base);
loc_8279DF2C:
	// addi r11,r23,1
	r11.s64 = r23.s64 + 1;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bge cr6,0x8279df3c
	if (!cr6.lt) goto loc_8279DF3C;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8279DF3C:
	// subf. r21,r11,r21
	r21.s64 = r21.s64 - r11.s64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// add r20,r11,r20
	r20.u64 = r11.u64 + r20.u64;
	// bne 0x8279d8e0
	if (!cr0.eq) goto loc_8279D8E0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8279bea8
	sub_8279BEA8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9438
	return;
loc_8279DF58:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8279e3b8
	sub_8279E3B8(ctx, base);
loc_8279DF64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8279bea8
	sub_8279BEA8(ctx, base);
loc_8279DF78:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
}

__attribute__((alias("__imp__sub_8279DF7C"))) PPC_WEAK_FUNC(sub_8279DF7C);
PPC_FUNC_IMPL(__imp__sub_8279DF7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8279DF80"))) PPC_WEAK_FUNC(sub_8279DF80);
PPC_FUNC_IMPL(__imp__sub_8279DF80) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r1,343
	ctx.r8.s64 = ctx.r1.s64 + 343;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r4,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r4.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r9,r1,928
	ctx.r9.s64 = ctx.r1.s64 + 928;
	// addi r31,r1,856
	r31.s64 = ctx.r1.s64 + 856;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r3,r3,-1940
	ctx.r3.s64 = ctx.r3.s64 + -1940;
	// li r7,37
	ctx.r7.s64 = 37;
	// stw r10,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// subf r5,r10,r31
	ctx.r5.s64 = r31.s64 - ctx.r10.s64;
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// stw r8,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, r11.u8);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r5.u32);
	// beq cr6,0x8279e064
	if (cr6.eq) goto loc_8279E064;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8279E04C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279e04c
	if (!cr6.eq) goto loc_8279E04C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8279E064:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8279d8a0
	sub_8279D8A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,108(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E0A0"))) PPC_WEAK_FUNC(sub_8279E0A0);
PPC_FUNC_IMPL(__imp__sub_8279E0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E0A4"))) PPC_WEAK_FUNC(sub_8279E0A4);
PPC_FUNC_IMPL(__imp__sub_8279E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E0A8"))) PPC_WEAK_FUNC(sub_8279E0A8);
PPC_FUNC_IMPL(__imp__sub_8279E0A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// ori r28,r11,63
	r28.u64 = r11.u64 | 63;
loc_8279E0DC:
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8279e10c
	if (cr6.eq) goto loc_8279E10C;
loc_8279E0E8:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8279e10c
	if (cr6.eq) goto loc_8279E10C;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8279e10c
	if (cr6.eq) goto loc_8279E10C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x8279e0e8
	if (cr6.lt) goto loc_8279E0E8;
loc_8279E10C:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// bge cr6,0x8279e130
	if (!cr6.lt) goto loc_8279E130;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8279E130:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8279e178
	if (!cr6.eq) goto loc_8279E178;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279e1d4
	if (cr6.eq) goto loc_8279E1D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279e1d4
	if (cr6.eq) goto loc_8279E1D4;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279e1d4
	if (cr6.eq) goto loc_8279E1D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8279e1c4
	goto loc_8279E1C4;
loc_8279E178:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r6,5381
	ctx.r6.s64 = 5381;
	// li r11,4
	r11.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_8279E1A0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r6,r28
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r28.s32);
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x8279e1a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8279E1A0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8279ea18
	sub_8279EA18(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8279E1C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8279e0dc
	if (!cr6.eq) goto loc_8279E0DC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8279E1D4:
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,28(r27)
	PPC_STORE_U64(r27.u32 + 28, r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8279E1E0"))) PPC_WEAK_FUNC(sub_8279E1E0);
PPC_FUNC_IMPL(__imp__sub_8279E1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8279E1E4"))) PPC_WEAK_FUNC(sub_8279E1E4);
PPC_FUNC_IMPL(__imp__sub_8279E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E1E8"))) PPC_WEAK_FUNC(sub_8279E1E8);
PPC_FUNC_IMPL(__imp__sub_8279E1E8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-2524
	ctx.r9.s64 = r11.s64 + -2524;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8279e21c
	if (cr6.eq) goto loc_8279E21C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8279E21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E22C"))) PPC_WEAK_FUNC(sub_8279E22C);
PPC_FUNC_IMPL(__imp__sub_8279E22C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E230"))) PPC_WEAK_FUNC(sub_8279E230);
PPC_FUNC_IMPL(__imp__sub_8279E230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8279E234"))) PPC_WEAK_FUNC(sub_8279E234);
PPC_FUNC_IMPL(__imp__sub_8279E234) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8279e238
	goto loc_8279E238;
loc_8279E238:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-22596
	ctx.r9.s64 = r11.s64 + -22596;
	// addi r8,r10,-2524
	ctx.r8.s64 = ctx.r10.s64 + -2524;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8279e278
	if (cr6.eq) goto loc_8279E278;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8279E278:
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

__attribute__((alias("__imp__sub_8279E238"))) PPC_WEAK_FUNC(sub_8279E238);
PPC_FUNC_IMPL(__imp__sub_8279E238) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-22596
	ctx.r9.s64 = r11.s64 + -22596;
	// addi r8,r10,-2524
	ctx.r8.s64 = ctx.r10.s64 + -2524;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8279e278
	if (cr6.eq) goto loc_8279E278;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8279E278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E28C"))) PPC_WEAK_FUNC(sub_8279E28C);
PPC_FUNC_IMPL(__imp__sub_8279E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E290"))) PPC_WEAK_FUNC(sub_8279E290);
PPC_FUNC_IMPL(__imp__sub_8279E290) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8279e2cc
	if (!cr6.eq) goto loc_8279E2CC;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279e318
	if (cr6.eq) goto loc_8279E318;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8279e318
	goto loc_8279E318;
loc_8279E2CC:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x8279e2f0
	if (cr6.eq) goto loc_8279E2F0;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x8279e314
	goto loc_8279E314;
loc_8279E2F0:
	// li r11,2
	r11.s64 = 2;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,27508(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_8279E314:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8279E318:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_8279E330"))) PPC_WEAK_FUNC(sub_8279E330);
PPC_FUNC_IMPL(__imp__sub_8279E330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E334"))) PPC_WEAK_FUNC(sub_8279E334);
PPC_FUNC_IMPL(__imp__sub_8279E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E338"))) PPC_WEAK_FUNC(sub_8279E338);
PPC_FUNC_IMPL(__imp__sub_8279E338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x8279e3ac
	if (cr6.eq) goto loc_8279E3AC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x8279e3ac
	if (!cr6.eq) goto loc_8279E3AC;
loc_8279E36C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x8279e388
	if (!cr6.eq) goto loc_8279E388;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8279E388:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8279e3ac
	if (cr6.eq) goto loc_8279E3AC;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8279e36c
	goto loc_8279E36C;
loc_8279E3AC:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_8279E3B0"))) PPC_WEAK_FUNC(sub_8279E3B0);
PPC_FUNC_IMPL(__imp__sub_8279E3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E3B4"))) PPC_WEAK_FUNC(sub_8279E3B4);
PPC_FUNC_IMPL(__imp__sub_8279E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E3B8"))) PPC_WEAK_FUNC(sub_8279E3B8);
PPC_FUNC_IMPL(__imp__sub_8279E3B8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bge cr6,0x8279e3f4
	if (!cr6.lt) goto loc_8279E3F4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8279e410
	if (!cr6.lt) goto loc_8279E410;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8279e404
	goto loc_8279E404;
loc_8279E3F4:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8279e410
	if (cr6.lt) goto loc_8279E410;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_8279E404:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279e290
	sub_8279E290(ctx, base);
loc_8279E410:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r8,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8279E444"))) PPC_WEAK_FUNC(sub_8279E444);
PPC_FUNC_IMPL(__imp__sub_8279E444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279E448"))) PPC_WEAK_FUNC(sub_8279E448);
PPC_FUNC_IMPL(__imp__sub_8279E448) {
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279e4cc
	if (cr6.eq) goto loc_8279E4CC;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 | 63;
loc_8279E47C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x8279e47c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8279E47C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// and r5,r11,r10
	ctx.r5.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x8279e338
	sub_8279E338(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8279e4cc
	if (cr6.lt) goto loc_8279E4CC;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279E4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E4E0"))) PPC_WEAK_FUNC(sub_8279E4E0);
PPC_FUNC_IMPL(__imp__sub_8279E4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4E4"))) PPC_WEAK_FUNC(sub_8279E4E4);
PPC_FUNC_IMPL(__imp__sub_8279E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E4E8"))) PPC_WEAK_FUNC(sub_8279E4E8);
PPC_FUNC_IMPL(__imp__sub_8279E4E8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8279e510
	if (!cr6.eq) goto loc_8279E510;
	// bl 0x8286d1c8
	sub_8286D1C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_8279E510:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bge cr6,0x8279e520
	if (!cr6.lt) goto loc_8279E520;
	// li r31,8
	r31.s64 = 8;
	// b 0x8279e568
	goto loc_8279E568;
loc_8279E520:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x828f2070
	sub_828F2070(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26684);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// slw r31,r7,r6
	r31.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
loc_8279E568:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r26,0
	r26.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + r11.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r3,27508(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r7,r31,-1
	ctx.r7.s64 = r31.s64 + -1;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	r27.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// beq cr6,0x8279e5dc
	if (cr6.eq) goto loc_8279E5DC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r26
	r11.u64 = r26.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
loc_8279E5C8:
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// bdnz 0x8279e5c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8279E5C8;
loc_8279E5DC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279e660
	if (cr6.eq) goto loc_8279E660;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// lis r11,1
	r11.s64 = 65536;
	// ori r30,r11,63
	r30.u64 = r11.u64 | 63;
loc_8279E5FC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x8279e64c
	if (cr6.eq) goto loc_8279E64C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// li r11,4
	r11.s64 = 4;
	// li r6,5381
	ctx.r6.s64 = 5381;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8279E628:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x8279e628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8279E628;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279e760
	sub_8279E760(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_8279E64C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8279e5fc
	if (!cr0.eq) goto loc_8279E5FC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8279E660:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x8286d1c8
	sub_8286D1C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8279E678"))) PPC_WEAK_FUNC(sub_8279E678);
PPC_FUNC_IMPL(__imp__sub_8279E678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8279E67C"))) PPC_WEAK_FUNC(sub_8279E67C);
PPC_FUNC_IMPL(__imp__sub_8279E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E680"))) PPC_WEAK_FUNC(sub_8279E680);
PPC_FUNC_IMPL(__imp__sub_8279E680) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8279e6cc
	if (!cr6.lt) goto loc_8279E6CC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// b 0x8279e6d4
	goto loc_8279E6D4;
loc_8279E6CC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8279e3b8
	sub_8279E3B8(ctx, base);
loc_8279E6D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E6F0"))) PPC_WEAK_FUNC(sub_8279E6F0);
PPC_FUNC_IMPL(__imp__sub_8279E6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E6F4"))) PPC_WEAK_FUNC(sub_8279E6F4);
PPC_FUNC_IMPL(__imp__sub_8279E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279E6F8"))) PPC_WEAK_FUNC(sub_8279E6F8);
PPC_FUNC_IMPL(__imp__sub_8279E6F8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8279e448
	sub_8279E448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279e748
	if (cr6.eq) goto loc_8279E748;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279e730
	if (cr6.eq) goto loc_8279E730;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8279E730:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8279E748:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8279E75C"))) PPC_WEAK_FUNC(sub_8279E75C);
PPC_FUNC_IMPL(__imp__sub_8279E75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E760"))) PPC_WEAK_FUNC(sub_8279E760);
PPC_FUNC_IMPL(__imp__sub_8279E760) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279e78c
	if (!cr6.eq) goto loc_8279E78C;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8279e7b8
	goto loc_8279E7B8;
loc_8279E78C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8279e7c0
	if (!cr6.gt) goto loc_8279E7C0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8279E7B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279e4e8
	sub_8279E4E8(ctx, base);
loc_8279E7C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + r11.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x8279e82c
	if (!cr6.eq) goto loc_8279E82C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8279E82C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_8279E830:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x8279e830
	if (!cr6.eq) goto loc_8279E830;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8279e8c0
	if (!cr6.eq) goto loc_8279E8C0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279e898
	if (cr6.eq) goto loc_8279E898;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
loc_8279E898:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8279E8C0:
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8279e904
	if (cr6.eq) goto loc_8279E904;
loc_8279E8E0:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x8279e8e0
	if (!cr6.eq) goto loc_8279E8E0;
loc_8279E904:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8279e938
	if (cr6.eq) goto loc_8279E938;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
loc_8279E938:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8279E964"))) PPC_WEAK_FUNC(sub_8279E964);
PPC_FUNC_IMPL(__imp__sub_8279E964) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279E968"))) PPC_WEAK_FUNC(sub_8279E968);
PPC_FUNC_IMPL(__imp__sub_8279E968) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8286d1c8
	sub_8286D1C8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-2524
	ctx.r9.s64 = r11.s64 + -2524;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8279e9b0
	if (cr6.eq) goto loc_8279E9B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8279E9B0:
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

__attribute__((alias("__imp__sub_8279E9C4"))) PPC_WEAK_FUNC(sub_8279E9C4);
PPC_FUNC_IMPL(__imp__sub_8279E9C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E9C8"))) PPC_WEAK_FUNC(sub_8279E9C8);
PPC_FUNC_IMPL(__imp__sub_8279E9C8) {
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
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279ea00
	if (cr6.eq) goto loc_8279EA00;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8279EA00:
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

__attribute__((alias("__imp__sub_8279EA14"))) PPC_WEAK_FUNC(sub_8279EA14);
PPC_FUNC_IMPL(__imp__sub_8279EA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279EA18"))) PPC_WEAK_FUNC(sub_8279EA18);
PPC_FUNC_IMPL(__imp__sub_8279EA18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279ea44
	if (!cr6.eq) goto loc_8279EA44;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8279ea70
	goto loc_8279EA70;
loc_8279EA44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8279ea78
	if (!cr6.gt) goto loc_8279EA78;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8279EA70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279e4e8
	sub_8279E4E8(ctx, base);
loc_8279EA78:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + r11.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x8279eaec
	if (!cr6.eq) goto loc_8279EAEC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8279EAEC:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_8279EAF0:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x8279eaf0
	if (!cr6.eq) goto loc_8279EAF0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x8279eb88
	if (!cr6.eq) goto loc_8279EB88;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279eb58
	if (cr6.eq) goto loc_8279EB58;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r4,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r4.u32);
loc_8279EB58:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r4.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8279EB88:
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8279ebcc
	if (cr6.eq) goto loc_8279EBCC;
loc_8279EBA8:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x8279eba8
	if (!cr6.eq) goto loc_8279EBA8;
loc_8279EBCC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8279ebfc
	if (cr6.eq) goto loc_8279EBFC;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r3,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r3.u32);
loc_8279EBFC:
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r4.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8279EC30"))) PPC_WEAK_FUNC(sub_8279EC30);
PPC_FUNC_IMPL(__imp__sub_8279EC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8279EC34"))) PPC_WEAK_FUNC(sub_8279EC34);
PPC_FUNC_IMPL(__imp__sub_8279EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279EC38"))) PPC_WEAK_FUNC(sub_8279EC38);
PPC_FUNC_IMPL(__imp__sub_8279EC38) {
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
	// bl 0x827909e8
	sub_827909E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-1788
	ctx.r9.s64 = r11.s64 + -1788;
	// addi r8,r10,-1876
	ctx.r8.s64 = ctx.r10.s64 + -1876;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

