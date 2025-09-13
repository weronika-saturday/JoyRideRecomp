#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8251FA2C"))) PPC_WEAK_FUNC(sub_8251FA2C);
PPC_FUNC_IMPL(__imp__sub_8251FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FA30"))) PPC_WEAK_FUNC(sub_8251FA30);
PPC_FUNC_IMPL(__imp__sub_8251FA30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r24,0
	r24.s64 = 0;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// lwz r8,24192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// bgt cr6,0x8251fb00
	if (cr6.gt) goto loc_8251FB00;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8251faa0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8251FAA0;
	// bdzf 4*cr6+eq,0x8251fabc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8251FABC;
	// bne cr6,0x8251fae4
	if (!cr6.eq) goto loc_8251FAE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,3
	r30.s64 = 3;
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// b 0x8251fb24
	goto loc_8251FB24;
loc_8251FAA0:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,3
	r30.s64 = 3;
	// lfd f13,27392(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 27392);
	// lfd f0,23280(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 23280);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// b 0x8251fb20
	goto loc_8251FB20;
loc_8251FABC:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,3
	r30.s64 = 3;
	// lfd f13,27392(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 27392);
	// lfd f12,16944(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16944);
	// lfd f0,23280(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 23280);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f12,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f12.u64);
	// b 0x8251fb1c
	goto loc_8251FB1C;
loc_8251FAE4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f13,27392(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 27392);
	// lfd f0,23280(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 23280);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// b 0x8251fb10
	goto loc_8251FB10;
loc_8251FB00:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
loc_8251FB10:
	// li r30,3
	r30.s64 = 3;
	// stfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
loc_8251FB1C:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
loc_8251FB20:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
loc_8251FB24:
	// stfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251fc88
	if (cr6.eq) goto loc_8251FC88;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r24
	r31.u64 = r24.u64;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,23268
	r25.s64 = r11.s64 + 23268;
	// addi r26,r10,23252
	r26.s64 = ctx.r10.s64 + 23252;
loc_8251FB50:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + r11.u64;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251fb6c
	if (cr6.lt) goto loc_8251FB6C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8251fb70
	goto loc_8251FB70;
loc_8251FB6C:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8251FB70:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8251fba0
	if (cr6.eq) goto loc_8251FBA0;
loc_8251FB84:
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
	// bne cr6,0x8251fb84
	if (!cr6.eq) goto loc_8251FB84;
loc_8251FBA0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,28
	ctx.r3.s64 = ctx.r6.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + r11.u64;
	// lwz r8,20(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8251fc00
	if (cr6.lt) goto loc_8251FC00;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8251fc04
	goto loc_8251FC04;
loc_8251FC00:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8251FC04:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8251fc34
	if (cr6.eq) goto loc_8251FC34;
loc_8251FC18:
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
	// bne cr6,0x8251fc18
	if (!cr6.eq) goto loc_8251FC18;
loc_8251FC34:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,28
	ctx.r3.s64 = ctx.r6.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x8251fb50
	if (!cr0.eq) goto loc_8251FB50;
loc_8251FC88:
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
loc_8251FC8C:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251fcb4
	if (cr6.eq) goto loc_8251FCB4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_8251FCB4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8251fc8c
	if (!cr0.lt) goto loc_8251FC8C;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8251FCC8"))) PPC_WEAK_FUNC(sub_8251FCC8);
PPC_FUNC_IMPL(__imp__sub_8251FCC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8251FCCC"))) PPC_WEAK_FUNC(sub_8251FCCC);
PPC_FUNC_IMPL(__imp__sub_8251FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FCD0"))) PPC_WEAK_FUNC(sub_8251FCD0);
PPC_FUNC_IMPL(__imp__sub_8251FCD0) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8251fda4
	if (!cr6.gt) goto loc_8251FDA4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,23288
	r28.s64 = r11.s64 + 23288;
loc_8251FCFC:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + r11.u64;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251fd18
	if (cr6.lt) goto loc_8251FD18;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8251fd1c
	goto loc_8251FD1C;
loc_8251FD18:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8251FD1C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8251fd4c
	if (cr6.eq) goto loc_8251FD4C;
loc_8251FD30:
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
	// bne cr6,0x8251fd30
	if (!cr6.eq) goto loc_8251FD30;
loc_8251FD4C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,28
	ctx.r3.s64 = ctx.r6.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,132(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x8251fcfc
	if (cr6.lt) goto loc_8251FCFC;
loc_8251FDA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251FDA8"))) PPC_WEAK_FUNC(sub_8251FDA8);
PPC_FUNC_IMPL(__imp__sub_8251FDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251FDAC"))) PPC_WEAK_FUNC(sub_8251FDAC);
PPC_FUNC_IMPL(__imp__sub_8251FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FDB0"))) PPC_WEAK_FUNC(sub_8251FDB0);
PPC_FUNC_IMPL(__imp__sub_8251FDB0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x8251fe00
	if (cr6.gt) goto loc_8251FE00;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8251fe00
	if (cr6.eq) goto loc_8251FE00;
	// bdz 0x8251fde8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8251FDE8;
	// bdz 0x8251fdf0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8251FDF0;
	// bdz 0x8251fdf8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8251FDF8;
	// b 0x8251fe00
	goto loc_8251FE00;
loc_8251FDE8:
	// li r23,2
	r23.s64 = 2;
	// b 0x8251fe04
	goto loc_8251FE04;
loc_8251FDF0:
	// li r23,3
	r23.s64 = 3;
	// b 0x8251fe04
	goto loc_8251FE04;
loc_8251FDF8:
	// li r23,4
	r23.s64 = 4;
	// b 0x8251fe04
	goto loc_8251FE04;
loc_8251FE00:
	// li r23,1
	r23.s64 = 1;
loc_8251FE04:
	// lwz r11,128(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 128);
	// addi r27,r18,120
	r27.s64 = r18.s64 + 120;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x8251fe2c
	if (!cr6.gt) goto loc_8251FE2C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8251FE2C:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// mr r29,r21
	r29.u64 = r21.u64;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// ble cr6,0x8251ff84
	if (!cr6.gt) goto loc_8251FF84;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r19,15
	r19.s64 = 15;
	// li r20,-1
	r20.s64 = -1;
	// addi r26,r10,23104
	r26.s64 = ctx.r10.s64 + 23104;
	// addi r25,r9,15972
	r25.s64 = ctx.r9.s64 + 15972;
	// addi r24,r8,23172
	r24.s64 = ctx.r8.s64 + 23172;
	// addi r28,r7,-23600
	r28.s64 = ctx.r7.s64 + -23600;
	// addi r22,r11,-29908
	r22.s64 = r11.s64 + -29908;
loc_8251FE78:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8251fea0
	if (!cr6.gt) goto loc_8251FEA0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8251FEA0:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8251fef8
	if (cr0.eq) goto loc_8251FEF8;
	// stw r19,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r19.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r21,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r21.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r21,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r21.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x825202d0
	sub_825202D0(ctx, base);
	// stw r20,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r20.u32);
	// b 0x8251fefc
	goto loc_8251FEFC;
loc_8251FEF8:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8251FEFC:
	// lwz r11,144(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 144);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,260
	ctx.r5.s64 = 260;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addme r9,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r9.u64 = temp.u64;
	// and r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 & r28.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8251FF40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251ff40
	if (!cr6.eq) goto loc_8251FF40;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(r29.s32, r23.s32, xer);
	// blt cr6,0x8251fe78
	if (cr6.lt) goto loc_8251FE78;
loc_8251FF84:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8251FF88"))) PPC_WEAK_FUNC(sub_8251FF88);
PPC_FUNC_IMPL(__imp__sub_8251FF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8251FF8C"))) PPC_WEAK_FUNC(sub_8251FF8C);
PPC_FUNC_IMPL(__imp__sub_8251FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FF90"))) PPC_WEAK_FUNC(sub_8251FF90);
PPC_FUNC_IMPL(__imp__sub_8251FF90) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fdb0
	sub_8251FDB0(ctx, base);
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

__attribute__((alias("__imp__sub_8251FFE0"))) PPC_WEAK_FUNC(sub_8251FFE0);
PPC_FUNC_IMPL(__imp__sub_8251FFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251FFE4"))) PPC_WEAK_FUNC(sub_8251FFE4);
PPC_FUNC_IMPL(__imp__sub_8251FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FFE8"))) PPC_WEAK_FUNC(sub_8251FFE8);
PPC_FUNC_IMPL(__imp__sub_8251FFE8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82520048
	if (!cr6.gt) goto loc_82520048;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r10,23132
	r28.s64 = ctx.r10.s64 + 23132;
	// addi r27,r11,24348
	r27.s64 = r11.s64 + 24348;
loc_8252001C:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8252001c
	if (cr6.lt) goto loc_8252001C;
loc_82520048:
	// addi r3,r29,120
	ctx.r3.s64 = r29.s64 + 120;
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82520054"))) PPC_WEAK_FUNC(sub_82520054);
PPC_FUNC_IMPL(__imp__sub_82520054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82520058"))) PPC_WEAK_FUNC(sub_82520058);
PPC_FUNC_IMPL(__imp__sub_82520058) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252005C"))) PPC_WEAK_FUNC(sub_8252005C);
PPC_FUNC_IMPL(__imp__sub_8252005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520060"))) PPC_WEAK_FUNC(sub_82520060);
PPC_FUNC_IMPL(__imp__sub_82520060) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,23324
	ctx.r9.s64 = r11.s64 + 23324;
	// addi r8,r10,23312
	ctx.r8.s64 = ctx.r10.s64 + 23312;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82520e30
	sub_82520E30(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,23164
	ctx.r6.s64 = ctx.r7.s64 + 23164;
	// stw r6,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r6.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
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

__attribute__((alias("__imp__sub_825200D0"))) PPC_WEAK_FUNC(sub_825200D0);
PPC_FUNC_IMPL(__imp__sub_825200D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825200D4"))) PPC_WEAK_FUNC(sub_825200D4);
PPC_FUNC_IMPL(__imp__sub_825200D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825200D8"))) PPC_WEAK_FUNC(sub_825200D8);
PPC_FUNC_IMPL(__imp__sub_825200D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,23324
	ctx.r9.s64 = r11.s64 + 23324;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r7,r8,23312
	ctx.r7.s64 = ctx.r8.s64 + 23312;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, f0.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, f0.u64);
	// addi r11,r3,120
	r11.s64 = ctx.r3.s64 + 120;
	// stfd f0,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, f0.u64);
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, f0.u64);
	// stfd f0,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, f0.u64);
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, f0.u64);
	// stfd f0,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, f0.u64);
	// stfd f0,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, f0.u64);
	// stfd f0,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, f0.u64);
	// stfd f0,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, f0.u64);
	// stfd f0,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, f0.u64);
	// stfd f0,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, f0.u64);
	// stfd f0,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, f0.u64);
	// stfd f0,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, f0.u64);
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r30.u32);
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r30.u32);
	// stw r30,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r30.u32);
	// stw r30,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r30.u32);
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-31970
	ctx.r4.s64 = -2095185920;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r11,r5,23388
	r11.s64 = ctx.r5.s64 + 23388;
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r30.u8);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// lwz r3,-14756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825201a4
	if (cr6.eq) goto loc_825201A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825201a4
	if (cr6.eq) goto loc_825201A4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825201A4:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825201B4"))) PPC_WEAK_FUNC(sub_825201B4);
PPC_FUNC_IMPL(__imp__sub_825201B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825201B8"))) PPC_WEAK_FUNC(sub_825201B8);
PPC_FUNC_IMPL(__imp__sub_825201B8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825201B8"))) PPC_WEAK_FUNC(sub_825201B8);
PPC_FUNC_IMPL(__imp__sub_825201B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82520e30
	sub_82520E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825201BC"))) PPC_WEAK_FUNC(sub_825201BC);
PPC_FUNC_IMPL(__imp__sub_825201BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825201C0"))) PPC_WEAK_FUNC(sub_825201C0);
PPC_FUNC_IMPL(__imp__sub_825201C0) {
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82520240
	if (cr6.eq) goto loc_82520240;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252020c
	if (cr6.eq) goto loc_8252020C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8252020C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82520240
	if (cr6.eq) goto loc_82520240;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x827577f0
	sub_827577F0(ctx, base);
loc_82520240:
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

__attribute__((alias("__imp__sub_82520258"))) PPC_WEAK_FUNC(sub_82520258);
PPC_FUNC_IMPL(__imp__sub_82520258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252025C"))) PPC_WEAK_FUNC(sub_8252025C);
PPC_FUNC_IMPL(__imp__sub_8252025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520260"))) PPC_WEAK_FUNC(sub_82520260);
PPC_FUNC_IMPL(__imp__sub_82520260) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r6,r8,4776
	ctx.r6.s64 = ctx.r8.s64 + 4776;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825202C8"))) PPC_WEAK_FUNC(sub_825202C8);
PPC_FUNC_IMPL(__imp__sub_825202C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825202CC"))) PPC_WEAK_FUNC(sub_825202CC);
PPC_FUNC_IMPL(__imp__sub_825202CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825202D0"))) PPC_WEAK_FUNC(sub_825202D0);
PPC_FUNC_IMPL(__imp__sub_825202D0) {
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
	// li r3,48
	ctx.r3.s64 = 48;
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
	// stb r11,40(r4)
	PPC_STORE_U8(ctx.r4.u32 + 40, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,41(r10)
	PPC_STORE_U8(ctx.r10.u32 + 41, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82520370"))) PPC_WEAK_FUNC(sub_82520370);
PPC_FUNC_IMPL(__imp__sub_82520370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520374"))) PPC_WEAK_FUNC(sub_82520374);
PPC_FUNC_IMPL(__imp__sub_82520374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520378"))) PPC_WEAK_FUNC(sub_82520378);
PPC_FUNC_IMPL(__imp__sub_82520378) {
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
	// lbz r11,41(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825203f0
	if (!cr6.eq) goto loc_825203F0;
	// li r27,0
	r27.s64 = 0;
loc_825203A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82520378
	sub_82520378(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// beq cr6,0x825203d8
	if (cr6.eq) goto loc_825203D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_825203D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,41(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825203a0
	if (cr6.eq) goto loc_825203A0;
loc_825203F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825203F4"))) PPC_WEAK_FUNC(sub_825203F4);
PPC_FUNC_IMPL(__imp__sub_825203F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825203F8"))) PPC_WEAK_FUNC(sub_825203F8);
PPC_FUNC_IMPL(__imp__sub_825203F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lbz r11,41(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 41);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82520428
	if (cr6.eq) goto loc_82520428;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_82520428:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82520450
	if (cr6.eq) goto loc_82520450;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x82520474
	goto loc_82520474;
loc_82520450:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82520468
	if (cr6.eq) goto loc_82520468;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82520474
	goto loc_82520474;
loc_82520468:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x82520560
	if (!cr6.eq) goto loc_82520560;
loc_82520474:
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520488
	if (!cr6.eq) goto loc_82520488;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82520488:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825204a0
	if (!cr6.eq) goto loc_825204A0;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x825204b8
	goto loc_825204B8;
loc_825204A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825204b4
	if (!cr6.eq) goto loc_825204B4;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x825204b8
	goto loc_825204B8;
loc_825204B4:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_825204B8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82520508
	if (!cr6.eq) goto loc_82520508;
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825204dc
	if (cr6.eq) goto loc_825204DC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82520504
	goto loc_82520504;
loc_825204DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82520504
	if (!cr6.eq) goto loc_82520504;
loc_825204F0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825204f0
	if (cr6.eq) goto loc_825204F0;
loc_82520504:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82520508:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825205f4
	if (!cr6.eq) goto loc_825205F4;
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82520530
	if (cr6.eq) goto loc_82520530;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x825205f4
	goto loc_825205F4;
loc_82520530:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82520558
	if (!cr6.eq) goto loc_82520558;
loc_82520544:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82520544
	if (cr6.eq) goto loc_82520544;
loc_82520558:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825205f4
	goto loc_825205F4;
loc_82520560:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82520580
	if (!cr6.eq) goto loc_82520580;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x825205a8
	goto loc_825205A8;
loc_82520580:
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520594
	if (!cr6.eq) goto loc_82520594;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82520594:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
loc_825205A8:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825205c0
	if (!cr6.eq) goto loc_825205C0;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x825205dc
	goto loc_825205DC;
loc_825205C0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825205d8
	if (!cr6.eq) goto loc_825205D8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x825205dc
	goto loc_825205DC;
loc_825205D8:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_825205DC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,40(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 40);
	// lbz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 40);
	// stb r9,40(r25)
	PPC_STORE_U8(r25.u32 + 40, ctx.r9.u8);
	// stb r10,40(r26)
	PPC_STORE_U8(r26.u32 + 40, ctx.r10.u8);
loc_825205F4:
	// lbz r11,40(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 40);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8252078c
	if (!cr6.eq) goto loc_8252078C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82520788
	if (cr6.eq) goto loc_82520788;
loc_82520618:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82520788
	if (!cr6.eq) goto loc_82520788;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x825206d0
	if (!cr6.eq) goto loc_825206D0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82520658
	if (!cr6.eq) goto loc_82520658;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82520658:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82520724
	if (!cr6.eq) goto loc_82520724;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82520684
	if (!cr6.eq) goto loc_82520684;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82520720
	if (cr6.eq) goto loc_82520720;
loc_82520684:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825206ac
	if (!cr6.eq) goto loc_825206AC;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f530
	sub_8236F530(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825206AC:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r29.u8);
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// b 0x82520788
	goto loc_82520788;
loc_825206D0:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825206f4
	if (!cr6.eq) goto loc_825206F4;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f530
	sub_8236F530(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825206F4:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82520724
	if (!cr6.eq) goto loc_82520724;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82520740
	if (!cr6.eq) goto loc_82520740;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82520740
	if (!cr6.eq) goto loc_82520740;
loc_82520720:
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
loc_82520724:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82520618
	if (!cr6.eq) goto loc_82520618;
	// b 0x82520788
	goto loc_82520788;
loc_82520740:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82520768
	if (!cr6.eq) goto loc_82520768;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82520768:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r29.u8);
	// bl 0x8236f530
	sub_8236F530(ctx, base);
loc_82520788:
	// stb r29,40(r28)
	PPC_STORE_U8(r28.u32 + 40, r29.u8);
loc_8252078C:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// addi r31,r26,24
	r31.s64 = r26.s64 + 24;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825207b4
	if (cr6.eq) goto loc_825207B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_825207B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825207d0
	if (cr6.eq) goto loc_825207D0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_825207D0:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825207DC"))) PPC_WEAK_FUNC(sub_825207DC);
PPC_FUNC_IMPL(__imp__sub_825207DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825207E0"))) PPC_WEAK_FUNC(sub_825207E0);
PPC_FUNC_IMPL(__imp__sub_825207E0) {
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
	// bl 0x82520378
	sub_82520378(ctx, base);
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

__attribute__((alias("__imp__sub_82520830"))) PPC_WEAK_FUNC(sub_82520830);
PPC_FUNC_IMPL(__imp__sub_82520830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520834"))) PPC_WEAK_FUNC(sub_82520834);
PPC_FUNC_IMPL(__imp__sub_82520834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520838"))) PPC_WEAK_FUNC(sub_82520838);
PPC_FUNC_IMPL(__imp__sub_82520838) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8252088c
	if (!cr6.eq) goto loc_8252088C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8252088c
	if (!cr6.eq) goto loc_8252088C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825207e0
	sub_825207E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8252088C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x825208bc
	if (cr6.eq) goto loc_825208BC;
loc_82520894:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825203f8
	sub_825203F8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82520894
	if (!cr6.eq) goto loc_82520894;
loc_825208BC:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825208C8"))) PPC_WEAK_FUNC(sub_825208C8);
PPC_FUNC_IMPL(__imp__sub_825208C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825208CC"))) PPC_WEAK_FUNC(sub_825208CC);
PPC_FUNC_IMPL(__imp__sub_825208CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825208D0"))) PPC_WEAK_FUNC(sub_825208D0);
PPC_FUNC_IMPL(__imp__sub_825208D0) {
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
	// lbz r11,41(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520954
	if (!cr6.eq) goto loc_82520954;
	// bl 0x822e34e8
	sub_822E34E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r3.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82520910
	if (cr0.eq) goto loc_82520910;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x822e3580
	sub_822E3580(ctx, base);
loc_82520910:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// lbz r10,41(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252092c
	if (cr6.eq) goto loc_8252092C;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8252092C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825208d0
	sub_825208D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825208d0
	sub_825208D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82520954:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8252095C"))) PPC_WEAK_FUNC(sub_8252095C);
PPC_FUNC_IMPL(__imp__sub_8252095C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82520960"))) PPC_WEAK_FUNC(sub_82520960);
PPC_FUNC_IMPL(__imp__sub_82520960) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825209cc
	if (cr6.eq) goto loc_825209CC;
loc_82520988:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825209b0
	if (cr6.eq) goto loc_825209B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825209B0:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82520988
	if (!cr6.eq) goto loc_82520988;
loc_825209CC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82520378
	sub_82520378(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825209FC"))) PPC_WEAK_FUNC(sub_825209FC);
PPC_FUNC_IMPL(__imp__sub_825209FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82520A00"))) PPC_WEAK_FUNC(sub_82520A00);
PPC_FUNC_IMPL(__imp__sub_82520A00) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825208d0
	sub_825208D0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,41(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82520aa8
	if (!cr6.eq) goto loc_82520AA8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82520a6c
	if (!cr6.eq) goto loc_82520A6C;
loc_82520A58:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82520a58
	if (cr6.eq) goto loc_82520A58;
loc_82520A6C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82520a9c
	if (!cr6.eq) goto loc_82520A9C;
loc_82520A88:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82520a88
	if (cr6.eq) goto loc_82520A88;
loc_82520A9C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82520AA8:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82520AB8"))) PPC_WEAK_FUNC(sub_82520AB8);
PPC_FUNC_IMPL(__imp__sub_82520AB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82520ABC"))) PPC_WEAK_FUNC(sub_82520ABC);
PPC_FUNC_IMPL(__imp__sub_82520ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520AC0"))) PPC_WEAK_FUNC(sub_82520AC0);
PPC_FUNC_IMPL(__imp__sub_82520AC0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82520b60
	if (!cr6.gt) goto loc_82520B60;
	// li r27,15
	r27.s64 = 15;
	// li r28,0
	r28.s64 = 0;
loc_82520AE4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r31,r11,-48
	r31.s64 = r11.s64 + -48;
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82520960
	sub_82520960(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82520838
	sub_82520838(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82520b3c
	if (cr6.lt) goto loc_82520B3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82520B3C:
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82520ae4
	if (cr6.gt) goto loc_82520AE4;
loc_82520B60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82520B64"))) PPC_WEAK_FUNC(sub_82520B64);
PPC_FUNC_IMPL(__imp__sub_82520B64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82520B68"))) PPC_WEAK_FUNC(sub_82520B68);
PPC_FUNC_IMPL(__imp__sub_82520B68) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82520ba4
	if (!cr6.gt) goto loc_82520BA4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82520BA4:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82520c8c
	if (cr6.eq) goto loc_82520C8C;
	// li r24,15
	r24.s64 = 15;
	// li r26,0
	r26.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
loc_82520BD0:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82520bf8
	if (!cr6.gt) goto loc_82520BF8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82520BF8:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82520c68
	if (cr0.eq) goto loc_82520C68;
	// stw r24,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r24.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825202d0
	sub_825202D0(ctx, base);
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bl 0x82520a00
	sub_82520A00(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_82520C68:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82520bd0
	if (!cr6.eq) goto loc_82520BD0;
loc_82520C8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82520C90"))) PPC_WEAK_FUNC(sub_82520C90);
PPC_FUNC_IMPL(__imp__sub_82520C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82520C94"))) PPC_WEAK_FUNC(sub_82520C94);
PPC_FUNC_IMPL(__imp__sub_82520C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520C98"))) PPC_WEAK_FUNC(sub_82520C98);
PPC_FUNC_IMPL(__imp__sub_82520C98) {
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
	// addi r10,r11,23164
	ctx.r10.s64 = r11.s64 + 23164;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82520cdc
	if (cr6.eq) goto loc_82520CDC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82520CDC:
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

__attribute__((alias("__imp__sub_82520CF0"))) PPC_WEAK_FUNC(sub_82520CF0);
PPC_FUNC_IMPL(__imp__sub_82520CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520CF4"))) PPC_WEAK_FUNC(sub_82520CF4);
PPC_FUNC_IMPL(__imp__sub_82520CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520CF8"))) PPC_WEAK_FUNC(sub_82520CF8);
PPC_FUNC_IMPL(__imp__sub_82520CF8) {
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
	// addi r9,r10,23312
	ctx.r9.s64 = ctx.r10.s64 + 23312;
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

__attribute__((alias("__imp__sub_82520D50"))) PPC_WEAK_FUNC(sub_82520D50);
PPC_FUNC_IMPL(__imp__sub_82520D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520D54"))) PPC_WEAK_FUNC(sub_82520D54);
PPC_FUNC_IMPL(__imp__sub_82520D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520D58"))) PPC_WEAK_FUNC(sub_82520D58);
PPC_FUNC_IMPL(__imp__sub_82520D58) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,23312
	ctx.r10.s64 = r11.s64 + 23312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82520e30
	sub_82520E30(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,23164
	ctx.r8.s64 = ctx.r9.s64 + 23164;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82520DAC"))) PPC_WEAK_FUNC(sub_82520DAC);
PPC_FUNC_IMPL(__imp__sub_82520DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520DB0"))) PPC_WEAK_FUNC(sub_82520DB0);
PPC_FUNC_IMPL(__imp__sub_82520DB0) {
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
	// addi r10,r11,23312
	ctx.r10.s64 = r11.s64 + 23312;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82520e30
	sub_82520E30(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,23164
	ctx.r8.s64 = ctx.r9.s64 + 23164;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82520ac0
	sub_82520AC0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82520e14
	if (cr6.eq) goto loc_82520E14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82520E14:
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

__attribute__((alias("__imp__sub_82520E28"))) PPC_WEAK_FUNC(sub_82520E28);
PPC_FUNC_IMPL(__imp__sub_82520E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520E2C"))) PPC_WEAK_FUNC(sub_82520E2C);
PPC_FUNC_IMPL(__imp__sub_82520E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520E30"))) PPC_WEAK_FUNC(sub_82520E30);
PPC_FUNC_IMPL(__imp__sub_82520E30) {
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
	// beq cr6,0x82520f14
	if (cr6.eq) goto loc_82520F14;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520ea4
	if (!cr6.eq) goto loc_82520EA4;
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
	// beq cr6,0x82520f14
	if (cr6.eq) goto loc_82520F14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82520260
	sub_82520260(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82520f14
	goto loc_82520F14;
loc_82520EA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82520cf8
	sub_82520CF8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82520ed0
	if (!cr6.gt) goto loc_82520ED0;
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
loc_82520ED0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82520b68
	sub_82520B68(ctx, base);
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
	// bl 0x82520d58
	sub_82520D58(ctx, base);
loc_82520F14:
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

__attribute__((alias("__imp__sub_82520F28"))) PPC_WEAK_FUNC(sub_82520F28);
PPC_FUNC_IMPL(__imp__sub_82520F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520F2C"))) PPC_WEAK_FUNC(sub_82520F2C);
PPC_FUNC_IMPL(__imp__sub_82520F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520F30"))) PPC_WEAK_FUNC(sub_82520F30);
PPC_FUNC_IMPL(__imp__sub_82520F30) {
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
	// bl 0x82520060
	sub_82520060(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82520f68
	if (cr6.eq) goto loc_82520F68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82520F68:
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

__attribute__((alias("__imp__sub_82520F7C"))) PPC_WEAK_FUNC(sub_82520F7C);
PPC_FUNC_IMPL(__imp__sub_82520F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520F80"))) PPC_WEAK_FUNC(sub_82520F80);
PPC_FUNC_IMPL(__imp__sub_82520F80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,9
	r11.s64 = 9;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r30,106(r31)
	PPC_STORE_U8(r31.u32 + 106, r30.u8);
	// stb r30,107(r31)
	PPC_STORE_U8(r31.u32 + 107, r30.u8);
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

__attribute__((alias("__imp__sub_82520FF4"))) PPC_WEAK_FUNC(sub_82520FF4);
PPC_FUNC_IMPL(__imp__sub_82520FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520FF8"))) PPC_WEAK_FUNC(sub_82520FF8);
PPC_FUNC_IMPL(__imp__sub_82520FF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521034
	if (cr6.eq) goto loc_82521034;
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
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82521034:
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252105C"))) PPC_WEAK_FUNC(sub_8252105C);
PPC_FUNC_IMPL(__imp__sub_8252105C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521060"))) PPC_WEAK_FUNC(sub_82521060);
PPC_FUNC_IMPL(__imp__sub_82521060) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_82521064"))) PPC_WEAK_FUNC(sub_82521064);
PPC_FUNC_IMPL(__imp__sub_82521064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521068"))) PPC_WEAK_FUNC(sub_82521068);
PPC_FUNC_IMPL(__imp__sub_82521068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8252107C"))) PPC_WEAK_FUNC(sub_8252107C);
PPC_FUNC_IMPL(__imp__sub_8252107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521080"))) PPC_WEAK_FUNC(sub_82521080);
PPC_FUNC_IMPL(__imp__sub_82521080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825210A0"))) PPC_WEAK_FUNC(sub_825210A0);
PPC_FUNC_IMPL(__imp__sub_825210A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825210A4"))) PPC_WEAK_FUNC(sub_825210A4);
PPC_FUNC_IMPL(__imp__sub_825210A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825210A8"))) PPC_WEAK_FUNC(sub_825210A8);
PPC_FUNC_IMPL(__imp__sub_825210A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825210c8
	if (cr6.eq) goto loc_825210C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_825210C8:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825210CC"))) PPC_WEAK_FUNC(sub_825210CC);
PPC_FUNC_IMPL(__imp__sub_825210CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825210D0"))) PPC_WEAK_FUNC(sub_825210D0);
PPC_FUNC_IMPL(__imp__sub_825210D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825210F4"))) PPC_WEAK_FUNC(sub_825210F4);
PPC_FUNC_IMPL(__imp__sub_825210F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825210F8"))) PPC_WEAK_FUNC(sub_825210F8);
PPC_FUNC_IMPL(__imp__sub_825210F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8252111C"))) PPC_WEAK_FUNC(sub_8252111C);
PPC_FUNC_IMPL(__imp__sub_8252111C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521120"))) PPC_WEAK_FUNC(sub_82521120);
PPC_FUNC_IMPL(__imp__sub_82521120) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,107(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 107);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521128"))) PPC_WEAK_FUNC(sub_82521128);
PPC_FUNC_IMPL(__imp__sub_82521128) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521174
	if (cr6.eq) goto loc_82521174;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,106(r31)
	PPC_STORE_U8(r31.u32 + 106, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82521174:
	// li r11,1
	r11.s64 = 1;
	// stb r11,106(r31)
	PPC_STORE_U8(r31.u32 + 106, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252118C"))) PPC_WEAK_FUNC(sub_8252118C);
PPC_FUNC_IMPL(__imp__sub_8252118C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521190"))) PPC_WEAK_FUNC(sub_82521190);
PPC_FUNC_IMPL(__imp__sub_82521190) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825211dc
	if (cr6.eq) goto loc_825211DC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,106(r31)
	PPC_STORE_U8(r31.u32 + 106, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825211DC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,106(r31)
	PPC_STORE_U8(r31.u32 + 106, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825211F4"))) PPC_WEAK_FUNC(sub_825211F4);
PPC_FUNC_IMPL(__imp__sub_825211F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825211F8"))) PPC_WEAK_FUNC(sub_825211F8);
PPC_FUNC_IMPL(__imp__sub_825211F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,106(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 106);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521208"))) PPC_WEAK_FUNC(sub_82521208);
PPC_FUNC_IMPL(__imp__sub_82521208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,107(r10)
	PPC_STORE_U8(ctx.r10.u32 + 107, r11.u8);
	// stb r9,106(r10)
	PPC_STORE_U8(ctx.r10.u32 + 106, ctx.r9.u8);
	// stb r11,105(r10)
	PPC_STORE_U8(ctx.r10.u32 + 105, r11.u8);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_8252123C"))) PPC_WEAK_FUNC(sub_8252123C);
PPC_FUNC_IMPL(__imp__sub_8252123C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521240"))) PPC_WEAK_FUNC(sub_82521240);
PPC_FUNC_IMPL(__imp__sub_82521240) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r31,0
	r31.s64 = 0;
	// bgt cr6,0x825212ac
	if (cr6.gt) goto loc_825212AC;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8252128c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8252128C;
	// bdzf 4*cr6+eq,0x82521294
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82521294;
	// bdzf 4*cr6+eq,0x8252129c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8252129C;
	// bne cr6,0x825212a4
	if (!cr6.eq) goto loc_825212A4;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x825212ac
	goto loc_825212AC;
loc_8252128C:
	// li r11,4
	r11.s64 = 4;
	// b 0x825212a8
	goto loc_825212A8;
loc_82521294:
	// li r11,1
	r11.s64 = 1;
	// b 0x825212a8
	goto loc_825212A8;
loc_8252129C:
	// li r11,2
	r11.s64 = 2;
	// b 0x825212a8
	goto loc_825212A8;
loc_825212A4:
	// li r11,3
	r11.s64 = 3;
loc_825212A8:
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_825212AC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825212d0
	if (cr6.eq) goto loc_825212D0;
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
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
loc_825212D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8252141c
	if (cr6.gt) goto loc_8252141C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82521348
	if (cr6.eq) goto loc_82521348;
	// bdz 0x8252141c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8252141C;
	// bdz 0x8252141c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8252141C;
	// bdz 0x8252141c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8252141C;
	// bdz 0x8252141c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8252141C;
	// bdz 0x8252138c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8252138C;
	// bdz 0x825213d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825213D0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,23404
	ctx.r7.s64 = ctx.r10.s64 + 23404;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x82521414
	if (cr6.eq) goto loc_82521414;
	// bl 0x822e78d0
	sub_822E78D0(ctx, base);
	// b 0x82521418
	goto loc_82521418;
loc_82521348:
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,86
	ctx.r8.s64 = 86;
	// addi r7,r9,23404
	ctx.r7.s64 = ctx.r9.s64 + 23404;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521414
	if (cr6.eq) goto loc_82521414;
	// bl 0x825223e8
	sub_825223E8(ctx, base);
	// b 0x82521418
	goto loc_82521418;
loc_8252138C:
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,89
	ctx.r8.s64 = 89;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r7,r9,23404
	ctx.r7.s64 = ctx.r9.s64 + 23404;
	// li r3,28
	ctx.r3.s64 = 28;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521414
	if (cr6.eq) goto loc_82521414;
	// bl 0x822e7fe8
	sub_822E7FE8(ctx, base);
	// b 0x82521418
	goto loc_82521418;
loc_825213D0:
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,92
	ctx.r8.s64 = 92;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r7,r9,23404
	ctx.r7.s64 = ctx.r9.s64 + 23404;
	// li r3,28
	ctx.r3.s64 = 28;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521414
	if (cr6.eq) goto loc_82521414;
	// bl 0x822e8528
	sub_822E8528(ctx, base);
	// b 0x82521418
	goto loc_82521418;
loc_82521414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82521418:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_8252141C:
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

__attribute__((alias("__imp__sub_82521430"))) PPC_WEAK_FUNC(sub_82521430);
PPC_FUNC_IMPL(__imp__sub_82521430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521434"))) PPC_WEAK_FUNC(sub_82521434);
PPC_FUNC_IMPL(__imp__sub_82521434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521438"))) PPC_WEAK_FUNC(sub_82521438);
PPC_FUNC_IMPL(__imp__sub_82521438) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825214c4
	if (!cr6.eq) goto loc_825214C4;
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r8,86
	ctx.r8.s64 = 86;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r7,r9,23404
	ctx.r7.s64 = ctx.r9.s64 + 23404;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825214b8
	if (cr6.eq) goto loc_825214B8;
	// bl 0x825223e8
	sub_825223E8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// b 0x825214f4
	goto loc_825214F4;
loc_825214B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x825214f4
	goto loc_825214F4;
loc_825214C4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r7.u32);
loc_825214F4:
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

__attribute__((alias("__imp__sub_82521508"))) PPC_WEAK_FUNC(sub_82521508);
PPC_FUNC_IMPL(__imp__sub_82521508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252150C"))) PPC_WEAK_FUNC(sub_8252150C);
PPC_FUNC_IMPL(__imp__sub_8252150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521510"))) PPC_WEAK_FUNC(sub_82521510);
PPC_FUNC_IMPL(__imp__sub_82521510) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252154c
	if (!cr6.eq) goto loc_8252154C;
	// li r11,1
	r11.s64 = 1;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, r11.u8);
	// bl 0x82521240
	sub_82521240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82521438
	sub_82521438(ctx, base);
loc_8252154C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252155C"))) PPC_WEAK_FUNC(sub_8252155C);
PPC_FUNC_IMPL(__imp__sub_8252155C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521560"))) PPC_WEAK_FUNC(sub_82521560);
PPC_FUNC_IMPL(__imp__sub_82521560) {
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
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,107(r31)
	PPC_STORE_U8(r31.u32 + 107, r30.u8);
	// stb r11,106(r31)
	PPC_STORE_U8(r31.u32 + 106, r11.u8);
	// stb r30,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r30.u8);
	// beq cr6,0x825215a8
	if (cr6.eq) goto loc_825215A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825215A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825215c4
	if (cr6.eq) goto loc_825215C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825215C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825215e0
	if (cr6.eq) goto loc_825215E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825215E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521604
	if (cr6.eq) goto loc_82521604;
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
loc_82521604:
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

__attribute__((alias("__imp__sub_82521618"))) PPC_WEAK_FUNC(sub_82521618);
PPC_FUNC_IMPL(__imp__sub_82521618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252161C"))) PPC_WEAK_FUNC(sub_8252161C);
PPC_FUNC_IMPL(__imp__sub_8252161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521620"))) PPC_WEAK_FUNC(sub_82521620);
PPC_FUNC_IMPL(__imp__sub_82521620) {
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
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82521650
	if (cr6.eq) goto loc_82521650;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82521654
	if (!cr6.eq) goto loc_82521654;
loc_82521650:
	// li r11,0
	r11.s64 = 0;
loc_82521654:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825216a8
	if (!cr6.eq) goto loc_825216A8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825216a8
	if (!cr6.eq) goto loc_825216A8;
	// lwz r11,20016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20016);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825216A8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20012(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20012);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,72
	ctx.r4.s64 = r28.s64 + 72;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825216f8
	if (!cr6.eq) goto loc_825216F8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825216f8
	if (!cr6.eq) goto loc_825216F8;
	// lwz r11,20012(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20012);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825216F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825216FC"))) PPC_WEAK_FUNC(sub_825216FC);
PPC_FUNC_IMPL(__imp__sub_825216FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82521700"))) PPC_WEAK_FUNC(sub_82521700);
PPC_FUNC_IMPL(__imp__sub_82521700) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82521730
	if (cr6.eq) goto loc_82521730;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82521734
	if (!cr6.eq) goto loc_82521734;
loc_82521730:
	// li r11,0
	r11.s64 = 0;
loc_82521734:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,9468
	ctx.r3.s64 = ctx.r9.s64 + 9468;
	// addi r30,r11,4304
	r30.s64 = r11.s64 + 4304;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20016(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20016);
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
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,9516
	ctx.r3.s64 = ctx.r7.s64 + 9516;
	// addi r30,r11,4344
	r30.s64 = r11.s64 + 4344;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20012(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20012);
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
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825217DC"))) PPC_WEAK_FUNC(sub_825217DC);
PPC_FUNC_IMPL(__imp__sub_825217DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825217E0"))) PPC_WEAK_FUNC(sub_825217E0);
PPC_FUNC_IMPL(__imp__sub_825217E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252184c
	if (cr6.eq) goto loc_8252184C;
	// lbz r11,105(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252184c
	if (!cr6.eq) goto loc_8252184C;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stb r11,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// lwz r3,20992(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// lwz r11,19668(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19668);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825219b0
	sub_825219B0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252184C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252185C"))) PPC_WEAK_FUNC(sub_8252185C);
PPC_FUNC_IMPL(__imp__sub_8252185C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521860"))) PPC_WEAK_FUNC(sub_82521860);
PPC_FUNC_IMPL(__imp__sub_82521860) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825218c0
	if (cr6.eq) goto loc_825218C0;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stb r11,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// lwz r3,20992(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// lwz r11,19668(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19668);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825219b0
	sub_825219B0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825218C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825218D0"))) PPC_WEAK_FUNC(sub_825218D0);
PPC_FUNC_IMPL(__imp__sub_825218D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825218D4"))) PPC_WEAK_FUNC(sub_825218D4);
PPC_FUNC_IMPL(__imp__sub_825218D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825218D8"))) PPC_WEAK_FUNC(sub_825218D8);
PPC_FUNC_IMPL(__imp__sub_825218D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, r11.u8);
}

__attribute__((alias("__imp__sub_825218E0"))) PPC_WEAK_FUNC(sub_825218E0);
PPC_FUNC_IMPL(__imp__sub_825218E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82521860
	sub_82521860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825218E4"))) PPC_WEAK_FUNC(sub_825218E4);
PPC_FUNC_IMPL(__imp__sub_825218E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825218E8"))) PPC_WEAK_FUNC(sub_825218E8);
PPC_FUNC_IMPL(__imp__sub_825218E8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521994
	if (cr6.eq) goto loc_82521994;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82521994
	if (!cr6.eq) goto loc_82521994;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82521994
	if (cr6.eq) goto loc_82521994;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,106(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 106);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82521978
	if (cr6.eq) goto loc_82521978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82521128
	sub_82521128(ctx, base);
loc_82521978:
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82521994
	if (!cr6.eq) goto loc_82521994;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825217e0
	sub_825217E0(ctx, base);
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
loc_82521994:
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

__attribute__((alias("__imp__sub_825219A8"))) PPC_WEAK_FUNC(sub_825219A8);
PPC_FUNC_IMPL(__imp__sub_825219A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825219AC"))) PPC_WEAK_FUNC(sub_825219AC);
PPC_FUNC_IMPL(__imp__sub_825219AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825219B0"))) PPC_WEAK_FUNC(sub_825219B0);
PPC_FUNC_IMPL(__imp__sub_825219B0) {
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
	// beq cr6,0x82521a14
	if (cr6.eq) goto loc_82521A14;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,23460
	ctx.r8.s64 = ctx.r9.s64 + 23460;
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
loc_82521A14:
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

__attribute__((alias("__imp__sub_82521A28"))) PPC_WEAK_FUNC(sub_82521A28);
PPC_FUNC_IMPL(__imp__sub_82521A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521A2C"))) PPC_WEAK_FUNC(sub_82521A2C);
PPC_FUNC_IMPL(__imp__sub_82521A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521A30"))) PPC_WEAK_FUNC(sub_82521A30);
PPC_FUNC_IMPL(__imp__sub_82521A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82522238
	sub_82522238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521A30"))) PPC_WEAK_FUNC(sub_82521A30);
PPC_FUNC_IMPL(__imp__sub_82521A30) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82521A34"))) PPC_WEAK_FUNC(sub_82521A34);
PPC_FUNC_IMPL(__imp__sub_82521A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521A38"))) PPC_WEAK_FUNC(sub_82521A38);
PPC_FUNC_IMPL(__imp__sub_82521A38) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521aac
	if (!cr6.gt) goto loc_82521AAC;
	// li r31,0
	r31.s64 = 0;
loc_82521A5C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82521a98
	if (cr6.eq) goto loc_82521A98;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82521A98:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521a5c
	if (cr6.lt) goto loc_82521A5C;
loc_82521AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521AB0"))) PPC_WEAK_FUNC(sub_82521AB0);
PPC_FUNC_IMPL(__imp__sub_82521AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521AB4"))) PPC_WEAK_FUNC(sub_82521AB4);
PPC_FUNC_IMPL(__imp__sub_82521AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521AB8"))) PPC_WEAK_FUNC(sub_82521AB8);
PPC_FUNC_IMPL(__imp__sub_82521AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521b38
	if (!cr6.gt) goto loc_82521B38;
	// li r31,0
	r31.s64 = 0;
loc_82521AE4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82521b24
	if (cr6.eq) goto loc_82521B24;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82521B24:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521ae4
	if (cr6.lt) goto loc_82521AE4;
loc_82521B38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82521B40"))) PPC_WEAK_FUNC(sub_82521B40);
PPC_FUNC_IMPL(__imp__sub_82521B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521B44"))) PPC_WEAK_FUNC(sub_82521B44);
PPC_FUNC_IMPL(__imp__sub_82521B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521B48"))) PPC_WEAK_FUNC(sub_82521B48);
PPC_FUNC_IMPL(__imp__sub_82521B48) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521b98
	if (!cr6.gt) goto loc_82521B98;
	// li r31,0
	r31.s64 = 0;
loc_82521B6C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8251f7f0
	sub_8251F7F0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82521ba4
	if (cr6.eq) goto loc_82521BA4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521b6c
	if (cr6.lt) goto loc_82521B6C;
loc_82521B98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82521BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521BAC"))) PPC_WEAK_FUNC(sub_82521BAC);
PPC_FUNC_IMPL(__imp__sub_82521BAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521BB0"))) PPC_WEAK_FUNC(sub_82521BB0);
PPC_FUNC_IMPL(__imp__sub_82521BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521c08
	if (!cr6.gt) goto loc_82521C08;
	// li r30,0
	r30.s64 = 0;
loc_82521BD8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521bd8
	if (cr6.lt) goto loc_82521BD8;
loc_82521C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82521C0C"))) PPC_WEAK_FUNC(sub_82521C0C);
PPC_FUNC_IMPL(__imp__sub_82521C0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82521C10"))) PPC_WEAK_FUNC(sub_82521C10);
PPC_FUNC_IMPL(__imp__sub_82521C10) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521c60
	if (!cr6.gt) goto loc_82521C60;
	// li r31,0
	r31.s64 = 0;
loc_82521C34:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521c34
	if (cr6.lt) goto loc_82521C34;
loc_82521C60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521C64"))) PPC_WEAK_FUNC(sub_82521C64);
PPC_FUNC_IMPL(__imp__sub_82521C64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521C68"))) PPC_WEAK_FUNC(sub_82521C68);
PPC_FUNC_IMPL(__imp__sub_82521C68) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521cb8
	if (!cr6.gt) goto loc_82521CB8;
	// li r31,0
	r31.s64 = 0;
loc_82521C8C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521c8c
	if (cr6.lt) goto loc_82521C8C;
loc_82521CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521CBC"))) PPC_WEAK_FUNC(sub_82521CBC);
PPC_FUNC_IMPL(__imp__sub_82521CBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521CC0"))) PPC_WEAK_FUNC(sub_82521CC0);
PPC_FUNC_IMPL(__imp__sub_82521CC0) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521d10
	if (!cr6.gt) goto loc_82521D10;
	// li r31,0
	r31.s64 = 0;
loc_82521CE4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521ce4
	if (cr6.lt) goto loc_82521CE4;
loc_82521D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521D14"))) PPC_WEAK_FUNC(sub_82521D14);
PPC_FUNC_IMPL(__imp__sub_82521D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521D18"))) PPC_WEAK_FUNC(sub_82521D18);
PPC_FUNC_IMPL(__imp__sub_82521D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521d90
	if (!cr6.gt) goto loc_82521D90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,4028(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4028);
	f31.f64 = double(temp.f32);
loc_82521D48:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82521d7c
	if (cr6.eq) goto loc_82521D7C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8251f268
	sub_8251F268(ctx, base);
loc_82521D7C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521d48
	if (cr6.lt) goto loc_82521D48;
loc_82521D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82521D98"))) PPC_WEAK_FUNC(sub_82521D98);
PPC_FUNC_IMPL(__imp__sub_82521D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521D9C"))) PPC_WEAK_FUNC(sub_82521D9C);
PPC_FUNC_IMPL(__imp__sub_82521D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521DA0"))) PPC_WEAK_FUNC(sub_82521DA0);
PPC_FUNC_IMPL(__imp__sub_82521DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521e18
	if (!cr6.gt) goto loc_82521E18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_82521DD0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82521e04
	if (cr6.eq) goto loc_82521E04;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8251f268
	sub_8251F268(ctx, base);
loc_82521E04:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521dd0
	if (cr6.lt) goto loc_82521DD0;
loc_82521E18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82521E20"))) PPC_WEAK_FUNC(sub_82521E20);
PPC_FUNC_IMPL(__imp__sub_82521E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521E24"))) PPC_WEAK_FUNC(sub_82521E24);
PPC_FUNC_IMPL(__imp__sub_82521E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521E28"))) PPC_WEAK_FUNC(sub_82521E28);
PPC_FUNC_IMPL(__imp__sub_82521E28) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521e78
	if (!cr6.gt) goto loc_82521E78;
	// li r31,0
	r31.s64 = 0;
loc_82521E4C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521e4c
	if (cr6.lt) goto loc_82521E4C;
loc_82521E78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521E7C"))) PPC_WEAK_FUNC(sub_82521E7C);
PPC_FUNC_IMPL(__imp__sub_82521E7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521E80"))) PPC_WEAK_FUNC(sub_82521E80);
PPC_FUNC_IMPL(__imp__sub_82521E80) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521ed0
	if (!cr6.gt) goto loc_82521ED0;
	// li r31,0
	r31.s64 = 0;
loc_82521EA4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521ea4
	if (cr6.lt) goto loc_82521EA4;
loc_82521ED0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521ED4"))) PPC_WEAK_FUNC(sub_82521ED4);
PPC_FUNC_IMPL(__imp__sub_82521ED4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521ED8"))) PPC_WEAK_FUNC(sub_82521ED8);
PPC_FUNC_IMPL(__imp__sub_82521ED8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521f28
	if (!cr6.gt) goto loc_82521F28;
	// li r31,0
	r31.s64 = 0;
loc_82521EFC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82521efc
	if (cr6.lt) goto loc_82521EFC;
loc_82521F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82521F2C"))) PPC_WEAK_FUNC(sub_82521F2C);
PPC_FUNC_IMPL(__imp__sub_82521F2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82521F30"))) PPC_WEAK_FUNC(sub_82521F30);
PPC_FUNC_IMPL(__imp__sub_82521F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82521fac
	if (!cr6.gt) goto loc_82521FAC;
	// li r31,0
	r31.s64 = 0;
loc_82521F58:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82521f98
	if (cr6.eq) goto loc_82521F98;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82521F98:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521f58
	if (cr6.lt) goto loc_82521F58;
loc_82521FAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82521FB0"))) PPC_WEAK_FUNC(sub_82521FB0);
PPC_FUNC_IMPL(__imp__sub_82521FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82521FB4"))) PPC_WEAK_FUNC(sub_82521FB4);
PPC_FUNC_IMPL(__imp__sub_82521FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521FB8"))) PPC_WEAK_FUNC(sub_82521FB8);
PPC_FUNC_IMPL(__imp__sub_82521FB8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,23496
	ctx.r9.s64 = r11.s64 + 23496;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82522020
	if (!cr6.gt) goto loc_82522020;
	// li r30,0
	r30.s64 = 0;
loc_82521FE8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252200c
	if (cr6.eq) goto loc_8252200C;
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
loc_8252200C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82521fe8
	if (cr6.lt) goto loc_82521FE8;
loc_82522020:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82522048
	if (!cr6.gt) goto loc_82522048;
loc_82522030:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82522030
	if (cr6.gt) goto loc_82522030;
loc_82522048:
	// bl 0x825221a0
	sub_825221A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82522050"))) PPC_WEAK_FUNC(sub_82522050);
PPC_FUNC_IMPL(__imp__sub_82522050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82522054"))) PPC_WEAK_FUNC(sub_82522054);
PPC_FUNC_IMPL(__imp__sub_82522054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522058"))) PPC_WEAK_FUNC(sub_82522058);
PPC_FUNC_IMPL(__imp__sub_82522058) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,23496
	ctx.r9.s64 = r11.s64 + 23496;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,23484
	ctx.r8.s64 = ctx.r10.s64 + 23484;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,23556
	ctx.r4.s64 = ctx.r6.s64 + 23556;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825220CC"))) PPC_WEAK_FUNC(sub_825220CC);
PPC_FUNC_IMPL(__imp__sub_825220CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825220D0"))) PPC_WEAK_FUNC(sub_825220D0);
PPC_FUNC_IMPL(__imp__sub_825220D0) {
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
	// addi r9,r11,23472
	ctx.r9.s64 = r11.s64 + 23472;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82522114
	if (!cr6.gt) goto loc_82522114;
loc_825220FC:
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
	// bgt cr6,0x825220fc
	if (cr6.gt) goto loc_825220FC;
loc_82522114:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252212c
	if (cr6.eq) goto loc_8252212C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252212C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252213C"))) PPC_WEAK_FUNC(sub_8252213C);
PPC_FUNC_IMPL(__imp__sub_8252213C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522140"))) PPC_WEAK_FUNC(sub_82522140);
PPC_FUNC_IMPL(__imp__sub_82522140) {
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
	// addi r9,r10,23484
	ctx.r9.s64 = ctx.r10.s64 + 23484;
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

__attribute__((alias("__imp__sub_82522198"))) PPC_WEAK_FUNC(sub_82522198);
PPC_FUNC_IMPL(__imp__sub_82522198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252219C"))) PPC_WEAK_FUNC(sub_8252219C);
PPC_FUNC_IMPL(__imp__sub_8252219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825221A0"))) PPC_WEAK_FUNC(sub_825221A0);
PPC_FUNC_IMPL(__imp__sub_825221A0) {
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
	// addi r9,r11,23484
	ctx.r9.s64 = r11.s64 + 23484;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825221e4
	if (!cr6.gt) goto loc_825221E4;
loc_825221CC:
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
	// bgt cr6,0x825221cc
	if (cr6.gt) goto loc_825221CC;
loc_825221E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82522238
	sub_82522238(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,23472
	ctx.r10.s64 = r11.s64 + 23472;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82522220
	if (!cr6.gt) goto loc_82522220;
loc_82522208:
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
	// bgt cr6,0x82522208
	if (cr6.gt) goto loc_82522208;
loc_82522220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82522230"))) PPC_WEAK_FUNC(sub_82522230);
PPC_FUNC_IMPL(__imp__sub_82522230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522234"))) PPC_WEAK_FUNC(sub_82522234);
PPC_FUNC_IMPL(__imp__sub_82522234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522238"))) PPC_WEAK_FUNC(sub_82522238);
PPC_FUNC_IMPL(__imp__sub_82522238) {
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
	// beq cr6,0x8252231c
	if (cr6.eq) goto loc_8252231C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825222ac
	if (!cr6.eq) goto loc_825222AC;
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
	// beq cr6,0x8252231c
	if (cr6.eq) goto loc_8252231C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8252231c
	goto loc_8252231C;
loc_825222AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82522140
	sub_82522140(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825222d8
	if (!cr6.gt) goto loc_825222D8;
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
loc_825222D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
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
	// bl 0x825221a0
	sub_825221A0(ctx, base);
loc_8252231C:
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

__attribute__((alias("__imp__sub_82522330"))) PPC_WEAK_FUNC(sub_82522330);
PPC_FUNC_IMPL(__imp__sub_82522330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522334"))) PPC_WEAK_FUNC(sub_82522334);
PPC_FUNC_IMPL(__imp__sub_82522334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522338"))) PPC_WEAK_FUNC(sub_82522338);
PPC_FUNC_IMPL(__imp__sub_82522338) {
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
	// bl 0x825221a0
	sub_825221A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82522370
	if (cr6.eq) goto loc_82522370;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82522370:
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

__attribute__((alias("__imp__sub_82522384"))) PPC_WEAK_FUNC(sub_82522384);
PPC_FUNC_IMPL(__imp__sub_82522384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522388"))) PPC_WEAK_FUNC(sub_82522388);
PPC_FUNC_IMPL(__imp__sub_82522388) {
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
	// bl 0x82521fb8
	sub_82521FB8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825223c0
	if (cr6.eq) goto loc_825223C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825223C0:
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

__attribute__((alias("__imp__sub_825223D4"))) PPC_WEAK_FUNC(sub_825223D4);
PPC_FUNC_IMPL(__imp__sub_825223D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825223D8"))) PPC_WEAK_FUNC(sub_825223D8);
PPC_FUNC_IMPL(__imp__sub_825223D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,23568
	ctx.r10.s64 = r11.s64 + 23568;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82521fb8
	sub_82521FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825223E8"))) PPC_WEAK_FUNC(sub_825223E8);
PPC_FUNC_IMPL(__imp__sub_825223E8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82522058
	sub_82522058(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
	// addi r10,r11,23568
	ctx.r10.s64 = r11.s64 + 23568;
	// li r27,10
	r27.s64 = 10;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82522434
	if (!cr6.lt) goto loc_82522434;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82522434:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = r11.u64 | 1;
	// addi r30,r10,23624
	r30.s64 = ctx.r10.s64 + 23624;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// li r29,17
	r29.s64 = 17;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,200
	ctx.r3.s64 = 200;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252249c
	if (cr6.eq) goto loc_8252249C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r27,14
	r27.s64 = 14;
	// bl 0x82532768
	sub_82532768(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825224a0
	goto loc_825224A0;
loc_8252249C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825224A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825224f4
	if (cr6.eq) goto loc_825224F4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8252a498
	sub_8252A498(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825224f8
	goto loc_825224F8;
loc_825224F4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825224F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252254c
	if (cr6.eq) goto loc_8252254C;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82536550
	sub_82536550(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522550
	goto loc_82522550;
loc_8252254C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522550:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825225a4
	if (cr6.eq) goto loc_825225A4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82530300
	sub_82530300(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825225a8
	goto loc_825225A8;
loc_825225A4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825225A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825225fc
	if (cr6.eq) goto loc_825225FC;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82531cd8
	sub_82531CD8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522600
	goto loc_82522600;
loc_825225FC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522600:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,37
	ctx.r8.s64 = 37;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522654
	if (cr6.eq) goto loc_82522654;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8252bee8
	sub_8252BEE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522658
	goto loc_82522658;
loc_82522654:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522658:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,38
	ctx.r8.s64 = 38;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,296
	ctx.r3.s64 = 296;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825226b0
	if (cr6.eq) goto loc_825226B0;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822e6548
	sub_822E6548(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825226b4
	goto loc_825226B4;
loc_825226B0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825226B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522708
	if (cr6.eq) goto loc_82522708;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82523c58
	sub_82523C58(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8252270c
	goto loc_8252270C;
loc_82522708:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8252270C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522760
	if (cr6.eq) goto loc_82522760;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822e4760
	sub_822E4760(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522764
	goto loc_82522764;
loc_82522760:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522764:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825227b8
	if (cr6.eq) goto loc_825227B8;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822e32c0
	sub_822E32C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825227bc
	goto loc_825227BC;
loc_825227B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825227BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522810
	if (cr6.eq) goto loc_82522810;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82534fa8
	sub_82534FA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522814
	goto loc_82522814;
loc_82522810:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522814:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,43
	ctx.r8.s64 = 43;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,320
	ctx.r3.s64 = 320;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522868
	if (cr6.eq) goto loc_82522868;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82525540
	sub_82525540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8252286c
	goto loc_8252286C;
loc_82522868:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8252286C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,44
	ctx.r8.s64 = 44;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,200
	ctx.r3.s64 = 200;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825228c0
	if (cr6.eq) goto loc_825228C0;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825308e8
	sub_825308E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825228c4
	goto loc_825228C4;
loc_825228C0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825228C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825228ec
	if (cr6.eq) goto loc_825228EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825228f0
	if (!cr6.eq) goto loc_825228F0;
loc_825228EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825228F0:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// beq cr6,0x825229a0
	if (cr6.eq) goto loc_825229A0;
	// li r8,49
	ctx.r8.s64 = 49;
	// li r3,936
	ctx.r3.s64 = 936;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252294c
	if (cr6.eq) goto loc_8252294C;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8252f048
	sub_8252F048(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82522950
	goto loc_82522950;
loc_8252294C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82522950:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825229c4
	if (cr6.eq) goto loc_825229C4;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// bl 0x82535ca8
	sub_82535CA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825229c8
	goto loc_825229C8;
loc_825229A0:
	// li r8,54
	ctx.r8.s64 = 54;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825229c4
	if (cr6.eq) goto loc_825229C4;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// bl 0x822e4a58
	sub_822E4A58(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825229c8
	goto loc_825229C8;
loc_825229C4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825229C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825229DC"))) PPC_WEAK_FUNC(sub_825229DC);
PPC_FUNC_IMPL(__imp__sub_825229DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825229E0"))) PPC_WEAK_FUNC(sub_825229E0);
PPC_FUNC_IMPL(__imp__sub_825229E0) {
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
	// addi r10,r11,23568
	ctx.r10.s64 = r11.s64 + 23568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82521fb8
	sub_82521FB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82522a24
	if (cr6.eq) goto loc_82522A24;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82522A24:
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

__attribute__((alias("__imp__sub_82522A38"))) PPC_WEAK_FUNC(sub_82522A38);
PPC_FUNC_IMPL(__imp__sub_82522A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522A3C"))) PPC_WEAK_FUNC(sub_82522A3C);
PPC_FUNC_IMPL(__imp__sub_82522A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522A40"))) PPC_WEAK_FUNC(sub_82522A40);
PPC_FUNC_IMPL(__imp__sub_82522A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522A44"))) PPC_WEAK_FUNC(sub_82522A44);
PPC_FUNC_IMPL(__imp__sub_82522A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522A48"))) PPC_WEAK_FUNC(sub_82522A48);
PPC_FUNC_IMPL(__imp__sub_82522A48) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,23812
	ctx.r9.s64 = r11.s64 + 23812;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82522a84
	if (cr6.eq) goto loc_82522A84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82522a88
	if (!cr6.eq) goto loc_82522A88;
loc_82522A84:
	// li r11,0
	r11.s64 = 0;
loc_82522A88:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19488(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19488);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,160
	r28.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82522ae0
	if (!cr6.eq) goto loc_82522AE0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82522ae0
	if (!cr6.eq) goto loc_82522AE0;
	// lwz r11,19488(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19488);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82522AE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82522AF4"))) PPC_WEAK_FUNC(sub_82522AF4);
PPC_FUNC_IMPL(__imp__sub_82522AF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82522AF8"))) PPC_WEAK_FUNC(sub_82522AF8);
PPC_FUNC_IMPL(__imp__sub_82522AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r26,r3,120
	r26.s64 = ctx.r3.s64 + 120;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r28,r9
	r28.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82522da0
	if (cr6.eq) goto loc_82522DA0;
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r23,-31965
	r23.s64 = -2094858240;
loc_82522B44:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82522b58
	if (cr6.lt) goto loc_82522B58;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82522b5c
	goto loc_82522B5C;
loc_82522B58:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82522B5C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82522b8c
	if (cr6.eq) goto loc_82522B8C;
loc_82522B70:
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
	// bne cr6,0x82522b70
	if (!cr6.eq) goto loc_82522B70;
loc_82522B8C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-23612(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -23612);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82522be4
	if (cr6.eq) goto loc_82522BE4;
loc_82522BC8:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82522bc8
	if (!cr6.eq) goto loc_82522BC8;
loc_82522BE4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23612(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -23612);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-23608(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -23608);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82522c58
	if (cr6.eq) goto loc_82522C58;
loc_82522C3C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82522c3c
	if (!cr6.eq) goto loc_82522C3C;
loc_82522C58:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23608(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -23608);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-23604(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -23604);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82522ccc
	if (cr6.eq) goto loc_82522CCC;
loc_82522CB0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82522cb0
	if (!cr6.eq) goto loc_82522CB0;
loc_82522CCC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23604(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -23604);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-23600(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -23600);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82522d3c
	if (cr6.eq) goto loc_82522D3C;
loc_82522D20:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82522d20
	if (!cr6.eq) goto loc_82522D20;
loc_82522D3C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23600(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -23600);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bne cr6,0x82522b44
	if (!cr6.eq) goto loc_82522B44;
loc_82522DA0:
	// lwz r11,132(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82522f1c
	if (cr6.eq) goto loc_82522F1C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82522e84
	if (cr6.eq) goto loc_82522E84;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82522f7c
	if (!cr6.eq) goto loc_82522F7C;
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522dd8
	if (cr6.lt) goto loc_82522DD8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522ddc
	goto loc_82522DDC;
loc_82522DD8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522DDC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522e04
	if (cr6.lt) goto loc_82522E04;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522e08
	goto loc_82522E08;
loc_82522E04:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522E08:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522e30
	if (cr6.lt) goto loc_82522E30;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522e34
	goto loc_82522E34;
loc_82522E30:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522E34:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522e58
	if (cr6.lt) goto loc_82522E58;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522e5c
	goto loc_82522E5C;
loc_82522E58:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522E5C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9450
	return;
loc_82522E84:
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522ea0
	if (cr6.lt) goto loc_82522EA0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522ea4
	goto loc_82522EA4;
loc_82522EA0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522EA4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522ecc
	if (cr6.lt) goto loc_82522ECC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522ed0
	goto loc_82522ED0;
loc_82522ECC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522ED0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522ef4
	if (cr6.lt) goto loc_82522EF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522ef8
	goto loc_82522EF8;
loc_82522EF4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522EF8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9450
	return;
loc_82522F1C:
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522f38
	if (cr6.lt) goto loc_82522F38;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522f3c
	goto loc_82522F3C;
loc_82522F38:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522F3C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82522f60
	if (cr6.lt) goto loc_82522F60;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522f64
	goto loc_82522F64;
loc_82522F60:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82522F64:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251f3a8
	sub_8251F3A8(ctx, base);
loc_82522F7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82522F80"))) PPC_WEAK_FUNC(sub_82522F80);
PPC_FUNC_IMPL(__imp__sub_82522F80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82522F84"))) PPC_WEAK_FUNC(sub_82522F84);
PPC_FUNC_IMPL(__imp__sub_82522F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522F88"))) PPC_WEAK_FUNC(sub_82522F88);
PPC_FUNC_IMPL(__imp__sub_82522F88) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq cr6,0x82523100
	if (cr6.eq) goto loc_82523100;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-23612(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23612);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-23604(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23604);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-23600(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23600);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82523018
	if (cr6.eq) goto loc_82523018;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252301c
	if (!cr6.eq) goto loc_8252301C;
loc_82523018:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8252301C:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r4,-23596(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23596);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8252304c
	if (!cr6.lt) goto loc_8252304C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8252304C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8252306c
	if (!cr6.lt) goto loc_8252306C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8252306C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r9,17016
	ctx.r6.s64 = ctx.r9.s64 + 17016;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-23592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23592);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825230ec
	if (cr6.eq) goto loc_825230EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_825230EC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82523100
	if (cr6.lt) goto loc_82523100;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82523100:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8252310C"))) PPC_WEAK_FUNC(sub_8252310C);
PPC_FUNC_IMPL(__imp__sub_8252310C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82523110"))) PPC_WEAK_FUNC(sub_82523110);
PPC_FUNC_IMPL(__imp__sub_82523110) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r10,r11,23812
	ctx.r10.s64 = r11.s64 + 23812;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// addi r29,r11,12168
	r29.s64 = r11.s64 + 12168;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82523164
	if (cr6.eq) goto loc_82523164;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82523168
	if (!cr6.eq) goto loc_82523168;
loc_82523164:
	// li r11,0
	r11.s64 = 0;
loc_82523168:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,712
	ctx.r3.s64 = ctx.r9.s64 + 712;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19488(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19488);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825231BC"))) PPC_WEAK_FUNC(sub_825231BC);
PPC_FUNC_IMPL(__imp__sub_825231BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825231C0"))) PPC_WEAK_FUNC(sub_825231C0);
PPC_FUNC_IMPL(__imp__sub_825231C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23616);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825231CC"))) PPC_WEAK_FUNC(sub_825231CC);
PPC_FUNC_IMPL(__imp__sub_825231CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825231D0"))) PPC_WEAK_FUNC(sub_825231D0);
PPC_FUNC_IMPL(__imp__sub_825231D0) {
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
	// bl 0x82522a48
	sub_82522A48(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523208
	if (cr6.eq) goto loc_82523208;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82523208:
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

__attribute__((alias("__imp__sub_8252321C"))) PPC_WEAK_FUNC(sub_8252321C);
PPC_FUNC_IMPL(__imp__sub_8252321C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523220"))) PPC_WEAK_FUNC(sub_82523220);
PPC_FUNC_IMPL(__imp__sub_82523220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-23532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23532);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252322C"))) PPC_WEAK_FUNC(sub_8252322C);
PPC_FUNC_IMPL(__imp__sub_8252322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523230"))) PPC_WEAK_FUNC(sub_82523230);
PPC_FUNC_IMPL(__imp__sub_82523230) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523234"))) PPC_WEAK_FUNC(sub_82523234);
PPC_FUNC_IMPL(__imp__sub_82523234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523238"))) PPC_WEAK_FUNC(sub_82523238);
PPC_FUNC_IMPL(__imp__sub_82523238) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f9d8
	sub_8251F9D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82523274"))) PPC_WEAK_FUNC(sub_82523274);
PPC_FUNC_IMPL(__imp__sub_82523274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523278"))) PPC_WEAK_FUNC(sub_82523278);
PPC_FUNC_IMPL(__imp__sub_82523278) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// addi r10,r11,24044
	ctx.r10.s64 = r11.s64 + 24044;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825232b4
	if (cr6.eq) goto loc_825232B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825232b8
	if (!cr6.eq) goto loc_825232B8;
loc_825232B4:
	// li r11,0
	r11.s64 = 0;
loc_825232B8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19628(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19628);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r27,160
	r26.s64 = r27.s64 + 160;
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
	// bne cr6,0x82523310
	if (!cr6.eq) goto loc_82523310;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523310
	if (!cr6.eq) goto loc_82523310;
	// lwz r11,19628(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82523310:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252332c
	if (cr6.eq) goto loc_8252332C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82523330
	if (!cr6.eq) goto loc_82523330;
loc_8252332C:
	// li r11,0
	r11.s64 = 0;
loc_82523330:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19624(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19624);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,188
	r28.s64 = r27.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523388
	if (!cr6.eq) goto loc_82523388;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523388
	if (!cr6.eq) goto loc_82523388;
	// lwz r11,19624(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19624);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82523388:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825233A4"))) PPC_WEAK_FUNC(sub_825233A4);
PPC_FUNC_IMPL(__imp__sub_825233A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825233A8"))) PPC_WEAK_FUNC(sub_825233A8);
PPC_FUNC_IMPL(__imp__sub_825233A8) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825233d4
	if (cr6.eq) goto loc_825233D4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_825233D4:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825235b4
	if (!cr6.gt) goto loc_825235B4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r22,0
	r22.s64 = 0;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// addi r23,r11,-23524
	r23.s64 = r11.s64 + -23524;
loc_825233F4:
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// add r31,r22,r11
	r31.u64 = r22.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82523410
	if (cr6.lt) goto loc_82523410;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82523414
	goto loc_82523414;
loc_82523410:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82523414:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82523444
	if (cr6.eq) goto loc_82523444;
loc_82523428:
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
	// bne cr6,0x82523428
	if (!cr6.eq) goto loc_82523428;
loc_82523444:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r27,r31,28
	r27.s64 = r31.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82523494
	if (cr6.eq) goto loc_82523494;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82523478
	if (cr6.lt) goto loc_82523478;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8252347c
	goto loc_8252347C;
loc_82523478:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8252347C:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82523494:
	// lwz r9,-23528(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + -23528);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825234c8
	if (cr6.eq) goto loc_825234C8;
loc_825234AC:
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
	// bne cr6,0x825234ac
	if (!cr6.eq) goto loc_825234AC;
loc_825234C8:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23528(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -23528);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
	// li r28,8
	r28.s64 = 8;
loc_82523510:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82523548
	if (cr6.eq) goto loc_82523548;
loc_8252352C:
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
	// bne cr6,0x8252352c
	if (!cr6.eq) goto loc_8252352C;
loc_82523548:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82523510
	if (!cr0.eq) goto loc_82523510;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x825233f4
	if (cr6.lt) goto loc_825233F4;
loc_825235B4:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825237dc
	if (cr6.eq) goto loc_825237DC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825236e8
	if (cr6.eq) goto loc_825236E8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82523850
	if (!cr6.eq) goto loc_82523850;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// lfd f0,18272(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 18272);
	// lfd f13,16944(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// stfd f0,88(r25)
	PPC_STORE_U64(r25.u32 + 88, f0.u64);
	// stfd f13,64(r25)
	PPC_STORE_U64(r25.u32 + 64, ctx.f13.u64);
	// stfd f0,96(r25)
	PPC_STORE_U64(r25.u32 + 96, f0.u64);
	// stfd f13,72(r25)
	PPC_STORE_U64(r25.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r25)
	PPC_STORE_U64(r25.u32 + 56, ctx.f13.u64);
	// stfd f0,104(r25)
	PPC_STORE_U64(r25.u32 + 104, f0.u64);
	// stfd f13,80(r25)
	PPC_STORE_U64(r25.u32 + 80, ctx.f13.u64);
	// stfd f0,112(r25)
	PPC_STORE_U64(r25.u32 + 112, f0.u64);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82523620
	if (cr6.lt) goto loc_82523620;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523624
	goto loc_82523624;
loc_82523620:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523624:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252364c
	if (cr6.lt) goto loc_8252364C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523650
	goto loc_82523650;
loc_8252364C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523650:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82523678
	if (cr6.lt) goto loc_82523678;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252367c
	goto loc_8252367C;
loc_82523678:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252367C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825236a0
	if (cr6.lt) goto loc_825236A0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825236a4
	goto loc_825236A4;
loc_825236A0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825236A4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// b 0x82523850
	goto loc_82523850;
loc_825236E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfd f12,18264(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18264);
	// addi r31,r25,8
	r31.s64 = r25.s64 + 8;
	// lfd f0,18272(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18272);
	// lfd f13,16944(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16944);
	// lfd f11,18256(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 18256);
	// stfd f12,32(r25)
	PPC_STORE_U64(r25.u32 + 32, ctx.f12.u64);
	// stfd f0,48(r25)
	PPC_STORE_U64(r25.u32 + 48, f0.u64);
	// stfd f13,16(r25)
	PPC_STORE_U64(r25.u32 + 16, ctx.f13.u64);
	// stfd f0,40(r25)
	PPC_STORE_U64(r25.u32 + 40, f0.u64);
	// stfd f13,24(r25)
	PPC_STORE_U64(r25.u32 + 24, ctx.f13.u64);
	// stfd f11,8(r25)
	PPC_STORE_U64(r25.u32 + 8, ctx.f11.u64);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82523740
	if (cr6.lt) goto loc_82523740;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523744
	goto loc_82523744;
loc_82523740:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523744:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252376c
	if (cr6.lt) goto loc_8252376C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523770
	goto loc_82523770;
loc_8252376C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523770:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82523794
	if (cr6.lt) goto loc_82523794;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523798
	goto loc_82523798;
loc_82523794:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523798:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// b 0x82523850
	goto loc_82523850;
loc_825237DC:
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825237f8
	if (cr6.lt) goto loc_825237F8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825237fc
	goto loc_825237FC;
loc_825237F8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825237FC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82523820
	if (cr6.lt) goto loc_82523820;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523824
	goto loc_82523824;
loc_82523820:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523824:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,18248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18248);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82523850:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82523874
	if (cr6.eq) goto loc_82523874;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82523874:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82523878"))) PPC_WEAK_FUNC(sub_82523878);
PPC_FUNC_IMPL(__imp__sub_82523878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8252387C"))) PPC_WEAK_FUNC(sub_8252387C);
PPC_FUNC_IMPL(__imp__sub_8252387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523880"))) PPC_WEAK_FUNC(sub_82523880);
PPC_FUNC_IMPL(__imp__sub_82523880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825239a4
	if (cr6.eq) goto loc_825239A4;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825239a4
	if (!cr6.lt) goto loc_825239A4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825238d8
	if (cr6.lt) goto loc_825238D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825238dc
	goto loc_825238DC;
loc_825238D8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825238DC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r29,8(r28)
	r29.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82523918
	if (cr6.eq) goto loc_82523918;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
loc_82523918:
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825239a4
	if (cr6.eq) goto loc_825239A4;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r8,r11
	ctx.r8.s64 = r11.s32;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r7,24104
	ctx.r6.s64 = ctx.r7.s64 + 24104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825239a4
	if (cr6.eq) goto loc_825239A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_825239A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825239A8"))) PPC_WEAK_FUNC(sub_825239A8);
PPC_FUNC_IMPL(__imp__sub_825239A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825239AC"))) PPC_WEAK_FUNC(sub_825239AC);
PPC_FUNC_IMPL(__imp__sub_825239AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825239B0"))) PPC_WEAK_FUNC(sub_825239B0);
PPC_FUNC_IMPL(__imp__sub_825239B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523b00
	if (cr6.eq) goto loc_82523B00;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82523b00
	if (!cr6.lt) goto loc_82523B00;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82523a08
	if (cr6.lt) goto loc_82523A08;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82523a0c
	goto loc_82523A0C;
loc_82523A08:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82523A0C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r29,8(r28)
	r29.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82523a48
	if (cr6.eq) goto loc_82523A48;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
loc_82523A48:
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523b00
	if (cr6.eq) goto loc_82523B00;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// stfs f12,216(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// lbz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// addi r6,r7,24120
	ctx.r6.s64 = ctx.r7.s64 + 24120;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// li r30,1
	r30.s64 = 1;
loc_82523AD0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82523af8
	if (cr6.eq) goto loc_82523AF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82523AF8:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82523ad0
	if (!cr0.lt) goto loc_82523AD0;
loc_82523B00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82523B04"))) PPC_WEAK_FUNC(sub_82523B04);
PPC_FUNC_IMPL(__imp__sub_82523B04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82523B08"))) PPC_WEAK_FUNC(sub_82523B08);
PPC_FUNC_IMPL(__imp__sub_82523B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82523c4c
	if (cr6.eq) goto loc_82523C4C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// li r29,4
	r29.s64 = 4;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// addi r26,r11,17016
	r26.s64 = r11.s64 + 17016;
loc_82523B58:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82523b6c
	if (cr6.lt) goto loc_82523B6C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82523b70
	goto loc_82523B70;
loc_82523B6C:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82523B70:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82523ba0
	if (cr6.eq) goto loc_82523BA0;
loc_82523B84:
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
	// bne cr6,0x82523b84
	if (!cr6.eq) goto loc_82523B84;
loc_82523BA0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// bne cr6,0x82523bc8
	if (!cr6.eq) goto loc_82523BC8;
	// lwz r11,-23492(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -23492);
	// b 0x82523bcc
	goto loc_82523BCC;
loc_82523BC8:
	// lwz r11,-23488(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -23488);
loc_82523BCC:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82523c28
	if (cr6.eq) goto loc_82523C28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_82523C28:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82523b58
	if (!cr6.eq) goto loc_82523B58;
loc_82523C4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82523C50"))) PPC_WEAK_FUNC(sub_82523C50);
PPC_FUNC_IMPL(__imp__sub_82523C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82523C54"))) PPC_WEAK_FUNC(sub_82523C54);
PPC_FUNC_IMPL(__imp__sub_82523C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523C58"))) PPC_WEAK_FUNC(sub_82523C58);
PPC_FUNC_IMPL(__imp__sub_82523C58) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// addi r10,r11,24044
	ctx.r10.s64 = r11.s64 + 24044;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,188
	r26.s64 = r31.s64 + 188;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// addi r27,r11,14464
	r27.s64 = r11.s64 + 14464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82523cc4
	if (cr6.eq) goto loc_82523CC4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82523cc8
	if (!cr6.eq) goto loc_82523CC8;
loc_82523CC4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82523CC8:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r25,12(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-1036
	ctx.r3.s64 = ctx.r10.s64 + -1036;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,19628(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19628);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,14768
	r29.s64 = r11.s64 + 14768;
	// beq cr6,0x82523d3c
	if (cr6.eq) goto loc_82523D3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82523d40
	if (!cr6.eq) goto loc_82523D40;
loc_82523D3C:
	// li r11,0
	r11.s64 = 0;
loc_82523D40:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-988
	ctx.r3.s64 = ctx.r10.s64 + -988;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19624(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19624);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82523D90"))) PPC_WEAK_FUNC(sub_82523D90);
PPC_FUNC_IMPL(__imp__sub_82523D90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82523D94"))) PPC_WEAK_FUNC(sub_82523D94);
PPC_FUNC_IMPL(__imp__sub_82523D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523D98"))) PPC_WEAK_FUNC(sub_82523D98);
PPC_FUNC_IMPL(__imp__sub_82523D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23532);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523DA4"))) PPC_WEAK_FUNC(sub_82523DA4);
PPC_FUNC_IMPL(__imp__sub_82523DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523DA8"))) PPC_WEAK_FUNC(sub_82523DA8);
PPC_FUNC_IMPL(__imp__sub_82523DA8) {
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
	// bl 0x82523278
	sub_82523278(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523de0
	if (cr6.eq) goto loc_82523DE0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82523DE0:
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

__attribute__((alias("__imp__sub_82523DF4"))) PPC_WEAK_FUNC(sub_82523DF4);
PPC_FUNC_IMPL(__imp__sub_82523DF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523DF8"))) PPC_WEAK_FUNC(sub_82523DF8);
PPC_FUNC_IMPL(__imp__sub_82523DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r4.u32);
	// lwz r5,-23440(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23440);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523E08"))) PPC_WEAK_FUNC(sub_82523E08);
PPC_FUNC_IMPL(__imp__sub_82523E08) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523E0C"))) PPC_WEAK_FUNC(sub_82523E0C);
PPC_FUNC_IMPL(__imp__sub_82523E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523E10"))) PPC_WEAK_FUNC(sub_82523E10);
PPC_FUNC_IMPL(__imp__sub_82523E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23440);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523E1C"))) PPC_WEAK_FUNC(sub_82523E1C);
PPC_FUNC_IMPL(__imp__sub_82523E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523E20"))) PPC_WEAK_FUNC(sub_82523E20);
PPC_FUNC_IMPL(__imp__sub_82523E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// stb r9,488(r7)
	PPC_STORE_U8(ctx.r7.u32 + 488, ctx.r9.u8);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,496(r11)
	PPC_STORE_U32(r11.u32 + 496, ctx.r6.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 492, ctx.r9.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stfs f13,504(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 504, temp.u32);
	// lwz r11,888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523ED0"))) PPC_WEAK_FUNC(sub_82523ED0);
PPC_FUNC_IMPL(__imp__sub_82523ED0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,172
	r31.s64 = ctx.r3.s64 + 172;
	// li r29,10
	r29.s64 = 10;
	// li r30,0
	r30.s64 = 0;
loc_82523EEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82523f10
	if (cr6.eq) goto loc_82523F10;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r30.u32);
loc_82523F10:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82523f38
	if (cr6.eq) goto loc_82523F38;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
loc_82523F38:
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82523eec
	if (!cr0.eq) goto loc_82523EEC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251f9d8
	sub_8251F9D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82523F68"))) PPC_WEAK_FUNC(sub_82523F68);
PPC_FUNC_IMPL(__imp__sub_82523F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82523F6C"))) PPC_WEAK_FUNC(sub_82523F6C);
PPC_FUNC_IMPL(__imp__sub_82523F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523F70"))) PPC_WEAK_FUNC(sub_82523F70);
PPC_FUNC_IMPL(__imp__sub_82523F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,888(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r18,r27
	r18.u64 = r27.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// ble cr6,0x8252423c
	if (!cr6.gt) goto loc_8252423C;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,26214
	ctx.r6.s64 = 1717960704;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f31,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f30,24216(r7)
	f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24216);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r29,r3,496
	r29.s64 = ctx.r3.s64 + 496;
	// ori r28,r6,26215
	r28.u64 = ctx.r6.u64 | 26215;
	// li r19,3
	r19.s64 = 3;
	// li r20,-1
	r20.s64 = -1;
	// lis r21,-31970
	r21.s64 = -2095185920;
	// addi r26,r11,17016
	r26.s64 = r11.s64 + 17016;
	// addi r23,r10,24184
	r23.s64 = ctx.r10.s64 + 24184;
	// addi r25,r9,17752
	r25.s64 = ctx.r9.s64 + 17752;
	// addi r24,r8,13432
	r24.s64 = ctx.r8.s64 + 13432;
	// addi r22,r7,24200
	r22.s64 = ctx.r7.s64 + 24200;
loc_82523FF8:
	// lbz r11,-8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524040
	if (cr6.eq) goto loc_82524040;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(r11.s32) * int64_t(r28.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r31,r9,168
	r31.s64 = ctx.r9.s64 + 168;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// stw r7,160(r30)
	PPC_STORE_U32(r30.u32 + 160, ctx.r7.u32);
	// b 0x82524078
	goto loc_82524078;
loc_82524040:
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(r11.s32) * int64_t(r28.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r31,r9,328
	r31.s64 = ctx.r9.s64 + 328;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// stw r7,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r7.u32);
loc_82524078:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r3,-14756(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825240c8
	if (cr6.eq) goto loc_825240C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825240cc
	if (!cr6.eq) goto loc_825240CC;
loc_825240C8:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825240CC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r17,80(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// stb r27,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, r27.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lwz r11,892(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// lbz r10,161(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8252415c
	if (!cr6.eq) goto loc_8252415C;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x8252414c
	if (!cr6.eq) goto loc_8252414C;
	// lfd f0,0(r23)
	f0.u64 = PPC_LOAD_U64(r23.u32 + 0);
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - f0.f64;
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// b 0x82524168
	goto loc_82524168;
loc_8252414C:
	// lfd f0,8(r23)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r23.u32 + 8);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + f0.f64;
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// b 0x82524168
	goto loc_82524168;
loc_8252415C:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
loc_82524168:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stb r10,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// stfd f30,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, f30.u64);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r11,-8
	ctx.r5.s64 = r11.s64 + -8;
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f31,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stb r27,-8(r29)
	PPC_STORE_U8(r29.u32 + -8, r27.u8);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stw r20,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, r20.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82524204
	if (cr6.eq) goto loc_82524204;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
loc_82524204:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82524228
	if (cr6.eq) goto loc_82524228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82524228:
	// lwz r11,888(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 888);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x82523ff8
	if (cr6.lt) goto loc_82523FF8;
loc_8252423C:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r27,888(r30)
	PPC_STORE_U32(r30.u32 + 888, r27.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
}

__attribute__((alias("__imp__sub_82524254"))) PPC_WEAK_FUNC(sub_82524254);
PPC_FUNC_IMPL(__imp__sub_82524254) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82524258"))) PPC_WEAK_FUNC(sub_82524258);
PPC_FUNC_IMPL(__imp__sub_82524258) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,24228
	ctx.r9.s64 = r11.s64 + 24228;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82524298
	if (cr6.eq) goto loc_82524298;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252429c
	if (!cr6.eq) goto loc_8252429C;
loc_82524298:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8252429C:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19544(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19544);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r29,r27,896
	r29.s64 = r27.s64 + 896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825242f4
	if (!cr6.eq) goto loc_825242F4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825242f4
	if (!cr6.eq) goto loc_825242F4;
	// lwz r11,19544(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19544);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825242F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r27,160
	r30.s64 = r27.s64 + 160;
	// li r29,9
	r29.s64 = 9;
	// addi r31,r30,328
	r31.s64 = r30.s64 + 328;
loc_82524308:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82524330
	if (cr6.eq) goto loc_82524330;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_82524330:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82524308
	if (!cr0.lt) goto loc_82524308;
	// addi r31,r30,168
	r31.s64 = r30.s64 + 168;
	// li r30,9
	r30.s64 = 9;
loc_82524340:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82524368
	if (cr6.eq) goto loc_82524368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_82524368:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82524340
	if (!cr0.lt) goto loc_82524340;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252437C"))) PPC_WEAK_FUNC(sub_8252437C);
PPC_FUNC_IMPL(__imp__sub_8252437C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82524380"))) PPC_WEAK_FUNC(sub_82524380);
PPC_FUNC_IMPL(__imp__sub_82524380) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,20
	r11.s64 = 20;
	// addi r9,r10,24228
	ctx.r9.s64 = ctx.r10.s64 + 24228;
	// li r30,0
	r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// addi r11,r31,484
	r11.s64 = r31.s64 + 484;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r30.u32);
loc_8252445C:
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stfsu f0,20(r11)
	temp.f32 = float(f0.f64);
	ea = 20 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x8252445c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8252445C;
	// stw r30,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r30.u32);
	// addi r29,r31,896
	r29.s64 = r31.s64 + 896;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,888(r31)
	PPC_STORE_U32(r31.u32 + 888, r30.u32);
	// addi r28,r11,15904
	r28.s64 = r11.s64 + 15904;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825244b8
	if (cr6.eq) goto loc_825244B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825244b8
	if (cr6.eq) goto loc_825244B8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825244B8:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19544(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19544);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252450C"))) PPC_WEAK_FUNC(sub_8252450C);
PPC_FUNC_IMPL(__imp__sub_8252450C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82524510"))) PPC_WEAK_FUNC(sub_82524510);
PPC_FUNC_IMPL(__imp__sub_82524510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// beq cr6,0x82524690
	if (cr6.eq) goto loc_82524690;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r24,r3,168
	r24.s64 = ctx.r3.s64 + 168;
	// addi r22,r3,328
	r22.s64 = ctx.r3.s64 + 328;
	// li r25,0
	r25.s64 = 0;
	// addi r27,r11,24304
	r27.s64 = r11.s64 + 24304;
	// addi r26,r10,24288
	r26.s64 = ctx.r10.s64 + 24288;
loc_82524558:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r30,r25,r11
	r30.u64 = r25.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82524574
	if (cr6.lt) goto loc_82524574;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82524578
	goto loc_82524578;
loc_82524574:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82524578:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825245a8
	if (cr6.eq) goto loc_825245A8;
loc_8252458C:
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
	// bne cr6,0x8252458c
	if (!cr6.eq) goto loc_8252458C;
loc_825245A8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_825245D4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// blt cr6,0x825245d4
	if (cr6.lt) goto loc_825245D4;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8252462C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// blt cr6,0x8252462c
	if (cr6.lt) goto loc_8252462C;
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x82524558
	if (cr6.lt) goto loc_82524558;
loc_82524690:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82524800
	if (cr6.eq) goto loc_82524800;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252476c
	if (cr6.eq) goto loc_8252476C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82524870
	if (!cr6.eq) goto loc_82524870;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825246c4
	if (cr6.lt) goto loc_825246C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825246c8
	goto loc_825246C8;
loc_825246C4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825246C8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825246f0
	if (cr6.lt) goto loc_825246F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825246f4
	goto loc_825246F4;
loc_825246F0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825246F4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252471c
	if (cr6.lt) goto loc_8252471C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524720
	goto loc_82524720;
loc_8252471C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524720:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524744
	if (cr6.lt) goto loc_82524744;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524748
	goto loc_82524748;
loc_82524744:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524748:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// b 0x82524870
	goto loc_82524870;
loc_8252476C:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524788
	if (cr6.lt) goto loc_82524788;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252478c
	goto loc_8252478C;
loc_82524788:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252478C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825247b4
	if (cr6.lt) goto loc_825247B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825247b8
	goto loc_825247B8;
loc_825247B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825247B8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825247dc
	if (cr6.lt) goto loc_825247DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825247e0
	goto loc_825247E0;
loc_825247DC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825247E0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// b 0x82524870
	goto loc_82524870;
loc_82524800:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252481c
	if (cr6.lt) goto loc_8252481C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524820
	goto loc_82524820;
loc_8252481C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524820:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524844
	if (cr6.lt) goto loc_82524844;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524848
	goto loc_82524848;
loc_82524844:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524848:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f2,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82524870:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82524890"))) PPC_WEAK_FUNC(sub_82524890);
PPC_FUNC_IMPL(__imp__sub_82524890) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82524894"))) PPC_WEAK_FUNC(sub_82524894);
PPC_FUNC_IMPL(__imp__sub_82524894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524898"))) PPC_WEAK_FUNC(sub_82524898);
PPC_FUNC_IMPL(__imp__sub_82524898) {
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
	// bl 0x82524258
	sub_82524258(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825248d0
	if (cr6.eq) goto loc_825248D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825248D0:
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

__attribute__((alias("__imp__sub_825248E4"))) PPC_WEAK_FUNC(sub_825248E4);
PPC_FUNC_IMPL(__imp__sub_825248E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825248E8"))) PPC_WEAK_FUNC(sub_825248E8);
PPC_FUNC_IMPL(__imp__sub_825248E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// lwz r5,-23388(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23388);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825248F8"))) PPC_WEAK_FUNC(sub_825248F8);
PPC_FUNC_IMPL(__imp__sub_825248F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825248FC"))) PPC_WEAK_FUNC(sub_825248FC);
PPC_FUNC_IMPL(__imp__sub_825248FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524900"))) PPC_WEAK_FUNC(sub_82524900);
PPC_FUNC_IMPL(__imp__sub_82524900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r7,24444
	ctx.r6.s64 = ctx.r7.s64 + 24444;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-8
	ctx.r5.s64 = r11.s64 + -8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82757f58
	sub_82757F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252493C"))) PPC_WEAK_FUNC(sub_8252493C);
PPC_FUNC_IMPL(__imp__sub_8252493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524940"))) PPC_WEAK_FUNC(sub_82524940);
PPC_FUNC_IMPL(__imp__sub_82524940) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	r11.s64 = 4;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r6,r9,24464
	ctx.r6.s64 = ctx.r9.s64 + 24464;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// li r29,1
	r29.s64 = 1;
loc_825249B0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825249d8
	if (cr6.eq) goto loc_825249D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_825249D8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x825249b0
	if (!cr0.lt) goto loc_825249B0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825249E4"))) PPC_WEAK_FUNC(sub_825249E4);
PPC_FUNC_IMPL(__imp__sub_825249E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825249E8"))) PPC_WEAK_FUNC(sub_825249E8);
PPC_FUNC_IMPL(__imp__sub_825249E8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f9d8
	sub_8251F9D8(ctx, base);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,204
	ctx.r10.s64 = r31.s64 + 204;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82524a34
	if (cr6.lt) goto loc_82524A34;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82524a38
	goto loc_82524A38;
loc_82524A34:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82524A38:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r10,r31,232
	ctx.r10.s64 = r31.s64 + 232;
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82524a58
	if (cr6.lt) goto loc_82524A58;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82524a5c
	goto loc_82524A5C;
loc_82524A58:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82524A5C:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r10,r31,260
	ctx.r10.s64 = r31.s64 + 260;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82524a78
	if (cr6.lt) goto loc_82524A78;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82524A78:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524aa8
	if (cr6.lt) goto loc_82524AA8;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82524AA8:
	// stb r11,288(r31)
	PPC_STORE_U8(r31.u32 + 288, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82524ABC"))) PPC_WEAK_FUNC(sub_82524ABC);
PPC_FUNC_IMPL(__imp__sub_82524ABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

