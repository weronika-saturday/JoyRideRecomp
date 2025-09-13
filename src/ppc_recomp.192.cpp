#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82655204"))) PPC_WEAK_FUNC(sub_82655204);
PPC_FUNC_IMPL(__imp__sub_82655204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82655208"))) PPC_WEAK_FUNC(sub_82655208);
PPC_FUNC_IMPL(__imp__sub_82655208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8262d7e0
	sub_8262D7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655220"))) PPC_WEAK_FUNC(sub_82655220);
PPC_FUNC_IMPL(__imp__sub_82655220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655224"))) PPC_WEAK_FUNC(sub_82655224);
PPC_FUNC_IMPL(__imp__sub_82655224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655228"))) PPC_WEAK_FUNC(sub_82655228);
PPC_FUNC_IMPL(__imp__sub_82655228) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655230"))) PPC_WEAK_FUNC(sub_82655230);
PPC_FUNC_IMPL(__imp__sub_82655230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bne cr6,0x826552bc
	if (!cr6.eq) goto loc_826552BC;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// rlwinm r10,r11,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x2;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 * 112;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r11,3
	ctx.r8.s64 = r11.s64 + 3;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_826552BC:
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// bgelr cr6
	if (!cr6.lt) return;
loc_826552D0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// bgt cr6,0x8265561c
	if (cr6.gt) goto loc_8265561C;
loc_826552DC:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21236
	r12.s64 = r12.s64 + 21236;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82655364;
	case 1:
		// ERROR: 0x82655624
		return;
	case 2:
		goto loc_82655608;
	case 3:
		goto loc_82655618;
	case 4:
		goto loc_82655610;
	case 5:
		goto loc_8265537C;
	case 6:
		goto loc_826553A8;
	case 7:
		goto loc_826553D4;
	case 8:
		goto loc_82655400;
	case 9:
		goto loc_82655400;
	case 10:
		goto loc_8265542C;
	case 11:
		goto loc_82655458;
	case 12:
		goto loc_82655484;
	case 13:
		goto loc_826554B0;
	case 14:
		goto loc_826554EC;
	case 15:
		goto loc_82655518;
	case 16:
		goto loc_82655518;
	case 17:
		goto loc_82655544;
	case 18:
		goto loc_82655584;
	case 19:
		goto loc_826555B0;
	case 20:
		goto loc_826555DC;
	case 21:
		goto loc_8265561C;
	case 22:
		goto loc_8265561C;
	case 23:
		// ERROR: 0x82655624
		return;
	case 24:
		// ERROR: 0x82655624
		return;
	case 25:
		// ERROR: 0x82655624
		return;
	case 26:
		// ERROR: 0x82655624
		return;
	case 27:
		// ERROR: 0x82655624
		return;
	default:
		__builtin_unreachable();
	}
	// lwz r19,21348(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21348);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
	// lwz r19,22024(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22024);
	// lwz r19,22040(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22040);
	// lwz r19,22032(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22032);
	// lwz r19,21372(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21372);
	// lwz r19,21416(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21416);
	// lwz r19,21460(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21460);
	// lwz r19,21504(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21504);
	// lwz r19,21504(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21504);
	// lwz r19,21548(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21548);
	// lwz r19,21592(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21592);
	// lwz r19,21636(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21636);
	// lwz r19,21680(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21680);
	// lwz r19,21740(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21740);
	// lwz r19,21784(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21784);
	// lwz r19,21784(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21784);
	// lwz r19,21828(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21828);
	// lwz r19,21892(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21892);
	// lwz r19,21936(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21936);
	// lwz r19,21980(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21980);
	// lwz r19,22044(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22044);
	// lwz r19,22044(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22044);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
	// lwz r19,22052(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22052);
loc_82655364:
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// ble cr6,0x826552dc
	if (!cr6.gt) goto loc_826552DC;
	// b 0x8265561c
	goto loc_8265561C;
loc_8265537C:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826553A8:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826553D4:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655400:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_8265542C:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655458:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655484:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826554B0:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826554EC:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655518:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655544:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rotlwi r4,r10,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655584:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826555B0:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,192
	ctx.r8.s64 = ctx.r8.s64 + 192;
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// addi r6,r10,9
	ctx.r6.s64 = ctx.r10.s64 + 9;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_826555DC:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// b 0x8265561c
	goto loc_8265561C;
loc_82655608:
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// b 0x8265561c
	goto loc_8265561C;
loc_82655610:
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// b 0x8265561c
	goto loc_8265561C;
loc_82655618:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_8265561C:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x826552d0
	if (cr6.lt) goto loc_826552D0;
}

__attribute__((alias("__imp__sub_82655624"))) PPC_WEAK_FUNC(sub_82655624);
PPC_FUNC_IMPL(__imp__sub_82655624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655628"))) PPC_WEAK_FUNC(sub_82655628);
PPC_FUNC_IMPL(__imp__sub_82655628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265562C"))) PPC_WEAK_FUNC(sub_8265562C);
PPC_FUNC_IMPL(__imp__sub_8265562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655630"))) PPC_WEAK_FUNC(sub_82655630);
PPC_FUNC_IMPL(__imp__sub_82655630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655634"))) PPC_WEAK_FUNC(sub_82655634);
PPC_FUNC_IMPL(__imp__sub_82655634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655638"))) PPC_WEAK_FUNC(sub_82655638);
PPC_FUNC_IMPL(__imp__sub_82655638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265563C"))) PPC_WEAK_FUNC(sub_8265563C);
PPC_FUNC_IMPL(__imp__sub_8265563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655640"))) PPC_WEAK_FUNC(sub_82655640);
PPC_FUNC_IMPL(__imp__sub_82655640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655644"))) PPC_WEAK_FUNC(sub_82655644);
PPC_FUNC_IMPL(__imp__sub_82655644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655648"))) PPC_WEAK_FUNC(sub_82655648);
PPC_FUNC_IMPL(__imp__sub_82655648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265564C"))) PPC_WEAK_FUNC(sub_8265564C);
PPC_FUNC_IMPL(__imp__sub_8265564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655650"))) PPC_WEAK_FUNC(sub_82655650);
PPC_FUNC_IMPL(__imp__sub_82655650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655654"))) PPC_WEAK_FUNC(sub_82655654);
PPC_FUNC_IMPL(__imp__sub_82655654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655658"))) PPC_WEAK_FUNC(sub_82655658);
PPC_FUNC_IMPL(__imp__sub_82655658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265565C"))) PPC_WEAK_FUNC(sub_8265565C);
PPC_FUNC_IMPL(__imp__sub_8265565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655660"))) PPC_WEAK_FUNC(sub_82655660);
PPC_FUNC_IMPL(__imp__sub_82655660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655664"))) PPC_WEAK_FUNC(sub_82655664);
PPC_FUNC_IMPL(__imp__sub_82655664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655668"))) PPC_WEAK_FUNC(sub_82655668);
PPC_FUNC_IMPL(__imp__sub_82655668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265566C"))) PPC_WEAK_FUNC(sub_8265566C);
PPC_FUNC_IMPL(__imp__sub_8265566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655670"))) PPC_WEAK_FUNC(sub_82655670);
PPC_FUNC_IMPL(__imp__sub_82655670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655674"))) PPC_WEAK_FUNC(sub_82655674);
PPC_FUNC_IMPL(__imp__sub_82655674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655678"))) PPC_WEAK_FUNC(sub_82655678);
PPC_FUNC_IMPL(__imp__sub_82655678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265567C"))) PPC_WEAK_FUNC(sub_8265567C);
PPC_FUNC_IMPL(__imp__sub_8265567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655680"))) PPC_WEAK_FUNC(sub_82655680);
PPC_FUNC_IMPL(__imp__sub_82655680) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826556ac
	if (cr6.eq) goto loc_826556AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_826556AC:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826556bc
	if (cr6.eq) goto loc_826556BC;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_826556BC:
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
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

__attribute__((alias("__imp__sub_826556D4"))) PPC_WEAK_FUNC(sub_826556D4);
PPC_FUNC_IMPL(__imp__sub_826556D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826556D8"))) PPC_WEAK_FUNC(sub_826556D8);
PPC_FUNC_IMPL(__imp__sub_826556D8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826390e8
	sub_826390E8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,10692
	ctx.r8.s64 = ctx.r9.s64 + 10692;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r10,284(r31)
	PPC_STORE_U16(r31.u32 + 284, ctx.r10.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82655738"))) PPC_WEAK_FUNC(sub_82655738);
PPC_FUNC_IMPL(__imp__sub_82655738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265573C"))) PPC_WEAK_FUNC(sub_8265573C);
PPC_FUNC_IMPL(__imp__sub_8265573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655740"))) PPC_WEAK_FUNC(sub_82655740);
PPC_FUNC_IMPL(__imp__sub_82655740) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,10692
	ctx.r10.s64 = r11.s64 + 10692;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82655770
	if (cr6.eq) goto loc_82655770;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82655770:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
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

__attribute__((alias("__imp__sub_8265578C"))) PPC_WEAK_FUNC(sub_8265578C);
PPC_FUNC_IMPL(__imp__sub_8265578C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655790"))) PPC_WEAK_FUNC(sub_82655790);
PPC_FUNC_IMPL(__imp__sub_82655790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826557B4"))) PPC_WEAK_FUNC(sub_826557B4);
PPC_FUNC_IMPL(__imp__sub_826557B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826557B8"))) PPC_WEAK_FUNC(sub_826557B8);
PPC_FUNC_IMPL(__imp__sub_826557B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826557DC"))) PPC_WEAK_FUNC(sub_826557DC);
PPC_FUNC_IMPL(__imp__sub_826557DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826557E0"))) PPC_WEAK_FUNC(sub_826557E0);
PPC_FUNC_IMPL(__imp__sub_826557E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655804"))) PPC_WEAK_FUNC(sub_82655804);
PPC_FUNC_IMPL(__imp__sub_82655804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655808"))) PPC_WEAK_FUNC(sub_82655808);
PPC_FUNC_IMPL(__imp__sub_82655808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265582C"))) PPC_WEAK_FUNC(sub_8265582C);
PPC_FUNC_IMPL(__imp__sub_8265582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655830"))) PPC_WEAK_FUNC(sub_82655830);
PPC_FUNC_IMPL(__imp__sub_82655830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,96
	r11.s64 = 96;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,208
	ctx.r10.s64 = 208;
	// vpermwi128 v12,v13,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// li r9,224
	ctx.r9.s64 = 224;
	// vpermwi128 v11,v13,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lvx128 v10,r3,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r3,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r3,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v5,v9,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v4,v9,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vmulfp128 v3,v12,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v2,v11,v4
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v7
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// vaddfp v30,v31,v6
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v6.f32)));
	// stvewx v30,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,21036(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265589C"))) PPC_WEAK_FUNC(sub_8265589C);
PPC_FUNC_IMPL(__imp__sub_8265589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826558A0"))) PPC_WEAK_FUNC(sub_826558A0);
PPC_FUNC_IMPL(__imp__sub_826558A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826558B8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r8.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r9.u32);
	// bdnz 0x826558b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826558B8;
}

__attribute__((alias("__imp__sub_826558C8"))) PPC_WEAK_FUNC(sub_826558C8);
PPC_FUNC_IMPL(__imp__sub_826558C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826558CC"))) PPC_WEAK_FUNC(sub_826558CC);
PPC_FUNC_IMPL(__imp__sub_826558CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826558D0"))) PPC_WEAK_FUNC(sub_826558D0);
PPC_FUNC_IMPL(__imp__sub_826558D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r12,r1,-160
	r12.s64 = ctx.r1.s64 + -160;
	// bl 0x828ebcb4
	// stwu r1,-1712(r1)
	ea = -1712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,3792
	r11.s64 = r11.s64 + 3792;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// ble cr6,0x82656508
	if (!cr6.gt) goto loc_82656508;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r9,7632
	ctx.r9.s64 = ctx.r9.s64 + 7632;
	// addi r8,r8,7536
	ctx.r8.s64 = ctx.r8.s64 + 7536;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r28,r3,64
	r28.s64 = ctx.r3.s64 + 64;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r24,r3,32
	r24.s64 = ctx.r3.s64 + 32;
	// addi r23,r3,48
	r23.s64 = ctx.r3.s64 + 48;
	// li r17,0
	r17.s64 = 0;
	// li r14,4
	r14.s64 = 4;
	// li r15,8
	r15.s64 = 8;
	// li r16,12
	r16.s64 = 12;
	// addi r27,r11,-12816
	r27.s64 = r11.s64 + -12816;
	// addi r25,r10,-11760
	r25.s64 = ctx.r10.s64 + -11760;
	// b 0x82655960
	goto loc_82655960;
loc_8265595C:
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82655960:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r20,r31,16
	r20.s64 = r31.s64 + 16;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82656224
	if (cr6.eq) goto loc_82656224;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r21,5,0,26
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r18,0(r3)
	r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r11,127
	ctx.r7.s64 = r11.s64 + 127;
	// rlwinm r11,r7,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// add r6,r11,r18
	ctx.r6.u64 = r11.u64 + r18.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r11,r21,2,0,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r31,240
	r22.s64 = r31.s64 + 240;
	// addi r3,r11,127
	ctx.r3.s64 = r11.s64 + 127;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r19,0(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r3,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r11,r11,r19
	r11.u64 = r11.u64 + r19.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// bl 0x82bfbd88
	sub_82BFBD88(ctx, base);
	// addi r11,r31,320
	r11.s64 = r31.s64 + 320;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r19
	r26.u64 = r19.u64;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lvx128 v125,r0,r11
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor128 v124,v125,v125
	_mm_store_si128((__m128i*)v124.u8, _mm_load_si128((__m128i*)v125.u8));
	// stvx128 v125,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,0(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// stvx128 v124,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// ld r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, r11.u64);
	// std r10,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r10.u64);
	// std r9,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r9.u64);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lvx128 v126,r0,r10
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82655ee4
	if (cr6.eq) goto loc_82655EE4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// vspltisw128 v123,0
	_mm_store_si128((__m128i*)v123.u32, _mm_set1_epi32(int(0x0)));
	// addi r31,r18,-1
	r31.s64 = r18.s64 + -1;
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// vspltw128 v121,v0,0
	_mm_store_si128((__m128i*)v121.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v122,v121,0
	_mm_store_si128((__m128i*)v122.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v121.u32), 0xFF));
loc_82655A7C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// lwz r8,496(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// lwz r10,768(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r11,r1,880
	r11.s64 = ctx.r1.s64 + 880;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,896
	ctx.r9.s64 = ctx.r1.s64 + 896;
	// vsubfp128 v0,v0,v122
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v122.f32)));
	// lvx128 v4,r0,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// vsubfp v11,v4,v8
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v3,r0,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lvx128 v1,r0,r7
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r11,128
	r11.s64 = 128;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lvx128 v7,r0,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r3
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r8,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v5,v11,v121
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v121.f32)));
	// vmaddfp128 v0,v122,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v122.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor v30,v0,v0
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw v29,v30,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0xFF));
	// vspltw v11,v30,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0xAA));
	// vspltw v9,v30,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x55));
	// vmulfp128 v0,v3,v29
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v29.f32)));
	// vmaddfp v0,v12,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v0,v2
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)));
	// vspltw v28,v0,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v12,v1,v28
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v28.f32)));
	// vmaddfp v12,v7,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v6,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v27,v12,v31
	_mm_store_ps(v27.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v31.f32)));
	// vminfp v7,v30,v27
	_mm_store_ps(ctx.v7.f32, _mm_min_ps(_mm_load_ps(v30.f32), _mm_load_ps(v27.f32)));
	// vmaxfp v6,v30,v27
	_mm_store_ps(ctx.v6.f32, _mm_max_ps(_mm_load_ps(v30.f32), _mm_load_ps(v27.f32)));
	// ble cr6,0x82655bd8
	if (!cr6.gt) goto loc_82655BD8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// vsubfp v3,v0,v13
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r11,r1,528
	r11.s64 = ctx.r1.s64 + 528;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,-16
	ctx.r9.s64 = -16;
loc_82655B90:
	// lvx128 v2,r11,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltw v0,v2,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x0));
	// lvx128 v1,r11,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v3,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r11,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vspltw v31,v0,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v9,v0,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v1,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v31.f32)));
	// vmaddfp v0,v12,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v30,v0,v2
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)));
	// vminfp v7,v7,v30
	_mm_store_ps(ctx.v7.f32, _mm_min_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v30.f32)));
	// vmaxfp v6,v6,v30
	_mm_store_ps(ctx.v6.f32, _mm_max_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v30.f32)));
	// bdnz 0x82655b90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82655B90;
loc_82655BD8:
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v31,v5,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vaddfp v12,v8,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r25
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r27
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r9,144
	ctx.r9.s64 = 144;
	// vor128 v9,v123,v123
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v123.u8));
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// vminfp128 v125,v125,v8
	_mm_store_ps(v125.f32, _mm_min_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// vmaxfp128 v124,v124,v4
	_mm_store_ps(v124.f32, _mm_max_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r8,r9
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v3,v29,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v29.u32), 0x0));
	// vmulfp128 v28,v12,v11
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// vrsqrtefp v0,v31
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v31.f32))));
	// vmulfp128 v10,v31,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v1,v123,v31
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(v123.f32), _mm_load_ps(v31.f32)));
	// vminfp v27,v28,v30
	_mm_store_ps(v27.f32, _mm_min_ps(_mm_load_ps(v28.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaxfp v26,v27,v2
	_mm_store_ps(v26.f32, _mm_max_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v2.f32)));
	// vnmsubfp v2,v10,v11,v13
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v26,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// vmaddfp v0,v0,v2,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v0.f32)));
	// lfs f11,200(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f9.u64);
	// fctiwz f8,f0
	ctx.f8.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vmulfp128 v12,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fctiwz f7,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1(r31)
	PPC_STORE_U32(r31.u32 + 1, r11.u32);
	// vnmsubfp v13,v10,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stw r4,9(r31)
	PPC_STORE_U32(r31.u32 + 9, ctx.r4.u32);
	// stw r5,5(r31)
	PPC_STORE_U32(r31.u32 + 5, ctx.r5.u32);
	// stw r3,13(r31)
	PPC_STORE_U32(r31.u32 + 13, ctx.r3.u32);
	// lvx128 v24,r0,r23
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r0,r7
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddfp v22,v23,v24
	_mm_store_ps(v22.f32, _mm_add_ps(_mm_load_ps(v23.f32), _mm_load_ps(v24.f32)));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v25,r0,r28
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v21,v22,v25
	_mm_store_ps(v21.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v25.f32)));
	// vsel v13,v0,v9,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vminfp v20,v21,v30
	_mm_store_ps(v20.f32, _mm_min_ps(_mm_load_ps(v21.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v19,v31,v13
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v0,v19,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v19.u32), 0xFF));
	// vmaddfp v13,v0,v3,v5
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v5.f32)));
	// vminfp v18,v0,v13
	_mm_store_ps(v18.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vmaxfp v17,v20,v0
	_mm_store_ps(v17.f32, _mm_max_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v17,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v16,v7,v18
	_mm_store_ps(v16.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v18.f32)));
	// lfs f6,184(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// vaddfp v15,v6,v18
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v15.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v18.f32)));
	// lfs f5,188(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f4.f64 = double(temp.f32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// vminfp v14,v8,v16
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v14.f32, _mm_min_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v16.f32)));
	// stfd f3,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// vmaxfp128 v63,v4,v15
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v63.f32, _mm_max_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v15.f32)));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f6
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f5
	ctx.f1.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// vminfp128 v126,v126,v14
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v126.f32, _mm_min_ps(_mm_load_ps(v126.f32), _mm_load_ps(v14.f32)));
	// vmaxfp128 v127,v127,v63
	_mm_store_ps(v127.f32, _mm_max_ps(_mm_load_ps(v127.f32), _mm_load_ps(v63.f32)));
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	f0.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r7,21(r31)
	PPC_STORE_U32(r31.u32 + 21, ctx.r7.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,17(r31)
	PPC_STORE_U32(r31.u32 + 17, ctx.r10.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stw r8,29(r31)
	PPC_STORE_U32(r31.u32 + 29, ctx.r8.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,25(r31)
	PPC_STORE_U32(r31.u32 + 25, ctx.r9.u32);
	// lvx128 v61,r0,r28
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r0,r25
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// mr r11,r17
	r11.u64 = r17.u64;
	// lvx128 v60,r0,r23
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v59,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v59.f32, _mm_add_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vmulfp128 v56,v59,v61
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v61.f32)));
	// lvx128 v62,r0,r24
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v58,v14,v62
	_mm_store_ps(v58.f32, _mm_add_ps(_mm_load_ps(v14.f32), _mm_load_ps(v62.f32)));
	// lwz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1);
	// vminfp128 v54,v56,v57
	_mm_store_ps(v54.f32, _mm_min_ps(_mm_load_ps(v56.f32), _mm_load_ps(v57.f32)));
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// vmulfp128 v55,v58,v61
	_mm_store_ps(v55.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v61.f32)));
	// lwz r15,9(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 9);
	// lwz r14,5(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 5);
	// vmaxfp128 v52,v54,v0
	_mm_store_ps(v52.f32, _mm_max_ps(_mm_load_ps(v54.f32), _mm_load_ps(ctx.v0.f32)));
	// vminfp128 v53,v55,v57
	_mm_store_ps(v53.f32, _mm_min_ps(_mm_load_ps(v55.f32), _mm_load_ps(v57.f32)));
	// stvx128 v52,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,280(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// vmaxfp128 v51,v53,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v51.f32, _mm_max_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f11,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v51,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f11
	ctx.f6.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// fctiwz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r3,r15
	ctx.r6.s64 = r15.s64 - ctx.r3.s64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r5,r5,r14
	ctx.r5.s64 = r14.s64 - ctx.r5.s64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// or r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 | ctx.r6.u64;
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// blt cr6,0x82655e4c
	if (cr6.lt) goto loc_82655E4C;
