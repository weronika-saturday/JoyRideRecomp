#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825D6070"))) PPC_WEAK_FUNC(sub_825D6070);
PPC_FUNC_IMPL(__imp__sub_825D6070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d60a0
	if (cr0.eq) goto loc_825D60A0;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r9,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d6098
	if (cr6.gt) goto loc_825D6098;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D6098:
	// rlwinm r10,r9,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3F;
	// b 0x825d616c
	goto loc_825D616C;
loc_825D60A0:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r6,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d60cc
	if (!cr0.eq) goto loc_825D60CC;
	// rlwinm r10,r6,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d60bc
	if (cr6.gt) goto loc_825D60BC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D60BC:
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d60cc
	if (cr6.gt) goto loc_825D60CC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D60CC:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// addi r9,r9,21424
	ctx.r9.s64 = ctx.r9.s64 + 21424;
	// rlwinm r5,r10,8,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// addi r3,r9,32
	ctx.r3.s64 = ctx.r9.s64 + 32;
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x825d610c
	if (cr6.lt) goto loc_825D610C;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d610c
	if (cr0.eq) goto loc_825D610C;
	// rlwinm r9,r10,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825d610c
	if (cr6.gt) goto loc_825D610C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D610C:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x825d612c
	if (cr6.lt) goto loc_825D612C;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d612c
	if (cr0.eq) goto loc_825D612C;
	// rlwinm r9,r10,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825d612c
	if (cr6.gt) goto loc_825D612C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D612C:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x825d613c
	if (!cr6.lt) goto loc_825D613C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x825d6154
	if (!cr6.eq) goto loc_825D6154;
loc_825D613C:
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d6154
	if (cr0.eq) goto loc_825D6154;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825d6154
	if (cr6.gt) goto loc_825D6154;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D6154:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x825d6178
	if (!cr6.eq) goto loc_825D6178;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r6,r10,30,4,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8000000) | (ctx.r6.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r6,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
loc_825D616C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d6178
	if (cr6.gt) goto loc_825D6178;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D6178:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6180"))) PPC_WEAK_FUNC(sub_825D6180);
PPC_FUNC_IMPL(__imp__sub_825D6180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r9,20
	r11.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm. r7,r9,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r4,r9,16,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFF;
	// beqlr 
	if (cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825D61A8:
	// slw r11,r3,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6208
	if (!cr0.eq) goto loc_825D6208;
	// lbz r11,8(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// blt cr6,0x825d61d8
	if (cr6.lt) goto loc_825D61D8;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ble cr6,0x825d61dc
	if (!cr6.gt) goto loc_825D61DC;
loc_825D61D8:
	// li r11,0
	r11.s64 = 0;
loc_825D61DC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r9,27
	cr6.compare<uint32_t>(ctx.r9.u32, 27, xer);
	// blt cr6,0x825d61f4
	if (cr6.lt) goto loc_825D61F4;
	// cmplwi cr6,r9,34
	cr6.compare<uint32_t>(ctx.r9.u32, 34, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ble cr6,0x825d61f8
	if (!cr6.gt) goto loc_825D61F8;
loc_825D61F4:
	// li r11,0
	r11.s64 = 0;
loc_825D61F8:
	// clrlwi. r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d6220
	if (!cr0.eq) goto loc_825D6220;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6220
	if (!cr0.eq) goto loc_825D6220;
loc_825D6208:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x825d61a8
	if (cr6.lt) goto loc_825D61A8;
	// blr 
	return;
loc_825D6220:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825D6224"))) PPC_WEAK_FUNC(sub_825D6224);
PPC_FUNC_IMPL(__imp__sub_825D6224) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6228"))) PPC_WEAK_FUNC(sub_825D6228);
PPC_FUNC_IMPL(__imp__sub_825D6228) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d62ec
	if (cr0.eq) goto loc_825D62EC;
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r30,r31,20,28,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 20) & 0xF;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d62ec
	if (cr0.eq) goto loc_825D62EC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825d6180
	sub_825D6180(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bgt cr6,0x825d62b0
	if (cr6.gt) goto loc_825D62B0;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(r30.u32, 5, xer);
	// bge cr6,0x825d62a8
	if (!cr6.lt) goto loc_825D62A8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825d62ec
	if (cr6.eq) goto loc_825D62EC;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// ble cr6,0x825d62a8
	if (!cr6.gt) goto loc_825D62A8;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// beq cr6,0x825d62d4
	if (cr6.eq) goto loc_825D62D4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// beq cr6,0x825d62c0
	if (cr6.eq) goto loc_825D62C0;
	// b 0x825d62ec
	goto loc_825D62EC;
loc_825D62A8:
	// rlwimi r31,r11,9,22,22
	r31.u64 = (__builtin_rotateleft32(r11.u32, 9) & 0x200) | (r31.u64 & 0xFFFFFFFFFFFFFDFF);
	// b 0x825d62e8
	goto loc_825D62E8;
loc_825D62B0:
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(r30.u32, 13, xer);
	// beq cr6,0x825d62d4
	if (cr6.eq) goto loc_825D62D4;
	// cmplwi cr6,r30,14
	cr6.compare<uint32_t>(r30.u32, 14, xer);
	// bne cr6,0x825d62ec
	if (!cr6.eq) goto loc_825D62EC;
loc_825D62C0:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,10
	r11.u64 = r11.u64 & 10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x825d62e4
	goto loc_825D62E4;
loc_825D62D4:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,10
	r11.u64 = r11.u64 & 10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
loc_825D62E4:
	// rlwimi r31,r11,12,16,19
	r31.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (r31.u64 & 0xFFFFFFFFFFFF0FFF);
loc_825D62E8:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_825D62EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D62F0"))) PPC_WEAK_FUNC(sub_825D62F0);
PPC_FUNC_IMPL(__imp__sub_825D62F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D62F4"))) PPC_WEAK_FUNC(sub_825D62F4);
PPC_FUNC_IMPL(__imp__sub_825D62F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D62F8"))) PPC_WEAK_FUNC(sub_825D62F8);
PPC_FUNC_IMPL(__imp__sub_825D62F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d63c4
	if (!cr0.eq) goto loc_825D63C4;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d63c4
	if (!cr0.eq) goto loc_825D63C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825d5e70
	sub_825D5E70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825d63c4
	if (cr0.eq) goto loc_825D63C4;
	// li r11,4
	r11.s64 = 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,26
	ctx.r4.u64 = ctx.r10.u32 & 0x3F;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825D634C:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d63bc
	if (cr0.eq) goto loc_825D63BC;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x825d63bc
	if (cr6.eq) goto loc_825D63BC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r30,r29,20
	r30.u64 = r29.u32 & 0xFFF;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// lhzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r30.u32);
	// lhzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r8.u16);
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~r11.u64;
loc_825D63BC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x825d634c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D634C;
loc_825D63C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D63C8"))) PPC_WEAK_FUNC(sub_825D63C8);
PPC_FUNC_IMPL(__imp__sub_825D63C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D63CC"))) PPC_WEAK_FUNC(sub_825D63CC);
PPC_FUNC_IMPL(__imp__sub_825D63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D63D0"))) PPC_WEAK_FUNC(sub_825D63D0);
PPC_FUNC_IMPL(__imp__sub_825D63D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6480
	if (!cr0.eq) goto loc_825D6480;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6480
	if (!cr0.eq) goto loc_825D6480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825d5e70
	sub_825D5E70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825d6480
	if (cr0.eq) goto loc_825D6480;
	// li r11,4
	r11.s64 = 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r10,26
	ctx.r5.u64 = ctx.r10.u32 & 0x3F;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825D6428:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d6478
	if (cr0.eq) goto loc_825D6478;
	// addi r11,r5,2
	r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x825d6478
	if (cr6.eq) goto loc_825D6478;
	// addi r10,r11,36
	ctx.r10.s64 = r11.s64 + 36;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// andc r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ~r11.u64;
loc_825D6478:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x825d6428
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D6428;
loc_825D6480:
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

__attribute__((alias("__imp__sub_825D6494"))) PPC_WEAK_FUNC(sub_825D6494);
PPC_FUNC_IMPL(__imp__sub_825D6494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6498"))) PPC_WEAK_FUNC(sub_825D6498);
PPC_FUNC_IMPL(__imp__sub_825D6498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d64ec
	if (cr0.eq) goto loc_825D64EC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825d64d8
	if (cr6.gt) goto loc_825D64D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,0,27
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// b 0x825d64e8
	goto loc_825D64E8;
loc_825D64D8:
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x825d64ec
	if (!cr6.eq) goto loc_825D64EC;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_825D64E8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_825D64EC:
	// lbz r11,8(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x825d6504
	if (cr6.lt) goto loc_825D6504;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(r11.u32, 27, xer);
	// ble cr6,0x825d651c
	if (!cr6.gt) goto loc_825D651C;
loc_825D6504:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_825D651C:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D652C"))) PPC_WEAK_FUNC(sub_825D652C);
PPC_FUNC_IMPL(__imp__sub_825D652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6530"))) PPC_WEAK_FUNC(sub_825D6530);
PPC_FUNC_IMPL(__imp__sub_825D6530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// rlwinm. r26,r11,20,29,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x825d6604
	if (cr0.eq) goto loc_825D6604;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r6,r10,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30;
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r25,r11,16,20,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// or r24,r6,r8
	r24.u64 = ctx.r6.u64 | ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825d6604
	if (cr6.eq) goto loc_825D6604;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_825D6590:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x825d6600
	if (cr6.gt) goto loc_825D6600;
	// bne cr6,0x825d65e8
	if (!cr6.eq) goto loc_825D65E8;
	// slw r11,r27,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// and r11,r11,r24
	r11.u64 = r11.u64 & r24.u64;
	// mtctr r22
	ctr.u64 = r22.u64;
	// slw r9,r27,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (r27.u32 << (r28.u8 & 0x3F));
	// addic r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	// and r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 & r25.u64;
	// subfe r5,r8,r11
	temp.u8 = (~ctx.r8.u32 + r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// clrlwi r11,r10,20
	r11.u64 = ctx.r10.u32 & 0xFFF;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// subfe r4,r4,r9
	temp.u8 = (~ctx.r4.u32 + ctx.r9.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_825D65E8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x825d6590
	if (cr6.lt) goto loc_825D6590;
	// b 0x825d6604
	goto loc_825D6604;
loc_825D6600:
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
loc_825D6604:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825D6608"))) PPC_WEAK_FUNC(sub_825D6608);
PPC_FUNC_IMPL(__imp__sub_825D6608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825D660C"))) PPC_WEAK_FUNC(sub_825D660C);
PPC_FUNC_IMPL(__imp__sub_825D660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6610"))) PPC_WEAK_FUNC(sub_825D6610);
PPC_FUNC_IMPL(__imp__sub_825D6610) {
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
	// lwz r3,19896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19896);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d6650
	if (cr6.eq) goto loc_825D6650;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
loc_825D6650:
	// stw r30,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825d6670
	if (cr6.eq) goto loc_825D6670;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D6670:
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

__attribute__((alias("__imp__sub_825D6684"))) PPC_WEAK_FUNC(sub_825D6684);
PPC_FUNC_IMPL(__imp__sub_825D6684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6688"))) PPC_WEAK_FUNC(sub_825D6688);
PPC_FUNC_IMPL(__imp__sub_825D6688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,19892(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19892);
	// andi. r10,r4,249
	ctx.r10.u64 = ctx.r4.u64 & 249;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,29,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,19892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19892, r11.u32);
}

__attribute__((alias("__imp__sub_825D66A4"))) PPC_WEAK_FUNC(sub_825D66A4);
PPC_FUNC_IMPL(__imp__sub_825D66A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D66A8"))) PPC_WEAK_FUNC(sub_825D66A8);
PPC_FUNC_IMPL(__imp__sub_825D66A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r4,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r4.u32);
	// stw r5,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_825D66C0"))) PPC_WEAK_FUNC(sub_825D66C0);
PPC_FUNC_IMPL(__imp__sub_825D66C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D66C4"))) PPC_WEAK_FUNC(sub_825D66C4);
PPC_FUNC_IMPL(__imp__sub_825D66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D66C8"))) PPC_WEAK_FUNC(sub_825D66C8);
PPC_FUNC_IMPL(__imp__sub_825D66C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825D66C8"))) PPC_WEAK_FUNC(sub_825D66C8);
PPC_FUNC_IMPL(__imp__sub_825D66C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d6610
	sub_825D6610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D66CC"))) PPC_WEAK_FUNC(sub_825D66CC);
PPC_FUNC_IMPL(__imp__sub_825D66CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D66D0"))) PPC_WEAK_FUNC(sub_825D66D0);
PPC_FUNC_IMPL(__imp__sub_825D66D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x825d6714
	if (!cr6.eq) goto loc_825D6714;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6714
	if (!cr0.eq) goto loc_825D6714;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_825D6714:
	// rlwinm. r11,r22,0,29,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d6858
	if (cr0.eq) goto loc_825D6858;
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r31,0,20,20
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d6734
	if (cr0.eq) goto loc_825D6734;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x825d673c
	goto loc_825D673C;
loc_825D6734:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_825D673C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r25,r11,20,29,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x825d6858
	if (cr0.eq) goto loc_825D6858;
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825d6850
	if (cr6.lt) goto loc_825D6850;
	// mulli r9,r25,12
	ctx.r9.s64 = r25.s64 * 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x825d6850
	if (cr6.gt) goto loc_825D6850;
	// rlwinm r9,r31,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r11,16,20,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// or r26,r9,r8
	r26.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825d6858
	if (cr6.eq) goto loc_825D6858;
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_825D6790:
	// li r11,2
	r11.s64 = 2;
	// slw r10,r27,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// slw r8,r27,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// beq 0x825d67d8
	if (cr0.eq) goto loc_825D67D8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_825D67D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d67e4
	if (cr0.eq) goto loc_825D67E4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_825D67E4:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d67f4
	if (cr0.eq) goto loc_825D67F4;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_825D67F4:
	// rlwinm r10,r10,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	cr6.compare<uint32_t>(ctx.r10.u32, 20480, xer);
	// bne cr6,0x825d6804
	if (!cr6.eq) goto loc_825D6804;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
loc_825D6804:
	// and r10,r11,r22
	ctx.r10.u64 = r11.u64 & r22.u64;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d6838
	if (cr0.eq) goto loc_825D6838;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// mtctr r23
	ctr.u64 = r23.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d6858
	if (cr0.lt) goto loc_825D6858;
loc_825D6838:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x825d6790
	if (cr6.lt) goto loc_825D6790;
	// b 0x825d6858
	goto loc_825D6858;
loc_825D6850:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825D6858:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825D685C"))) PPC_WEAK_FUNC(sub_825D685C);
PPC_FUNC_IMPL(__imp__sub_825D685C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825D6860"))) PPC_WEAK_FUNC(sub_825D6860);
PPC_FUNC_IMPL(__imp__sub_825D6860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r19,-1
	r19.s64 = -1;
	// li r15,-1
	r15.s64 = -1;
	// addi r21,r1,144
	r21.s64 = ctx.r1.s64 + 144;
	// addi r25,r11,-4
	r25.s64 = r11.s64 + -4;
	// li r27,1
	r27.s64 = 1;
loc_825D68B8:
	// li r11,12
	r11.s64 = 12;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r11,r31,r11
	r11.u32 = r31.u32 / r11.u32;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// beq cr6,0x825d68e8
	if (cr6.eq) goto loc_825D68E8;
	// cmplw cr6,r31,r16
	cr6.compare<uint32_t>(r31.u32, r16.u32, xer);
	// bge cr6,0x825d6bb0
	if (!cr6.lt) goto loc_825D6BB0;
	// add r28,r11,r17
	r28.u64 = r11.u64 + r17.u64;
	// b 0x825d68f8
	goto loc_825D68F8;
loc_825D68E8:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x825d6bb0
	if (!cr6.lt) goto loc_825D6BB0;
	// add r28,r11,r18
	r28.u64 = r11.u64 + r18.u64;
loc_825D68F8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// clrlwi. r7,r22,31
	ctx.r7.u64 = r22.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lhz r11,6(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 6);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lhz r11,8(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq 0x825d6958
	if (cr0.eq) goto loc_825D6958;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// divwu r4,r31,r9
	ctx.r4.u32 = r31.u32 / ctx.r9.u32;
	// mtctr r20
	ctr.u64 = r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d6bb8
	if (cr0.lt) goto loc_825D6BB8;
loc_825D6958:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x825d6b38
	if (cr6.gt) goto loc_825D6B38;
	// lis r12,-32253
	r12.s64 = -2113732608;
	// addi r12,r12,-552
	r12.s64 = r12.s64 + -552;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32163
	r12.s64 = -2107834368;
	// nop 
	// addi r12,r12,27028
	r12.s64 = r12.s64 + 27028;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_825D6994:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// b 0x825d6b34
	goto loc_825D6B34;
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825d6b34
	if (!cr6.eq) goto loc_825D6B34;
	// b 0x825d6994
	goto loc_825D6994;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r10,18,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7C;
	// lwzx r9,r9,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r14.u32);
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d6a98
	if (cr0.eq) goto loc_825D6A98;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpwi cr6,r15,4
	cr6.compare<int32_t>(r15.s32, 4, xer);
	// blt cr6,0x825d69f4
	if (cr6.lt) goto loc_825D69F4;
loc_825D69EC:
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x825d6b38
	goto loc_825D6B38;
loc_825D69F4:
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// b 0x825d6b34
	goto loc_825D6B34;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// blt cr6,0x825d69ec
	if (cr6.lt) goto loc_825D69EC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r7,r9,18,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lwzx r7,r7,r14
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r14.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x825d6a30
	if (!cr6.lt) goto loc_825D6A30;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// b 0x825d6a9c
	goto loc_825D6A9C;
loc_825D6A30:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// b 0x825d6b34
	goto loc_825D6B34;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d6a78
	if (!cr0.eq) goto loc_825D6A78;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d6a78
	if (!cr0.eq) goto loc_825D6A78;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x825d6b34
	if (!cr6.eq) goto loc_825D6B34;
loc_825D6A78:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmpwi cr6,r19,4
	cr6.compare<int32_t>(r19.s32, 4, xer);
	// bge cr6,0x825d69ec
	if (!cr6.lt) goto loc_825D69EC;
	// rlwinm r9,r29,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// addi r7,r31,6
	ctx.r7.s64 = r31.s64 + 6;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,-4(r21)
	PPC_STORE_U32(r21.u32 + -4, ctx.r9.u32);
loc_825D6A98:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
loc_825D6A9C:
	// rlwinm r29,r11,21,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// mulli r31,r10,6
	r31.s64 = ctx.r10.s64 * 6;
	// b 0x825d6b38
	goto loc_825D6B38;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// blt cr6,0x825d69ec
	if (cr6.lt) goto loc_825D69EC;
	// lwzu r11,-4(r21)
	ea = -4 + r21.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r21.u32 = ea;
	// addi r19,r19,-1
	r19.s64 = r19.s64 + -1;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// b 0x825d6b38
	goto loc_825D6B38;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d6a98
	if (!cr0.eq) goto loc_825D6A98;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d6b34
	if (!cr0.eq) goto loc_825D6B34;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x825d6b34
	if (!cr6.eq) goto loc_825D6B34;
	// b 0x825d6a98
	goto loc_825D6A98;
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825d6b34
	if (!cr6.eq) goto loc_825D6B34;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_825D6B34:
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
loc_825D6B38:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d6b74
	if (cr0.eq) goto loc_825D6B74;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d66d0
	sub_825D66D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d6bb8
	if (cr0.lt) goto loc_825D6BB8;
loc_825D6B74:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// beq 0x825d68b8
	if (cr0.eq) goto loc_825D68B8;
	// b 0x825d6bb8
	goto loc_825D6BB8;
loc_825D6BB0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825D6BB8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_825D6BBC"))) PPC_WEAK_FUNC(sub_825D6BBC);
PPC_FUNC_IMPL(__imp__sub_825D6BBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825D6BC0"))) PPC_WEAK_FUNC(sub_825D6BC0);
PPC_FUNC_IMPL(__imp__sub_825D6BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825d6c04
	if (cr0.eq) goto loc_825D6C04;
	// lwz r11,324(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825d6860
	sub_825D6860(ctx, base);
	// b 0x825d6d2c
	goto loc_825D6D2C;
loc_825D6C04:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r25,r27
	r25.u64 = r27.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d6d2c
	if (cr6.eq) goto loc_825D6D2C;
	// lwz r24,324(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// clrlwi r20,r30,31
	r20.u64 = r30.u32 & 0x1;
loc_825D6C20:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_825D6C58:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825d6c88
	if (cr6.eq) goto loc_825D6C88;
	// li r11,6
	r11.s64 = 6;
	// mtctr r28
	ctr.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// divwu r11,r21,r11
	r11.u32 = r21.u32 / r11.u32;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d6d2c
	if (cr0.lt) goto loc_825D6D2C;
loc_825D6C88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d6cd4
	if (cr0.eq) goto loc_825D6CD4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d66d0
	sub_825D66D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d6d2c
	if (cr0.lt) goto loc_825D6D2C;
loc_825D6CD4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// blt cr6,0x825d6c58
	if (cr6.lt) goto loc_825D6C58;
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d6d18
	if (!cr0.eq) goto loc_825D6D18;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r9,16,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r7,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
loc_825D6D18:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r21,r21,12
	r21.s64 = r21.s64 + 12;
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x825d6c20
	if (cr6.lt) goto loc_825D6C20;
loc_825D6D2C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825D6D30"))) PPC_WEAK_FUNC(sub_825D6D30);
PPC_FUNC_IMPL(__imp__sub_825D6D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825D6D34"))) PPC_WEAK_FUNC(sub_825D6D34);
PPC_FUNC_IMPL(__imp__sub_825D6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6D38"))) PPC_WEAK_FUNC(sub_825D6D38);
PPC_FUNC_IMPL(__imp__sub_825D6D38) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgt cr6,0x825d6da0
	if (cr6.gt) goto loc_825D6DA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x825d6da0
	if (!cr6.lt) goto loc_825D6DA0;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_825D6DA0:
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

__attribute__((alias("__imp__sub_825D6DB8"))) PPC_WEAK_FUNC(sub_825D6DB8);
PPC_FUNC_IMPL(__imp__sub_825D6DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DBC"))) PPC_WEAK_FUNC(sub_825D6DBC);
PPC_FUNC_IMPL(__imp__sub_825D6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6DC0"))) PPC_WEAK_FUNC(sub_825D6DC0);
PPC_FUNC_IMPL(__imp__sub_825D6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825D6DC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825d6de4
	if (!cr6.eq) goto loc_825D6DE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// blt cr6,0x825d6dc8
	if (cr6.lt) goto loc_825D6DC8;
loc_825D6DE4:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x825d6e0c
	goto loc_825D6E0C;
loc_825D6DEC:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d6e14
	if (!cr0.eq) goto loc_825D6E14;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D6E0C:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x825d6dec
	if (cr6.lt) goto loc_825D6DEC;
loc_825D6E14:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_825D6E18"))) PPC_WEAK_FUNC(sub_825D6E18);
PPC_FUNC_IMPL(__imp__sub_825D6E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6E1C"))) PPC_WEAK_FUNC(sub_825D6E1C);
PPC_FUNC_IMPL(__imp__sub_825D6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6E20"))) PPC_WEAK_FUNC(sub_825D6E20);
PPC_FUNC_IMPL(__imp__sub_825D6E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
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
	// bl 0x828e93ec
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-4
	r11.s64 = ctx.r4.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addi r29,r6,-976
	r29.s64 = ctx.r6.s64 + -976;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	r22.s64 = 524288;
	// lis r29,1
	r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// li r28,768
	r28.s64 = 768;
	// li r27,8978
	r27.s64 = 8978;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r26,8205
	r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// li r25,8704
	r25.s64 = 8704;
	// li r24,0
	r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	r23.s64 = 8832;
	// li r21,8962
	r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	r22.u64 = r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	r20.s64 = 131072;
	// li r19,0
	r19.s64 = 0;
	// ori r20,r20,8320
	r20.u64 = r20.u64 | 8320;
	// li r18,0
	r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// lis r17,16
	r17.s64 = 1048576;
	// ori r29,r17,16
	r29.u64 = r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r18.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825D6FF4"))) PPC_WEAK_FUNC(sub_825D6FF4);
PPC_FUNC_IMPL(__imp__sub_825D6FF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825D6FF8"))) PPC_WEAK_FUNC(sub_825D6FF8);
PPC_FUNC_IMPL(__imp__sub_825D6FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r11,r10,35,63
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 17;
}

__attribute__((alias("__imp__sub_825D710C"))) PPC_WEAK_FUNC(sub_825D710C);
PPC_FUNC_IMPL(__imp__sub_825D710C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc610
	sub_825DC610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7110"))) PPC_WEAK_FUNC(sub_825D7110);
PPC_FUNC_IMPL(__imp__sub_825D7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,36096
	ctx.r7.u64 = ctx.r9.u64 | 36096;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// neg r10,r4
	ctx.r10.s64 = -ctx.r4.s64;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwimi r10,r4,8,17,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x7F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
loc_825D714C:
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// bdnz 0x825d714c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D714C;
	// li r9,3328
	ctx.r9.s64 = 3328;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
}

__attribute__((alias("__imp__sub_825D716C"))) PPC_WEAK_FUNC(sub_825D716C);
PPC_FUNC_IMPL(__imp__sub_825D716C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7170"))) PPC_WEAK_FUNC(sub_825D7170);
PPC_FUNC_IMPL(__imp__sub_825D7170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,14184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14184);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
}

__attribute__((alias("__imp__sub_825D7178"))) PPC_WEAK_FUNC(sub_825D7178);
PPC_FUNC_IMPL(__imp__sub_825D7178) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241a3b0
	sub_8241A3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D717C"))) PPC_WEAK_FUNC(sub_825D717C);
PPC_FUNC_IMPL(__imp__sub_825D717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7180"))) PPC_WEAK_FUNC(sub_825D7180);
PPC_FUNC_IMPL(__imp__sub_825D7180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// ble cr6,0x825d7220
	if (!cr6.gt) goto loc_825D7220;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_825D71C4:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v62,v61,v62
	_mm_store_si128((__m128i*)v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v60,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	_mm_store_si128((__m128i*)v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	_mm_store_si128((__m128i*)v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vor128 v60,v59,v60
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v60.u8)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x825d71c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D71C4;
loc_825D7220:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d7248
	if (cr6.eq) goto loc_825D7248;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825D722C:
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x825d722c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D722C;
loc_825D7248:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
}

__attribute__((alias("__imp__sub_825D7254"))) PPC_WEAK_FUNC(sub_825D7254);
PPC_FUNC_IMPL(__imp__sub_825D7254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7258"))) PPC_WEAK_FUNC(sub_825D7258);
PPC_FUNC_IMPL(__imp__sub_825D7258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// ble cr6,0x825d72f8
	if (!cr6.gt) goto loc_825D72F8;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_825D729C:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v62,v61,v62
	_mm_store_si128((__m128i*)v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v60,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	_mm_store_si128((__m128i*)v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	_mm_store_si128((__m128i*)v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vor128 v60,v59,v60
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v60.u8)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x825d729c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D729C;
loc_825D72F8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d7320
	if (cr6.eq) goto loc_825D7320;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825D7304:
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x825d7304
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D7304;
loc_825D7320:
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
}

__attribute__((alias("__imp__sub_825D732C"))) PPC_WEAK_FUNC(sub_825D732C);
PPC_FUNC_IMPL(__imp__sub_825D732C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7330"))) PPC_WEAK_FUNC(sub_825D7330);
PPC_FUNC_IMPL(__imp__sub_825D7330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_825D7348"))) PPC_WEAK_FUNC(sub_825D7348);
PPC_FUNC_IMPL(__imp__sub_825D7348) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D734C"))) PPC_WEAK_FUNC(sub_825D734C);
PPC_FUNC_IMPL(__imp__sub_825D734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7350"))) PPC_WEAK_FUNC(sub_825D7350);
PPC_FUNC_IMPL(__imp__sub_825D7350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_825D7368"))) PPC_WEAK_FUNC(sub_825D7368);
PPC_FUNC_IMPL(__imp__sub_825D7368) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D736C"))) PPC_WEAK_FUNC(sub_825D736C);
PPC_FUNC_IMPL(__imp__sub_825D736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7370"))) PPC_WEAK_FUNC(sub_825D7370);
PPC_FUNC_IMPL(__imp__sub_825D7370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_825D7374:
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2528
	r11.s64 = r11.s64 + 2528;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x825d7374
	if (!cr0.eq) goto loc_825D7374;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825D73C8"))) PPC_WEAK_FUNC(sub_825D73C8);
PPC_FUNC_IMPL(__imp__sub_825D73C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D73CC"))) PPC_WEAK_FUNC(sub_825D73CC);
PPC_FUNC_IMPL(__imp__sub_825D73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D73D0"))) PPC_WEAK_FUNC(sub_825D73D0);
PPC_FUNC_IMPL(__imp__sub_825D73D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_825D73D4:
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2532
	r11.s64 = r11.s64 + 2532;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x825d73d4
	if (!cr0.eq) goto loc_825D73D4;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825D7428"))) PPC_WEAK_FUNC(sub_825D7428);
PPC_FUNC_IMPL(__imp__sub_825D7428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D742C"))) PPC_WEAK_FUNC(sub_825D742C);
PPC_FUNC_IMPL(__imp__sub_825D742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7430"))) PPC_WEAK_FUNC(sub_825D7430);
PPC_FUNC_IMPL(__imp__sub_825D7430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// addi r10,r4,2535
	ctx.r10.s64 = ctx.r4.s64 + 2535;
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_825D7440:
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x825d7440
	if (!cr0.eq) goto loc_825D7440;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825D7480"))) PPC_WEAK_FUNC(sub_825D7480);
PPC_FUNC_IMPL(__imp__sub_825D7480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7484"))) PPC_WEAK_FUNC(sub_825D7484);
PPC_FUNC_IMPL(__imp__sub_825D7484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7488"))) PPC_WEAK_FUNC(sub_825D7488);
PPC_FUNC_IMPL(__imp__sub_825D7488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// addi r10,r4,2551
	ctx.r10.s64 = ctx.r4.s64 + 2551;
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_825D7498:
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x825d7498
	if (!cr0.eq) goto loc_825D7498;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825D74D8"))) PPC_WEAK_FUNC(sub_825D74D8);
PPC_FUNC_IMPL(__imp__sub_825D74D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D74DC"))) PPC_WEAK_FUNC(sub_825D74DC);
PPC_FUNC_IMPL(__imp__sub_825D74DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D74E0"))) PPC_WEAK_FUNC(sub_825D74E0);
PPC_FUNC_IMPL(__imp__sub_825D74E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_825D752C"))) PPC_WEAK_FUNC(sub_825D752C);
PPC_FUNC_IMPL(__imp__sub_825D752C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7530"))) PPC_WEAK_FUNC(sub_825D7530);
PPC_FUNC_IMPL(__imp__sub_825D7530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825D7564"))) PPC_WEAK_FUNC(sub_825D7564);
PPC_FUNC_IMPL(__imp__sub_825D7564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7568"))) PPC_WEAK_FUNC(sub_825D7568);
PPC_FUNC_IMPL(__imp__sub_825D7568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r31,13068(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13068);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d75ec
	if (cr6.eq) goto loc_825D75EC;
	// lwz r11,11036(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d759c
	if (cr6.eq) goto loc_825D759C;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x825d75ec
	goto loc_825D75EC;
loc_825D759C:
	// lwz r11,11040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d75ec
	if (cr0.eq) goto loc_825D75EC;
	// lwz r11,13932(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13932);
	// lwz r3,13928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825d75c4
	if (cr6.lt) goto loc_825D75C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825D75C4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	r11.u64 = (__builtin_rotateleft32(r31.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13928(r30)
	PPC_STORE_U32(r30.u32 + 13928, ctx.r9.u32);
loc_825D75EC:
	// stw r29,13068(r30)
	PPC_STORE_U32(r30.u32 + 13068, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// beq cr6,0x825d771c
	if (cr6.eq) goto loc_825D771C;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r11,r29,40
	r11.s64 = r29.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d771c
	if (cr6.eq) goto loc_825D771C;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825d7650
	if (cr6.eq) goto loc_825D7650;
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_825D7650:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x825d771c
	if (!cr6.lt) goto loc_825D771C;
loc_825D7668:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d7684
	if (cr0.eq) goto loc_825D7684;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d7668
	if (cr6.lt) goto loc_825D7668;
loc_825D7684:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x825d771c
	if (!cr6.lt) goto loc_825D771C;
loc_825D768C:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d7714
	if (cr0.eq) goto loc_825D7714;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d768c
	if (cr6.lt) goto loc_825D768C;
	// b 0x825d7714
	goto loc_825D7714;
loc_825D76C8:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825d771c
	if (cr0.eq) goto loc_825D771C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_825D76E8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bne 0x825d76e8
	if (!cr0.eq) goto loc_825D76E8;
loc_825D7714:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d76c8
	if (cr6.lt) goto loc_825D76C8;
loc_825D771C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D7720"))) PPC_WEAK_FUNC(sub_825D7720);
PPC_FUNC_IMPL(__imp__sub_825D7720) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D7724"))) PPC_WEAK_FUNC(sub_825D7724);
PPC_FUNC_IMPL(__imp__sub_825D7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7728"))) PPC_WEAK_FUNC(sub_825D7728);
PPC_FUNC_IMPL(__imp__sub_825D7728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,13068(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13068);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d7754
	if (cr6.eq) goto loc_825D7754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825D7754:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_825D776C"))) PPC_WEAK_FUNC(sub_825D776C);
PPC_FUNC_IMPL(__imp__sub_825D776C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7770"))) PPC_WEAK_FUNC(sub_825D7770);
PPC_FUNC_IMPL(__imp__sub_825D7770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d7798
	if (cr6.eq) goto loc_825D7798;
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
loc_825D7798:
	// lwz r31,13072(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 13072);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d7808
	if (cr6.eq) goto loc_825D7808;
	// lwz r11,11036(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d77b8
	if (cr6.eq) goto loc_825D77B8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x825d7808
	goto loc_825D7808;
loc_825D77B8:
	// lwz r11,11040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d7808
	if (cr0.eq) goto loc_825D7808;
	// lwz r11,13932(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13932);
	// lwz r3,13928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825d77e0
	if (cr6.lt) goto loc_825D77E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825D77E0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	r11.u64 = (__builtin_rotateleft32(r31.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13928(r30)
	PPC_STORE_U32(r30.u32 + 13928, ctx.r9.u32);
loc_825D7808:
	// lbz r11,11070(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11070);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,13072(r30)
	PPC_STORE_U32(r30.u32 + 13072, r29.u32);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// stb r11,11070(r30)
	PPC_STORE_U8(r30.u32 + 11070, r11.u8);
	// beq cr6,0x825d7934
	if (cr6.eq) goto loc_825D7934;
	// addic. r11,r29,872
	xer.ca = r29.u32 > 4294966423;
	r11.s64 = r29.s64 + 872;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d7934
	if (cr0.eq) goto loc_825D7934;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d7934
	if (cr6.eq) goto loc_825D7934;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825d7868
	if (cr6.eq) goto loc_825D7868;
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_825D7868:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x825d7934
	if (!cr6.lt) goto loc_825D7934;
loc_825D7880:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d789c
	if (cr0.eq) goto loc_825D789C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d7880
	if (cr6.lt) goto loc_825D7880;
loc_825D789C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x825d7934
	if (!cr6.lt) goto loc_825D7934;
loc_825D78A4:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d792c
	if (cr0.eq) goto loc_825D792C;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d78a4
	if (cr6.lt) goto loc_825D78A4;
	// b 0x825d792c
	goto loc_825D792C;
loc_825D78E0:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825d7934
	if (cr0.eq) goto loc_825D7934;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_825D7900:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bne 0x825d7900
	if (!cr0.eq) goto loc_825D7900;
loc_825D792C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x825d78e0
	if (cr6.lt) goto loc_825D78E0;
loc_825D7934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D7938"))) PPC_WEAK_FUNC(sub_825D7938);
PPC_FUNC_IMPL(__imp__sub_825D7938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D793C"))) PPC_WEAK_FUNC(sub_825D793C);
PPC_FUNC_IMPL(__imp__sub_825D793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7940"))) PPC_WEAK_FUNC(sub_825D7940);
PPC_FUNC_IMPL(__imp__sub_825D7940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,13072(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13072);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d796c
	if (cr6.eq) goto loc_825D796C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825D796C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_825D7984"))) PPC_WEAK_FUNC(sub_825D7984);
PPC_FUNC_IMPL(__imp__sub_825D7984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7988"))) PPC_WEAK_FUNC(sub_825D7988);
PPC_FUNC_IMPL(__imp__sub_825D7988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,12240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12240, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825D7998"))) PPC_WEAK_FUNC(sub_825D7998);
PPC_FUNC_IMPL(__imp__sub_825D7998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D799C"))) PPC_WEAK_FUNC(sub_825D799C);
PPC_FUNC_IMPL(__imp__sub_825D799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D79A0"))) PPC_WEAK_FUNC(sub_825D79A0);
PPC_FUNC_IMPL(__imp__sub_825D79A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r27.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x825d79f8
	goto loc_825D79F8;
loc_825D79D4:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x825d79e0
	if (cr6.gt) goto loc_825D79E0;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_825D79E0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stbx r7,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D79F8:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x825d79d4
	if (!cr6.eq) goto loc_825D79D4;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// addi r5,r11,56
	ctx.r5.s64 = r11.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// std r10,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// beq cr6,0x825d7a84
	if (cr6.eq) goto loc_825D7A84;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
loc_825D7A5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x825d7a5c
	if (!cr0.eq) goto loc_825D7A5C;
loc_825D7A84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D7A88"))) PPC_WEAK_FUNC(sub_825D7A88);
PPC_FUNC_IMPL(__imp__sub_825D7A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825D7A8C"))) PPC_WEAK_FUNC(sub_825D7A8C);
PPC_FUNC_IMPL(__imp__sub_825D7A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7A90"))) PPC_WEAK_FUNC(sub_825D7A90);
PPC_FUNC_IMPL(__imp__sub_825D7A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// b 0x825d7ac0
	goto loc_825D7AC0;
loc_825D7AB8:
	// lhzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D7AC0:
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x825d7ab8
	if (!cr6.eq) goto loc_825D7AB8;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d7ae8
	if (!cr0.eq) goto loc_825D7AE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d7af8
	goto loc_825D7AF8;
loc_825D7AE8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d79a0
	sub_825D79A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825D7AF8:
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

__attribute__((alias("__imp__sub_825D7B0C"))) PPC_WEAK_FUNC(sub_825D7B0C);
PPC_FUNC_IMPL(__imp__sub_825D7B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7B10"))) PPC_WEAK_FUNC(sub_825D7B10);
PPC_FUNC_IMPL(__imp__sub_825D7B10) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825d7b3c
	if (!cr6.eq) goto loc_825D7B3C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825d7b3c
	if (!cr6.eq) goto loc_825D7B3C;
	// li r30,64
	r30.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_825D7B3C:
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d7b4c
	if (cr0.eq) goto loc_825D7B4C;
	// li r11,0
	r11.s64 = 0;
	// b 0x825d7b5c
	goto loc_825D7B5C;
loc_825D7B4C:
	// lwz r11,11048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11048);
	// rlwimi r6,r30,8,17,23
	ctx.r6.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0x7F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwimi r11,r6,4,21,27
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F0) | (r11.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r11,r6,4,13,19
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F000) | (r11.u64 & 0xFFFFFFFFFFF80FFF);
loc_825D7B5C:
	// stw r11,11048(r31)
	PPC_STORE_U32(r31.u32 + 11048, r11.u32);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// and r29,r10,r4
	r29.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x825d7b84
	if (!cr6.gt) goto loc_825D7B84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825D7B84:
	// oris r9,r29,49153
	ctx.r9.u64 = r29.u64 | 3221291008;
	// addi r8,r30,1775
	ctx.r8.s64 = r30.s64 + 1775;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,14192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 14192);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lwz r7,14188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 14188);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,14196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14196);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,15224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15224);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,15220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15220);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825d6ff8
	sub_825D6FF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D7BF4"))) PPC_WEAK_FUNC(sub_825D7BF4);
PPC_FUNC_IMPL(__imp__sub_825D7BF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D7BF8"))) PPC_WEAK_FUNC(sub_825D7BF8);
PPC_FUNC_IMPL(__imp__sub_825D7BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11048(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,0,13,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,11048(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,20,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7F;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,11048(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,28,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7F;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825D7C24"))) PPC_WEAK_FUNC(sub_825D7C24);
PPC_FUNC_IMPL(__imp__sub_825D7C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7C28"))) PPC_WEAK_FUNC(sub_825D7C28);
PPC_FUNC_IMPL(__imp__sub_825D7C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7C28"))) PPC_WEAK_FUNC(sub_825D7C28);
PPC_FUNC_IMPL(__imp__sub_825D7C28) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825D7C2C"))) PPC_WEAK_FUNC(sub_825D7C2C);
PPC_FUNC_IMPL(__imp__sub_825D7C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7C30"))) PPC_WEAK_FUNC(sub_825D7C30);
PPC_FUNC_IMPL(__imp__sub_825D7C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_825D7C3C"))) PPC_WEAK_FUNC(sub_825D7C3C);
PPC_FUNC_IMPL(__imp__sub_825D7C3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7C40"))) PPC_WEAK_FUNC(sub_825D7C40);
PPC_FUNC_IMPL(__imp__sub_825D7C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825d7c70
	if (!cr0.eq) goto loc_825D7C70;
	// lis r11,-32163
	r11.s64 = -2107834368;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,23936
	ctx.r6.s64 = r11.s64 + 23936;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x828ed888
	sub_828ED888(ctx, base);
loc_825D7C70:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,-1
	r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x825d7d10
	if (!cr6.gt) goto loc_825D7D10;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_825D7CA4:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,12,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF;
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x825d7cf8
	if (!cr6.eq) goto loc_825D7CF8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d7ccc
	if (cr6.eq) goto loc_825D7CCC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x825d7cd4
	goto loc_825D7CD4;
loc_825D7CCC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_825D7CD4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bge cr6,0x825d7ce8
	if (!cr6.lt) goto loc_825D7CE8;
	// slw r11,r3,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// or r4,r11,r4
	ctx.r4.u64 = r11.u64 | ctx.r4.u64;
loc_825D7CE8:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825d7cf8
	if (!cr6.lt) goto loc_825D7CF8;
	// slw r11,r3,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r11,r5
	ctx.r5.u64 = r11.u64 | ctx.r5.u64;
loc_825D7CF8:
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x825d7ca4
	if (cr6.lt) goto loc_825D7CA4;
loc_825D7D10:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825d7d24
	if (!cr6.eq) goto loc_825D7D24;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x825d7d24
	if (cr6.eq) goto loc_825D7D24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D7D24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D7D28"))) PPC_WEAK_FUNC(sub_825D7D28);
PPC_FUNC_IMPL(__imp__sub_825D7D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D7D2C"))) PPC_WEAK_FUNC(sub_825D7D2C);
PPC_FUNC_IMPL(__imp__sub_825D7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7D30"))) PPC_WEAK_FUNC(sub_825D7D30);
PPC_FUNC_IMPL(__imp__sub_825D7D30) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r4,9572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9572, ctx.r4.u32);
	// li r5,9120
	ctx.r5.s64 = 9120;
	// stw r11,9568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9568, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,9120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9120, r11.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,9128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9128, r11.u64);
	// std r11,9136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9136, r11.u64);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9208
	ctx.r3.s64 = r31.s64 + 9208;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9496
	ctx.r3.s64 = r31.s64 + 9496;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9528
	ctx.r3.s64 = r31.s64 + 9528;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9144
	ctx.r3.s64 = r31.s64 + 9144;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D7DB8"))) PPC_WEAK_FUNC(sub_825D7DB8);
PPC_FUNC_IMPL(__imp__sub_825D7DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7DBC"))) PPC_WEAK_FUNC(sub_825D7DBC);
PPC_FUNC_IMPL(__imp__sub_825D7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7DC0"))) PPC_WEAK_FUNC(sub_825D7DC0);
PPC_FUNC_IMPL(__imp__sub_825D7DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,9564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9564, r11.u32);
	// beq cr6,0x825d7df0
	if (cr6.eq) goto loc_825D7DF0;
	// addi r11,r3,9496
	r11.s64 = ctx.r3.s64 + 9496;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
loc_825D7DF0:
	// addi r11,r3,9528
	r11.s64 = ctx.r3.s64 + 9528;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// subfic r7,r7,31
	xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r7.s64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// sld r11,r9,r7
	r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r7.u8 & 0x7F));
	// ld r10,9128(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 9128);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,9128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9128, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7E2C"))) PPC_WEAK_FUNC(sub_825D7E2C);
PPC_FUNC_IMPL(__imp__sub_825D7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7E30"))) PPC_WEAK_FUNC(sub_825D7E30);
PPC_FUNC_IMPL(__imp__sub_825D7E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// ld r10,9120(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 9120);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,9572(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9572);
	// stw r11,9564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9564, r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subfic r11,r9,63
	xer.ca = ctx.r9.u32 <= 63;
	r11.s64 = 63 - ctx.r9.s64;
	// addi r9,r3,9144
	ctx.r9.s64 = ctx.r3.s64 + 9144;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// sld r11,r7,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (r11.u8 & 0x7F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,9120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9120, r11.u64);
	// lwz r11,19892(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19892);
	// rlwinm r11,r11,6,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x100;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7EB4"))) PPC_WEAK_FUNC(sub_825D7EB4);
PPC_FUNC_IMPL(__imp__sub_825D7EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7EB8"))) PPC_WEAK_FUNC(sub_825D7EB8);
PPC_FUNC_IMPL(__imp__sub_825D7EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r10,r10,2286
	ctx.r10.s64 = ctx.r10.s64 + 2286;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_825D7F14"))) PPC_WEAK_FUNC(sub_825D7F14);
PPC_FUNC_IMPL(__imp__sub_825D7F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7F18"))) PPC_WEAK_FUNC(sub_825D7F18);
PPC_FUNC_IMPL(__imp__sub_825D7F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825d7f78
	goto loc_825D7F78;
loc_825D7F30:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825d7f74
	if (cr0.eq) goto loc_825D7F74;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d7f74
	if (!cr0.eq) goto loc_825D7F74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x825d7f74
	if (cr6.gt) goto loc_825D7F74;
	// rlwinm r11,r11,20,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_825D7F74:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_825D7F78:
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// blt cr6,0x825d7f30
	if (cr6.lt) goto loc_825D7F30;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825D7F84"))) PPC_WEAK_FUNC(sub_825D7F84);
PPC_FUNC_IMPL(__imp__sub_825D7F84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7F88"))) PPC_WEAK_FUNC(sub_825D7F88);
PPC_FUNC_IMPL(__imp__sub_825D7F88) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825d7f18
	sub_825D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825d8070
	if (cr0.eq) goto loc_825D8070;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// beq cr6,0x825d7fe0
	if (cr6.eq) goto loc_825D7FE0;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825d7ff8
	goto loc_825D7FF8;
loc_825D7FE0:
	// lis r9,-4096
	ctx.r9.s64 = -268435456;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwimi r9,r10,16,4,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFF0000) | (ctx.r9.u64 & 0xFFFFFFFFF000FFFF);
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_825D7FF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d8070
	if (cr0.eq) goto loc_825D8070;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825d8070
	if (cr6.eq) goto loc_825D8070;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825d8070
	if (!cr6.eq) goto loc_825D8070;
	// li r11,0
	r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stb r11,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r11.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825D8070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D8074"))) PPC_WEAK_FUNC(sub_825D8074);
PPC_FUNC_IMPL(__imp__sub_825D8074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D8078"))) PPC_WEAK_FUNC(sub_825D8078);
PPC_FUNC_IMPL(__imp__sub_825D8078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825d808c
	if (!cr6.lt) goto loc_825D808C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D808C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825d8128
	if (cr6.eq) goto loc_825D8128;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x825d8128
	if (!cr6.lt) goto loc_825D8128;
	// li r6,1
	ctx.r6.s64 = 1;
loc_825D80B4:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825d80f4
	if (cr0.eq) goto loc_825D80F4;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d80f4
	if (!cr0.eq) goto loc_825D80F4;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x825d80f4
	if (cr6.gt) goto loc_825D80F4;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// blt cr6,0x825d8104
	if (cr6.lt) goto loc_825D8104;
loc_825D80F4:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x825d80b4
	if (cr6.lt) goto loc_825D80B4;
	// b 0x825d8128
	goto loc_825D8128;
loc_825D8104:
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_825D8128:
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825D8134"))) PPC_WEAK_FUNC(sub_825D8134);
PPC_FUNC_IMPL(__imp__sub_825D8134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8138"))) PPC_WEAK_FUNC(sub_825D8138);
PPC_FUNC_IMPL(__imp__sub_825D8138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d8198
	if (cr6.eq) goto loc_825D8198;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x825d8158
	if (!cr6.lt) goto loc_825D8158;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825d8168
	goto loc_825D8168;
loc_825D8158:
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
loc_825D8168:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d8198
	if (cr0.eq) goto loc_825D8198;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x825d818c
	if (!cr6.gt) goto loc_825D818C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// ble cr6,0x825d8198
	if (!cr6.gt) goto loc_825D8198;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x825d8198
	if (cr6.gt) goto loc_825D8198;
loc_825D818C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_825D8198:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D81A0"))) PPC_WEAK_FUNC(sub_825D81A0);
PPC_FUNC_IMPL(__imp__sub_825D81A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d8264
	if (cr0.eq) goto loc_825D8264;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bgt cr6,0x825d825c
	if (cr6.gt) goto loc_825D825C;
	// lis r12,-32253
	r12.s64 = -2113732608;
	// addi r12,r12,-536
	r12.s64 = r12.s64 + -536;
	// lbzx r0,r12,r9
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r9.u32);
	// lis r12,-32162
	r12.s64 = -2107768832;
	// nop 
	// addi r12,r12,-32276
	r12.s64 = r12.s64 + -32276;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_825D81EC:
	// rlwinm r10,r10,24,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r10,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
loc_825D8208:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825d825c
	goto loc_825D825C;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,15,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xF;
	// subfic r10,r10,15
	xer.ca = ctx.r10.u32 <= 15;
	ctx.r10.s64 = 15 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x825d8208
	goto loc_825D8208;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r7,r9,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x825d825c
	if (!cr0.eq) goto loc_825D825C;
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d825c
	if (!cr0.eq) goto loc_825D825C;
	// b 0x825d81ec
	goto loc_825D81EC;
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1536
	cr6.compare<uint32_t>(ctx.r10.u32, 1536, xer);
	// bne cr6,0x825d825c
	if (!cr6.eq) goto loc_825D825C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
loc_825D825C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// b 0x825d8404
	goto loc_825D8404;
loc_825D8264:
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d82a0
	if (!cr6.eq) goto loc_825D82A0;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r11.u32);
	// beq 0x825d8298
	if (cr0.eq) goto loc_825D8298;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// beq 0x825d829c
	if (cr0.eq) goto loc_825D829C;
loc_825D8298:
	// li r11,0
	r11.s64 = 0;
loc_825D829C:
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r11.u32);
loc_825D82A0:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d82d4
	if (cr0.eq) goto loc_825D82D4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r9,r10,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// beq cr6,0x825d82c8
	if (cr6.eq) goto loc_825D82C8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825d82cc
	if (!cr6.lt) goto loc_825D82CC;
loc_825D82C8:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D82CC:
	// rlwinm r10,r10,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// b 0x825d83ec
	goto loc_825D83EC;
loc_825D82D4:
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,21424
	ctx.r10.s64 = ctx.r10.s64 + 21424;
	// rlwinm r6,r9,8,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// rlwinm r31,r5,6,26,31
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3F;
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x825d8324
	if (cr6.lt) goto loc_825D8324;
	// rlwinm. r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d8324
	if (cr0.eq) goto loc_825D8324;
	// lbz r10,9(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x825d8320
	if (cr6.eq) goto loc_825D8320;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d8324
	if (!cr6.lt) goto loc_825D8324;
loc_825D8320:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D8324:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// blt cr6,0x825d8350
	if (cr6.lt) goto loc_825D8350;
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d8350
	if (cr0.eq) goto loc_825D8350;
	// lbz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x825d834c
	if (cr6.eq) goto loc_825D834C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d8350
	if (!cr6.lt) goto loc_825D8350;
loc_825D834C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D8350:
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x825d8360
	if (!cr6.lt) goto loc_825D8360;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x825d8380
	if (!cr6.eq) goto loc_825D8380;
loc_825D8360:
	// rlwinm. r10,r9,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d8380
	if (cr0.eq) goto loc_825D8380;
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825d837c
	if (cr6.eq) goto loc_825D837C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d8380
	if (!cr6.lt) goto loc_825D8380;
loc_825D837C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D8380:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x825d83b0
	if (!cr6.eq) goto loc_825D83B0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// rlwimi r10,r9,30,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r7,r10,6,30,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// beq cr6,0x825d83ac
	if (cr6.eq) goto loc_825D83AC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d83b0
	if (!cr6.lt) goto loc_825D83B0;
loc_825D83AC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D83B0:
	// rlwinm. r10,r5,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// beq 0x825d83d4
	if (cr0.eq) goto loc_825D83D4;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x825d8400
	if (cr6.lt) goto loc_825D8400;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bgt cr6,0x825d8400
	if (cr6.gt) goto loc_825D8400;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// b 0x825d8400
	goto loc_825D8400;
loc_825D83D4:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825d83e4
	if (cr6.eq) goto loc_825D83E4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d83e8
	if (!cr6.lt) goto loc_825D83E8;
loc_825D83E4:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D83E8:
	// rlwinm r10,r5,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x3F;
loc_825D83EC:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825d83fc
	if (cr6.eq) goto loc_825D83FC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d8400
	if (!cr6.lt) goto loc_825D8400;
loc_825D83FC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D8400:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
loc_825D8404:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825D8408"))) PPC_WEAK_FUNC(sub_825D8408);
PPC_FUNC_IMPL(__imp__sub_825D8408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D840C"))) PPC_WEAK_FUNC(sub_825D840C);
PPC_FUNC_IMPL(__imp__sub_825D840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8410"))) PPC_WEAK_FUNC(sub_825D8410);
PPC_FUNC_IMPL(__imp__sub_825D8410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,256(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r28,260(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r26,12
	r26.s64 = 12;
	// beq 0x825d8500
	if (cr0.eq) goto loc_825D8500;
	// subf r11,r27,r28
	r11.s64 = r28.s64 - r27.s64;
	// divw. r29,r11,r26
	r29.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x825d8500
	if (cr0.eq) goto loc_825D8500;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// li r30,0
	r30.s64 = 0;
loc_825D8454:
	// lwz r11,-8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mtctr r23
	ctr.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,-2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lhz r11,-4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mtctr r23
	ctr.u64 = r23.u64;
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x825d8454
	if (!cr0.eq) goto loc_825D8454;
loc_825D8500:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d85e8
	if (cr0.eq) goto loc_825D85E8;
	// subf r10,r27,r28
	ctx.r10.s64 = r28.s64 - r27.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// divw r26,r10,r26
	r26.s32 = ctx.r10.s32 / r26.s32;
loc_825D8518:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r25,r11
	r25.u64 = r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825d85e8
	if (cr6.eq) goto loc_825D85E8;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_825D8534:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,2
	r29.s64 = 2;
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_825D856C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825d85a8
	if (cr0.eq) goto loc_825D85A8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d6530
	sub_825D6530(ctx, base);
loc_825D85A8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x825d856c
	if (!cr0.eq) goto loc_825D856C;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x825d8534
	if (!cr0.eq) goto loc_825D8534;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x825d85e0
	if (!cr6.eq) goto loc_825D85E0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825d85e8
	if (cr6.eq) goto loc_825D85E8;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825D85E0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825d8518
	if (!cr6.eq) goto loc_825D8518;
loc_825D85E8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825D85EC"))) PPC_WEAK_FUNC(sub_825D85EC);
PPC_FUNC_IMPL(__imp__sub_825D85EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825D85F0"))) PPC_WEAK_FUNC(sub_825D85F0);
PPC_FUNC_IMPL(__imp__sub_825D85F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// beq cr6,0x825d8630
	if (cr6.eq) goto loc_825D8630;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
loc_825D8630:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r9,56
	cr6.compare<uint32_t>(ctx.r9.u32, 56, xer);
	// beq cr6,0x825d865c
	if (cr6.eq) goto loc_825D865C;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_825D865C:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,23,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r9,448
	cr6.compare<uint32_t>(ctx.r9.u32, 448, xer);
	// beq cr6,0x825d8688
	if (cr6.eq) goto loc_825D8688;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_825D8688:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r9,3584
	cr6.compare<uint32_t>(ctx.r9.u32, 3584, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
}

__attribute__((alias("__imp__sub_825D86B4"))) PPC_WEAK_FUNC(sub_825D86B4);
PPC_FUNC_IMPL(__imp__sub_825D86B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D86B8"))) PPC_WEAK_FUNC(sub_825D86B8);
PPC_FUNC_IMPL(__imp__sub_825D86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x825d87f8
	if (cr6.gt) goto loc_825D87F8;
	// beq cr6,0x825d87c0
	if (cr6.eq) goto loc_825D87C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d8780
	if (cr6.eq) goto loc_825D8780;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825d86ec
	if (cr6.eq) goto loc_825D86EC;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_825D86EC:
	// rlwinm r9,r9,6,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,16384
	cr6.compare<uint32_t>(ctx.r9.u32, 16384, xer);
	// blt cr6,0x825d8748
	if (cr6.lt) goto loc_825D8748;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_825D8748:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_825D8758:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825D8764:
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
loc_825D8780:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x825d8794
	if (cr6.eq) goto loc_825D8794;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_825D8794:
	// rlwinm r10,r9,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
loc_825D87C0:
	// rlwinm r10,r9,6,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x825d8764
	goto loc_825D8764;
loc_825D87F8:
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// beq cr6,0x825d86ec
	if (cr6.eq) goto loc_825D86EC;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// beq cr6,0x825d8864
	if (cr6.eq) goto loc_825D8864;
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// rlwinm r9,r9,6,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x825d8758
	goto loc_825D8758;
loc_825D8864:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,6,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825D8870"))) PPC_WEAK_FUNC(sub_825D8870);
PPC_FUNC_IMPL(__imp__sub_825D8870) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d87a0
	// ERROR 825D87A0
	return;
}

__attribute__((alias("__imp__sub_825D8874"))) PPC_WEAK_FUNC(sub_825D8874);
PPC_FUNC_IMPL(__imp__sub_825D8874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8878"))) PPC_WEAK_FUNC(sub_825D8878);
PPC_FUNC_IMPL(__imp__sub_825D8878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r11,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ r11.u64;
	// rlwinm. r7,r7,0,21,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7E0;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x825d88e0
	if (!cr0.eq) goto loc_825D88E0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,4,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xC;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r5,r9,29,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r3,r9,26,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r3,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r3.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x825d88e0
	if (cr6.eq) goto loc_825D88E0;
	// li r8,3
	ctx.r8.s64 = 3;
loc_825D88E0:
	// rlwimi r10,r8,20,10,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0x300000) | (ctx.r10.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825D88E8"))) PPC_WEAK_FUNC(sub_825D88E8);
PPC_FUNC_IMPL(__imp__sub_825D88E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D88EC"))) PPC_WEAK_FUNC(sub_825D88EC);
PPC_FUNC_IMPL(__imp__sub_825D88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D88F0"))) PPC_WEAK_FUNC(sub_825D88F0);
PPC_FUNC_IMPL(__imp__sub_825D88F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_825D8914:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r27
	ctx.r4.u64 = r31.u64 + r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d7eb8
	sub_825D7EB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825d8940
	if (cr0.eq) goto loc_825D8940;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_825D8940:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x825d8914
	if (cr6.lt) goto loc_825D8914;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D8954"))) PPC_WEAK_FUNC(sub_825D8954);
PPC_FUNC_IMPL(__imp__sub_825D8954) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825D8958"))) PPC_WEAK_FUNC(sub_825D8958);
PPC_FUNC_IMPL(__imp__sub_825D8958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,356(r11)
	PPC_STORE_U32(r11.u32 + 356, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,360(r11)
	PPC_STORE_U32(r11.u32 + 360, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,364(r11)
	PPC_STORE_U32(r11.u32 + 364, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825D897C"))) PPC_WEAK_FUNC(sub_825D897C);
PPC_FUNC_IMPL(__imp__sub_825D897C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8980"))) PPC_WEAK_FUNC(sub_825D8980);
PPC_FUNC_IMPL(__imp__sub_825D8980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
}

__attribute__((alias("__imp__sub_825D8990"))) PPC_WEAK_FUNC(sub_825D8990);
PPC_FUNC_IMPL(__imp__sub_825D8990) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d7dc0
	sub_825D7DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8994"))) PPC_WEAK_FUNC(sub_825D8994);
PPC_FUNC_IMPL(__imp__sub_825D8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8998"))) PPC_WEAK_FUNC(sub_825D8998);
PPC_FUNC_IMPL(__imp__sub_825D8998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
}

__attribute__((alias("__imp__sub_825D89A8"))) PPC_WEAK_FUNC(sub_825D89A8);
PPC_FUNC_IMPL(__imp__sub_825D89A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d7e30
	sub_825D7E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D89AC"))) PPC_WEAK_FUNC(sub_825D89AC);
PPC_FUNC_IMPL(__imp__sub_825D89AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D89B0"))) PPC_WEAK_FUNC(sub_825D89B0);
PPC_FUNC_IMPL(__imp__sub_825D89B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825D89C0"))) PPC_WEAK_FUNC(sub_825D89C0);
PPC_FUNC_IMPL(__imp__sub_825D89C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d7f88
	sub_825D7F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D89C4"))) PPC_WEAK_FUNC(sub_825D89C4);
PPC_FUNC_IMPL(__imp__sub_825D89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D89C8"))) PPC_WEAK_FUNC(sub_825D89C8);
PPC_FUNC_IMPL(__imp__sub_825D89C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
}

__attribute__((alias("__imp__sub_825D89D8"))) PPC_WEAK_FUNC(sub_825D89D8);
PPC_FUNC_IMPL(__imp__sub_825D89D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D89DC"))) PPC_WEAK_FUNC(sub_825D89DC);
PPC_FUNC_IMPL(__imp__sub_825D89DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D89E0"))) PPC_WEAK_FUNC(sub_825D89E0);
PPC_FUNC_IMPL(__imp__sub_825D89E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
}

__attribute__((alias("__imp__sub_825D89F4"))) PPC_WEAK_FUNC(sub_825D89F4);
PPC_FUNC_IMPL(__imp__sub_825D89F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D89F8"))) PPC_WEAK_FUNC(sub_825D89F8);
PPC_FUNC_IMPL(__imp__sub_825D89F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x825d8a18
	if (!cr6.lt) goto loc_825D8A18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D8A18:
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825D8A24"))) PPC_WEAK_FUNC(sub_825D8A24);
PPC_FUNC_IMPL(__imp__sub_825D8A24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8A28"))) PPC_WEAK_FUNC(sub_825D8A28);
PPC_FUNC_IMPL(__imp__sub_825D8A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825D8A38"))) PPC_WEAK_FUNC(sub_825D8A38);
PPC_FUNC_IMPL(__imp__sub_825D8A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d8078
	sub_825D8078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8A3C"))) PPC_WEAK_FUNC(sub_825D8A3C);
PPC_FUNC_IMPL(__imp__sub_825D8A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8A40"))) PPC_WEAK_FUNC(sub_825D8A40);
PPC_FUNC_IMPL(__imp__sub_825D8A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825D8A50"))) PPC_WEAK_FUNC(sub_825D8A50);
PPC_FUNC_IMPL(__imp__sub_825D8A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d8138
	sub_825D8138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8A54"))) PPC_WEAK_FUNC(sub_825D8A54);
PPC_FUNC_IMPL(__imp__sub_825D8A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8A58"))) PPC_WEAK_FUNC(sub_825D8A58);
PPC_FUNC_IMPL(__imp__sub_825D8A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d8a7c
	if (!cr6.eq) goto loc_825D8A7C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825d8a70
	if (cr6.eq) goto loc_825D8A70;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_825D8A70:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d8aa0
	if (cr6.eq) goto loc_825D8AA0;
	// b 0x825d8a9c
	goto loc_825D8A9C;
loc_825D8A7C:
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825d8a90
	if (cr6.eq) goto loc_825D8A90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_825D8A90:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d8aa0
	if (cr6.eq) goto loc_825D8AA0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825D8A9C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_825D8AA0:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825D8AA4"))) PPC_WEAK_FUNC(sub_825D8AA4);
PPC_FUNC_IMPL(__imp__sub_825D8AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8AA8"))) PPC_WEAK_FUNC(sub_825D8AA8);
PPC_FUNC_IMPL(__imp__sub_825D8AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// lwz r17,4(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// clrlwi r14,r6,31
	r14.u64 = ctx.r6.u32 & 0x1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// clrlwi r15,r11,31
	r15.u64 = r11.u32 & 0x1;
	// addi r16,r23,20
	r16.s64 = r23.s64 + 20;
loc_825D8AE4:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d8d18
	if (cr6.eq) goto loc_825D8D18;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// mr r18,r20
	r18.u64 = r20.u64;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r19,r11,r31
	r19.u64 = r11.u64 + r31.u64;
	// b 0x825d8d10
	goto loc_825D8D10;
loc_825D8B0C:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825d8b30
	if (!cr0.eq) goto loc_825D8B30;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmplwi cr6,r18,3
	cr6.compare<uint32_t>(r18.u32, 3, xer);
	// bge cr6,0x825d8d18
	if (!cr6.lt) goto loc_825D8D18;
	// b 0x825d8d10
	goto loc_825D8D10;
loc_825D8B30:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x825d8bec
	if (!cr6.eq) goto loc_825D8BEC;
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d8d2c
	if (!cr0.eq) goto loc_825D8D2C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// add r30,r9,r23
	r30.u64 = ctx.r9.u64 + r23.u64;
loc_825D8B50:
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	cr6.compare<uint32_t>(r28.u32, 512, xer);
	// bge cr6,0x825d8d2c
	if (!cr6.lt) goto loc_825D8D2C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// beq cr6,0x825d8b6c
	if (cr6.eq) goto loc_825D8B6C;
	// addi r6,r6,-256
	ctx.r6.s64 = ctx.r6.s64 + -256;
loc_825D8B6C:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x825d8b84
	if (cr6.eq) goto loc_825D8B84;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r20,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r20.u64);
	// std r20,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r20.u64);
	// b 0x825d8ba8
	goto loc_825D8BA8;
loc_825D8B84:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_825D8BA8:
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// mtctr r21
	ctr.u64 = r21.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d8d34
	if (cr0.lt) goto loc_825D8D34;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// clrlwi. r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x825d8b50
	if (!cr0.eq) goto loc_825D8B50;
	// b 0x825d8d10
	goto loc_825D8D10;
loc_825D8BEC:
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(r18.u32, 1, xer);
	// bne cr6,0x825d8c78
	if (!cr6.eq) goto loc_825D8C78;
loc_825D8BF4:
	// clrlwi r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r30,8992
	cr6.compare<uint32_t>(r30.u32, 8992, xer);
	// blt cr6,0x825d8d2c
	if (cr6.lt) goto loc_825D8D2C;
	// cmplwi cr6,r30,9120
	cr6.compare<uint32_t>(r30.u32, 9120, xer);
	// bge cr6,0x825d8d2c
	if (!cr6.lt) goto loc_825D8D2C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// addi r9,r30,-8992
	ctx.r9.s64 = r30.s64 + -8992;
	// rlwinm r8,r10,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// mtctr r21
	ctr.u64 = r21.u64;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r9,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d8d34
	if (cr0.lt) goto loc_825D8D34;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// clrlwi. r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x825d8bf4
	if (!cr0.eq) goto loc_825D8BF4;
	// b 0x825d8d10
	goto loc_825D8D10;
loc_825D8C78:
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r27,8960
	cr6.compare<uint32_t>(r27.u32, 8960, xer);
	// blt cr6,0x825d8d2c
	if (cr6.lt) goto loc_825D8D2C;
	// cmplwi cr6,r27,8992
	cr6.compare<uint32_t>(r27.u32, 8992, xer);
	// bge cr6,0x825d8d2c
	if (!cr6.lt) goto loc_825D8D2C;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzu r29,4(r31)
	ea = 4 + r31.u32;
	r29.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r10,r27,-8960
	ctx.r10.s64 = r27.s64 + -8960;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// rlwinm r28,r10,3,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFE0;
	// clrlwi r25,r11,16
	r25.u64 = r11.u32 & 0xFFFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_825D8CB0:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r10,r11,r26
	ctx.r10.u64 = r11.u64 & r26.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d8cf4
	if (!cr0.eq) goto loc_825D8CF4;
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// add r6,r30,r28
	ctx.r6.u64 = r30.u64 + r28.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825d8d34
	if (cr0.lt) goto loc_825D8D34;
loc_825D8CF4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// blt cr6,0x825d8cb0
	if (cr6.lt) goto loc_825D8CB0;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// clrlwi. r11,r25,16
	r11.u64 = r25.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x825d8c78
	if (!cr0.eq) goto loc_825D8C78;
loc_825D8D10:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// blt cr6,0x825d8b0c
	if (cr6.lt) goto loc_825D8B0C;
loc_825D8D18:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r16,r16,8
	r16.s64 = r16.s64 + 8;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// blt cr6,0x825d8ae4
	if (cr6.lt) goto loc_825D8AE4;
	// b 0x825d8d34
	goto loc_825D8D34;
loc_825D8D2C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825D8D34:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_825D8D38"))) PPC_WEAK_FUNC(sub_825D8D38);
PPC_FUNC_IMPL(__imp__sub_825D8D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825D8D3C"))) PPC_WEAK_FUNC(sub_825D8D3C);
PPC_FUNC_IMPL(__imp__sub_825D8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8D40"))) PPC_WEAK_FUNC(sub_825D8D40);
PPC_FUNC_IMPL(__imp__sub_825D8D40) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
}

__attribute__((alias("__imp__sub_825D8D44"))) PPC_WEAK_FUNC(sub_825D8D44);
PPC_FUNC_IMPL(__imp__sub_825D8D44) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d8aa8
	sub_825D8AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8D48"))) PPC_WEAK_FUNC(sub_825D8D48);
PPC_FUNC_IMPL(__imp__sub_825D8D48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825d8dcc
	if (!cr6.gt) goto loc_825D8DCC;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x825d8d78
	if (!cr6.lt) goto loc_825D8D78;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_825D8D78:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mulli r3,r30,12
	ctx.r3.s64 = r30.s64 * 12;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825d8d9c
	if (!cr0.eq) goto loc_825D8D9C;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x825d8dcc
	goto loc_825D8DCC;
loc_825D8D9C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d8dc8
	if (cr6.eq) goto loc_825D8DC8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825D8DC8:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825D8DCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D8DD0"))) PPC_WEAK_FUNC(sub_825D8DD0);
PPC_FUNC_IMPL(__imp__sub_825D8DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D8DD4"))) PPC_WEAK_FUNC(sub_825D8DD4);
PPC_FUNC_IMPL(__imp__sub_825D8DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8DD8"))) PPC_WEAK_FUNC(sub_825D8DD8);
PPC_FUNC_IMPL(__imp__sub_825D8DD8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825d8e5c
	if (!cr6.gt) goto loc_825D8E5C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x825d8e08
	if (!cr6.lt) goto loc_825D8E08;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_825D8E08:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825d8e2c
	if (!cr0.eq) goto loc_825D8E2C;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x825d8e5c
	goto loc_825D8E5C;
loc_825D8E2C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d8e58
	if (cr6.eq) goto loc_825D8E58;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825D8E58:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825D8E5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D8E60"))) PPC_WEAK_FUNC(sub_825D8E60);
PPC_FUNC_IMPL(__imp__sub_825D8E60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D8E64"))) PPC_WEAK_FUNC(sub_825D8E64);
PPC_FUNC_IMPL(__imp__sub_825D8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8E68"))) PPC_WEAK_FUNC(sub_825D8E68);
PPC_FUNC_IMPL(__imp__sub_825D8E68) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825d8eec
	if (!cr6.gt) goto loc_825D8EEC;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x825d8e98
	if (!cr6.lt) goto loc_825D8E98;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_825D8E98:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825d8ebc
	if (!cr0.eq) goto loc_825D8EBC;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x825d8eec
	goto loc_825D8EEC;
loc_825D8EBC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d8ee8
	if (cr6.eq) goto loc_825D8EE8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825D8EE8:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825D8EEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D8EF0"))) PPC_WEAK_FUNC(sub_825D8EF0);
PPC_FUNC_IMPL(__imp__sub_825D8EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D8EF4"))) PPC_WEAK_FUNC(sub_825D8EF4);
PPC_FUNC_IMPL(__imp__sub_825D8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8EF8"))) PPC_WEAK_FUNC(sub_825D8EF8);
PPC_FUNC_IMPL(__imp__sub_825D8EF8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r30,8192
	r29.s64 = r30.s64 + 8192;
	// bne 0x825d8f28
	if (!cr0.eq) goto loc_825D8F28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d901c
	goto loc_825D901C;
loc_825D8F28:
	// stw r30,14184(r31)
	PPC_STORE_U32(r31.u32 + 14184, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d6e20
	sub_825D6E20(ctx, base);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// addi r8,r3,7
	ctx.r8.s64 = ctx.r3.s64 + 7;
	// lwz r9,14188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 14188);
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// clrlwi r11,r30,3
	r11.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwimi r3,r9,0,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,2,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFE0;
	// stw r3,14188(r31)
	PPC_STORE_U32(r31.u32 + 14188, ctx.r3.u32);
	// stw r10,14192(r31)
	PPC_STORE_U32(r31.u32 + 14192, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// addi r30,r31,14316
	r30.s64 = r31.s64 + 14316;
loc_825D8F74:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7110
	sub_825D7110(ctx, base);
	// rlwinm r11,r5,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r9,r3,7
	ctx.r9.s64 = ctx.r3.s64 + 7;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFE0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stwu r8,8(r30)
	ea = 8 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r4,112
	cr6.compare<uint32_t>(ctx.r4.u32, 112, xer);
	// ble cr6,0x825d8f74
	if (!cr6.gt) goto loc_825D8F74;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825D8FCC:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,13824
	ctx.r10.u64 = ctx.r10.u64 | 13824;
	// ori r9,r9,129
	ctx.r9.u64 = ctx.r9.u64 | 129;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x825d8fcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D8FCC;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,15220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15220);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// rlwinm r11,r10,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,15224(r31)
	PPC_STORE_U32(r31.u32 + 15224, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,15220(r31)
	PPC_STORE_U32(r31.u32 + 15220, ctx.r8.u32);
loc_825D901C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D9020"))) PPC_WEAK_FUNC(sub_825D9020);
PPC_FUNC_IMPL(__imp__sub_825D9020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D9024"))) PPC_WEAK_FUNC(sub_825D9024);
PPC_FUNC_IMPL(__imp__sub_825D9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9028"))) PPC_WEAK_FUNC(sub_825D9028);
PPC_FUNC_IMPL(__imp__sub_825D9028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// std r10,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r10.u64);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
}

__attribute__((alias("__imp__sub_825D9058"))) PPC_WEAK_FUNC(sub_825D9058);
PPC_FUNC_IMPL(__imp__sub_825D9058) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D905C"))) PPC_WEAK_FUNC(sub_825D905C);
PPC_FUNC_IMPL(__imp__sub_825D905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9060"))) PPC_WEAK_FUNC(sub_825D9060);
PPC_FUNC_IMPL(__imp__sub_825D9060) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,-19252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -19252);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d909c
	if (cr6.eq) goto loc_825D909C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d909c
	if (!cr0.eq) goto loc_825D909C;
loc_825D9094:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d9148
	goto loc_825D9148;
loc_825D909C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x825d9094
	if (cr0.eq) goto loc_825D9094;
	// li r11,0
	r11.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x825d9120
	if (!cr0.eq) goto loc_825D9120;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825d9094
	goto loc_825D9094;
loc_825D9120:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7530
	sub_825D7530(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_825D9148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D914C"))) PPC_WEAK_FUNC(sub_825D914C);
PPC_FUNC_IMPL(__imp__sub_825D914C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D9150"))) PPC_WEAK_FUNC(sub_825D9150);
PPC_FUNC_IMPL(__imp__sub_825D9150) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r31,872
	ctx.r3.s64 = r31.s64 + 872;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D918C"))) PPC_WEAK_FUNC(sub_825D918C);
PPC_FUNC_IMPL(__imp__sub_825D918C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D9190"))) PPC_WEAK_FUNC(sub_825D9190);
PPC_FUNC_IMPL(__imp__sub_825D9190) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9280
	if (cr0.eq) goto loc_825D9280;
	// addi r25,r31,40
	r25.s64 = r31.s64 + 40;
	// addi r27,r31,896
	r27.s64 = r31.s64 + 896;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_825D91F4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = r11.s64 + 872;
	// lwz r8,896(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 896);
	// lwz r7,872(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// lwz r11,900(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 900);
	// add r26,r9,r7
	r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x825d9268
	if (cr6.eq) goto loc_825D9268;
	// addi r30,r25,28
	r30.s64 = r25.s64 + 28;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_825D9234:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x825d9258
	if (cr6.eq) goto loc_825D9258;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825D9258:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x825d9234
	if (!cr0.eq) goto loc_825D9234;
loc_825D9268:
	// li r11,-1
	r11.s64 = -1;
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r25,r25,416
	r25.s64 = r25.s64 + 416;
	// bne 0x825d91f4
	if (!cr0.eq) goto loc_825D91F4;
loc_825D9280:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825D9284"))) PPC_WEAK_FUNC(sub_825D9284);
PPC_FUNC_IMPL(__imp__sub_825D9284) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825D9288"))) PPC_WEAK_FUNC(sub_825D9288);
PPC_FUNC_IMPL(__imp__sub_825D9288) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-19248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -19248);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d92c4
	if (cr6.eq) goto loc_825D92C4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d92c4
	if (!cr0.eq) goto loc_825D92C4;
loc_825D92BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D92C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x825d92bc
	if (cr0.eq) goto loc_825D92BC;
	// li r5,872
	ctx.r5.s64 = 872;
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,872
	ctx.r3.s64 = r30.s64 + 872;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d9344
	if (!cr0.eq) goto loc_825D9344;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825d92bc
	goto loc_825D92BC;
loc_825D9344:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d9190
	sub_825D9190(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825D9370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D9374"))) PPC_WEAK_FUNC(sub_825D9374);
PPC_FUNC_IMPL(__imp__sub_825D9374) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825D9378"))) PPC_WEAK_FUNC(sub_825D9378);
PPC_FUNC_IMPL(__imp__sub_825D9378) {
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
	// stw r4,12808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12808, ctx.r4.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,12568
	ctx.r4.s64 = ctx.r3.s64 + 12568;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x825d5820
	sub_825D5820(ctx, base);
	// stw r4,12240(r31)
	PPC_STORE_U32(r31.u32 + 12240, ctx.r4.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D93C0"))) PPC_WEAK_FUNC(sub_825D93C0);
PPC_FUNC_IMPL(__imp__sub_825D93C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D93C4"))) PPC_WEAK_FUNC(sub_825D93C4);
PPC_FUNC_IMPL(__imp__sub_825D93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D93C8"))) PPC_WEAK_FUNC(sub_825D93C8);
PPC_FUNC_IMPL(__imp__sub_825D93C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93e8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,9568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9568);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825d9838
	if (cr6.lt) goto loc_825D9838;
	// lwz r11,9564(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 9564);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d9828
	if (!cr6.eq) goto loc_825D9828;
	// addi r31,r4,20
	r31.s64 = ctx.r4.s64 + 20;
	// lwz r17,24(r4)
	r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r30,r25,9120
	r30.s64 = r25.s64 + 9120;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// lwz r11,9572(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 9572);
	// li r18,1
	r18.s64 = 1;
	// lwz r10,19892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r16,24(r20)
	r16.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// beq 0x825d95b4
	if (cr0.eq) goto loc_825D95B4;
	// lwz r10,9560(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 9560);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825d95b4
	if (cr6.eq) goto loc_825D95B4;
	// lwz r10,19932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19932);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825d95b4
	if (cr6.eq) goto loc_825D95B4;
	// li r19,0
	r19.s64 = 0;
	// mr r21,r18
	r21.u64 = r18.u64;
	// stw r19,19932(r11)
	PPC_STORE_U32(r11.u32 + 19932, r19.u32);
loc_825D944C:
	// lwz r11,9572(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 9572);
	// mr r26,r19
	r26.u64 = r19.u64;
	// ld r22,0(r30)
	r22.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lwz r10,19892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// lwz r23,19936(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 19936);
	// rlwinm r24,r10,6,23,23
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x100;
loc_825D9464:
	// clrlwi r11,r26,2
	r11.u64 = r26.u32 & 0x3FFFFFFF;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r11,63
	xer.ca = r11.u32 <= 63;
	r11.s64 = 63 - r11.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// sld r11,r18,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (r18.u64 << (r11.u8 & 0x7F));
	// and r11,r11,r22
	r11.u64 = r11.u64 & r22.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x825d9604
	if (cr6.eq) goto loc_825D9604;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x825d94dc
	if (!cr6.lt) goto loc_825D94DC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825D9498:
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r9,r9,63
	xer.ca = ctx.r9.u32 <= 63;
	ctx.r9.s64 = 63 - ctx.r9.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// sld r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r18.u64 << (ctx.r9.u8 & 0x7F));
	// and r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 & r22.u64;
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// beq cr6,0x825d94dc
	if (cr6.eq) goto loc_825D94DC;
	// lwz r9,9560(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 9560);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825d94c8
	if (!cr6.eq) goto loc_825D94C8;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x825d94dc
	if (cr6.eq) goto loc_825D94DC;
loc_825D94C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x825d9498
	if (cr6.lt) goto loc_825D9498;
loc_825D94DC:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,4(r20)
	r27.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// subf r10,r28,r26
	ctx.r10.s64 = r26.s64 - r28.s64;
	// add r30,r11,r24
	r30.u64 = r11.u64 + r24.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// rlwinm r11,r29,4,16,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFF0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// rlwinm r5,r29,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// lwz r11,9560(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 9560);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d95c0
	if (cr6.eq) goto loc_825D95C0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x825d9604
	if (cr6.eq) goto loc_825D9604;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bgt cr6,0x825d956c
	if (cr6.gt) goto loc_825D956C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825D956C:
	// subf r9,r28,r11
	ctx.r9.s64 = r11.s64 - r28.s64;
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// bge cr6,0x825d9604
	if (!cr6.lt) goto loc_825D9604;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825D958C:
	// lwz r10,9572(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 9572);
	// lwz r8,19936(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19936);
	// lwz r10,19940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19940);
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bdnz 0x825d958c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D958C;
	// b 0x825d9604
	goto loc_825D9604;
loc_825D95B4:
	// li r19,0
	r19.s64 = 0;
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x825d944c
	goto loc_825D944C;
loc_825D95C0:
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bge cr6,0x825d95d8
	if (!cr6.lt) goto loc_825D95D8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// b 0x825d95f4
	goto loc_825D95F4;
loc_825D95D8:
	// lwz r11,9572(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 9572);
	// lwz r10,19936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19936);
	// lwz r11,19940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19940);
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825D95F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
loc_825D9604:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(r26.u32, 64, xer);
	// blt cr6,0x825d9464
	if (cr6.lt) goto loc_825D9464;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// mr r30,r19
	r30.u64 = r19.u64;
loc_825D9628:
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2302
	r11.s64 = r11.s64 + 2302;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d96cc
	if (cr0.eq) goto loc_825D96CC;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x825d967c
	goto loc_825D967C;
loc_825D9654:
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r9,r9,2302
	ctx.r9.s64 = ctx.r9.s64 + 2302;
	// slw r8,r18,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r25.u32);
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d9684
	if (cr0.eq) goto loc_825D9684;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D967C:
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(r11.u32, 2280, xer);
	// blt cr6,0x825d9654
	if (cr6.lt) goto loc_825D9654;
loc_825D9684:
	// rlwinm r9,r10,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r28,r25
	ctx.r4.u64 = r28.u64 + r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
loc_825D96CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2280
	cr6.compare<uint32_t>(r30.u32, 2280, xer);
	// blt cr6,0x825d9628
	if (cr6.lt) goto loc_825D9628;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// mr r27,r19
	r27.u64 = r19.u64;
loc_825D96F0:
	// addi r11,r27,2382
	r11.s64 = r27.s64 + 2382;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d97e0
	if (cr6.eq) goto loc_825D97E0;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x825d9738
	goto loc_825D9738;
loc_825D9710:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2382
	ctx.r10.s64 = ctx.r10.s64 + 2382;
	// slw r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9740
	if (cr0.eq) goto loc_825D9740;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D9738:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x825d9710
	if (cr6.lt) goto loc_825D9710;
loc_825D9740:
	// addi r10,r28,2240
	ctx.r10.s64 = r28.s64 + 2240;
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// rlwinm r10,r10,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// rlwinm r11,r29,1,16,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFE;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d97e0
	if (cr6.eq) goto loc_825D97E0;
	// addi r26,r28,2382
	r26.s64 = r28.s64 + 2382;
	// addi r28,r28,2374
	r28.s64 = r28.s64 + 2374;
loc_825D9790:
	// add r11,r26,r30
	r11.u64 = r26.u64 + r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x825d9790
	if (cr6.lt) goto loc_825D9790;
loc_825D97E0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(r27.u32, 8, xer);
	// blt cr6,0x825d96f0
	if (cr6.lt) goto loc_825D96F0;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// addi r11,r17,16
	r11.s64 = r17.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// subf r11,r16,r30
	r11.s64 = r30.s64 - r16.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_825D9828:
	// lwz r3,16(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825d9838
	if (cr6.lt) goto loc_825D9838;
	// lwz r3,36(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 36);
loc_825D9838:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825D983C"))) PPC_WEAK_FUNC(sub_825D983C);
PPC_FUNC_IMPL(__imp__sub_825D983C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_825D9840"))) PPC_WEAK_FUNC(sub_825D9840);
PPC_FUNC_IMPL(__imp__sub_825D9840) {
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
	// li r30,0
	r30.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
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

__attribute__((alias("__imp__sub_825D98FC"))) PPC_WEAK_FUNC(sub_825D98FC);
PPC_FUNC_IMPL(__imp__sub_825D98FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9900"))) PPC_WEAK_FUNC(sub_825D9900);
PPC_FUNC_IMPL(__imp__sub_825D9900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r18,1
	r18.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r18,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r18.u32);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9e38
	if (!cr0.eq) goto loc_825D9E38;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r19,r3,304
	r19.s64 = ctx.r3.s64 + 304;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// extsw r31,r11
	r31.s64 = r11.s32;
	// b 0x825d9994
	goto loc_825D9994;
loc_825D993C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// lbz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 320);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x825d9988
	if (cr6.eq) goto loc_825D9988;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d9978
	if (cr6.eq) goto loc_825D9978;
	// rlwimi r11,r10,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x825d9988
	goto loc_825D9988;
loc_825D9978:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825d6d38
	sub_825D6D38(ctx, base);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
loc_825D9988:
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
loc_825D9994:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825d993c
	if (cr6.lt) goto loc_825D993C;
	// lwz r10,296(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 296);
	// addi r23,r27,292
	r23.s64 = r27.s64 + 292;
	// lwz r11,292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 292);
	// li r20,0
	r20.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r26,r11
	r26.s64 = r11.s32;
	// li r22,0
	r22.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// b 0x825d9cfc
	goto loc_825D9CFC;
loc_825D99D0:
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r24,96(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// clrlwi r30,r31,20
	r30.u64 = r31.u32 & 0xFFF;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r21,r11,r24
	r21.u64 = r11.u64 + r24.u64;
	// bl 0x825d7f18
	sub_825D7F18(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d9c98
	if (cr6.eq) goto loc_825D9C98;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825d9a2c
	if (!cr6.eq) goto loc_825D9A2C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9a2c
	if (!cr0.eq) goto loc_825D9A2C;
	// rlwinm. r11,r31,0,9,9
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x825d9a30
	if (cr0.eq) goto loc_825D9A30;
loc_825D9A2C:
	// li r11,0
	r11.s64 = 0;
loc_825D9A30:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9a68
	if (cr0.eq) goto loc_825D9A68;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r9,r9,0,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E0;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d9a68
	if (!cr0.eq) goto loc_825D9A68;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d9a68
	if (!cr0.eq) goto loc_825D9A68;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x825d9a6c
	if (cr0.eq) goto loc_825D9A6C;
loc_825D9A68:
	// li r11,0
	r11.s64 = 0;
loc_825D9A6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9aa0
	if (cr0.eq) goto loc_825D9AA0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi. r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x825d9aa4
	if (cr0.eq) goto loc_825D9AA4;
loc_825D9AA0:
	// li r11,0
	r11.s64 = 0;
loc_825D9AA4:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r9,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9ac0
	if (!cr0.eq) goto loc_825D9AC0;
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d9afc
	if (cr0.eq) goto loc_825D9AFC;
loc_825D9AC0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9af4
	if (cr0.eq) goto loc_825D9AF4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d9af4
	if (cr6.eq) goto loc_825D9AF4;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9af4
	if (cr0.eq) goto loc_825D9AF4;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x825d9af8
	if (cr0.eq) goto loc_825D9AF8;
loc_825D9AF4:
	// li r11,0
	r11.s64 = 0;
loc_825D9AF8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
loc_825D9AFC:
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9c98
	if (cr0.eq) goto loc_825D9C98;
	// cmplw cr6,r22,r25
	cr6.compare<uint32_t>(r22.u32, r25.u32, xer);
	// beq cr6,0x825d9c98
	if (cr6.eq) goto loc_825D9C98;
	// addi r11,r22,8
	r11.s64 = r22.s64 + 8;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x825d9b3c
	if (!cr6.eq) goto loc_825D9B3C;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r11,0,16,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x825d9b34
	if (!cr6.eq) goto loc_825D9B34;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9b3c
	if (!cr0.eq) goto loc_825D9B3C;
loc_825D9B34:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x825d9b40
	goto loc_825D9B40;
loc_825D9B3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825D9B40:
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r6,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// rlwinm r8,r5,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xF;
	// slw r9,r18,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r18.u32 << (r11.u8 & 0x3F));
	// andi. r11,r9,24600
	r11.u64 = ctx.r9.u64 & 24600;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// slw r8,r18,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// addic r7,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r7.s64 = r11.s64 + -1;
	// andi. r4,r8,24600
	ctx.r4.u64 = ctx.r8.u64 & 24600;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r7.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r7,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfe r7,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne 0x825d9b84
	if (!cr0.eq) goto loc_825D9B84;
	// clrlwi. r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x825d9bc0
	if (cr0.eq) goto loc_825D9BC0;
loc_825D9B84:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9bb8
	if (cr0.eq) goto loc_825D9BB8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d9bb8
	if (cr6.eq) goto loc_825D9BB8;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9bb8
	if (cr0.eq) goto loc_825D9BB8;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9bb8
	if (!cr0.eq) goto loc_825D9BB8;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,22,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x825d9bbc
	if (cr0.eq) goto loc_825D9BBC;
loc_825D9BB8:
	// li r11,0
	r11.s64 = 0;
loc_825D9BBC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
loc_825D9BC0:
	// rlwinm r11,r9,0,25,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	// rlwinm r9,r8,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	// addic r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne 0x825d9be8
	if (!cr0.eq) goto loc_825D9BE8;
	// clrlwi. r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825d9c2c
	if (cr0.eq) goto loc_825D9C2C;
loc_825D9BE8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9c24
	if (cr0.eq) goto loc_825D9C24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d9c24
	if (cr6.eq) goto loc_825D9C24;
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9c24
	if (cr0.eq) goto loc_825D9C24;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9c24
	if (!cr0.eq) goto loc_825D9C24;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825d6180
	sub_825D6180(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// bne 0x825d9c28
	if (!cr0.eq) goto loc_825D9C28;
loc_825D9C24:
	// li r11,0
	r11.s64 = 0;
loc_825D9C28:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
loc_825D9C2C:
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9c98
	if (cr0.eq) goto loc_825D9C98;
	// lwz r11,108(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// lwz r8,112(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 112);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r25
	ctx.r7.s64 = r25.s64 - r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// b 0x825d9c90
	goto loc_825D9C90;
loc_825D9C54:
	// clrlwi. r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825d9c98
	if (cr0.eq) goto loc_825D9C98;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r7,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF;
	// slw r7,r18,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r7.u8 & 0x3F));
	// andi. r7,r7,2944
	ctx.r7.u64 = ctx.r7.u64 & 2944;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x825d9c8c
	if (cr0.eq) goto loc_825D9C8C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r7,r7,19
	ctx.r7.u64 = ctx.r7.u32 & 0x1FFF;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfic r7,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_825D9C8C:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_825D9C90:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825d9c54
	if (cr6.lt) goto loc_825D9C54;
loc_825D9C98:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9cc4
	if (!cr0.eq) goto loc_825D9CC4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825d9cdc
	if (cr6.eq) goto loc_825D9CDC;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9cdc
	if (cr0.eq) goto loc_825D9CDC;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// mr r20,r18
	r20.u64 = r18.u64;
	// rlwimi r11,r18,20,10,11
	r11.u64 = (__builtin_rotateleft32(r18.u32, 20) & 0x300000) | (r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r11,-4(r26)
	PPC_STORE_U32(r26.u32 + -4, r11.u32);
	// b 0x825d9cdc
	goto loc_825D9CDC;
loc_825D9CC4:
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d9cdc
	if (!cr0.eq) goto loc_825D9CDC;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825d8878
	sub_825D8878(ctx, base);
	// li r20,0
	r20.s64 = 0;
loc_825D9CDC:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r25
	r22.u64 = r25.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_825D9CFC:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x825d99d0
	if (cr6.lt) goto loc_825D99D0;
	// clrlwi. r10,r20,24
	ctx.r10.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9d18
	if (cr0.eq) goto loc_825D9D18;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825d8878
	sub_825D8878(ctx, base);
loc_825D9D18:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,19896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d9e38
	if (cr6.eq) goto loc_825D9E38;
	// lwz r31,0(r19)
	r31.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// b 0x825d9d5c
	goto loc_825D9D5C;
loc_825D9D30:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// rlwinm r4,r10,24,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825D9D5C:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825d9d30
	if (cr6.lt) goto loc_825D9D30;
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x825d9e20
	goto loc_825D9E20;
loc_825D9D7C:
	// lwz r11,260(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 260);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,256(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// clrlwi r11,r8,20
	r11.u64 = ctx.r8.u32 & 0xFFF;
	// divw r30,r9,r10
	r30.s32 = ctx.r9.s32 / ctx.r10.s32;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x825d8078
	sub_825D8078(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r6,0,23,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r6,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// rlwinm r7,r6,0,26,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x38;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x825d9de4
	if (cr6.eq) goto loc_825D9DE4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x825d9de8
	if (!cr6.eq) goto loc_825D9DE8;
loc_825D9DE4:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_825D9DE8:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,19896(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19896);
	// rlwinm r5,r4,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x3F;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825D9E20:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825d9d7c
	if (cr6.lt) goto loc_825D9D7C;
loc_825D9E38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825D9E3C"))) PPC_WEAK_FUNC(sub_825D9E3C);
PPC_FUNC_IMPL(__imp__sub_825D9E3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825D9E40"))) PPC_WEAK_FUNC(sub_825D9E40);
PPC_FUNC_IMPL(__imp__sub_825D9E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9e94
	if (cr0.eq) goto loc_825D9E94;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d9e94
	if (cr6.eq) goto loc_825D9E94;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-8
	xer.ca = r11.u32 > 7;
	r11.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d9e94
	if (cr0.eq) goto loc_825D9E94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825d9e94
	if (cr0.eq) goto loc_825D9E94;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
loc_825D9E94:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
}

__attribute__((alias("__imp__sub_825D9E98"))) PPC_WEAK_FUNC(sub_825D9E98);
PPC_FUNC_IMPL(__imp__sub_825D9E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9E9C"))) PPC_WEAK_FUNC(sub_825D9E9C);
PPC_FUNC_IMPL(__imp__sub_825D9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9EA0"))) PPC_WEAK_FUNC(sub_825D9EA0);
PPC_FUNC_IMPL(__imp__sub_825D9EA0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,308(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d9f40
	if (cr6.eq) goto loc_825D9F40;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_825D9EF0:
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r7,r6,24,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xF;
	// rlwinm r6,r6,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825D9F08:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d9f28
	if (cr0.eq) goto loc_825D9F28;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
loc_825D9F28:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825d9f08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D9F08;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// blt cr6,0x825d9ef0
	if (cr6.lt) goto loc_825D9EF0;
loc_825D9F40:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,25552
	ctx.r6.s64 = r11.s64 + 25552;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d9f8c
	if (cr6.eq) goto loc_825D9F8C;
	// addi r9,r1,150
	ctx.r9.s64 = ctx.r1.s64 + 150;
	// mtctr r31
	ctr.u64 = r31.u64;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
loc_825D9F74:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwimi r7,r10,16,4,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFF0000) | (ctx.r7.u64 & 0xFFFFFFFFF000FFFF);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// bdnz 0x825d9f74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D9F74;
loc_825D9F8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825D9F90"))) PPC_WEAK_FUNC(sub_825D9F90);
PPC_FUNC_IMPL(__imp__sub_825D9F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D9F94"))) PPC_WEAK_FUNC(sub_825D9F94);
PPC_FUNC_IMPL(__imp__sub_825D9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9F98"))) PPC_WEAK_FUNC(sub_825D9F98);
PPC_FUNC_IMPL(__imp__sub_825D9F98) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// rlwinm r26,r9,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r27,r10,12
	r27.s64 = ctx.r10.s64 * 12;
	// bne cr6,0x825d9ff8
	if (!cr6.eq) goto loc_825D9FF8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// b 0x825da37c
	goto loc_825DA37C;
loc_825D9FF8:
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825da024
	if (!cr6.gt) goto loc_825DA024;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_825DA024:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r25,1
	r25.s64 = 1;
	// subfc r8,r11,r8
	xer.ca = ctx.r8.u32 >= r11.u32;
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addze r6,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r6.s64 = temp.s64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// and r28,r11,r10
	r28.u64 = r11.u64 & ctx.r10.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// beq cr6,0x825da114
	if (cr6.eq) goto loc_825DA114;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825DA068:
	// ld r11,8(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r8,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825da09c
	if (cr0.eq) goto loc_825DA09C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// rlwimi r4,r11,0,0,19
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r4.u64 & 0xFFFFFFFF00000FFF);
	// b 0x825da0a0
	goto loc_825DA0A0;
loc_825DA09C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825DA0A0:
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x825da0dc
	if (!cr6.lt) goto loc_825DA0DC;
	// ldu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r6.u32 = ea;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825da0e8
	if (cr0.eq) goto loc_825DA0E8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r9,r26
	r11.u64 = ctx.r9.u64 + r26.u64;
	// rlwimi r11,r9,0,0,19
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// b 0x825da0ec
	goto loc_825DA0EC;
loc_825DA0DC:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x825da0ec
	goto loc_825DA0EC;
loc_825DA0E8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825DA0EC:
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r9,r10
	r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bdnz 0x825da068
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DA068;
loc_825DA114:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// stw r28,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r28.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// lis r11,-32162
	r11.s64 = -2107768832;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r11,-32352
	ctx.r6.s64 = r11.s64 + -32352;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825da1b8
	if (cr6.eq) goto loc_825DA1B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,19952(r11)
	PPC_STORE_U32(r11.u32 + 19952, r25.u32);
loc_825DA1B8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,16(r24)
	PPC_STORE_U32(r24.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825da1e4
	if (cr0.eq) goto loc_825DA1E4;
	// rlwinm. r11,r10,30,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,2
	r11.s64 = 131072;
	// bne 0x825da1e4
	if (!cr0.eq) goto loc_825DA1E4;
	// lis r11,4
	r11.s64 = 262144;
loc_825DA1E4:
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// beq 0x825da26c
	if (cr0.eq) goto loc_825DA26C;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// rlwimi r11,r10,5,22,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x3E0) | (r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825da2e4
	if (cr0.eq) goto loc_825DA2E4;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r6,r10,21508
	ctx.r6.s64 = ctx.r10.s64 + 21508;
loc_825DA20C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// beq cr6,0x825da254
	if (cr6.eq) goto loc_825DA254;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_825DA254:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x825da20c
	if (cr6.lt) goto loc_825DA20C;
	// b 0x825da2e4
	goto loc_825DA2E4;
loc_825DA26C:
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// rlwimi r11,r10,5,22,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x3E0) | (r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825da2e4
	if (cr0.eq) goto loc_825DA2E4;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r6,r10,21508
	ctx.r6.s64 = ctx.r10.s64 + 21508;
loc_825DA288:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// rlwinm r10,r10,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// beq cr6,0x825da2d0
	if (cr6.eq) goto loc_825DA2D0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_825DA2D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x825da288
	if (cr6.lt) goto loc_825DA288;
loc_825DA2E4:
	// stw r11,20(r24)
	PPC_STORE_U32(r24.u32 + 20, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// beq 0x825da334
	if (cr0.eq) goto loc_825DA334;
	// rlwinm. r11,r11,25,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825da30c
	if (cr0.eq) goto loc_825DA30C;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x825da314
	goto loc_825DA314;
loc_825DA30C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,15,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
loc_825DA314:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwimi r10,r11,17,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// andis. r10,r10,30734
	ctx.r10.u64 = ctx.r10.u64 & 2014183424;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andi. r11,r8,65294
	r11.u64 = ctx.r8.u64 & 65294;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x825da374
	goto loc_825DA374;
loc_825DA334:
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825da344
	if (cr0.eq) goto loc_825DA344;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x825da34c
	goto loc_825DA34C;
loc_825DA344:
	// lhz r11,88(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 88);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
loc_825DA34C:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwimi r9,r11,16,15,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x10000) | (ctx.r9.u64 & 0xFFFFFFFFFFFEFFFF);
	// andis. r10,r9,34801
	ctx.r10.u64 = ctx.r9.u64 & 2280718336;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825da368
	if (cr6.eq) goto loc_825DA368;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x825da370
	goto loc_825DA370;
loc_825DA368:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
loc_825DA370:
	// rlwinm r11,r11,18,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x40000;
loc_825DA374:
	// stw r10,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r10.u32);
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
loc_825DA37C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825DA380"))) PPC_WEAK_FUNC(sub_825DA380);
PPC_FUNC_IMPL(__imp__sub_825DA380) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825DA384"))) PPC_WEAK_FUNC(sub_825DA384);
PPC_FUNC_IMPL(__imp__sub_825DA384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DA388"))) PPC_WEAK_FUNC(sub_825DA388);
PPC_FUNC_IMPL(__imp__sub_825DA388) {
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
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da3b0
	if (cr6.eq) goto loc_825DA3B0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA3B0:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da3c4
	if (cr6.eq) goto loc_825DA3C4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA3C4:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da3d8
	if (cr6.eq) goto loc_825DA3D8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA3D8:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da3ec
	if (cr6.eq) goto loc_825DA3EC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA3EC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da400
	if (cr6.eq) goto loc_825DA400;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA400:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da414
	if (cr6.eq) goto loc_825DA414;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DA414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DA424"))) PPC_WEAK_FUNC(sub_825DA424);
PPC_FUNC_IMPL(__imp__sub_825DA424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA428"))) PPC_WEAK_FUNC(sub_825DA428);
PPC_FUNC_IMPL(__imp__sub_825DA428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r4,63
	xer.ca = ctx.r4.u32 <= 63;
	ctx.r10.s64 = 63 - ctx.r4.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// sld r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// ld r6,9496(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 9496);
	// addi r4,r4,2248
	ctx.r4.s64 = ctx.r4.s64 + 2248;
	// stw r9,9932(r11)
	PPC_STORE_U32(r11.u32 + 9932, ctx.r9.u32);
	// addi r10,r11,368
	ctx.r10.s64 = r11.s64 + 368;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,9496(r11)
	PPC_STORE_U64(r11.u32 + 9496, ctx.r9.u64);
	// addi r11,r10,9208
	r11.s64 = ctx.r10.s64 + 9208;
	// rlwinm r9,r7,27,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFC;
	// rlwinm r6,r7,30,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1F;
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
	// lbz r11,7(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r9,3(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r8,11(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r11.u32);
}

__attribute__((alias("__imp__sub_825DA4A0"))) PPC_WEAK_FUNC(sub_825DA4A0);
PPC_FUNC_IMPL(__imp__sub_825DA4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA4A4"))) PPC_WEAK_FUNC(sub_825DA4A4);
PPC_FUNC_IMPL(__imp__sub_825DA4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DA4A8"))) PPC_WEAK_FUNC(sub_825DA4A8);
PPC_FUNC_IMPL(__imp__sub_825DA4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DA4B8"))) PPC_WEAK_FUNC(sub_825DA4B8);
PPC_FUNC_IMPL(__imp__sub_825DA4B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d9e40
	sub_825D9E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA4BC"))) PPC_WEAK_FUNC(sub_825DA4BC);
PPC_FUNC_IMPL(__imp__sub_825DA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DA4C0"))) PPC_WEAK_FUNC(sub_825DA4C0);
PPC_FUNC_IMPL(__imp__sub_825DA4C0) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// stw r30,19900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19900, r30.u32);
	// li r28,2
	r28.s64 = 2;
	// stw r30,19892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19892, r30.u32);
loc_825DA4E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d9840
	sub_825D9840(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,9916(r29)
	PPC_STORE_U32(r29.u32 + 9916, r11.u32);
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// bne 0x825da4e4
	if (!cr0.eq) goto loc_825DA4E4;
	// lwz r3,19896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da520
	if (cr6.eq) goto loc_825DA520;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r30.u32);
loc_825DA520:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,19904(r31)
	PPC_STORE_U32(r31.u32 + 19904, r30.u32);
	// stw r30,19932(r31)
	PPC_STORE_U32(r31.u32 + 19932, r30.u32);
	// stw r11,19936(r31)
	PPC_STORE_U32(r31.u32 + 19936, r11.u32);
	// stw r30,19944(r31)
	PPC_STORE_U32(r31.u32 + 19944, r30.u32);
	// stw r30,19952(r31)
	PPC_STORE_U32(r31.u32 + 19952, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DA53C"))) PPC_WEAK_FUNC(sub_825DA53C);
PPC_FUNC_IMPL(__imp__sub_825DA53C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825DA540"))) PPC_WEAK_FUNC(sub_825DA540);
PPC_FUNC_IMPL(__imp__sub_825DA540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r4,20
	r31.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825da5c0
	if (!cr6.eq) goto loc_825DA5C0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d9f98
	sub_825D9F98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825da594
	if (cr0.eq) goto loc_825DA594;
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x825da5b4
	goto loc_825DA5B4;
loc_825DA594:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
loc_825DA5B4:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// b 0x825dadf4
	goto loc_825DADF4;
loc_825DA5C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825da9a8
	if (cr0.eq) goto loc_825DA9A8;
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// addi r28,r30,268
	r28.s64 = r30.s64 + 268;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// b 0x825da640
	goto loc_825DA640;
loc_825DA5F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// rlwinm r8,r7,17,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1;
	// rotlwi r5,r5,13
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 13);
	// rlwinm r3,r7,18,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r29,r7,28,16,19
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xF000;
	// rlwimi r3,r5,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r5,r3,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r7,r7,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00000;
	// or r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 | r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_825DA640:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// blt cr6,0x825da5f4
	if (cr6.lt) goto loc_825DA5F4;
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825da660
	if (!cr6.eq) goto loc_825DA660;
	// li r11,0
	r11.s64 = 0;
	// b 0x825da670
	goto loc_825DA670;
loc_825DA660:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x825da670
	if (cr6.eq) goto loc_825DA670;
	// li r11,2
	r11.s64 = 2;
loc_825DA670:
	// stw r11,336(r30)
	PPC_STORE_U32(r30.u32 + 336, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825da698
	if (!cr6.gt) goto loc_825DA698;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DA698:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addze r8,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// and r29,r11,r10
	r29.u64 = r11.u64 & ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825d9f98
	sub_825D9F98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x825d7c40
	sub_825D7C40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825da6e8
	if (!cr0.eq) goto loc_825DA6E8;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2945
	r11.u64 = r11.u64 | 2945;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// b 0x825dadf4
	goto loc_825DADF4;
loc_825DA6E8:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825da714
	if (!cr6.gt) goto loc_825DA714;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DA714:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,272(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// li r5,0
	ctx.r5.s64 = 0;
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// ble cr6,0x825da7cc
	if (!cr6.gt) goto loc_825DA7CC;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
loc_825DA754:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r11,r10,16,16,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,24,20,31
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r3,24,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x825da780
	if (!cr6.gt) goto loc_825DA780;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825DA780:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x825da794
	if (!cr6.gt) goto loc_825DA794;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_825DA794:
	// not r31,r10
	r31.u64 = ~ctx.r10.u64;
	// lwz r27,272(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r31,r31,21,31,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x1;
	// rlwinm r10,r10,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// slw r31,r31,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r6,r31,r6
	ctx.r6.u64 = r31.u64 | ctx.r6.u64;
	// or r5,r11,r5
	ctx.r5.u64 = r11.u64 | ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// blt cr6,0x825da754
	if (cr6.lt) goto loc_825DA754;
loc_825DA7CC:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// rlwinm r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x825da7ec
	if (!cr6.gt) goto loc_825DA7EC;
	// li r11,15
	r11.s64 = 15;
loc_825DA7EC:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x825da7f8
	if (!cr6.gt) goto loc_825DA7F8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_825DA7F8:
	// li r11,64
	r11.s64 = 64;
	// sth r6,24(r29)
	PPC_STORE_U16(r29.u32 + 24, ctx.r6.u16);
	// addi r10,r1,364
	ctx.r10.s64 = ctx.r1.s64 + 364;
	// sth r5,26(r29)
	PPC_STORE_U16(r29.u32 + 26, ctx.r5.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825DA810:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x825da810
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DA810;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825da84c
	if (cr6.eq) goto loc_825DA84C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
loc_825DA834:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r10,14,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3C;
	// rlwinm r10,r10,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bdnz 0x825da834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DA834;
loc_825DA84C:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r6,r11,24296
	ctx.r6.s64 = r11.s64 + 24296;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825da88c
	if (cr6.eq) goto loc_825DA88C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825DA88C:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// rlwinm. r11,r11,24,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x3F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825da8a0
	if (cr0.eq) goto loc_825DA8A0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x825da8bc
	goto loc_825DA8BC;
loc_825DA8A0:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r11,24688
	ctx.r6.s64 = r11.s64 + 24688;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
loc_825DA8BC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r9,8,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r6,r8,25752
	ctx.r6.s64 = ctx.r8.s64 + 25752;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825da910
	if (cr0.eq) goto loc_825DA910;
	// li r11,4
	r11.s64 = 4;
	// b 0x825da92c
	goto loc_825DA92C;
loc_825DA910:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825da920
	if (cr0.eq) goto loc_825DA920;
	// li r11,3
	r11.s64 = 3;
	// b 0x825da92c
	goto loc_825DA92C;
loc_825DA920:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825da92c
	if (cr0.eq) goto loc_825DA92C;
	// li r11,2
	r11.s64 = 2;
loc_825DA92C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,23,4,4
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,19896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825dadd8
	if (cr6.eq) goto loc_825DADD8;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x825da98c
	goto loc_825DA98C;
loc_825DA960:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm r6,r10,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r4,r10,12,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825DA98C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825da960
	if (cr6.lt) goto loc_825DA960;
	// b 0x825dadd8
	goto loc_825DADD8;
loc_825DA9A8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r10,36
	r11.s64 = ctx.r10.s64 + 36;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x825da9cc
	if (!cr6.gt) goto loc_825DA9CC;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DA9CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addze r8,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// and r27,r11,r10
	r27.u64 = r11.u64 & ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825d9f98
	sub_825D9F98(ctx, base);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// stw r11,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r11.u32);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// stw r11,32(r27)
	PPC_STORE_U32(r27.u32 + 32, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r5
	r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825daa34
	if (!cr6.gt) goto loc_825DAA34;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DAA34:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addze r8,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x825daa80
	if (!cr6.gt) goto loc_825DAA80;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DAA80:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r30,292
	r11.s64 = r30.s64 + 292;
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// subfc r4,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lwz r8,292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,256(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// addze r28,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	r28.s64 = temp.s64;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// subf r4,r28,r6
	ctx.r4.s64 = ctx.r6.s64 - r28.s64;
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - r29.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// divw r6,r3,r5
	ctx.r6.s32 = ctx.r3.s32 / ctx.r5.s32;
	// and r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ctx.r7.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x825daafc
	if (!cr6.lt) goto loc_825DAAFC;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
loc_825DAAD0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwimi r7,r9,0,0,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (ctx.r7.u64 & 0xFFFFFFFF00000FFF);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825daad0
	if (cr6.lt) goto loc_825DAAD0;
loc_825DAAFC:
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x825dab48
	goto loc_825DAB48;
loc_825DAB18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r5,r8,0,16,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF000;
	// rlwimi r6,r8,12,0,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r6.u64 & 0xFFFFFFFF00000FFF);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r8,r6,12,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF00000;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_825DAB48:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// blt cr6,0x825dab18
	if (cr6.lt) goto loc_825DAB18;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x825d7c40
	sub_825D7C40(ctx, base);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825dab94
	if (!cr6.gt) goto loc_825DAB94;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DAB94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// subfc r8,r11,r8
	xer.ca = ctx.r8.u32 >= r11.u32;
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addze r7,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// and r28,r11,r9
	r28.u64 = r11.u64 & ctx.r9.u64;
	// ble cr6,0x825dabf0
	if (!cr6.gt) goto loc_825DABF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,-4
	ctx.r8.s64 = r28.s64 + -4;
loc_825DABC4:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r7,24,20,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r11,r6,16
	r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x825dabc4
	if (cr6.lt) goto loc_825DABC4;
loc_825DABF0:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// li r11,0
	r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DAC00:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825dac00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DAC00;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825dac3c
	if (cr6.eq) goto loc_825DAC3C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
loc_825DAC24:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// addi r9,r1,624
	ctx.r9.s64 = ctx.r1.s64 + 624;
	// rlwinm r8,r10,14,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3C;
	// rlwinm r10,r10,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bdnz 0x825dac24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DAC24;
loc_825DAC3C:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// addi r6,r11,24640
	ctx.r6.s64 = r11.s64 + 24640;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d9ea0
	sub_825D9EA0(ctx, base);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x825dac90
	if (!cr6.gt) goto loc_825DAC90;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825DAC90:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addze r8,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// and r29,r11,r10
	r29.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r31,308(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r29.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// beq cr6,0x825dad40
	if (cr6.eq) goto loc_825DAD40;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_825DACF0:
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r6,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xF;
	// rlwinm r6,r6,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DAD08:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dad28
	if (cr0.eq) goto loc_825DAD28;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stbx r8,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u8);
loc_825DAD28:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825dad08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DAD08;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// blt cr6,0x825dacf0
	if (cr6.lt) goto loc_825DACF0;
loc_825DAD40:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r11,25336
	ctx.r6.s64 = r11.s64 + 25336;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825dad9c
	if (cr6.eq) goto loc_825DAD9C;
	// addi r9,r1,334
	ctx.r9.s64 = ctx.r1.s64 + 334;
	// mtctr r31
	ctr.u64 = r31.u64;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_825DAD70:
	// lhzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = r11.s64 + -4;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// ori r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 4096;
	// stw r8,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r8.u32);
	// bdnz 0x825dad70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DAD70;
loc_825DAD9C:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// clrlwi. r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x825dadcc
	if (!cr0.eq) goto loc_825DADCC;
	// lis r11,-32163
	r11.s64 = -2107834368;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,24688
	ctx.r6.s64 = r11.s64 + 24688;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825DADCC:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwimi r11,r10,0,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_825DADD8:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,25128
	ctx.r6.s64 = r11.s64 + 25128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8410
	sub_825D8410(ctx, base);
loc_825DADF4:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dae10
	if (cr6.lt) goto loc_825DAE10;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dae10
	if (cr6.lt) goto loc_825DAE10;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 36);
loc_825DAE10:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
}

__attribute__((alias("__imp__sub_825DAE14"))) PPC_WEAK_FUNC(sub_825DAE14);
PPC_FUNC_IMPL(__imp__sub_825DAE14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DAE18"))) PPC_WEAK_FUNC(sub_825DAE18);
PPC_FUNC_IMPL(__imp__sub_825DAE18) {
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
	// li r28,1
	r28.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r28,19888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19888, r28.u32);
	// addi r31,r3,9932
	r31.s64 = ctx.r3.s64 + 9932;
loc_825DAE38:
	// addi r3,r31,-9916
	ctx.r3.s64 = r31.s64 + -9916;
	// bl 0x825d9840
	sub_825D9840(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// addi r31,r31,9936
	r31.s64 = r31.s64 + 9936;
	// blt cr6,0x825dae38
	if (cr6.lt) goto loc_825DAE38;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825da4c0
	sub_825DA4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DAE6C"))) PPC_WEAK_FUNC(sub_825DAE6C);
PPC_FUNC_IMPL(__imp__sub_825DAE6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825DAE70"))) PPC_WEAK_FUNC(sub_825DAE70);
PPC_FUNC_IMPL(__imp__sub_825DAE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,19896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825daeac
	if (cr6.eq) goto loc_825DAEAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
loc_825DAEAC:
	// lwz r3,19940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825daec0
	if (cr6.eq) goto loc_825DAEC0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DAEC0:
	// lwz r3,19920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825daed4
	if (cr6.eq) goto loc_825DAED4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DAED4:
	// lwz r3,19908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19908);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825daee8
	if (cr6.eq) goto loc_825DAEE8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DAEE8:
	// addi r31,r31,19888
	r31.s64 = r31.s64 + 19888;
	// li r30,1
	r30.s64 = 1;
loc_825DAEF0:
	// addi r31,r31,-9936
	r31.s64 = r31.s64 + -9936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825da388
	sub_825DA388(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x825daef0
	if (!cr0.lt) goto loc_825DAEF0;
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

__attribute__((alias("__imp__sub_825DAF18"))) PPC_WEAK_FUNC(sub_825DAF18);
PPC_FUNC_IMPL(__imp__sub_825DAF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DAF1C"))) PPC_WEAK_FUNC(sub_825DAF1C);
PPC_FUNC_IMPL(__imp__sub_825DAF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DAF20"))) PPC_WEAK_FUNC(sub_825DAF20);
PPC_FUNC_IMPL(__imp__sub_825DAF20) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,19900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825db0f8
	if (cr6.lt) goto loc_825DB0F8;
	// lwz r11,19904(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19904);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825daf58
	if (!cr6.eq) goto loc_825DAF58;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x825db0f8
	goto loc_825DB0F8;
loc_825DAF58:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,19892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 19892);
	// li r29,0
	r29.s64 = 0;
	// lwz r25,24(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lis r8,4138
	ctx.r8.s64 = 271187968;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// ori r8,r8,4352
	ctx.r8.u64 = ctx.r8.u64 | 4352;
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// std r29,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r29.u64);
	// rlwimi r8,r10,31,26,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// std r29,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r29.u64);
	// stw r29,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r29.u32);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r31,r26,20
	r31.s64 = r26.s64 + 20;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// andi. r10,r10,222
	ctx.r10.u64 = ctx.r10.u64 & 222;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// lwz r11,19924(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19924);
	// rlwinm. r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825dafe0
	if (cr0.eq) goto loc_825DAFE0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19920(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 19920);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
loc_825DAFE0:
	// lwz r11,19912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19912);
	// rlwinm. r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x825db01c
	if (cr0.eq) goto loc_825DB01C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19908(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 19908);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
loc_825DB01C:
	// mr r27,r29
	r27.u64 = r29.u64;
	// addi r28,r1,116
	r28.s64 = ctx.r1.s64 + 116;
	// addi r29,r30,368
	r29.s64 = r30.s64 + 368;
loc_825DB028:
	// lwz r11,9564(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 9564);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825db054
	if (!cr6.eq) goto loc_825DB054;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x825d93c8
	sub_825D93C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x825db054
	if (!cr0.lt) goto loc_825DB054;
	// stw r3,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_825DB054:
	// lwz r11,-240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825db088
	if (cr6.eq) goto loc_825DB088;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic r10,r27,-1
	xer.ca = r27.u32 > 0;
	ctx.r10.s64 = r27.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subfe r5,r10,r27
	temp.u8 = (~ctx.r10.u32 + r27.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r27.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r29,-352
	ctx.r3.s64 = r29.s64 + -352;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// bl 0x825da540
	sub_825DA540(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x825db088
	if (!cr0.lt) goto loc_825DB088;
	// stw r3,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_825DB088:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// blt cr6,0x825db028
	if (cr6.lt) goto loc_825DB028;
	// lwz r11,19952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19952);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x825d5de8
	sub_825D5DE8(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825db0f0
	if (cr6.lt) goto loc_825DB0F0;
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825db0f4
	if (!cr6.lt) goto loc_825DB0F4;
loc_825DB0F0:
	// stw r11,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, r11.u32);
loc_825DB0F4:
	// lwz r3,19900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 19900);
loc_825DB0F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825DB0FC"))) PPC_WEAK_FUNC(sub_825DB0FC);
PPC_FUNC_IMPL(__imp__sub_825DB0FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825DB100"))) PPC_WEAK_FUNC(sub_825DB100);
PPC_FUNC_IMPL(__imp__sub_825DB100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,19968
	ctx.r3.s64 = 19968;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825db12c
	if (!cr0.eq) goto loc_825DB12C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825db138
	goto loc_825DB138;
loc_825DB12C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dae18
	sub_825DAE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825DB138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DB148"))) PPC_WEAK_FUNC(sub_825DB148);
PPC_FUNC_IMPL(__imp__sub_825DB148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DB14C"))) PPC_WEAK_FUNC(sub_825DB14C);
PPC_FUNC_IMPL(__imp__sub_825DB14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DB150"))) PPC_WEAK_FUNC(sub_825DB150);
PPC_FUNC_IMPL(__imp__sub_825DB150) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825db180
	if (!cr6.gt) goto loc_825DB180;
	// bl 0x825d8d48
	sub_825D8D48(ctx, base);
loc_825DB180:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825db1c0
	if (cr6.lt) goto loc_825DB1C0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_825DB1C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825DB1C4"))) PPC_WEAK_FUNC(sub_825DB1C4);
PPC_FUNC_IMPL(__imp__sub_825DB1C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DB1C8"))) PPC_WEAK_FUNC(sub_825DB1C8);
PPC_FUNC_IMPL(__imp__sub_825DB1C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825db1f8
	if (!cr6.gt) goto loc_825DB1F8;
	// bl 0x825d8dd8
	sub_825D8DD8(ctx, base);
loc_825DB1F8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825db230
	if (cr6.lt) goto loc_825DB230;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_825DB230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825DB234"))) PPC_WEAK_FUNC(sub_825DB234);
PPC_FUNC_IMPL(__imp__sub_825DB234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DB238"))) PPC_WEAK_FUNC(sub_825DB238);
PPC_FUNC_IMPL(__imp__sub_825DB238) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825db268
	if (!cr6.gt) goto loc_825DB268;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DB268:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825db294
	if (cr6.lt) goto loc_825DB294;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_825DB294:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825DB298"))) PPC_WEAK_FUNC(sub_825DB298);
PPC_FUNC_IMPL(__imp__sub_825DB298) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DB29C"))) PPC_WEAK_FUNC(sub_825DB29C);
PPC_FUNC_IMPL(__imp__sub_825DB29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DB2A0"))) PPC_WEAK_FUNC(sub_825DB2A0);
PPC_FUNC_IMPL(__imp__sub_825DB2A0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825d9840
	sub_825D9840(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x825db2e0
	if (!cr6.lt) goto loc_825DB2E0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x825d8d48
	sub_825D8D48(ctx, base);
loc_825DB2E0:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bge cr6,0x825db300
	if (!cr6.lt) goto loc_825DB300;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x825d8dd8
	sub_825D8DD8(ctx, base);
loc_825DB300:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825db334
	if (cr0.eq) goto loc_825DB334;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x825db394
	if (!cr6.lt) goto loc_825DB394;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
	// b 0x825db394
	goto loc_825DB394;
loc_825DB334:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x825db354
	if (!cr6.lt) goto loc_825DB354;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DB354:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x825db374
	if (!cr6.lt) goto loc_825DB374;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DB374:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x825db394
	if (!cr6.lt) goto loc_825DB394;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DB394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825DB398"))) PPC_WEAK_FUNC(sub_825DB398);
PPC_FUNC_IMPL(__imp__sub_825DB398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DB39C"))) PPC_WEAK_FUNC(sub_825DB39C);
PPC_FUNC_IMPL(__imp__sub_825DB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DB3A0"))) PPC_WEAK_FUNC(sub_825DB3A0);
PPC_FUNC_IMPL(__imp__sub_825DB3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825db3f8
	if (cr0.eq) goto loc_825DB3F8;
	// rlwinm r10,r6,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r11,r6,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// rlwimi r5,r4,4,24,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF0F);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r6,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// rlwimi r11,r5,9,15,22
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x1FE00) | (r11.u64 & 0xFFFFFFFFFFFE01FF);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825db238
	sub_825DB238(ctx, base);
	// b 0x825db418
	goto loc_825DB418;
loc_825DB3F8:
	// rlwimi r4,r5,4,24,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF0F);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x825db238
	sub_825DB238(ctx, base);
loc_825DB418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825DB424"))) PPC_WEAK_FUNC(sub_825DB424);
PPC_FUNC_IMPL(__imp__sub_825DB424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DB428"))) PPC_WEAK_FUNC(sub_825DB428);
PPC_FUNC_IMPL(__imp__sub_825DB428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93ec
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dbb6c
	if (cr0.eq) goto loc_825DBB6C;
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r21,0
	r21.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825db4a0
	if (cr0.eq) goto loc_825DB4A0;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic. r10,r10,-8
	xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825db4a0
	if (cr0.eq) goto loc_825DB4A0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// bne 0x825db4a4
	if (!cr0.eq) goto loc_825DB4A4;
loc_825DB4A0:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_825DB4A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r26,r31,108
	r26.s64 = r31.s64 + 108;
	// bne 0x825db4cc
	if (!cr0.eq) goto loc_825DB4CC;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x825db58c
	goto loc_825DB58C;
loc_825DB4CC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// rlwinm r11,r11,0,17,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(r11.u32, 24576, xer);
	// bge cr6,0x825db4f8
	if (!cr6.lt) goto loc_825DB4F8;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825db598
	if (cr6.eq) goto loc_825DB598;
loc_825DB4F8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825dbb6c
	if (cr6.lt) goto loc_825DBB6C;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bne cr6,0x825db534
	if (!cr6.eq) goto loc_825DB534;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r7,-524
	ctx.r7.s64 = ctx.r7.s64 + -524;
	// lbzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// b 0x825db544
	goto loc_825DB544;
loc_825DB534:
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r8,-524
	ctx.r8.s64 = ctx.r8.s64 + -524;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
loc_825DB544:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r11,r9,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// ld r11,0(r10)
	r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r10,r9,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r11,r8,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwinm r10,r10,0,20,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwinm r10,r10,0,16,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825DB58C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825db1c8
	sub_825DB1C8(ctx, base);
loc_825DB598:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825dbb6c
	if (cr6.lt) goto loc_825DBB6C;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi. r22,r30,24
	r22.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r10,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,4096
	r11.s64 = r11.s64 + 4096;
	// rlwinm r20,r10,20,29,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// rlwimi r11,r10,0,20,16
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (r11.u64 & 0x7000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// beq 0x825db5fc
	if (cr0.eq) goto loc_825DB5FC;
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, ctx.r10.u32);
loc_825DB5FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dbb28
	if (cr0.eq) goto loc_825DBB28;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r24,r21
	r24.u64 = r21.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r21,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r21.u64);
	// std r21,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r21.u64);
	// std r21,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, r21.u64);
	// std r21,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r21.u64);
	// std r21,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, r21.u64);
	// std r21,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r21.u64);
	// std r21,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, r21.u64);
	// beq cr6,0x825db6bc
	if (cr6.eq) goto loc_825DB6BC;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825db668
	if (cr6.eq) goto loc_825DB668;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825db668
	if (!cr0.eq) goto loc_825DB668;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825db6bc
	if (!cr0.eq) goto loc_825DB6BC;
loc_825DB668:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825DB67C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x825db67c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB67C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825DB6A4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x825db6a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB6A4;
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
loc_825DB6BC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825db974
	if (cr6.eq) goto loc_825DB974;
	// lwz r29,0(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r29,0,13,13
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r28,r29,27
	r28.u64 = r29.u32 & 0x1F;
	// beq 0x825db6f8
	if (cr0.eq) goto loc_825DB6F8;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_825DB6D8:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d85f0
	sub_825D85F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x825db6d8
	if (cr6.lt) goto loc_825DB6D8;
	// b 0x825db708
	goto loc_825DB708;
loc_825DB6F8:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwinm r4,r29,20,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x3F;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d85f0
	sub_825D85F0(ctx, base);
loc_825DB708:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825db71c
	if (!cr6.eq) goto loc_825DB71C;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825db764
	if (!cr0.eq) goto loc_825DB764;
loc_825DB71C:
	// rlwinm. r11,r29,0,20,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825db750
	if (cr0.eq) goto loc_825DB750;
	// mr r30,r21
	r30.u64 = r21.u64;
	// clrlwi r29,r17,24
	r29.u64 = r17.u32 & 0xFF;
loc_825DB72C:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d86b8
	sub_825D86B8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x825db72c
	if (cr6.lt) goto loc_825DB72C;
	// b 0x825db764
	goto loc_825DB764;
loc_825DB750:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// clrlwi r5,r17,24
	ctx.r5.u64 = r17.u32 & 0xFF;
	// rlwinm r4,r29,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x3F;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d86b8
	sub_825D86B8(ctx, base);
loc_825DB764:
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825db848
	if (cr0.eq) goto loc_825DB848;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(r28.u32, 24, xer);
	// blt cr6,0x825db788
	if (cr6.lt) goto loc_825DB788;
	// cmplwi cr6,r28,26
	cr6.compare<uint32_t>(r28.u32, 26, xer);
	// bgt cr6,0x825db788
	if (cr6.gt) goto loc_825DB788;
	// mr r24,r18
	r24.u64 = r18.u64;
	// b 0x825db848
	goto loc_825DB848;
loc_825DB788:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825db848
	if (!cr6.eq) goto loc_825DB848;
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825db848
	if (cr0.eq) goto loc_825DB848;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825db848
	if (!cr0.eq) goto loc_825DB848;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825db7d0
	if (!cr0.eq) goto loc_825DB7D0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r20,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r20.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r18,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r18.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// b 0x825db83c
	goto loc_825DB83C;
loc_825DB7D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825db848
	if (cr6.eq) goto loc_825DB848;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB7F0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825db7f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB7F0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB818:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825db818
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB818;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825DB83C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825DB848:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	r11.s64 = ctx.r1.s64 + 156;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB870:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825db870
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB870;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r21
	r11.u64 = r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB890:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x825db890
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB890;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d6dc0
	sub_825D6DC0(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// blt cr6,0x825db980
	if (cr6.lt) goto loc_825DB980;
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// beq 0x825db904
	if (cr0.eq) goto loc_825DB904;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	r11.s64 = ctx.r1.s64 + 156;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB8EC:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825db8ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB8EC;
	// b 0x825db930
	goto loc_825DB930;
loc_825DB904:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	r11.s64 = ctx.r1.s64 + 156;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB91C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825db91c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB91C;
loc_825DB930:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r21
	r11.u64 = r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DB93C:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x825db93c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB93C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d6dc0
	sub_825D6DC0(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bge cr6,0x825db984
	if (!cr6.lt) goto loc_825DB984;
	// b 0x825db980
	goto loc_825DB980;
loc_825DB974:
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825db984
	if (cr0.eq) goto loc_825DB984;
loc_825DB980:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_825DB984:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dba48
	if (cr0.eq) goto loc_825DBA48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// beq cr6,0x825db9f0
	if (cr6.eq) goto loc_825DB9F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r9,r8,0,16,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r9.u64 & 0xFFF0000);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x825dba24
	goto loc_825DBA24;
loc_825DB9F0:
	// rlwinm r11,r20,1,0,30
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFF000FFFF) | (r11.u64 & 0xFFF0000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825DBA24:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stb r21,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r21.u8);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825DBA48:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825dbb28
	if (cr6.eq) goto loc_825DBB28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825dbb28
	if (!cr6.eq) goto loc_825DBB28;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x825dba74
	if (cr6.lt) goto loc_825DBA74;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// ble cr6,0x825dba78
	if (!cr6.gt) goto loc_825DBA78;
loc_825DBA74:
	// stb r18,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r18.u8);
loc_825DBA78:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq 0x825dbadc
	if (cr0.eq) goto loc_825DBADC;
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_825DBA94:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825dba94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DBA94;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DBAC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825dbac0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DBAC0;
	// b 0x825dbb28
	goto loc_825DBB28;
loc_825DBADC:
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_825DBAE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825dbae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DBAE4;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DBB10:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825dbb10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DBB10;
loc_825DBB28:
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dbb6c
	if (cr0.eq) goto loc_825DBB6C;
	// cmplwi cr6,r20,4
	cr6.compare<uint32_t>(r20.u32, 4, xer);
	// bge cr6,0x825dbb54
	if (!cr6.lt) goto loc_825DBB54;
	// slw r11,r18,r20
	r11.u64 = r20.u8 & 0x20 ? 0 : (r18.u32 << (r20.u8 & 0x3F));
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r11,28,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF0000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,4,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF) | (r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// b 0x825dbb6c
	goto loc_825DBB6C;
loc_825DBB54:
	// addi r11,r20,-4
	r11.s64 = r20.s64 + -4;
	// lwz r10,-4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -4);
	// slw r11,r18,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r18.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,-4(r23)
	PPC_STORE_U32(r23.u32 + -4, r11.u32);
loc_825DBB6C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_825DBB70"))) PPC_WEAK_FUNC(sub_825DBB70);
PPC_FUNC_IMPL(__imp__sub_825DBB70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825DBB74"))) PPC_WEAK_FUNC(sub_825DBB74);
PPC_FUNC_IMPL(__imp__sub_825DBB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBB78"))) PPC_WEAK_FUNC(sub_825DBB78);
PPC_FUNC_IMPL(__imp__sub_825DBB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825dbbc4
	if (!cr0.eq) goto loc_825DBBC4;
	// rlwimi r4,r5,1,27,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x1E) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r5,r11,80
	ctx.r5.s64 = r11.s64 + 80;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x825db238
	sub_825DB238(ctx, base);
loc_825DBBC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825DBBD0"))) PPC_WEAK_FUNC(sub_825DBBD0);
PPC_FUNC_IMPL(__imp__sub_825DBBD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBBD4"))) PPC_WEAK_FUNC(sub_825DBBD4);
PPC_FUNC_IMPL(__imp__sub_825DBBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBBD8"))) PPC_WEAK_FUNC(sub_825DBBD8);
PPC_FUNC_IMPL(__imp__sub_825DBBD8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r3,368
	r27.s64 = ctx.r3.s64 + 368;
	// addi r26,r3,10304
	r26.s64 = ctx.r3.s64 + 10304;
	// li r28,64
	r28.s64 = 64;
	// li r29,0
	r29.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_825DBBFC:
	// subfic r30,r29,63
	xer.ca = r29.u32 <= 63;
	r30.s64 = 63 - r29.s64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r24,r30,2,0,29
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d88f0
	sub_825D88F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d88f0
	sub_825D88F0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or. r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dbcb8
	if (cr0.eq) goto loc_825DBCB8;
	// and. r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825dbcac
	if (cr0.eq) goto loc_825DBCAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_825DBC54:
	// slw r11,r25,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dbc9c
	if (cr0.eq) goto loc_825DBC9C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
loc_825DBC74:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r10)
	r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r24,r7
	ctx.r7.s64 = ctx.r7.s64 - r24.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x825dbc94
	if (!cr0.eq) goto loc_825DBC94;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825dbc74
	if (!cr6.eq) goto loc_825DBC74;
loc_825DBC94:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x825dbcac
	if (!cr0.eq) goto loc_825DBCAC;
loc_825DBC9C:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// blt cr6,0x825dbc54
	if (cr6.lt) goto loc_825DBC54;
loc_825DBCAC:
	// andc. r11,r4,r3
	r11.u64 = ctx.r4.u64 & ~ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825dbcc4
	if (!cr0.eq) goto loc_825DBCC4;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_825DBCB8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(r29.u32, 64, xer);
	// blt cr6,0x825dbbfc
	if (cr6.lt) goto loc_825DBBFC;
loc_825DBCC4:
	// subfic r29,r28,64
	xer.ca = r28.u32 <= 64;
	r29.s64 = 64 - r28.s64;
	// stw r28,19936(r31)
	PPC_STORE_U32(r31.u32 + 19936, r28.u32);
	// stw r25,19932(r31)
	PPC_STORE_U32(r31.u32 + 19932, r25.u32);
	// addi r30,r31,19940
	r30.s64 = r31.s64 + 19940;
	// lwz r11,19948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19948);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x825dbcf0
	if (!cr6.gt) goto loc_825DBCF0;
	// addi r5,r31,19900
	ctx.r5.s64 = r31.s64 + 19900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DBCF0:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_825DBCF8"))) PPC_WEAK_FUNC(sub_825DBCF8);
PPC_FUNC_IMPL(__imp__sub_825DBCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825DBCFC"))) PPC_WEAK_FUNC(sub_825DBCFC);
PPC_FUNC_IMPL(__imp__sub_825DBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBD00"))) PPC_WEAK_FUNC(sub_825DBD00);
PPC_FUNC_IMPL(__imp__sub_825DBD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DBD10"))) PPC_WEAK_FUNC(sub_825DBD10);
PPC_FUNC_IMPL(__imp__sub_825DBD10) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d9900
	sub_825D9900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBD14"))) PPC_WEAK_FUNC(sub_825DBD14);
PPC_FUNC_IMPL(__imp__sub_825DBD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBD18"))) PPC_WEAK_FUNC(sub_825DBD18);
PPC_FUNC_IMPL(__imp__sub_825DBD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DBD28"))) PPC_WEAK_FUNC(sub_825DBD28);
PPC_FUNC_IMPL(__imp__sub_825DBD28) {
	PPC_FUNC_PROLOGUE();
	// b 0x825db3a0
	sub_825DB3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBD2C"))) PPC_WEAK_FUNC(sub_825DBD2C);
PPC_FUNC_IMPL(__imp__sub_825DBD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