loc_82655E3C:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// bge cr6,0x82655e3c
	if (!cr6.lt) goto loc_82655E3C;
loc_82655E4C:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// blt cr6,0x82655e64
	if (cr6.lt) goto loc_82655E64;
loc_82655E54:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bge cr6,0x82655e54
	if (!cr6.lt) goto loc_82655E54;
loc_82655E64:
	// sraw r10,r4,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// sraw r5,r5,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// stb r10,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r10.u8);
	// sraw r4,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// stb r5,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r5.u8);
	// sraw r3,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r3.s64 = ctx.r9.s32 >> temp.u32;
	// stb r4,15(r31)
	PPC_STORE_U8(r31.u32 + 15, ctx.r4.u8);
	// sraw r9,r8,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// stb r3,29(r31)
	PPC_STORE_U8(r31.u32 + 29, ctx.r3.u8);
	// sraw r8,r7,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r8.s64 = ctx.r7.s32 >> temp.u32;
	// stb r9,30(r31)
	PPC_STORE_U8(r31.u32 + 30, ctx.r9.u8);
	// stb r8,31(r31)
	PPC_STORE_U8(r31.u32 + 31, ctx.r8.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stbu r30,32(r31)
	ea = 32 + r31.u32;
	PPC_STORE_U8(ea, r30.u8);
	r31.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82655a7c
	if (!cr6.eq) goto loc_82655A7C;
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// li r14,4
	r14.s64 = 4;
	// li r15,8
	r15.s64 = 8;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82655eec
	goto loc_82655EEC;
loc_82655EE4:
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_82655EEC:
	// subf r11,r19,r26
	r11.s64 = r26.s64 - r19.s64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// srawi r8,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r8.s64 = r11.s32 >> 2;
	// addi r11,r20,32
	r11.s64 = r20.s64 + 32;
	// sth r8,64(r20)
	PPC_STORE_U16(r20.u32 + 64, ctx.r8.u16);
	// lvx128 v12,r0,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r24
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v10,v125,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// vmulfp128 v9,v10,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vminfp v8,v9,v12
	_mm_store_ps(ctx.v8.f32, _mm_min_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v7,v8,v0
	_mm_store_ps(ctx.v7.f32, _mm_max_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,216(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r11
	PPC_STORE_U32(r11.u32, ctx.f8.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// li r12,4
	r12.s64 = 4;
	// stfiwx f12,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f12.u32);
	// lfs f0,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	f0.f64 = double(temp.f32);
	// li r12,8
	r12.s64 = 8;
	// stfiwx f7,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f7.u32);
	// fctiwz f10,f0
	ctx.f10.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// li r12,12
	r12.s64 = 12;
	// stfiwx f10,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f10.u32);
	// lvx128 v6,r0,r28
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r23
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v4,v124,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v3,v4,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)));
	// vminfp v2,v3,v12
	_mm_store_ps(ctx.v2.f32, _mm_min_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v1,v2,v0
	_mm_store_ps(ctx.v1.f32, _mm_max_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v1,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,168(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// fctiwz f0,f5
	f0.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f3.u32);
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// stfiwx f2,r10,r14
	PPC_STORE_U32(ctx.r10.u32 + r14.u32, ctx.f2.u32);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + r15.u32, f0.u32);
	// stfiwx f13,r10,r16
	PPC_STORE_U32(ctx.r10.u32 + r16.u32, ctx.f13.u32);
	// lwz r9,40(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 40);
	// lvx128 v27,r0,r28
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lwz r8,36(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// lvx128 v28,r0,r23
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lwz r7,48(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lvx128 v31,r0,r24
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v29,v126,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_load_ps(v126.f32), _mm_load_ps(v31.f32)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v26,v29,v27
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v27.f32)));
	// lvx128 v30,r0,r25
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v24,v127,v28
	_mm_store_ps(v24.f32, _mm_add_ps(_mm_load_ps(v127.f32), _mm_load_ps(v28.f32)));
	// lwz r10,32(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// vminfp v25,v26,v30
	_mm_store_ps(v25.f32, _mm_min_ps(_mm_load_ps(v26.f32), _mm_load_ps(v30.f32)));
	// vmaxfp v23,v25,v0
	_mm_store_ps(v23.f32, _mm_max_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v22,v24,v27
	_mm_store_ps(v22.f32, _mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v27.f32)));
	// stvx128 v23,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// vminfp v21,v22,v30
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v21.f32, _mm_min_ps(_mm_load_ps(v22.f32), _mm_load_ps(v30.f32)));
	// lfs f11,296(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// vmaxfp v20,v21,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v20.f32, _mm_max_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v0.f32)));
	// stfd f10,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f6,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stvx128 v20,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f2,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// lfs f4,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f4.f64 = double(temp.f32);
	// lwz r30,56(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - r31.s64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - r30.s64;
	// or r31,r5,r4
	r31.u64 = ctx.r5.u64 | ctx.r4.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// or r9,r31,r3
	ctx.r9.u64 = r31.u64 | ctx.r3.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// blt cr6,0x826560bc
	if (cr6.lt) goto loc_826560BC;
loc_826560AC:
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// bge cr6,0x826560ac
	if (!cr6.lt) goto loc_826560AC;
loc_826560BC:
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// blt cr6,0x826560d4
	if (cr6.lt) goto loc_826560D4;
loc_826560C4:
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// bge cr6,0x826560c4
	if (!cr6.lt) goto loc_826560C4;
loc_826560D4:
	// sraw r9,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
	// sraw r8,r7,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r8.s64 = ctx.r7.s32 >> temp.u32;
	// stb r9,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r9.u8);
	// sraw r7,r6,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r7.s64 = ctx.r6.s32 >> temp.u32;
	// stb r8,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r8.u8);
	// sraw r6,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r6.s64 = ctx.r5.s32 >> temp.u32;
	// stb r7,14(r11)
	PPC_STORE_U8(r11.u32 + 14, ctx.r7.u8);
	// sraw r5,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r5.s64 = ctx.r4.s32 >> temp.u32;
	// stb r6,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r6.u8);
	// sraw r4,r3,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// stb r5,29(r11)
	PPC_STORE_U8(r11.u32 + 29, ctx.r5.u8);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// stb r4,30(r11)
	PPC_STORE_U8(r11.u32 + 30, ctx.r4.u8);
	// beq cr6,0x8265620c
	if (cr6.eq) goto loc_8265620C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r21,3,0,28
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82656180
	if (!cr6.gt) goto loc_82656180;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82656160
	if (!cr6.gt) goto loc_82656160;
	// mtctr r21
	ctr.u64 = r21.u64;
	// addi r9,r18,-32
	ctx.r9.s64 = r18.s64 + -32;
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
loc_8265614C:
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzu r8,32(r9)
	ea = 32 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r8,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// bdnz 0x8265614c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265614C;
loc_82656160:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r21,-1
	ctx.r5.s64 = r21.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r17,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r17.u8);
	// lbz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82656520
	sub_82656520(ctx, base);
	// b 0x82656188
	goto loc_82656188;
loc_82656180:
	// bne cr6,0x82656188
	if (!cr6.eq) goto loc_82656188;
	// stw r17,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r17.u32);
loc_82656188:
	// lwz r7,68(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 68);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// lwz r11,72(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 72);
	// ble cr6,0x82656204
	if (!cr6.gt) goto loc_82656204;
	// addi r6,r31,-4
	ctx.r6.s64 = r31.s64 + -4;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_826561A4:
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r11,2
	r11.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// add r9,r10,r18
	ctx.r9.u64 = ctx.r10.u64 + r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r11,r9,-4
	r11.s64 = ctx.r9.s64 + -4;
loc_826561C8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826561c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826561C8;
	// lwzu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r19
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r19.u32);
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bne 0x826561a4
	if (!cr0.eq) goto loc_826561A4;
loc_82656204:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8265620C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r19.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r18,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r18.u32);
	// b 0x826564f0
	goto loc_826564F0;
loc_82656224:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r31,r31,240
	r31.s64 = r31.s64 + 240;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// lvx128 v8,r0,r24
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r28
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r25
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r20,32
	r11.s64 = r20.s64 + 32;
	// vaddfp v7,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 + f31.f64));
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r29,r1,384
	r29.s64 = ctx.r1.s64 + 384;
	// stfs f11,384(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f12,368(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lvx128 v5,r31,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r31.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vxor128 v120,v120,v120
	_mm_store_si128((__m128i*)v120.u8, _mm_setzero_si128());
	// lvx128 v4,r31,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r31.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vsubfp v3,v4,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// vmulfp128 v1,v7,v6
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vminfp128 v28,v120,v3
	_mm_store_ps(v28.f32, _mm_min_ps(_mm_load_ps(v120.f32), _mm_load_ps(ctx.v3.f32)));
	// vmaxfp128 v27,v120,v3
	_mm_store_ps(v27.f32, _mm_max_ps(_mm_load_ps(v120.f32), _mm_load_ps(ctx.v3.f32)));
	// vminfp v24,v1,v9
	_mm_store_ps(v24.f32, _mm_min_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v31,r0,r3
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v31,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xFF));
	// vspltw v13,v2,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// vsubfp v26,v0,v12
	_mm_store_ps(v26.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v30,v5,v13
	_mm_store_ps(v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v29,v5,v13
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v25,v10,v12
	_mm_store_ps(v25.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp v21,v24,v11
	_mm_store_ps(v21.f32, _mm_max_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaxfp v23,v26,v30
	_mm_store_ps(v23.f32, _mm_max_ps(_mm_load_ps(v26.f32), _mm_load_ps(v30.f32)));
	// vminfp v22,v25,v29
	_mm_store_ps(v22.f32, _mm_min_ps(_mm_load_ps(v25.f32), _mm_load_ps(v29.f32)));
	// stvx128 v21,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,152(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f5,0,r11
	PPC_STORE_U32(r11.u32, ctx.f5.u32);
	// li r12,4
	r12.s64 = 4;
	// stfiwx f8,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f8.u32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// li r12,8
	r12.s64 = 8;
	// stfiwx f6,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f6.u32);
	// vminfp v20,v23,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v20.f32, _mm_min_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v0.f32)));
	// li r12,12
	r12.s64 = 12;
	// stfiwx f3,r11,r12
	ctx.fpscr.disableFlushModeUnconditional();
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f3.u32);
	// vmaxfp v19,v22,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v19.f32, _mm_max_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v18,v20,v28
	_mm_store_ps(v18.f32, _mm_add_ps(_mm_load_ps(v20.f32), _mm_load_ps(v28.f32)));
	// vaddfp v17,v19,v27
	_mm_store_ps(v17.f32, _mm_add_ps(_mm_load_ps(v19.f32), _mm_load_ps(v27.f32)));
	// lvx128 v16,r0,r23
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r0,r4
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddfp v14,v15,v16
	_mm_store_ps(v14.f32, _mm_add_ps(_mm_load_ps(v15.f32), _mm_load_ps(v16.f32)));
	// lvx128 v63,r0,r28
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// vmulfp128 v62,v14,v63
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(v63.f32)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vminfp128 v61,v62,v9
	_mm_store_ps(v61.f32, _mm_min_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaxfp128 v60,v61,v0
	_mm_store_ps(v60.f32, _mm_max_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v60,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lfs f13,232(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f0,f2
	f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// lfs f1,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// fctiwz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f12,r10,r14
	PPC_STORE_U32(ctx.r10.u32 + r14.u32, ctx.f12.u32);
	// lfs f10,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfiwx f11,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + r15.u32, ctx.f11.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r10,r16
	PPC_STORE_U32(ctx.r10.u32 + r16.u32, ctx.f9.u32);
	// lwz r6,48(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// lvx128 v57,r0,r24
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lwz r10,40(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 40);
	// lvx128 v52,r0,r25
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lwz r7,36(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lwz r8,52(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lvx128 v59,r0,r23
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lwz r3,56(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// vaddfp128 v58,v17,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_add_ps(_mm_load_ps(v17.f32), _mm_load_ps(v59.f32)));
	// lvx128 v55,r0,r28
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lwz r31,32(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// vmulfp128 v54,v58,v55
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v55.f32)));
	// vminfp128 v51,v54,v52
	_mm_store_ps(v51.f32, _mm_min_ps(_mm_load_ps(v54.f32), _mm_load_ps(v52.f32)));
	// vaddfp128 v56,v18,v57
	_mm_store_ps(v56.f32, _mm_add_ps(_mm_load_ps(v18.f32), _mm_load_ps(v57.f32)));
	// vmaxfp128 v49,v51,v0
	_mm_store_ps(v49.f32, _mm_max_ps(_mm_load_ps(v51.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v53,v56,v55
	_mm_store_ps(v53.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v55.f32)));
	// stvx128 v49,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	f0.f64 = double(temp.f32);
	// lfs f4,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// vminfp128 v50,v53,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v50.f32, _mm_min_ps(_mm_load_ps(v53.f32), _mm_load_ps(v52.f32)));
	// lfs f6,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// vmaxfp128 v48,v50,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v48.f32, _mm_max_ps(_mm_load_ps(v50.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f3,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r3,r3,r29
	ctx.r3.s64 = r29.s64 - ctx.r3.s64;
	// stvx128 v48,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lfs f7,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f11,f7
	ctx.f11.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// lfs f2,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// lfs f8,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f12,f8
	ctx.f12.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - r29.s64;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r8,r26,r10
	ctx.r8.s64 = ctx.r10.s64 - r26.s64;
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 | ctx.r3.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// subf r6,r6,r31
	ctx.r6.s64 = r31.s64 - ctx.r6.s64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// blt cr6,0x826564a4
	if (cr6.lt) goto loc_826564A4;
loc_82656494:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// bge cr6,0x82656494
	if (!cr6.lt) goto loc_82656494;
loc_826564A4:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// blt cr6,0x826564bc
	if (cr6.lt) goto loc_826564BC;
loc_826564AC:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bge cr6,0x826564ac
	if (!cr6.lt) goto loc_826564AC;
loc_826564BC:
	// sraw r10,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// stb r9,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r9.u8);
	// sraw r7,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// stb r10,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r10.u8);
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// stb r7,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r7.u8);
	// sraw r5,r5,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// stb r6,14(r11)
	PPC_STORE_U8(r11.u32 + 14, ctx.r6.u8);
	// sraw r4,r4,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r4.s64 = ctx.r4.s32 >> temp.u32;
	// stb r5,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r5.u8);
	// sraw r3,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// stb r4,29(r11)
	PPC_STORE_U8(r11.u32 + 29, ctx.r4.u8);
	// stb r3,30(r11)
	PPC_STORE_U8(r11.u32 + 30, ctx.r3.u8);
loc_826564F0:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne 0x8265595c
	if (!cr0.eq) goto loc_8265595C;
loc_82656508:
	// addi r1,r1,1712
	ctx.r1.s64 = ctx.r1.s64 + 1712;
	// addi r12,r1,-160
	r12.s64 = ctx.r1.s64 + -160;
	// bl 0x828ebf4c
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_82656518"))) PPC_WEAK_FUNC(sub_82656518);
PPC_FUNC_IMPL(__imp__sub_82656518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8265651C"))) PPC_WEAK_FUNC(sub_8265651C);
PPC_FUNC_IMPL(__imp__sub_8265651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656520"))) PPC_WEAK_FUNC(sub_82656520);
PPC_FUNC_IMPL(__imp__sub_82656520) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82656538:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + r30.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82656558:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265657c
	if (!cr6.lt) goto loc_8265657C;
loc_8265656C:
	// lwzu r10,8(r11)
	ea = 8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8265656c
	if (cr6.lt) goto loc_8265656C;
loc_8265657C:
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826565a0
	if (!cr6.lt) goto loc_826565A0;
loc_82656590:
	// lwzu r10,-8(r11)
	ea = -8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82656590
	if (cr6.lt) goto loc_82656590;
loc_826565A0:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x826565e4
	if (cr6.lt) goto loc_826565E4;
	// beq cr6,0x826565d4
	if (cr6.eq) goto loc_826565D4;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
loc_826565D4:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x82656558
	if (!cr6.gt) goto loc_82656558;
loc_826565E4:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x826565f8
	if (!cr6.lt) goto loc_826565F8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82656520
	sub_82656520(ctx, base);
loc_826565F8:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x82656608
	if (!cr6.lt) goto loc_82656608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82656538
	goto loc_82656538;
loc_82656608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8265660C"))) PPC_WEAK_FUNC(sub_8265660C);
PPC_FUNC_IMPL(__imp__sub_8265660C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82656610"))) PPC_WEAK_FUNC(sub_82656610);
PPC_FUNC_IMPL(__imp__sub_82656610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656614"))) PPC_WEAK_FUNC(sub_82656614);
PPC_FUNC_IMPL(__imp__sub_82656614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656618"))) PPC_WEAK_FUNC(sub_82656618);
PPC_FUNC_IMPL(__imp__sub_82656618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265661C"))) PPC_WEAK_FUNC(sub_8265661C);
PPC_FUNC_IMPL(__imp__sub_8265661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656620"))) PPC_WEAK_FUNC(sub_82656620);
PPC_FUNC_IMPL(__imp__sub_82656620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656624"))) PPC_WEAK_FUNC(sub_82656624);
PPC_FUNC_IMPL(__imp__sub_82656624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656628"))) PPC_WEAK_FUNC(sub_82656628);
PPC_FUNC_IMPL(__imp__sub_82656628) {
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
	// bl 0x826556d8
	sub_826556D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,10932
	ctx.r9.s64 = r11.s64 + 10932;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82656668"))) PPC_WEAK_FUNC(sub_82656668);
PPC_FUNC_IMPL(__imp__sub_82656668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265666C"))) PPC_WEAK_FUNC(sub_8265666C);
PPC_FUNC_IMPL(__imp__sub_8265666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656670"))) PPC_WEAK_FUNC(sub_82656670);
PPC_FUNC_IMPL(__imp__sub_82656670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// lvx128 v13,r11,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r30,64
	r30.s64 = 64;
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,144
	r31.s64 = 144;
	// lvx128 v12,r11,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r4,208
	ctx.r7.s64 = ctx.r4.s64 + 208;
	// lvx128 v6,r9,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32 + r30.u32) & ~0xF), VectorMaskL));
	// addi r9,r4,224
	ctx.r9.s64 = ctx.r4.s64 + 224;
	// stvx128 v6,r8,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r31
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v5,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f13,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f12,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lbz r11,188(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// stb r11,188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 188, r11.u8);
	// lbz r10,189(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// stb r10,189(r4)
	PPC_STORE_U8(ctx.r4.u32 + 189, ctx.r10.u8);
	// lbz r8,190(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// stb r8,190(r4)
	PPC_STORE_U8(ctx.r4.u32 + 190, ctx.r8.u8);
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vxor v3,v4,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_setzero_si128());
	// stvx128 v3,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v1,v2,v2
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_setzero_si128());
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82656744"))) PPC_WEAK_FUNC(sub_82656744);
PPC_FUNC_IMPL(__imp__sub_82656744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656748"))) PPC_WEAK_FUNC(sub_82656748);
PPC_FUNC_IMPL(__imp__sub_82656748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f12,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f0,7832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,40(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656798"))) PPC_WEAK_FUNC(sub_82656798);
PPC_FUNC_IMPL(__imp__sub_82656798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f12,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f0,7832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,40(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826567E8"))) PPC_WEAK_FUNC(sub_826567E8);
PPC_FUNC_IMPL(__imp__sub_826567E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f12,f13
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f13,f8,f9,f10
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82656820
	if (!cr6.gt) goto loc_82656820;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82656820:
	// stfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656830"))) PPC_WEAK_FUNC(sub_82656830);
PPC_FUNC_IMPL(__imp__sub_82656830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f8,196(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f8,200(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265685C"))) PPC_WEAK_FUNC(sub_8265685C);
PPC_FUNC_IMPL(__imp__sub_8265685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656860"))) PPC_WEAK_FUNC(sub_82656860);
PPC_FUNC_IMPL(__imp__sub_82656860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656894"))) PPC_WEAK_FUNC(sub_82656894);
PPC_FUNC_IMPL(__imp__sub_82656894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656898"))) PPC_WEAK_FUNC(sub_82656898);
PPC_FUNC_IMPL(__imp__sub_82656898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826568CC"))) PPC_WEAK_FUNC(sub_826568CC);
PPC_FUNC_IMPL(__imp__sub_826568CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826568D0"))) PPC_WEAK_FUNC(sub_826568D0);
PPC_FUNC_IMPL(__imp__sub_826568D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,192
	r11.s64 = ctx.r3.s64 + 192;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r3,224
	ctx.r9.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r3,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v7,v8,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v11,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v11,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v4,v8,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// vmulfp128 v3,v7,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v4,v5
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v0,v2,v3
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656938"))) PPC_WEAK_FUNC(sub_82656938);
PPC_FUNC_IMPL(__imp__sub_82656938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656958"))) PPC_WEAK_FUNC(sub_82656958);
PPC_FUNC_IMPL(__imp__sub_82656958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v9,r3,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v9,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656990"))) PPC_WEAK_FUNC(sub_82656990);
PPC_FUNC_IMPL(__imp__sub_82656990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826569E0"))) PPC_WEAK_FUNC(sub_826569E0);
PPC_FUNC_IMPL(__imp__sub_826569E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826569E4"))) PPC_WEAK_FUNC(sub_826569E4);
PPC_FUNC_IMPL(__imp__sub_826569E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826569E8"))) PPC_WEAK_FUNC(sub_826569E8);
PPC_FUNC_IMPL(__imp__sub_826569E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82656A34"))) PPC_WEAK_FUNC(sub_82656A34);
PPC_FUNC_IMPL(__imp__sub_82656A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656A38"))) PPC_WEAK_FUNC(sub_82656A38);
PPC_FUNC_IMPL(__imp__sub_82656A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,96
	r11.s64 = 96;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,208
	ctx.r10.s64 = 208;
	// vpermwi128 v12,v13,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// li r9,224
	ctx.r9.s64 = 224;
	// vpermwi128 v11,v13,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lvx128 v10,r3,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r3,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r3,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v5,v9,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v4,v9,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vmulfp128 v3,v12,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v2,v11,v4
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v7
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// vmsum3fp128 v30,v1,v1
	_mm_store_ps(v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vaddfp v29,v31,v6
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v6.f32)));
	// stvewx v29,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stvewx v30,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656AB8"))) PPC_WEAK_FUNC(sub_82656AB8);
PPC_FUNC_IMPL(__imp__sub_82656AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82656AD4"))) PPC_WEAK_FUNC(sub_82656AD4);
PPC_FUNC_IMPL(__imp__sub_82656AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656AD8"))) PPC_WEAK_FUNC(sub_82656AD8);
PPC_FUNC_IMPL(__imp__sub_82656AD8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826390e8
	sub_826390E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// li r8,192
	ctx.r8.s64 = 192;
	// addi r7,r10,11164
	ctx.r7.s64 = ctx.r10.s64 + 11164;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stb r6,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r6.u8);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82656B30"))) PPC_WEAK_FUNC(sub_82656B30);
PPC_FUNC_IMPL(__imp__sub_82656B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656B34"))) PPC_WEAK_FUNC(sub_82656B34);
PPC_FUNC_IMPL(__imp__sub_82656B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656B38"))) PPC_WEAK_FUNC(sub_82656B38);
PPC_FUNC_IMPL(__imp__sub_82656B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r9,192
	ctx.r9.s64 = 192;
	// lfs f0,7832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	f0.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r3,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// vmaxfp v11,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stvx128 v10,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stvx128 v10,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v10,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f8,40(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656BB4"))) PPC_WEAK_FUNC(sub_82656BB4);
PPC_FUNC_IMPL(__imp__sub_82656BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656BB8"))) PPC_WEAK_FUNC(sub_82656BB8);
PPC_FUNC_IMPL(__imp__sub_82656BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r9,192
	ctx.r9.s64 = 192;
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-4(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fdivs f7,f0,f11
	ctx.f7.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656C00"))) PPC_WEAK_FUNC(sub_82656C00);
PPC_FUNC_IMPL(__imp__sub_82656C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f12,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656C3C"))) PPC_WEAK_FUNC(sub_82656C3C);
PPC_FUNC_IMPL(__imp__sub_82656C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656C40"))) PPC_WEAK_FUNC(sub_82656C40);
PPC_FUNC_IMPL(__imp__sub_82656C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,192
	ctx.r10.s64 = 192;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f11,-4(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656C74"))) PPC_WEAK_FUNC(sub_82656C74);
PPC_FUNC_IMPL(__imp__sub_82656C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656C78"))) PPC_WEAK_FUNC(sub_82656C78);
PPC_FUNC_IMPL(__imp__sub_82656C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v8,r11,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v7,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vmulfp128 v6,v11,v10
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v5,v9,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262ad28
	sub_8262AD28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82656CF0"))) PPC_WEAK_FUNC(sub_82656CF0);
PPC_FUNC_IMPL(__imp__sub_82656CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656CF4"))) PPC_WEAK_FUNC(sub_82656CF4);
PPC_FUNC_IMPL(__imp__sub_82656CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656CF8"))) PPC_WEAK_FUNC(sub_82656CF8);
PPC_FUNC_IMPL(__imp__sub_82656CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,192
	ctx.r8.s64 = 192;
	// addi r7,r9,7680
	ctx.r7.s64 = ctx.r9.s64 + 7680;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lvx128 v12,r3,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// vmaxfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_max_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lfs f0,-25600(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x8262b230
	sub_8262B230(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82656D8C"))) PPC_WEAK_FUNC(sub_82656D8C);
PPC_FUNC_IMPL(__imp__sub_82656D8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656D90"))) PPC_WEAK_FUNC(sub_82656D90);
PPC_FUNC_IMPL(__imp__sub_82656D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v9,r3,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v9,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656DC8"))) PPC_WEAK_FUNC(sub_82656DC8);
PPC_FUNC_IMPL(__imp__sub_82656DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82656E18"))) PPC_WEAK_FUNC(sub_82656E18);
PPC_FUNC_IMPL(__imp__sub_82656E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656E1C"))) PPC_WEAK_FUNC(sub_82656E1C);
PPC_FUNC_IMPL(__imp__sub_82656E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656E20"))) PPC_WEAK_FUNC(sub_82656E20);
PPC_FUNC_IMPL(__imp__sub_82656E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82656E6C"))) PPC_WEAK_FUNC(sub_82656E6C);
PPC_FUNC_IMPL(__imp__sub_82656E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656E70"))) PPC_WEAK_FUNC(sub_82656E70);
PPC_FUNC_IMPL(__imp__sub_82656E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// li r31,96
	r31.s64 = 96;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r30,-32250
	r30.s64 = -2113536000;
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,7520
	r30.s64 = r30.s64 + 7520;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r11,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v10,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v13,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v5,v13,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v4,v10,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// lvx128 v3,r0,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v12,v9,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmulfp128 v1,v8,v6
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v31,v2,v2
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vmulfp128 v30,v4,v5
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vor v13,v7,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvx128 v29,r0,r8
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v28,v30,v1
	_mm_store_ps(v28.f32, _mm_sub_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v1.f32)));
	// vmsum3fp128 v27,v2,v28
	_mm_store_ps(v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v28.f32), 0xEF));
	// vmsum3fp128 v26,v7,v28
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v28.f32), 0xEF));
	// vmsum3fp128 v25,v9,v28
	_mm_store_ps(v25.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v28.f32), 0xEF));
	// vmrghw v24,v27,v26
	_mm_store_si128((__m128i*)v24.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v26.u32), _mm_load_si128((__m128i*)v27.u32)));
	// vmrghw v23,v25,v0
	_mm_store_si128((__m128i*)v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v25.u32)));
	// vmrghw v22,v24,v23
	_mm_store_si128((__m128i*)v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v23.u32), _mm_load_si128((__m128i*)v24.u32)));
	// vmulfp128 v21,v3,v22
	_mm_store_ps(v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v22.f32)));
	// vspltw v20,v21,0
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0xFF));
	// vspltw v10,v21,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0xAA));
	// vspltw v0,v21,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0x55));
	// vmulfp128 v11,v31,v20
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v20.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v19,v29,v0
	_mm_store_ps(v19.f32, _mm_add_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v19,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82656F48"))) PPC_WEAK_FUNC(sub_82656F48);
PPC_FUNC_IMPL(__imp__sub_82656F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656F4C"))) PPC_WEAK_FUNC(sub_82656F4C);
PPC_FUNC_IMPL(__imp__sub_82656F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656F50"))) PPC_WEAK_FUNC(sub_82656F50);
PPC_FUNC_IMPL(__imp__sub_82656F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,192
	ctx.r7.s64 = 192;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r10,7520
	ctx.r6.s64 = ctx.r10.s64 + 7520;
	// lvx128 v12,r11,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v12,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vor v7,v13,v13
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvx128 v6,r3,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v13,v10,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmrghw v4,v9,v0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v3,v11,v8
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v2,v3,v4
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmulfp128 v1,v6,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v2.f32)));
	// vspltw v31,v1,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vspltw v10,v1,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// vspltw v0,v1,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// vmulfp128 v11,v7,v31
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v31.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v30,v5,v0
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v30,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656FD0"))) PPC_WEAK_FUNC(sub_82656FD0);
PPC_FUNC_IMPL(__imp__sub_82656FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,208
	ctx.r9.s64 = 208;
	// vpermwi128 v12,v13,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// li r8,224
	ctx.r8.s64 = 224;
	// vpermwi128 v11,v13,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v10,r3,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// vsubfp v9,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r3,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r3,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,192
	ctx.r8.s64 = 192;
	// addi r9,r9,7520
	ctx.r9.s64 = ctx.r9.s64 + 7520;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r31,r1,-16
	r31.s64 = ctx.r1.s64 + -16;
	// vpermwi128 v5,v9,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v4,v9,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vmulfp128 v3,v5,v12
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v2,v4,v11
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v7
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// vaddfp v30,v31,v6
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v6.f32)));
	// stvewx v30,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lvx128 v28,r11,r10
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r11
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r3,r8
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r11,r4
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v23,v29,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vmsum3fp128 v25,v26,v1
	_mm_store_ps(v25.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vmrghw v21,v23,v0
	_mm_store_si128((__m128i*)v21.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v23.u32)));
	// vmsum3fp128 v24,v28,v1
	_mm_store_ps(v24.f32, _mm_dp_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vmrghw v22,v25,v24
	_mm_store_si128((__m128i*)v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v24.u32), _mm_load_si128((__m128i*)v25.u32)));
	// vmrghw v20,v22,v21
	_mm_store_si128((__m128i*)v20.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v21.u32), _mm_load_si128((__m128i*)v22.u32)));
	// vmulfp128 v19,v20,v27
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v27.f32)));
	// vmsum3fp128 v18,v20,v19
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v20.f32), _mm_load_ps(v19.f32), 0xEF));
	// stvewx v18,r0,r31
	ea = (r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v18.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,204(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82657098"))) PPC_WEAK_FUNC(sub_82657098);
PPC_FUNC_IMPL(__imp__sub_82657098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265709C"))) PPC_WEAK_FUNC(sub_8265709C);
PPC_FUNC_IMPL(__imp__sub_8265709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826570A0"))) PPC_WEAK_FUNC(sub_826570A0);
PPC_FUNC_IMPL(__imp__sub_826570A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826570E0"))) PPC_WEAK_FUNC(sub_826570E0);
PPC_FUNC_IMPL(__imp__sub_826570E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657120"))) PPC_WEAK_FUNC(sub_82657120);
PPC_FUNC_IMPL(__imp__sub_82657120) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f12,f13
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f13,f8,f9,f10
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82657158
	if (!cr6.gt) goto loc_82657158;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82657158:
	// stfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657168"))) PPC_WEAK_FUNC(sub_82657168);
PPC_FUNC_IMPL(__imp__sub_82657168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f8,196(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f8,200(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657194"))) PPC_WEAK_FUNC(sub_82657194);
PPC_FUNC_IMPL(__imp__sub_82657194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657198"))) PPC_WEAK_FUNC(sub_82657198);
PPC_FUNC_IMPL(__imp__sub_82657198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826571CC"))) PPC_WEAK_FUNC(sub_826571CC);
PPC_FUNC_IMPL(__imp__sub_826571CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826571D0"))) PPC_WEAK_FUNC(sub_826571D0);
PPC_FUNC_IMPL(__imp__sub_826571D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657204"))) PPC_WEAK_FUNC(sub_82657204);
PPC_FUNC_IMPL(__imp__sub_82657204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657208"))) PPC_WEAK_FUNC(sub_82657208);
PPC_FUNC_IMPL(__imp__sub_82657208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,192
	r11.s64 = ctx.r3.s64 + 192;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r3,224
	ctx.r9.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r3,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v7,v8,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v11,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v11,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v4,v8,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// vmulfp128 v3,v7,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v4,v5
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v0,v2,v3
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657270"))) PPC_WEAK_FUNC(sub_82657270);
PPC_FUNC_IMPL(__imp__sub_82657270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657290"))) PPC_WEAK_FUNC(sub_82657290);
PPC_FUNC_IMPL(__imp__sub_82657290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v9,r3,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v9,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826572C8"))) PPC_WEAK_FUNC(sub_826572C8);
PPC_FUNC_IMPL(__imp__sub_826572C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82657318"))) PPC_WEAK_FUNC(sub_82657318);
PPC_FUNC_IMPL(__imp__sub_82657318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265731C"))) PPC_WEAK_FUNC(sub_8265731C);
PPC_FUNC_IMPL(__imp__sub_8265731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657320"))) PPC_WEAK_FUNC(sub_82657320);
PPC_FUNC_IMPL(__imp__sub_82657320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8265736C"))) PPC_WEAK_FUNC(sub_8265736C);
PPC_FUNC_IMPL(__imp__sub_8265736C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657370"))) PPC_WEAK_FUNC(sub_82657370);
PPC_FUNC_IMPL(__imp__sub_82657370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,96
	r11.s64 = 96;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,208
	ctx.r10.s64 = 208;
	// vpermwi128 v12,v13,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// li r9,224
	ctx.r9.s64 = 224;
	// vpermwi128 v11,v13,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v10,r3,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r3,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r3,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v5,v9,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v4,v9,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vmulfp128 v3,v12,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v2,v11,v4
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v7
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// vaddfp v30,v31,v6
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v6.f32)));
	// stvewx v30,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826573D8"))) PPC_WEAK_FUNC(sub_826573D8);
PPC_FUNC_IMPL(__imp__sub_826573D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826573E0"))) PPC_WEAK_FUNC(sub_826573E0);
PPC_FUNC_IMPL(__imp__sub_826573E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826573FC"))) PPC_WEAK_FUNC(sub_826573FC);
PPC_FUNC_IMPL(__imp__sub_826573FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657400"))) PPC_WEAK_FUNC(sub_82657400);
PPC_FUNC_IMPL(__imp__sub_82657400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265741C"))) PPC_WEAK_FUNC(sub_8265741C);
PPC_FUNC_IMPL(__imp__sub_8265741C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657420"))) PPC_WEAK_FUNC(sub_82657420);
PPC_FUNC_IMPL(__imp__sub_82657420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657424"))) PPC_WEAK_FUNC(sub_82657424);
PPC_FUNC_IMPL(__imp__sub_82657424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657428"))) PPC_WEAK_FUNC(sub_82657428);
PPC_FUNC_IMPL(__imp__sub_82657428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265742C"))) PPC_WEAK_FUNC(sub_8265742C);
PPC_FUNC_IMPL(__imp__sub_8265742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657430"))) PPC_WEAK_FUNC(sub_82657430);
PPC_FUNC_IMPL(__imp__sub_82657430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657434"))) PPC_WEAK_FUNC(sub_82657434);
PPC_FUNC_IMPL(__imp__sub_82657434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657438"))) PPC_WEAK_FUNC(sub_82657438);
PPC_FUNC_IMPL(__imp__sub_82657438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657440"))) PPC_WEAK_FUNC(sub_82657440);
PPC_FUNC_IMPL(__imp__sub_82657440) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82657474
	if (cr6.eq) goto loc_82657474;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82657474:
	// stw r31,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r31.u32);
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

__attribute__((alias("__imp__sub_8265748C"))) PPC_WEAK_FUNC(sub_8265748C);
PPC_FUNC_IMPL(__imp__sub_8265748C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657490"))) PPC_WEAK_FUNC(sub_82657490);
PPC_FUNC_IMPL(__imp__sub_82657490) {
	PPC_FUNC_PROLOGUE();
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_82657494"))) PPC_WEAK_FUNC(sub_82657494);
PPC_FUNC_IMPL(__imp__sub_82657494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657498"))) PPC_WEAK_FUNC(sub_82657498);
PPC_FUNC_IMPL(__imp__sub_82657498) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
}

__attribute__((alias("__imp__sub_8265749C"))) PPC_WEAK_FUNC(sub_8265749C);
PPC_FUNC_IMPL(__imp__sub_8265749C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826574A0"))) PPC_WEAK_FUNC(sub_826574A0);
PPC_FUNC_IMPL(__imp__sub_826574A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r8,120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_826574B8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x826574d8
	if (cr6.eq) goto loc_826574D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x826574b8
	if (cr6.lt) goto loc_826574B8;
	// blr 
	return;
loc_826574D8:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826574E8"))) PPC_WEAK_FUNC(sub_826574E8);
PPC_FUNC_IMPL(__imp__sub_826574E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82657520
	if (!cr6.gt) goto loc_82657520;
	// lwz r6,120(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82657504:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82657530
	if (cr6.eq) goto loc_82657530;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82657504
	if (cr6.lt) goto loc_82657504;
loc_82657520:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82657530:
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// lwz r7,120(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// add r31,r6,r11
	r31.u64 = ctx.r6.u64 + r11.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// ldx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + r11.u32);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// ld r31,8(r31)
	r31.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// std r31,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, r31.u64);
	// ble cr6,0x8265759c
	if (!cr6.gt) goto loc_8265759C;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8265758C:
	// ldx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + r11.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8265758c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265758C;
loc_8265759C:
	// ld r11,-24(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_826575A8"))) PPC_WEAK_FUNC(sub_826575A8);
PPC_FUNC_IMPL(__imp__sub_826575A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826575AC"))) PPC_WEAK_FUNC(sub_826575AC);
PPC_FUNC_IMPL(__imp__sub_826575AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826575B0"))) PPC_WEAK_FUNC(sub_826575B0);
PPC_FUNC_IMPL(__imp__sub_826575B0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,14540
	ctx.r4.s64 = ctx.r10.s64 + 14540;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82657634
	if (!cr6.eq) goto loc_82657634;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r5,r9,14528
	ctx.r5.s64 = ctx.r9.s64 + 14528;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82657634:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82657680
	if (!cr6.eq) goto loc_82657680;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r5,r9,14516
	ctx.r5.s64 = ctx.r9.s64 + 14516;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82657680:
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826576c8
	if (cr6.eq) goto loc_826576C8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,14500
	r29.s64 = r11.s64 + 14500;
	// rotlwi r6,r10,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
loc_826576C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826576CC"))) PPC_WEAK_FUNC(sub_826576CC);
PPC_FUNC_IMPL(__imp__sub_826576CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826576D0"))) PPC_WEAK_FUNC(sub_826576D0);
PPC_FUNC_IMPL(__imp__sub_826576D0) {
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
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82657714
	if (!cr6.gt) goto loc_82657714;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
loc_826576F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82657760
	if (cr6.eq) goto loc_82657760;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x826576f8
	if (cr6.lt) goto loc_826576F8;
loc_82657714:
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82657740
	if (!cr6.eq) goto loc_82657740;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82657740:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
loc_82657760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82657764"))) PPC_WEAK_FUNC(sub_82657764);
PPC_FUNC_IMPL(__imp__sub_82657764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82657768"))) PPC_WEAK_FUNC(sub_82657768);
PPC_FUNC_IMPL(__imp__sub_82657768) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,11604
	ctx.r9.s64 = ctx.r10.s64 + 11604;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x826577c0
	if (cr6.eq) goto loc_826577C0;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// sth r11,64(r31)
	PPC_STORE_U16(r31.u32 + 64, r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,66(r31)
	PPC_STORE_U16(r31.u32 + 66, r11.u16);
	// subf r8,r10,r31
	ctx.r8.s64 = r31.s64 - ctx.r10.s64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stb r8,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r8.u8);
loc_826577C0:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r9,-47
	ctx.r9.s64 = -47;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r9,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r9.u32);
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// sth r11,112(r30)
	PPC_STORE_U16(r30.u32 + 112, r11.u16);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x826577f8
	if (cr6.eq) goto loc_826577F8;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_826577F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82657800"))) PPC_WEAK_FUNC(sub_82657800);
PPC_FUNC_IMPL(__imp__sub_82657800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82657804"))) PPC_WEAK_FUNC(sub_82657804);
PPC_FUNC_IMPL(__imp__sub_82657804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657808"))) PPC_WEAK_FUNC(sub_82657808);
PPC_FUNC_IMPL(__imp__sub_82657808) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11604
	ctx.r9.s64 = r11.s64 + 11604;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x826f84a8
	sub_826F84A8(ctx, base);
	// lis r27,-32768
	r27.s64 = -2147483648;
	// li r8,-47
	ctx.r8.s64 = -47;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// sth r30,112(r31)
	PPC_STORE_U16(r31.u32 + 112, r30.u16);
	// bl 0x82bf7638
	sub_82BF7638(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// subf r7,r29,r31
	ctx.r7.s64 = r31.s64 - r29.s64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r6,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r6.u32);
	// stb r7,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r7.u8);
	// beq cr6,0x826578a4
	if (cr6.eq) goto loc_826578A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_826578A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826578AC"))) PPC_WEAK_FUNC(sub_826578AC);
PPC_FUNC_IMPL(__imp__sub_826578AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826578B0"))) PPC_WEAK_FUNC(sub_826578B0);
PPC_FUNC_IMPL(__imp__sub_826578B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826578B4"))) PPC_WEAK_FUNC(sub_826578B4);
PPC_FUNC_IMPL(__imp__sub_826578B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826578B8"))) PPC_WEAK_FUNC(sub_826578B8);
PPC_FUNC_IMPL(__imp__sub_826578B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11416
	ctx.r3.s64 = r11.s64 + -11416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826578C4"))) PPC_WEAK_FUNC(sub_826578C4);
PPC_FUNC_IMPL(__imp__sub_826578C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826578C8"))) PPC_WEAK_FUNC(sub_826578C8);
PPC_FUNC_IMPL(__imp__sub_826578C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826578CC"))) PPC_WEAK_FUNC(sub_826578CC);
PPC_FUNC_IMPL(__imp__sub_826578CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826578D0"))) PPC_WEAK_FUNC(sub_826578D0);
PPC_FUNC_IMPL(__imp__sub_826578D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11368
	ctx.r3.s64 = r11.s64 + -11368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826578DC"))) PPC_WEAK_FUNC(sub_826578DC);
PPC_FUNC_IMPL(__imp__sub_826578DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826578E0"))) PPC_WEAK_FUNC(sub_826578E0);
PPC_FUNC_IMPL(__imp__sub_826578E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11320
	ctx.r3.s64 = r11.s64 + -11320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826578EC"))) PPC_WEAK_FUNC(sub_826578EC);
PPC_FUNC_IMPL(__imp__sub_826578EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826578F0"))) PPC_WEAK_FUNC(sub_826578F0);
PPC_FUNC_IMPL(__imp__sub_826578F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82657904"))) PPC_WEAK_FUNC(sub_82657904);
PPC_FUNC_IMPL(__imp__sub_82657904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657908"))) PPC_WEAK_FUNC(sub_82657908);
PPC_FUNC_IMPL(__imp__sub_82657908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11272
	ctx.r3.s64 = r11.s64 + -11272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657914"))) PPC_WEAK_FUNC(sub_82657914);
PPC_FUNC_IMPL(__imp__sub_82657914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657918"))) PPC_WEAK_FUNC(sub_82657918);
PPC_FUNC_IMPL(__imp__sub_82657918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265791C"))) PPC_WEAK_FUNC(sub_8265791C);
PPC_FUNC_IMPL(__imp__sub_8265791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657920"))) PPC_WEAK_FUNC(sub_82657920);
PPC_FUNC_IMPL(__imp__sub_82657920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_82657928"))) PPC_WEAK_FUNC(sub_82657928);
PPC_FUNC_IMPL(__imp__sub_82657928) {
	PPC_FUNC_PROLOGUE();
	// b 0x8263c1a0
	sub_8263C1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265792C"))) PPC_WEAK_FUNC(sub_8265792C);
PPC_FUNC_IMPL(__imp__sub_8265792C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657930"))) PPC_WEAK_FUNC(sub_82657930);
PPC_FUNC_IMPL(__imp__sub_82657930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263c1a0
	sub_8263C1A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82657958"))) PPC_WEAK_FUNC(sub_82657958);
PPC_FUNC_IMPL(__imp__sub_82657958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265795C"))) PPC_WEAK_FUNC(sub_8265795C);
PPC_FUNC_IMPL(__imp__sub_8265795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657960"))) PPC_WEAK_FUNC(sub_82657960);
PPC_FUNC_IMPL(__imp__sub_82657960) {
	PPC_FUNC_PROLOGUE();
	// b 0x8263c758
	sub_8263C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657964"))) PPC_WEAK_FUNC(sub_82657964);
PPC_FUNC_IMPL(__imp__sub_82657964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657968"))) PPC_WEAK_FUNC(sub_82657968);
PPC_FUNC_IMPL(__imp__sub_82657968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r11,65535
	ctx.r6.u64 = r11.u64 | 65535;
loc_82657980:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826579d4
	if (!cr6.eq) goto loc_826579D4;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x826579d4
	if (!cr6.lt) goto loc_826579D4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826579B0:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x826579b0
	if (cr6.lt) goto loc_826579B0;
loc_826579D4:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82657980
	if (!cr0.lt) goto loc_82657980;
}

__attribute__((alias("__imp__sub_826579E0"))) PPC_WEAK_FUNC(sub_826579E0);
PPC_FUNC_IMPL(__imp__sub_826579E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826579E4"))) PPC_WEAK_FUNC(sub_826579E4);
PPC_FUNC_IMPL(__imp__sub_826579E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826579E8"))) PPC_WEAK_FUNC(sub_826579E8);
PPC_FUNC_IMPL(__imp__sub_826579E8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,532(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82657ab4
	if (cr6.eq) goto loc_82657AB4;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82657ab4
	if (cr0.lt) goto loc_82657AB4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16856
	r24.s64 = ctx.r10.s64 + 16856;
loc_82657A24:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82657aa8
	if (cr6.eq) goto loc_82657AA8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657a64
	if (!cr6.lt) goto loc_82657A64;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657A64:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657aa8
	if (!cr6.lt) goto loc_82657AA8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657AA8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82657a24
	if (!cr0.lt) goto loc_82657A24;
loc_82657AB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82657AB8"))) PPC_WEAK_FUNC(sub_82657AB8);
PPC_FUNC_IMPL(__imp__sub_82657AB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82657ABC"))) PPC_WEAK_FUNC(sub_82657ABC);
PPC_FUNC_IMPL(__imp__sub_82657ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657AC0"))) PPC_WEAK_FUNC(sub_82657AC0);
PPC_FUNC_IMPL(__imp__sub_82657AC0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,532(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16868
	r24.s64 = ctx.r10.s64 + 16868;
	// beq cr6,0x82657b8c
	if (cr6.eq) goto loc_82657B8C;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82657b8c
	if (cr0.lt) goto loc_82657B8C;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82657AFC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82657b80
	if (cr6.eq) goto loc_82657B80;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657b3c
	if (!cr6.lt) goto loc_82657B3C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657B3C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657b80
	if (!cr6.lt) goto loc_82657B80;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657B80:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82657afc
	if (!cr0.lt) goto loc_82657AFC;
loc_82657B8C:
	// lhz r11,176(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 176);
	// addi r29,r26,172
	r29.s64 = r26.s64 + 172;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82657c1c
	if (cr6.eq) goto loc_82657C1C;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
loc_82657BA4:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657bcc
	if (!cr6.lt) goto loc_82657BCC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657BCC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657c10
	if (!cr6.lt) goto loc_82657C10;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657C10:
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82657ba4
	if (!cr6.eq) goto loc_82657BA4;
loc_82657C1C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r26,180
	r29.s64 = r26.s64 + 180;
	// bl 0x8263bae0
	sub_8263BAE0(ctx, base);
	// lwz r11,184(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82657cb4
	if (cr6.eq) goto loc_82657CB4;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
loc_82657C3C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657c64
	if (!cr6.lt) goto loc_82657C64;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657C64:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657ca8
	if (!cr6.lt) goto loc_82657CA8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657CA8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82657c3c
	if (!cr6.eq) goto loc_82657C3C;
loc_82657CB4:
	// lhz r11,524(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 524);
	// addi r29,r26,520
	r29.s64 = r26.s64 + 520;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82657d44
	if (cr6.eq) goto loc_82657D44;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
loc_82657CCC:
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657cf4
	if (!cr6.lt) goto loc_82657CF4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657CF4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657d38
	if (!cr6.lt) goto loc_82657D38;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657D38:
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82657ccc
	if (!cr6.eq) goto loc_82657CCC;
loc_82657D44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82657D48"))) PPC_WEAK_FUNC(sub_82657D48);
PPC_FUNC_IMPL(__imp__sub_82657D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82657D4C"))) PPC_WEAK_FUNC(sub_82657D4C);
PPC_FUNC_IMPL(__imp__sub_82657D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657D50"))) PPC_WEAK_FUNC(sub_82657D50);
PPC_FUNC_IMPL(__imp__sub_82657D50) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,532(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82657e1c
	if (cr6.eq) goto loc_82657E1C;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82657e1c
	if (cr0.lt) goto loc_82657E1C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16880
	r24.s64 = ctx.r10.s64 + 16880;
loc_82657D8C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82657e10
	if (cr6.eq) goto loc_82657E10;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657dcc
	if (!cr6.lt) goto loc_82657DCC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657DCC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657e10
	if (!cr6.lt) goto loc_82657E10;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657E10:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82657d8c
	if (!cr0.lt) goto loc_82657D8C;
loc_82657E1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82657E20"))) PPC_WEAK_FUNC(sub_82657E20);
PPC_FUNC_IMPL(__imp__sub_82657E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82657E24"))) PPC_WEAK_FUNC(sub_82657E24);
PPC_FUNC_IMPL(__imp__sub_82657E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657E28"))) PPC_WEAK_FUNC(sub_82657E28);
PPC_FUNC_IMPL(__imp__sub_82657E28) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,532(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82657ef4
	if (cr6.eq) goto loc_82657EF4;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82657ef4
	if (cr0.lt) goto loc_82657EF4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16896
	r24.s64 = ctx.r10.s64 + 16896;
loc_82657E64:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82657ee8
	if (cr6.eq) goto loc_82657EE8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657ea4
	if (!cr6.lt) goto loc_82657EA4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657EA4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657ee8
	if (!cr6.lt) goto loc_82657EE8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657EE8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82657e64
	if (!cr0.lt) goto loc_82657E64;
loc_82657EF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82657EF8"))) PPC_WEAK_FUNC(sub_82657EF8);
PPC_FUNC_IMPL(__imp__sub_82657EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82657EFC"))) PPC_WEAK_FUNC(sub_82657EFC);
PPC_FUNC_IMPL(__imp__sub_82657EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657F00"))) PPC_WEAK_FUNC(sub_82657F00);
PPC_FUNC_IMPL(__imp__sub_82657F00) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,532(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82657fcc
	if (cr6.eq) goto loc_82657FCC;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82657fcc
	if (cr0.lt) goto loc_82657FCC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16916
	r24.s64 = ctx.r10.s64 + 16916;
loc_82657F3C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82657fc0
	if (cr6.eq) goto loc_82657FC0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82657f7c
	if (!cr6.lt) goto loc_82657F7C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657F7C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82657fc0
	if (!cr6.lt) goto loc_82657FC0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82657FC0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82657f3c
	if (!cr0.lt) goto loc_82657F3C;
loc_82657FCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82657FD0"))) PPC_WEAK_FUNC(sub_82657FD0);
PPC_FUNC_IMPL(__imp__sub_82657FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82657FD4"))) PPC_WEAK_FUNC(sub_82657FD4);
PPC_FUNC_IMPL(__imp__sub_82657FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657FD8"))) PPC_WEAK_FUNC(sub_82657FD8);
PPC_FUNC_IMPL(__imp__sub_82657FD8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265809c
	if (cr0.lt) goto loc_8265809C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16928
	r24.s64 = ctx.r10.s64 + 16928;
loc_8265800C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658090
	if (cr6.eq) goto loc_82658090;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265804c
	if (!cr6.lt) goto loc_8265804C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265804C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658090
	if (!cr6.lt) goto loc_82658090;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658090:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265800c
	if (!cr0.lt) goto loc_8265800C;
loc_8265809C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826580A8"))) PPC_WEAK_FUNC(sub_826580A8);
PPC_FUNC_IMPL(__imp__sub_826580A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826580AC"))) PPC_WEAK_FUNC(sub_826580AC);
PPC_FUNC_IMPL(__imp__sub_826580AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826580B0"))) PPC_WEAK_FUNC(sub_826580B0);
PPC_FUNC_IMPL(__imp__sub_826580B0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658174
	if (cr0.lt) goto loc_82658174;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16936
	r24.s64 = ctx.r10.s64 + 16936;
loc_826580E4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658168
	if (cr6.eq) goto loc_82658168;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658124
	if (!cr6.lt) goto loc_82658124;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658124:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658168
	if (!cr6.lt) goto loc_82658168;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658168:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826580e4
	if (!cr0.lt) goto loc_826580E4;
loc_82658174:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658180"))) PPC_WEAK_FUNC(sub_82658180);
PPC_FUNC_IMPL(__imp__sub_82658180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658184"))) PPC_WEAK_FUNC(sub_82658184);
PPC_FUNC_IMPL(__imp__sub_82658184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658188"))) PPC_WEAK_FUNC(sub_82658188);
PPC_FUNC_IMPL(__imp__sub_82658188) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265824c
	if (cr0.lt) goto loc_8265824C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16948
	r24.s64 = ctx.r10.s64 + 16948;
loc_826581BC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658240
	if (cr6.eq) goto loc_82658240;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826581fc
	if (!cr6.lt) goto loc_826581FC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826581FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658240
	if (!cr6.lt) goto loc_82658240;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658240:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826581bc
	if (!cr0.lt) goto loc_826581BC;
loc_8265824C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658258"))) PPC_WEAK_FUNC(sub_82658258);
PPC_FUNC_IMPL(__imp__sub_82658258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265825C"))) PPC_WEAK_FUNC(sub_8265825C);
PPC_FUNC_IMPL(__imp__sub_8265825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658260"))) PPC_WEAK_FUNC(sub_82658260);
PPC_FUNC_IMPL(__imp__sub_82658260) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658328
	if (cr0.lt) goto loc_82658328;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16960
	r24.s64 = ctx.r10.s64 + 16960;
loc_82658298:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265831c
	if (cr6.eq) goto loc_8265831C;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826582d8
	if (!cr6.lt) goto loc_826582D8;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826582D8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265831c
	if (!cr6.lt) goto loc_8265831C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265831C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658298
	if (!cr0.lt) goto loc_82658298;
loc_82658328:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658334"))) PPC_WEAK_FUNC(sub_82658334);
PPC_FUNC_IMPL(__imp__sub_82658334) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658338"))) PPC_WEAK_FUNC(sub_82658338);
PPC_FUNC_IMPL(__imp__sub_82658338) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658400
	if (cr0.lt) goto loc_82658400;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16972
	r24.s64 = ctx.r10.s64 + 16972;
loc_82658370:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826583f4
	if (cr6.eq) goto loc_826583F4;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826583b0
	if (!cr6.lt) goto loc_826583B0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826583B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826583f4
	if (!cr6.lt) goto loc_826583F4;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826583F4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658370
	if (!cr0.lt) goto loc_82658370;
loc_82658400:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265840C"))) PPC_WEAK_FUNC(sub_8265840C);
PPC_FUNC_IMPL(__imp__sub_8265840C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658410"))) PPC_WEAK_FUNC(sub_82658410);
PPC_FUNC_IMPL(__imp__sub_82658410) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lhz r11,516(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826584d8
	if (cr0.lt) goto loc_826584D8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16984
	r24.s64 = ctx.r10.s64 + 16984;
loc_82658448:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826584cc
	if (cr6.eq) goto loc_826584CC;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658488
	if (!cr6.lt) goto loc_82658488;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658488:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826584cc
	if (!cr6.lt) goto loc_826584CC;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826584CC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658448
	if (!cr0.lt) goto loc_82658448;
loc_826584D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82657968
	sub_82657968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826584E4"))) PPC_WEAK_FUNC(sub_826584E4);
PPC_FUNC_IMPL(__imp__sub_826584E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826584E8"))) PPC_WEAK_FUNC(sub_826584E8);
PPC_FUNC_IMPL(__imp__sub_826584E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826584F8"))) PPC_WEAK_FUNC(sub_826584F8);
PPC_FUNC_IMPL(__imp__sub_826584F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32154
	r11.s64 = -2107244544;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-31512
	ctx.r10.s64 = r11.s64 + -31512;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82658508"))) PPC_WEAK_FUNC(sub_82658508);
PPC_FUNC_IMPL(__imp__sub_82658508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265850C"))) PPC_WEAK_FUNC(sub_8265850C);
PPC_FUNC_IMPL(__imp__sub_8265850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658510"))) PPC_WEAK_FUNC(sub_82658510);
PPC_FUNC_IMPL(__imp__sub_82658510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658514"))) PPC_WEAK_FUNC(sub_82658514);
PPC_FUNC_IMPL(__imp__sub_82658514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658518"))) PPC_WEAK_FUNC(sub_82658518);
PPC_FUNC_IMPL(__imp__sub_82658518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r11,9(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82658538"))) PPC_WEAK_FUNC(sub_82658538);
PPC_FUNC_IMPL(__imp__sub_82658538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265853C"))) PPC_WEAK_FUNC(sub_8265853C);
PPC_FUNC_IMPL(__imp__sub_8265853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658540"))) PPC_WEAK_FUNC(sub_82658540);
PPC_FUNC_IMPL(__imp__sub_82658540) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r31,2
	r31.s64 = 2;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82658578:
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	cr6.compare(f29.f64, f31.f64);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x826585c0
	if (!cr6.eq) goto loc_826585C0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x826585c0
	if (!cr6.eq) goto loc_826585C0;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a418
	sub_8262A418(ctx, base);
	// b 0x8265862c
	goto loc_8265862C;
loc_826585C0:
	// lwz r27,80(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8262add8
	sub_8262ADD8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(f0.f64 * f29.f64));
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8262ad28
	sub_8262AD28(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
loc_8265862C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x82658578
	if (!cr0.eq) goto loc_82658578;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82658654"))) PPC_WEAK_FUNC(sub_82658654);
PPC_FUNC_IMPL(__imp__sub_82658654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82658658"))) PPC_WEAK_FUNC(sub_82658658);
PPC_FUNC_IMPL(__imp__sub_82658658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r6,r10,7536
	ctx.r6.s64 = ctx.r10.s64 + 7536;
	// addi r5,r8,-11200
	ctx.r5.s64 = ctx.r8.s64 + -11200;
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v13,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r7,16
	r11.s64 = ctx.r7.s64 + 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// vsubfp v9,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v9,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v0,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v13,v0
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r5,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v7,v13,v0
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r5,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v6,v13,v0
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r5,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82658704"))) PPC_WEAK_FUNC(sub_82658704);
PPC_FUNC_IMPL(__imp__sub_82658704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658708"))) PPC_WEAK_FUNC(sub_82658708);
PPC_FUNC_IMPL(__imp__sub_82658708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r4,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmulfp128 v10,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v9,v13,v10
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v8,v0,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82658730"))) PPC_WEAK_FUNC(sub_82658730);
PPC_FUNC_IMPL(__imp__sub_82658730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658734"))) PPC_WEAK_FUNC(sub_82658734);
PPC_FUNC_IMPL(__imp__sub_82658734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658738"))) PPC_WEAK_FUNC(sub_82658738);
PPC_FUNC_IMPL(__imp__sub_82658738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r4,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmulfp128 v10,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v9,v13,v10
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v8,v0,v9
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82658760"))) PPC_WEAK_FUNC(sub_82658760);
PPC_FUNC_IMPL(__imp__sub_82658760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658764"))) PPC_WEAK_FUNC(sub_82658764);
PPC_FUNC_IMPL(__imp__sub_82658764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658768"))) PPC_WEAK_FUNC(sub_82658768);
PPC_FUNC_IMPL(__imp__sub_82658768) {
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
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x826587a0
	if (cr6.lt) goto loc_826587A0;
loc_8265878C:
	// lhz r4,18(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bge cr6,0x8265878c
	if (!cr6.lt) goto loc_8265878C;
loc_826587A0:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x826587ec
	if (cr6.eq) goto loc_826587EC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x826587ec
	if (cr6.eq) goto loc_826587EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82655230
	sub_82655230(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r8,r11
	ctx.r5.s64 = r11.s64 - ctx.r8.s64;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// subf r11,r6,r9
	r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826587EC:
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

__attribute__((alias("__imp__sub_82658800"))) PPC_WEAK_FUNC(sub_82658800);
PPC_FUNC_IMPL(__imp__sub_82658800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658804"))) PPC_WEAK_FUNC(sub_82658804);
PPC_FUNC_IMPL(__imp__sub_82658804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658808"))) PPC_WEAK_FUNC(sub_82658808);
PPC_FUNC_IMPL(__imp__sub_82658808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-23
	ctx.r10.s64 = ctx.r10.s64 + -23;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82658850
	if (cr6.eq) goto loc_82658850;
	// bdz 0x82658860
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82658860;
	// bdz 0x82658840
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82658840;
	// bdz 0x8265887c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8265887C;
	// bdz 0x82658898
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82658898;
	// b 0x826588a0
	goto loc_826588A0;
loc_82658840:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82658850:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82658860:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_8265887C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_82658898:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82658768
	sub_82658768(ctx, base);
	return;
loc_826588A0:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,208
	r11.s64 = r11.s64 + 208;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_826588B8"))) PPC_WEAK_FUNC(sub_826588B8);
PPC_FUNC_IMPL(__imp__sub_826588B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826588BC"))) PPC_WEAK_FUNC(sub_826588BC);
PPC_FUNC_IMPL(__imp__sub_826588BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826588C0"))) PPC_WEAK_FUNC(sub_826588C0);
PPC_FUNC_IMPL(__imp__sub_826588C0) {
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
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x8265890c
	if (cr6.lt) goto loc_8265890C;
loc_826588E8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658808
	sub_82658808(ctx, base);
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bge cr6,0x826588e8
	if (!cr6.lt) goto loc_826588E8;
loc_8265890C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82658914"))) PPC_WEAK_FUNC(sub_82658914);
PPC_FUNC_IMPL(__imp__sub_82658914) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82658918"))) PPC_WEAK_FUNC(sub_82658918);
PPC_FUNC_IMPL(__imp__sub_82658918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lwz r31,80(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lvx128 v4,r0,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v3,r0,r31
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lvx128 v2,r0,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// vspltw v1,v2,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// lvx128 v7,r31,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v3,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r31,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v0,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v31,r0,r3
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v2,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xAA));
	// vmulfp128 v9,v31,v1
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v1.f32)));
	// lvx128 v10,r3,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v2,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x55));
	// lvx128 v5,r3,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v8,v9
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v7,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v5,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v30,v4,v13
	_mm_store_ps(v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v29,v13,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v28,v13,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v27,v0,99
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v26,v0,135
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// stvx128 v30,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v24,v25,v0
	_mm_store_ps(v24.f32, _mm_sub_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v24,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r0,r10
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r0,r6
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r0,r11
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v20,v21,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0x9C));
	// vpermwi128 v19,v21,135
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0x78));
	// vmulfp128 v18,v29,v20
	_mm_store_ps(v18.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v20.f32)));
	// vpermwi128 v17,v23,135
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v23.u32), 0x78));
	// vpermwi128 v16,v23,99
	_mm_store_si128((__m128i*)v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v23.u32), 0x9C));
	// vmulfp128 v15,v28,v19
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v19.f32)));
	// vmulfp128 v14,v27,v17
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v17.f32)));
	// vmulfp128 v63,v26,v16
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v16.f32)));
	// vsubfp128 v62,v15,v18
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v15.f32), _mm_load_ps(v18.f32)));
	// vsubfp128 v61,v14,v63
	_mm_store_ps(v61.f32, _mm_sub_ps(_mm_load_ps(v14.f32), _mm_load_ps(v63.f32)));
	// vsubfp128 v60,v22,v62
	_mm_store_ps(v60.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(v62.f32)));
	// stvx128 v60,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v58,v59,v61
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v61.f32)));
	// stvx128 v58,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82658A04"))) PPC_WEAK_FUNC(sub_82658A04);
PPC_FUNC_IMPL(__imp__sub_82658A04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658A08"))) PPC_WEAK_FUNC(sub_82658A08);
PPC_FUNC_IMPL(__imp__sub_82658A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lwz r4,80(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v2,r0,r7
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r7,16
	r11.s64 = ctx.r7.s64 + 16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v5,r0,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v0,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v7,r4,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r4,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v10,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v5,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v0,v10,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// lvx128 v10,r3,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v4,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x9C));
	// lvx128 v5,r3,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v1,v4,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x78));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lvx128 v31,r0,r10
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v31,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v29,v31,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// vmaddfp v12,v10,v8,v9
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v7,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v5,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v28,v13,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v27,v13,99
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v24,v0,99
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v23,v0,135
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v26,v28,v3
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v25,v27,v1
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v22,v24,v30
	_mm_store_ps(v22.f32, _mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v21,v23,v29
	_mm_store_ps(v21.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v29.f32)));
	// vsubfp v20,v25,v26
	_mm_store_ps(v20.f32, _mm_sub_ps(_mm_load_ps(v25.f32), _mm_load_ps(v26.f32)));
	// vsubfp v19,v22,v21
	_mm_store_ps(v19.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(v21.f32)));
	// vaddfp v18,v2,v20
	_mm_store_ps(v18.f32, _mm_add_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v20.f32)));
	// stvx128 v18,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v17,r0,r9
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v16,v17,v19
	_mm_store_ps(v16.f32, _mm_add_ps(_mm_load_ps(v17.f32), _mm_load_ps(v19.f32)));
	// stvx128 v16,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82658AD0"))) PPC_WEAK_FUNC(sub_82658AD0);
PPC_FUNC_IMPL(__imp__sub_82658AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658AD4"))) PPC_WEAK_FUNC(sub_82658AD4);
PPC_FUNC_IMPL(__imp__sub_82658AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658AD8"))) PPC_WEAK_FUNC(sub_82658AD8);
PPC_FUNC_IMPL(__imp__sub_82658AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// addi r9,r10,-11200
	ctx.r9.s64 = ctx.r10.s64 + -11200;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r6,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r8,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82658B10"))) PPC_WEAK_FUNC(sub_82658B10);
PPC_FUNC_IMPL(__imp__sub_82658B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658B14"))) PPC_WEAK_FUNC(sub_82658B14);
PPC_FUNC_IMPL(__imp__sub_82658B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658B18"))) PPC_WEAK_FUNC(sub_82658B18);
PPC_FUNC_IMPL(__imp__sub_82658B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r11,65535
	ctx.r6.u64 = r11.u64 | 65535;
loc_82658B30:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82658b84
	if (!cr6.eq) goto loc_82658B84;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x82658b84
	if (!cr6.lt) goto loc_82658B84;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82658B60:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82658b60
	if (cr6.lt) goto loc_82658B60;
loc_82658B84:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82658b30
	if (!cr0.lt) goto loc_82658B30;
}

__attribute__((alias("__imp__sub_82658B90"))) PPC_WEAK_FUNC(sub_82658B90);
PPC_FUNC_IMPL(__imp__sub_82658B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

