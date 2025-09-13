#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82843CB0"))) PPC_WEAK_FUNC(sub_82843CB0);
PPC_FUNC_IMPL(__imp__sub_82843CB0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82843d0c
	if (!cr6.eq) goto loc_82843D0C;
	// bl 0x82842ce8
	sub_82842CE8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x82843d04
	if (!cr6.eq) goto loc_82843D04;
	// lis r11,0
	r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// ori r10,r11,32772
	ctx.r10.u64 = r11.u64 | 32772;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82842598
	sub_82842598(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82843d10
	goto loc_82843D10;
loc_82843D04:
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82843D0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82843D10:
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

__attribute__((alias("__imp__sub_82843D24"))) PPC_WEAK_FUNC(sub_82843D24);
PPC_FUNC_IMPL(__imp__sub_82843D24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843D28"))) PPC_WEAK_FUNC(sub_82843D28);
PPC_FUNC_IMPL(__imp__sub_82843D28) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82843ff8
	if (!cr6.eq) goto loc_82843FF8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r25,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// lbz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r26,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r26.u8);
	// bne cr6,0x82843d9c
	if (!cr6.eq) goto loc_82843D9C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r11,-38
	ctx.r10.s64 = r11.s64 + -38;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82843d9c
	if (cr6.eq) goto loc_82843D9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
loc_82843D9C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82843f7c
	if (!cr6.lt) goto loc_82843F7C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r11,-10752
	r24.s64 = r11.s64 + -10752;
loc_82843DB4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x82843dec
	if (!cr6.eq) goto loc_82843DEC;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843ddc
	if (cr6.eq) goto loc_82843DDC;
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// beq cr6,0x82843de0
	if (cr6.eq) goto loc_82843DE0;
loc_82843DDC:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82843DE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843f7c
	if (cr6.eq) goto loc_82843F7C;
loc_82843DEC:
	// rlwinm r9,r11,25,23,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FE;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// lhzx r11,r9,r24
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843e78
	if (cr6.eq) goto loc_82843E78;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82843e30
	if (cr6.eq) goto loc_82843E30;
	// rlwinm r9,r10,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r24
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + r24.u32);
	// and r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe. r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82843e78
	if (cr0.eq) goto loc_82843E78;
loc_82843E30:
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843e78
	if (cr6.eq) goto loc_82843E78;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82843e60
	if (!cr6.eq) goto loc_82843E60;
	// stw r25,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x828417b0
	sub_828417B0(ctx, base);
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82843E60:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841840
	sub_82841840(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// b 0x82843f6c
	goto loc_82843F6C;
loc_82843E78:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843e94
	if (cr6.eq) goto loc_82843E94;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// beq cr6,0x82843e98
	if (cr6.eq) goto loc_82843E98;
loc_82843E94:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82843E98:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// beq cr6,0x82843ed8
	if (cr6.eq) goto loc_82843ED8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82843ec8
	if (!cr6.eq) goto loc_82843EC8;
	// stw r25,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x828417b0
	sub_828417B0(ctx, base);
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82843EC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82841840
	sub_82841840(ctx, base);
	// b 0x82843f10
	goto loc_82843F10;
loc_82843ED8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x82843efc
	if (cr6.eq) goto loc_82843EFC;
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r5,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// bl 0x828417b0
	sub_828417B0(ctx, base);
	// b 0x82843f10
	goto loc_82843F10;
loc_82843EFC:
	// subf r9,r8,r11
	ctx.r9.s64 = r11.s64 - ctx.r8.s64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r11.s64 = ctx.r9.s32 >> 1;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_82843F10:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82843f34
	if (cr6.eq) goto loc_82843F34;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// beq cr6,0x82843f38
	if (cr6.eq) goto loc_82843F38;
loc_82843F34:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82843F38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843f50
	if (cr6.eq) goto loc_82843F50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82843f6c
	goto loc_82843F6C;
loc_82843F50:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843f6c
	if (!cr6.lt) goto loc_82843F6C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82843F6C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82843db4
	if (cr6.lt) goto loc_82843DB4;
loc_82843F7C:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843f98
	if (cr6.eq) goto loc_82843F98;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82843F98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843fe8
	if (!cr6.lt) goto loc_82843FE8;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r10,60
	cr6.compare<uint32_t>(ctx.r10.u32, 60, xer);
	// bne cr6,0x82843fe0
	if (!cr6.eq) goto loc_82843FE0;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843fd0
	if (cr6.eq) goto loc_82843FD0;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// beq cr6,0x82843fd4
	if (cr6.eq) goto loc_82843FD4;
loc_82843FD0:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82843FD4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843fe8
	if (cr6.eq) goto loc_82843FE8;
loc_82843FE0:
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x82843ff4
	goto loc_82843FF4;
loc_82843FE8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ori r10,r11,32768
	ctx.r10.u64 = r11.u64 | 32768;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_82843FF4:
	// stb r25,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r25.u8);
loc_82843FF8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8284400C"))) PPC_WEAK_FUNC(sub_8284400C);
PPC_FUNC_IMPL(__imp__sub_8284400C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82844010"))) PPC_WEAK_FUNC(sub_82844010);
PPC_FUNC_IMPL(__imp__sub_82844010) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82844068
	if (!cr6.lt) goto loc_82844068;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r11,r5,r9
	r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x82844088
	if (!cr6.lt) goto loc_82844088;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8284407c
	goto loc_8284407C;
loc_82844068:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82844088
	if (cr6.lt) goto loc_82844088;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_8284407C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842fd8
	sub_82842FD8(ctx, base);
loc_82844088:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82844090"))) PPC_WEAK_FUNC(sub_82844090);
PPC_FUNC_IMPL(__imp__sub_82844090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82844094"))) PPC_WEAK_FUNC(sub_82844094);
PPC_FUNC_IMPL(__imp__sub_82844094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82844098"))) PPC_WEAK_FUNC(sub_82844098);
PPC_FUNC_IMPL(__imp__sub_82844098) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// addi r10,r11,12292
	ctx.r10.s64 = r11.s64 + 12292;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
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

__attribute__((alias("__imp__sub_828440EC"))) PPC_WEAK_FUNC(sub_828440EC);
PPC_FUNC_IMPL(__imp__sub_828440EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828440F0"))) PPC_WEAK_FUNC(sub_828440F0);
PPC_FUNC_IMPL(__imp__sub_828440F0) {
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
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,12292
	ctx.r8.s64 = ctx.r10.s64 + 12292;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// sth r11,74(r31)
	PPC_STORE_U16(r31.u32 + 74, r11.u16);
	// sth r11,76(r31)
	PPC_STORE_U16(r31.u32 + 76, r11.u16);
	// sth r11,78(r31)
	PPC_STORE_U16(r31.u32 + 78, r11.u16);
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82844164"))) PPC_WEAK_FUNC(sub_82844164);
PPC_FUNC_IMPL(__imp__sub_82844164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82844168"))) PPC_WEAK_FUNC(sub_82844168);
PPC_FUNC_IMPL(__imp__sub_82844168) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x828021a8
	sub_828021A8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// bl 0x82801798
	sub_82801798(ctx, base);
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

__attribute__((alias("__imp__sub_828441D8"))) PPC_WEAK_FUNC(sub_828441D8);
PPC_FUNC_IMPL(__imp__sub_828441D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828441DC"))) PPC_WEAK_FUNC(sub_828441DC);
PPC_FUNC_IMPL(__imp__sub_828441DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828441E0"))) PPC_WEAK_FUNC(sub_828441E0);
PPC_FUNC_IMPL(__imp__sub_828441E0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82844010
	sub_82844010(ctx, base);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x8284424c
	if (!cr6.gt) goto loc_8284424C;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf. r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq 0x8284424c
	if (cr0.eq) goto loc_8284424C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82844230:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82844244
	if (cr6.eq) goto loc_82844244;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82844244:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bdnz 0x82844230
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82844230;
loc_8284424C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82844250"))) PPC_WEAK_FUNC(sub_82844250);
PPC_FUNC_IMPL(__imp__sub_82844250) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82844254"))) PPC_WEAK_FUNC(sub_82844254);
PPC_FUNC_IMPL(__imp__sub_82844254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82844258"))) PPC_WEAK_FUNC(sub_82844258);
PPC_FUNC_IMPL(__imp__sub_82844258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82843220
	sub_82843220(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addic. r3,r10,-44
	xer.ca = ctx.r10.u32 > 43;
	ctx.r3.s64 = ctx.r10.s64 + -44;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x828442a4
	if (cr0.eq) goto loc_828442A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82841c08
	sub_82841C08(ctx, base);
loc_828442A4:
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

__attribute__((alias("__imp__sub_828442B8"))) PPC_WEAK_FUNC(sub_828442B8);
PPC_FUNC_IMPL(__imp__sub_828442B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828442BC"))) PPC_WEAK_FUNC(sub_828442BC);
PPC_FUNC_IMPL(__imp__sub_828442BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828442C0"))) PPC_WEAK_FUNC(sub_828442C0);
PPC_FUNC_IMPL(__imp__sub_828442C0) {
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
	// mulli r11,r4,84
	r11.s64 = ctx.r4.s64 * 84;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r11,r11,-84
	r11.s64 = r11.s64 + -84;
	// beq cr6,0x82844318
	if (cr6.eq) goto loc_82844318;
	// addi r31,r11,60
	r31.s64 = r11.s64 + 60;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,12292
	r29.s64 = r11.s64 + 12292;
loc_828442F0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-84
	r31.s64 = r31.s64 + -84;
	// bne 0x828442f0
	if (!cr0.eq) goto loc_828442F0;
loc_82844318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284431C"))) PPC_WEAK_FUNC(sub_8284431C);
PPC_FUNC_IMPL(__imp__sub_8284431C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82844320"))) PPC_WEAK_FUNC(sub_82844320);
PPC_FUNC_IMPL(__imp__sub_82844320) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82844360
	if (!cr6.eq) goto loc_82844360;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82844398
	if (cr6.eq) goto loc_82844398;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82844398
	goto loc_82844398;
loc_82844360:
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mulli r4,r30,84
	ctx.r4.s64 = r30.s64 * 84;
	// beq cr6,0x82844384
	if (cr6.eq) goto loc_82844384;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x82844394
	goto loc_82844394;
loc_82844384:
	// li r11,2
	r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_82844394:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82844398:
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

__attribute__((alias("__imp__sub_828443B0"))) PPC_WEAK_FUNC(sub_828443B0);
PPC_FUNC_IMPL(__imp__sub_828443B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828443B4"))) PPC_WEAK_FUNC(sub_828443B4);
PPC_FUNC_IMPL(__imp__sub_828443B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828443B8"))) PPC_WEAK_FUNC(sub_828443B8);
PPC_FUNC_IMPL(__imp__sub_828443B8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x828441e0
	sub_828441E0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8284441c
	if (!cr6.lt) goto loc_8284441C;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_8284441C:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8284445c
	if (cr0.eq) goto loc_8284445C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82844454
	if (cr6.eq) goto loc_82844454;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82844454:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8284445C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82844460"))) PPC_WEAK_FUNC(sub_82844460);
PPC_FUNC_IMPL(__imp__sub_82844460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82844464"))) PPC_WEAK_FUNC(sub_82844464);
PPC_FUNC_IMPL(__imp__sub_82844464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82844468"))) PPC_WEAK_FUNC(sub_82844468);
PPC_FUNC_IMPL(__imp__sub_82844468) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x828444b8
	if (!cr6.lt) goto loc_828444B8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r5,84
	ctx.r10.s64 = ctx.r5.s64 * 84;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x828442c0
	sub_828442C0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x828444d8
	if (!cr6.lt) goto loc_828444D8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x828444cc
	goto loc_828444CC;
loc_828444B8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x828444d8
	if (cr6.lt) goto loc_828444D8;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_828444CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82844320
	sub_82844320(ctx, base);
loc_828444D8:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_828444E0"))) PPC_WEAK_FUNC(sub_828444E0);
PPC_FUNC_IMPL(__imp__sub_828444E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_828444E4"))) PPC_WEAK_FUNC(sub_828444E4);
PPC_FUNC_IMPL(__imp__sub_828444E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828444E8"))) PPC_WEAK_FUNC(sub_828444E8);
PPC_FUNC_IMPL(__imp__sub_828444E8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828445ac
	if (cr6.eq) goto loc_828445AC;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lis r26,-256
	r26.s64 = -16777216;
	// addi r28,r10,12292
	r28.s64 = ctx.r10.s64 + 12292;
	// addi r27,r11,-300
	r27.s64 = r11.s64 + -300;
loc_82844520:
	// addic. r11,r31,-24
	xer.ca = r31.u32 > 23;
	r11.s64 = r31.s64 + -24;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828445a0
	if (cr0.eq) goto loc_828445A0;
	// stw r30,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, r30.u32);
	// addi r3,r31,-24
	ctx.r3.s64 = r31.s64 + -24;
	// stw r30,-20(r31)
	PPC_STORE_U32(r31.u32 + -20, r30.u32);
	// stw r30,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r30.u32);
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// stw r29,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r29.u32);
	// stw r27,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r27.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// sth r30,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r30.u16);
	// sth r30,30(r31)
	PPC_STORE_U16(r31.u32 + 30, r30.u16);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// sth r30,34(r31)
	PPC_STORE_U16(r31.u32 + 34, r30.u16);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// sth r30,48(r31)
	PPC_STORE_U16(r31.u32 + 48, r30.u16);
	// sth r30,50(r31)
	PPC_STORE_U16(r31.u32 + 50, r30.u16);
	// sth r30,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r30.u16);
	// sth r30,54(r31)
	PPC_STORE_U16(r31.u32 + 54, r30.u16);
	// sth r30,56(r31)
	PPC_STORE_U16(r31.u32 + 56, r30.u16);
	// sth r30,58(r31)
	PPC_STORE_U16(r31.u32 + 58, r30.u16);
loc_828445A0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// bne 0x82844520
	if (!cr0.eq) goto loc_82844520;
loc_828445AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_828445B0"))) PPC_WEAK_FUNC(sub_828445B0);
PPC_FUNC_IMPL(__imp__sub_828445B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_828445B4"))) PPC_WEAK_FUNC(sub_828445B4);
PPC_FUNC_IMPL(__imp__sub_828445B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828445B8"))) PPC_WEAK_FUNC(sub_828445B8);
PPC_FUNC_IMPL(__imp__sub_828445B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x828445e8
	if (!cr6.eq) goto loc_828445E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828441e0
	sub_828441E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_828445E8:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82844610
	if (cr6.eq) goto loc_82844610;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82844610:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82844648"))) PPC_WEAK_FUNC(sub_82844648);
PPC_FUNC_IMPL(__imp__sub_82844648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284464C"))) PPC_WEAK_FUNC(sub_8284464C);
PPC_FUNC_IMPL(__imp__sub_8284464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82844650"))) PPC_WEAK_FUNC(sub_82844650);
PPC_FUNC_IMPL(__imp__sub_82844650) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82844ce8
	if (!cr6.gt) goto loc_82844CE8;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82842688
	sub_82842688(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x828446d0
	if (cr6.lt) goto loc_828446D0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x828446d4
	if (!cr6.gt) goto loc_828446D4;
loc_828446D0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_828446D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x828448c0
	if (cr6.eq) goto loc_828448C0;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bne cr6,0x82844768
	if (!cr6.eq) goto loc_82844768;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82844700
	if (!cr6.gt) goto loc_82844700;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82844700:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82844744
	if (!cr6.eq) goto loc_82844744;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82841b98
	sub_82841B98(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// b 0x828449a8
	goto loc_828449A8;
loc_82844744:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// b 0x828449a8
	goto loc_828449A8;
loc_82844768:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8284486c
	if (!cr6.gt) goto loc_8284486C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82841b38
	sub_82841B38(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x828447c0
	if (!cr6.gt) goto loc_828447C0;
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// b 0x828447c8
	goto loc_828447C8;
loc_828447C0:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_828447C8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x828447ec
	if (!cr6.gt) goto loc_828447EC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_828447EC:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r6
	cr6.compare<int32_t>(r28.s32, ctx.r6.s32, xer);
	// bge cr6,0x82844828
	if (!cr6.lt) goto loc_82844828;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82844828:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// bge cr6,0x82844858
	if (!cr6.lt) goto loc_82844858;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82844858:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828449b4
	if (cr6.eq) goto loc_828449B4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// b 0x828449b4
	goto loc_828449B4;
loc_8284486C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82844880
	if (!cr6.gt) goto loc_82844880;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82844888
	goto loc_82844888;
loc_82844880:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82844888:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8284489c
	if (!cr6.lt) goto loc_8284489C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_8284489C:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// b 0x828449a8
	goto loc_828449A8;
loc_828448C0:
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x828448e0
	if (cr6.lt) goto loc_828448E0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x828448e4
	if (!cr6.gt) goto loc_828448E4;
loc_828448E0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_828448E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82844954
	if (cr6.eq) goto loc_82844954;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82844914
	if (!cr6.gt) goto loc_82844914;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x8284491c
	goto loc_8284491C;
loc_82844914:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8284491C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82844930
	if (!cr6.lt) goto loc_82844930;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_82844930:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// b 0x828449a8
	goto loc_828449A8;
loc_82844954:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8283ac90
	sub_8283AC90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ble cr6,0x82844978
	if (!cr6.gt) goto loc_82844978;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// b 0x82844998
	goto loc_82844998;
loc_82844978:
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82844998
	if (!cr6.lt) goto loc_82844998;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82844998:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
loc_828449A8:
	// bge cr6,0x828449b4
	if (!cr6.lt) goto loc_828449B4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_828449B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82844a54
	if (!cr6.eq) goto loc_82844A54;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_828449D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82844a10
	if (cr6.lt) goto loc_82844A10;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82844a14
	if (!cr6.gt) goto loc_82844A14;
loc_82844A10:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82844A14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82844a54
	if (cr6.eq) goto loc_82844A54;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82844a40
	if (cr6.lt) goto loc_82844A40;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82844a40
	if (!cr6.lt) goto loc_82844A40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
loc_82844A40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828449d4
	if (cr6.eq) goto loc_828449D4;
loc_82844A54:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82844a6c
	if (cr6.lt) goto loc_82844A6C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82844a70
	if (cr6.lt) goto loc_82844A70;
loc_82844A6C:
	// li r11,1
	r11.s64 = 1;
loc_82844A70:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82844b04
	if (!cr6.eq) goto loc_82844B04;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82844ac4
	if (cr6.lt) goto loc_82844AC4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82844ac8
	if (!cr6.gt) goto loc_82844AC8;
loc_82844AC4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82844AC8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82844b04
	if (cr6.eq) goto loc_82844B04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82844af0
	if (!cr6.gt) goto loc_82844AF0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82844AF0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82844B04:
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// blt cr6,0x82844b3c
	if (cr6.lt) goto loc_82844B3C;
	// addic. r4,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r4.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// blt 0x82844b3c
	if (cr0.lt) goto loc_82844B3C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82844b40
	if (cr6.lt) goto loc_82844B40;
loc_82844B3C:
	// li r11,1
	r11.s64 = 1;
loc_82844B40:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82844c04
	if (!cr6.eq) goto loc_82844C04;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82844b8c
	if (!cr6.eq) goto loc_82844B8C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82844c04
	if (cr6.lt) goto loc_82844C04;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82844c04
	if (!cr6.lt) goto loc_82844C04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// b 0x82844c04
	goto loc_82844C04;
loc_82844B8C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x82844c04
	if (!cr6.eq) goto loc_82844C04;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x82844c04
	if (!cr6.eq) goto loc_82844C04;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82844bf4
	if (cr6.lt) goto loc_82844BF4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82844bf4
	if (!cr6.lt) goto loc_82844BF4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
loc_82844BF4:
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82844C04:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82844c18
	if (!cr6.lt) goto loc_82844C18;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
loc_82844C18:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82844c2c
	if (cr6.lt) goto loc_82844C2C;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82844c30
	if (cr6.lt) goto loc_82844C30;
loc_82844C2C:
	// li r11,1
	r11.s64 = 1;
loc_82844C30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82844cf4
	if (!cr6.eq) goto loc_82844CF4;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82844c7c
	if (!cr6.eq) goto loc_82844C7C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82844cf4
	if (cr6.lt) goto loc_82844CF4;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82844cf4
	if (!cr6.lt) goto loc_82844CF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82844C7C:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r5,r31,r11
	ctx.r5.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// bne cr6,0x82844cf4
	if (!cr6.eq) goto loc_82844CF4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82844cf4
	if (!cr6.eq) goto loc_82844CF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82844cf4
	if (cr6.lt) goto loc_82844CF4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82844cf4
	if (!cr6.lt) goto loc_82844CF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82844CE8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
loc_82844CF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82844CF8"))) PPC_WEAK_FUNC(sub_82844CF8);
PPC_FUNC_IMPL(__imp__sub_82844CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82844CFC"))) PPC_WEAK_FUNC(sub_82844CFC);
PPC_FUNC_IMPL(__imp__sub_82844CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82844D00"))) PPC_WEAK_FUNC(sub_82844D00);
PPC_FUNC_IMPL(__imp__sub_82844D00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82845104
	if (!cr6.gt) goto loc_82845104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842688
	sub_82842688(ctx, base);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82844d44
	if (!cr6.eq) goto loc_82844D44;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// subf r27,r28,r10
	r27.s64 = ctx.r10.s64 - r28.s64;
loc_82844D44:
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82844d90
	if (cr6.lt) goto loc_82844D90;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82844d94
	if (!cr6.gt) goto loc_82844D94;
loc_82844D90:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82844D94:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82844f18
	if (cr6.eq) goto loc_82844F18;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x82844e0c
	if (!cr6.eq) goto loc_82844E0C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x82844dc0
	if (!cr6.gt) goto loc_82844DC0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82844DC0:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82844fb0
	if (!cr6.eq) goto loc_82844FB0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82844fc4
	if (cr6.lt) goto loc_82844FC4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82844fc4
	if (!cr6.lt) goto loc_82844FC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// b 0x82844fc4
	goto loc_82844FC4;
loc_82844E0C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r28,r27
	ctx.r9.u64 = r28.u64 + r27.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// ble cr6,0x82844ee4
	if (!cr6.gt) goto loc_82844EE4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82841b38
	sub_82841B38(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - r28.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82844e5c
	if (!cr6.gt) goto loc_82844E5C;
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// b 0x82844e64
	goto loc_82844E64;
loc_82844E5C:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82844E64:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82844e84
	if (!cr6.gt) goto loc_82844E84;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82844E84:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmpw cr6,r30,r7
	cr6.compare<int32_t>(r30.s32, ctx.r7.s32, xer);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bge cr6,0x82844eac
	if (!cr6.lt) goto loc_82844EAC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_82844EAC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828443b8
	sub_828443B8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82844ed0
	if (!cr6.lt) goto loc_82844ED0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_82844ED0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82844fc4
	if (cr6.eq) goto loc_82844FC4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// b 0x82844fc4
	goto loc_82844FC4;
loc_82844EE4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x82844ef8
	if (!cr6.gt) goto loc_82844EF8;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82844f00
	goto loc_82844F00;
loc_82844EF8:
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82844F00:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82844fc4
	if (!cr6.lt) goto loc_82844FC4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82844fb4
	goto loc_82844FB4;
loc_82844F18:
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82844f38
	if (cr6.lt) goto loc_82844F38;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82844f3c
	if (!cr6.gt) goto loc_82844F3C;
loc_82844F38:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82844F3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82844f8c
	if (cr6.eq) goto loc_82844F8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82844f6c
	if (!cr6.gt) goto loc_82844F6C;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82844f74
	goto loc_82844F74;
loc_82844F6C:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82844F74:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82844fc4
	if (!cr6.lt) goto loc_82844FC4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x82844fb4
	goto loc_82844FB4;
loc_82844F8C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8283ac90
	sub_8283AC90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82844fb0
	if (cr6.gt) goto loc_82844FB0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82844fb0
	if (!cr6.lt) goto loc_82844FB0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_82844FB0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82844FB4:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82844fc4
	if (!cr6.lt) goto loc_82844FC4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_82844FC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284505c
	if (!cr6.eq) goto loc_8284505C;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82844FE4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// blt cr6,0x82845018
	if (cr6.lt) goto loc_82845018;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r28,r27
	ctx.r9.u64 = r28.u64 + r27.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x8284501c
	if (!cr6.gt) goto loc_8284501C;
loc_82845018:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8284501C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284505c
	if (cr6.eq) goto loc_8284505C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82845048
	if (cr6.lt) goto loc_82845048;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82845048
	if (!cr6.lt) goto loc_82845048;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
loc_82845048:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82844fe4
	if (cr6.eq) goto loc_82844FE4;
loc_8284505C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82845074
	if (cr6.lt) goto loc_82845074;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82845078
	if (cr6.lt) goto loc_82845078;
loc_82845074:
	// li r11,1
	r11.s64 = 1;
loc_82845078:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82845104
	if (!cr6.eq) goto loc_82845104;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x828450c4
	if (cr6.lt) goto loc_828450C4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x828450c8
	if (!cr6.gt) goto loc_828450C8;
loc_828450C4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_828450C8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82845104
	if (cr6.eq) goto loc_82845104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x828450f0
	if (!cr6.gt) goto loc_828450F0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828450F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82845104:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82845108"))) PPC_WEAK_FUNC(sub_82845108);
PPC_FUNC_IMPL(__imp__sub_82845108) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8284510C"))) PPC_WEAK_FUNC(sub_8284510C);
PPC_FUNC_IMPL(__imp__sub_8284510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845110"))) PPC_WEAK_FUNC(sub_82845110);
PPC_FUNC_IMPL(__imp__sub_82845110) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x828455d8
	if (!cr6.gt) goto loc_828455D8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842688
	sub_82842688(ctx, base);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82845154
	if (!cr6.eq) goto loc_82845154;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// subf r27,r29,r10
	r27.s64 = ctx.r10.s64 - r29.s64;
loc_82845154:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x828451a0
	if (cr6.lt) goto loc_828451A0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r29,r27
	ctx.r9.u64 = r29.u64 + r27.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x828451a4
	if (!cr6.gt) goto loc_828451A4;
loc_828451A0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_828451A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828452a8
	if (cr6.eq) goto loc_828452A8;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82845204
	if (!cr6.eq) goto loc_82845204;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// ble cr6,0x828451cc
	if (!cr6.gt) goto loc_828451CC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828451CC:
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// bne 0x82845350
	if (!cr0.eq) goto loc_82845350;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82845350
	if (cr6.lt) goto loc_82845350;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82845350
	if (!cr6.lt) goto loc_82845350;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// b 0x82845350
	goto loc_82845350;
loc_82845204:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r29,r27
	ctx.r9.u64 = r29.u64 + r27.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// ble cr6,0x82845260
	if (!cr6.gt) goto loc_82845260;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x82845228
	if (!cr6.gt) goto loc_82845228;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82845230
	goto loc_82845230;
loc_82845228:
	// subf r11,r27,r10
	r11.s64 = ctx.r10.s64 - r27.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82845230:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284533c
	if (!cr6.eq) goto loc_8284533C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82845350
	if (cr6.lt) goto loc_82845350;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82845350
	if (!cr6.lt) goto loc_82845350;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// b 0x82845350
	goto loc_82845350;
loc_82845260:
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x82845270
	if (!cr6.gt) goto loc_82845270;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x82845278
	goto loc_82845278;
loc_82845270:
	// subf r11,r27,r10
	r11.s64 = ctx.r10.s64 - r27.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82845278:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x8284528c
	if (!cr6.lt) goto loc_8284528C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_8284528C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bge cr6,0x82845358
	if (!cr6.lt) goto loc_82845358;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x82845358
	goto loc_82845358;
loc_828452A8:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x828452c8
	if (cr6.lt) goto loc_828452C8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x828452cc
	if (!cr6.gt) goto loc_828452CC;
loc_828452C8:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_828452CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284532c
	if (cr6.eq) goto loc_8284532C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - r29.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x828452f4
	if (!cr6.gt) goto loc_828452F4;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// b 0x828452fc
	goto loc_828452FC;
loc_828452F4:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_828452FC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284533c
	if (!cr6.eq) goto loc_8284533C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82845350
	if (cr6.lt) goto loc_82845350;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82845350
	if (!cr6.lt) goto loc_82845350;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
	// b 0x82845350
	goto loc_82845350;
loc_8284532C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8283ac90
	sub_8283AC90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82845350
	if (cr6.gt) goto loc_82845350;
loc_8284533C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82845350
	if (!cr6.lt) goto loc_82845350;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82845350:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
loc_82845358:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828453f0
	if (!cr6.eq) goto loc_828453F0;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82845378:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// blt cr6,0x828453ac
	if (cr6.lt) goto loc_828453AC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r29,r27
	ctx.r9.u64 = r29.u64 + r27.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x828453b0
	if (!cr6.gt) goto loc_828453B0;
loc_828453AC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_828453B0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828453f0
	if (cr6.eq) goto loc_828453F0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x828453dc
	if (cr6.lt) goto loc_828453DC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x828453dc
	if (!cr6.lt) goto loc_828453DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
loc_828453DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82841b08
	sub_82841B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845378
	if (cr6.eq) goto loc_82845378;
loc_828453F0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82845408
	if (cr6.lt) goto loc_82845408;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x8284540c
	if (cr6.lt) goto loc_8284540C;
loc_82845408:
	// li r11,1
	r11.s64 = 1;
loc_8284540C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82845498
	if (!cr6.eq) goto loc_82845498;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r29,r27
	r11.u64 = r29.u64 + r27.u64;
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82845458
	if (cr6.lt) goto loc_82845458;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8284545c
	if (!cr6.gt) goto loc_8284545C;
loc_82845458:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8284545C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82845498
	if (cr6.eq) goto loc_82845498;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82845484
	if (!cr6.gt) goto loc_82845484;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82845484:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82845498:
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x828454c4
	if (cr6.lt) goto loc_828454C4;
	// addic. r8,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r8.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x828454c4
	if (cr0.lt) goto loc_828454C4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x828454c8
	if (cr6.lt) goto loc_828454C8;
loc_828454C4:
	// li r11,1
	r11.s64 = 1;
loc_828454C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284557c
	if (!cr6.eq) goto loc_8284557C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x828454ec
	if (cr6.lt) goto loc_828454EC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x828454f0
	if (cr6.lt) goto loc_828454F0;
loc_828454EC:
	// li r11,1
	r11.s64 = 1;
loc_828454F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284557c
	if (!cr6.eq) goto loc_8284557C;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r5,r27,r7
	ctx.r5.s64 = ctx.r7.s64 - r27.s64;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bne cr6,0x8284557c
	if (!cr6.eq) goto loc_8284557C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8284557c
	if (!cr6.eq) goto loc_8284557C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x8284557c
	if (cr6.lt) goto loc_8284557C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8284557c
	if (!cr6.lt) goto loc_8284557C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828445b8
	sub_828445B8(ctx, base);
loc_8284557C:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82845588:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x828455a0
	if (cr6.lt) goto loc_828455A0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x828455a4
	if (cr6.lt) goto loc_828455A4;
loc_828455A0:
	// li r11,1
	r11.s64 = 1;
loc_828455A4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828455d8
	if (!cr6.eq) goto loc_828455D8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// bge cr6,0x82845588
	if (!cr6.lt) goto loc_82845588;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// b 0x82845588
	goto loc_82845588;
loc_828455D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_828455DC"))) PPC_WEAK_FUNC(sub_828455DC);
PPC_FUNC_IMPL(__imp__sub_828455DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_828455E0"))) PPC_WEAK_FUNC(sub_828455E0);
PPC_FUNC_IMPL(__imp__sub_828455E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82844468
	sub_82844468(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,84
	r11.s64 = r11.s64 * 84;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addic. r3,r10,-84
	xer.ca = ctx.r10.u32 > 83;
	ctx.r3.s64 = ctx.r10.s64 + -84;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8284562c
	if (cr0.eq) goto loc_8284562C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82844168
	sub_82844168(ctx, base);
loc_8284562C:
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

__attribute__((alias("__imp__sub_82845640"))) PPC_WEAK_FUNC(sub_82845640);
PPC_FUNC_IMPL(__imp__sub_82845640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82845644"))) PPC_WEAK_FUNC(sub_82845644);
PPC_FUNC_IMPL(__imp__sub_82845644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845648"))) PPC_WEAK_FUNC(sub_82845648);
PPC_FUNC_IMPL(__imp__sub_82845648) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284567c
	if (cr6.eq) goto loc_8284567C;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8284567C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82844650
	sub_82844650(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828456a0
	if (cr6.eq) goto loc_828456A0;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_828456A0:
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

__attribute__((alias("__imp__sub_828456B4"))) PPC_WEAK_FUNC(sub_828456B4);
PPC_FUNC_IMPL(__imp__sub_828456B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828456B8"))) PPC_WEAK_FUNC(sub_828456B8);
PPC_FUNC_IMPL(__imp__sub_828456B8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82845708
	if (!cr6.lt) goto loc_82845708;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8283a610
	sub_8283A610(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82845728
	if (!cr6.lt) goto loc_82845728;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8284571c
	goto loc_8284571C;
loc_82845708:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82845728
	if (cr6.lt) goto loc_82845728;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_8284571C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793b58
	sub_82793B58(ctx, base);
loc_82845728:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82845730"))) PPC_WEAK_FUNC(sub_82845730);
PPC_FUNC_IMPL(__imp__sub_82845730) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82845734"))) PPC_WEAK_FUNC(sub_82845734);
PPC_FUNC_IMPL(__imp__sub_82845734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845738"))) PPC_WEAK_FUNC(sub_82845738);
PPC_FUNC_IMPL(__imp__sub_82845738) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x828456b8
	sub_828456B8(ctx, base);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x82845794
	if (!cr6.gt) goto loc_82845794;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82845794
	if (cr0.eq) goto loc_82845794;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
loc_82845780:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284578c
	if (cr6.eq) goto loc_8284578C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8284578C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82845780
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82845780;
loc_82845794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82845798"))) PPC_WEAK_FUNC(sub_82845798);
PPC_FUNC_IMPL(__imp__sub_82845798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284579C"))) PPC_WEAK_FUNC(sub_8284579C);
PPC_FUNC_IMPL(__imp__sub_8284579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828457A0"))) PPC_WEAK_FUNC(sub_828457A0);
PPC_FUNC_IMPL(__imp__sub_828457A0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82845738
	sub_82845738(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x828457f4
	if (!cr6.lt) goto loc_828457F4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_828457F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82845814
	if (cr0.eq) goto loc_82845814;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_82845814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82845818"))) PPC_WEAK_FUNC(sub_82845818);
PPC_FUNC_IMPL(__imp__sub_82845818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284581C"))) PPC_WEAK_FUNC(sub_8284581C);
PPC_FUNC_IMPL(__imp__sub_8284581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845820"))) PPC_WEAK_FUNC(sub_82845820);
PPC_FUNC_IMPL(__imp__sub_82845820) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82845850
	if (!cr6.eq) goto loc_82845850;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82845738
	sub_82845738(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82845850:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82845890
	if (cr6.eq) goto loc_82845890;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845888
	if (cr6.eq) goto loc_82845888;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82845888:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82845890:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_828458C0"))) PPC_WEAK_FUNC(sub_828458C0);
PPC_FUNC_IMPL(__imp__sub_828458C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_828458C4"))) PPC_WEAK_FUNC(sub_828458C4);
PPC_FUNC_IMPL(__imp__sub_828458C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828458C8"))) PPC_WEAK_FUNC(sub_828458C8);
PPC_FUNC_IMPL(__imp__sub_828458C8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stb r7,855(r1)
	PPC_STORE_U8(ctx.r1.u32 + 855, ctx.r7.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r9,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r9.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// li r18,0
	r18.s64 = 0;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// mr r17,r18
	r17.u64 = r18.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r19,r18
	r19.u64 = r18.u64;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r18.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// stb r18,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r18.u8);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// bge cr6,0x82845958
	if (!cr6.lt) goto loc_82845958;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r10,r31,2
	ctx.r10.s64 = r31.s64 + 2;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
loc_82845958:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// stw r18,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r18.u32);
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r18.u32);
	// stb r18,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r18.u8);
	// beq cr6,0x82845980
	if (cr6.eq) goto loc_82845980;
	// li r11,1
	r11.s64 = 1;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r11.u8);
loc_82845980:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// mr r22,r18
	r22.u64 = r18.u64;
	// bl 0x828021a8
	sub_828021A8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// bl 0x82801798
	sub_82801798(ctx, base);
	// lhz r11,394(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 394);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828459c8
	if (cr6.eq) goto loc_828459C8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x828459cc
	if (!cr6.eq) goto loc_828459CC;
loc_828459C8:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_828459CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828459f8
	if (!cr6.eq) goto loc_828459F8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x827fef40
	sub_827FEF40(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283e300
	sub_8283E300(ctx, base);
loc_828459F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x828021a8
	sub_828021A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843558
	sub_82843558(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	cr6.compare<uint32_t>(ctx.r3.u32, 32768, xer);
	// beq cr6,0x82846d78
	if (cr6.eq) goto loc_82846D78;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lfs f31,-24324(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24324);
	f31.f64 = double(temp.f32);
	// addi r15,r11,16524
	r15.s64 = r11.s64 + 16524;
	// addi r24,r10,26264
	r24.s64 = ctx.r10.s64 + 26264;
	// addi r14,r9,-28804
	r14.s64 = ctx.r9.s64 + -28804;
	// addi r21,r8,26104
	r21.s64 = ctx.r8.s64 + 26104;
	// b 0x82845a4c
	goto loc_82845A4C;
loc_82845A48:
	// lbz r27,855(r1)
	r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 855);
loc_82845A4C:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// beq cr6,0x82846c78
	if (cr6.eq) goto loc_82846C78;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bgt cr6,0x82846a54
	if (cr6.gt) goto loc_82846A54;
	// beq cr6,0x82846a5c
	if (cr6.eq) goto loc_82846A5C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// beq cr6,0x82845b20
	if (cr6.eq) goto loc_82845B20;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(r26.s32, 3, xer);
	// bne cr6,0x82846c64
	if (!cr6.eq) goto loc_82846C64;
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843d28
	sub_82843D28(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// lwz r11,312(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845ad0
	if (cr6.eq) goto loc_82845AD0;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bgt cr6,0x82845ad0
	if (cr6.gt) goto loc_82845AD0;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x82845ad0
	if (!cr6.eq) goto loc_82845AD0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283b738
	sub_8283B738(ctx, base);
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_82845AD0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x82845b0c
	if (cr6.eq) goto loc_82845B0C;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r11,r11,-84
	r11.s64 = r11.s64 + -84;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// addi r8,r11,60
	ctx.r8.s64 = r11.s64 + 60;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x8283faa0
	sub_8283FAA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82845B0C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r7,28(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// bl 0x8283faa0
	sub_8283FAA0(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82845B20:
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843c18
	sub_82843C18(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,13
	ctx.r6.s64 = 13;
	// lwz r31,316(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r30,236(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r19,-1
	r28.s64 = r19.s64 + -1;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845fe8
	if (cr6.eq) goto loc_82845FE8;
	// lbz r11,9(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845fe8
	if (cr6.eq) goto loc_82845FE8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82845fac
	if (cr6.eq) goto loc_82845FAC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82845ba8
	if (cr6.eq) goto loc_82845BA8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82846c64
	if (!cr6.eq) goto loc_82846C64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,28(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82845BA8:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82841ab0
	sub_82841AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82844258
	sub_82844258(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x827eafc8
	sub_827EAFC8(ctx, base);
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,-44
	r31.s64 = r11.s64 + -44;
	// bl 0x8283b738
	sub_8283B738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82845c08
	if (!cr6.eq) goto loc_82845C08;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82845C08:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82845e70
	if (cr6.eq) goto loc_82845E70;
	// li r27,1
	r27.s64 = 1;
	// li r29,2
	r29.s64 = 2;
loc_82845C40:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843978
	sub_82843978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bgt cr6,0x82845e54
	if (cr6.gt) goto loc_82845E54;
	// lis r12,-32124
	r12.s64 = -2105278464;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23716
	r12.s64 = r12.s64 + 23716;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82845D28;
	case 1:
		goto loc_82845E54;
	case 2:
		goto loc_82845E54;
	case 3:
		goto loc_82845E54;
	case 4:
		goto loc_82845E54;
	case 5:
		goto loc_82845E54;
	case 6:
		goto loc_82845E54;
	case 7:
		goto loc_82845DB4;
	case 8:
		goto loc_82845E54;
	case 9:
		goto loc_82845E24;
	case 10:
		goto loc_82845D14;
	case 11:
		goto loc_82845E54;
	case 12:
		goto loc_82845E54;
	case 13:
		goto loc_82845E54;
	case 14:
		goto loc_82845E54;
	case 15:
		goto loc_82845E54;
	case 16:
		goto loc_82845E54;
	case 17:
		goto loc_82845D00;
	case 18:
		goto loc_82845E54;
	case 19:
		goto loc_82845E54;
	case 20:
		goto loc_82845E54;
	case 21:
		goto loc_82845DF0;
	case 22:
		goto loc_82845D78;
	default:
		__builtin_unreachable();
	}
	// lwz r20,23848(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23848);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,23988(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23988);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24100(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24100);
	// lwz r20,23828(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23828);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,23808(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23808);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24148(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24148);
	// lwz r20,24048(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24048);
	// lwz r20,23928(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23928);
loc_82845D00:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82761758
	sub_82761758(ctx, base);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845D14:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82761758
	sub_82761758(ctx, base);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845D28:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x82845d70
	if (cr6.eq) goto loc_82845D70;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x82845d68
	if (cr6.eq) goto loc_82845D68;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bne cr6,0x82845e54
	if (!cr6.eq) goto loc_82845E54;
	// stb r27,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r27.u8);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845D68:
	// stb r29,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r29.u8);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845D70:
	// stb r18,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r18.u8);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845D78:
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82845e54
	if (cr6.lt) goto loc_82845E54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845DB4:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82845e54
	if (cr6.lt) goto loc_82845E54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845DF0:
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x82845e54
	goto loc_82845E54;
loc_82845E24:
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845e54
	if (cr6.eq) goto loc_82845E54;
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82845E54:
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82845c40
	if (!cr6.eq) goto loc_82845C40;
loc_82845E70:
	// li r11,324
	r11.s64 = 324;
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845e9c
	if (cr6.eq) goto loc_82845E9C;
	// bl 0x828423d8
	sub_828423D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82845ea0
	goto loc_82845EA0;
loc_82845E9C:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82845EA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82801368
	sub_82801368(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r9,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r8,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r8.u32);
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stb r6,76(r30)
	PPC_STORE_U8(r30.u32 + 76, ctx.r6.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845f08
	if (cr6.eq) goto loc_82845F08;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82845F08:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82845f28
	if (cr6.lt) goto loc_82845F28;
	// mulli r11,r28,84
	r11.s64 = r28.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// addi r29,r11,60
	r29.s64 = r11.s64 + 60;
	// b 0x82845f30
	goto loc_82845F30;
loc_82845F28:
	// addi r31,r1,352
	r31.s64 = ctx.r1.s64 + 352;
	// addi r29,r1,320
	r29.s64 = ctx.r1.s64 + 320;
loc_82845F30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ea3a0
	sub_827EA3A0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82845f50
	if (cr6.eq) goto loc_82845F50;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x827ff010
	sub_827FF010(ctx, base);
loc_82845F50:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82845f7c
	if (cr6.eq) goto loc_82845F7C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82845F7C:
	// stw r18,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r18.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// ori r10,r11,512
	ctx.r10.u64 = r11.u64 | 512;
	// sth r10,42(r31)
	PPC_STORE_U16(r31.u32 + 42, ctx.r10.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82845FAC:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r31,24(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r30,28(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// bl 0x8283acf0
	sub_8283ACF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82845FE8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x828440f0
	sub_828440F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828455e0
	sub_828455E0(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82844098
	sub_82844098(ctx, base);
	// lwz r19,116(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r17,112(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r31,r11,-84
	r31.s64 = r11.s64 + -84;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r26,-72(r11)
	PPC_STORE_U32(r11.u32 + -72, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x82846064
	if (cr6.lt) goto loc_82846064;
	// mulli r11,r28,84
	r11.s64 = r28.s64 * 84;
	// add r28,r11,r17
	r28.u64 = r11.u64 + r17.u64;
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r4,r28,60
	ctx.r4.s64 = r28.s64 + 60;
	// b 0x82846070
	goto loc_82846070;
loc_82846064:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82846070:
	// addi r25,r31,60
	r25.s64 = r31.s64 + 60;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x82846c64
	if (cr6.gt) goto loc_82846C64;
	// lis r12,-32124
	r12.s64 = -2105278464;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24744
	r12.s64 = r12.s64 + 24744;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_828460D8;
	case 1:
		goto loc_828463EC;
	case 2:
		goto loc_82846C64;
	case 3:
		goto loc_8284641C;
	case 4:
		goto loc_828463FC;
	case 5:
		goto loc_82846C64;
	case 6:
		goto loc_82846178;
	case 7:
		goto loc_82846234;
	case 8:
		goto loc_82846C64;
	case 9:
		goto loc_82846C64;
	case 10:
		goto loc_828466A4;
	case 11:
		goto loc_8284640C;
	default:
		__builtin_unreachable();
	}
	// lwz r20,24792(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24792);
	// lwz r20,25580(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25580);
	// lwz r20,27748(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27748);
	// lwz r20,25628(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25628);
	// lwz r20,25596(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25596);
	// lwz r20,27748(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27748);
	// lwz r20,24952(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24952);
	// lwz r20,25140(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25140);
	// lwz r20,27748(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27748);
	// lwz r20,27748(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27748);
	// lwz r20,26276(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26276);
	// lwz r20,25612(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25612);
loc_828460D8:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_828460F4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846158
	if (cr6.eq) goto loc_82846158;
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843978
	sub_82843978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846158
	if (cr6.eq) goto loc_82846158;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x82846158
	if (!cr6.eq) goto loc_82846158;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x827fefb0
	sub_827FEFB0(ctx, base);
	// lbz r11,32(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r20)
	PPC_STORE_U8(r20.u32 + 32, ctx.r10.u8);
loc_82846158:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828460f4
	if (!cr6.eq) goto loc_828460F4;
	// b 0x82846c64
	goto loc_82846C64;
loc_82846178:
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// ori r10,r11,32896
	ctx.r10.u64 = r11.u64 | 32896;
	// sth r10,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r10.u16);
	// bl 0x8283b738
	sub_8283B738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x828461a8
	if (!cr6.eq) goto loc_828461A8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_828461A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x828461d4
	if (!cr6.eq) goto loc_828461D4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x8283b608
	sub_8283B608(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_828461D4:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284620c
	if (cr6.eq) goto loc_8284620C;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r31,24(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r30,28(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// bl 0x8283acf0
	sub_8283ACF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
loc_8284620C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283b738
	sub_8283B738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x8283b608
	sub_8283B608(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_82846234:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283b738
	sub_8283B738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82846258
	if (!cr6.eq) goto loc_82846258;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// b 0x828462a4
	goto loc_828462A4;
loc_82846258:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828462a8
	if (cr6.eq) goto loc_828462A8;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284629c
	if (cr6.eq) goto loc_8284629C;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r31,24(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r30,28(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// bl 0x8283acf0
	sub_8283ACF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
loc_8284629C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283b738
	sub_8283B738(ctx, base);
loc_828462A4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_828462A8:
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828463b4
	if (cr6.eq) goto loc_828463B4;
loc_828462C4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846398
	if (cr6.eq) goto loc_82846398;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843978
	sub_82843978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846398
	if (cr6.eq) goto loc_82846398;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82846398
	if (!cr6.eq) goto loc_82846398;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846398
	if (cr6.eq) goto loc_82846398;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-35
	r11.s64 = r11.s64 + -35;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x82846398
	if (cr6.gt) goto loc_82846398;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82846360
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82846360;
	// bdzf 4*cr6+eq,0x82846374
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82846374;
	// bne cr6,0x82846384
	if (!cr6.eq) goto loc_82846384;
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// rlwinm r10,r11,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r10,0,23,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// b 0x82846394
	goto loc_82846394;
loc_82846360:
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// rlwinm r10,r11,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r10,0,23,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r9,r10,513
	ctx.r9.u64 = ctx.r10.u64 | 513;
	// b 0x82846394
	goto loc_82846394;
loc_82846374:
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// ori r10,r11,1537
	ctx.r10.u64 = r11.u64 | 1537;
	// sth r10,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r10.u16);
	// b 0x82846398
	goto loc_82846398;
loc_82846384:
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// rlwinm r10,r11,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r10,0,23,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r9,r10,1025
	ctx.r9.u64 = ctx.r10.u64 | 1025;
loc_82846394:
	// sth r9,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r9.u16);
loc_82846398:
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828462c4
	if (!cr6.eq) goto loc_828462C4;
loc_828463B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x828463dc
	if (!cr6.eq) goto loc_828463DC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x8283b608
	sub_8283B608(ctx, base);
loc_828463DC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82846c64
	goto loc_82846C64;
loc_828463EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82800388
	sub_82800388(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_828463FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82800418
	sub_82800418(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_8284640C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ff050
	sub_827FF050(ctx, base);
	// b 0x82846c64
	goto loc_82846C64;
loc_8284641C:
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_82846438:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843978
	sub_82843978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x82846684
	if (cr6.gt) goto loc_82846684;
	// lis r12,-32124
	r12.s64 = -2105278464;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25756
	r12.s64 = r12.s64 + 25756;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82846634;
	case 1:
		goto loc_82846684;
	case 2:
		goto loc_82846684;
	case 3:
		goto loc_82846684;
	case 4:
		goto loc_828464E4;
	case 5:
		goto loc_82846534;
	case 6:
		goto loc_82846684;
	case 7:
		goto loc_82846684;
	case 8:
		goto loc_82846684;
	case 9:
		goto loc_82846684;
	case 10:
		goto loc_82846684;
	case 11:
		goto loc_82846590;
	case 12:
		goto loc_82846684;
	case 13:
		goto loc_82846684;
	case 14:
		goto loc_828465F0;
	case 15:
		goto loc_82846684;
	case 16:
		goto loc_82846684;
	case 17:
		goto loc_82846548;
	default:
		__builtin_unreachable();
	}
	// lwz r20,26164(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26164);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,25828(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25828);
	// lwz r20,25908(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25908);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26000(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26000);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26096(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26096);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,26244(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26244);
	// lwz r20,25928(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25928);
loc_828464E4:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,35
	cr6.compare<uint32_t>(ctx.r10.u32, 35, xer);
	// bne cr6,0x82846684
	if (!cr6.eq) goto loc_82846684;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82841e50
	sub_82841E50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lhz r10,42(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// rlwimi r11,r9,0,8,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFF) | (r11.u64 & 0xFFFFFFFFFF000000);
	// sth r8,42(r30)
	PPC_STORE_U16(r30.u32 + 42, ctx.r8.u16);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// b 0x82846684
	goto loc_82846684;
loc_82846534:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82800160
	sub_82800160(ctx, base);
	// b 0x82846684
	goto loc_82846684;
loc_82846548:
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lwz r11,296(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82846684
	if (cr6.lt) goto loc_82846684;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, r11.u64);
	// lfd f0,344(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x827f2118
	sub_827F2118(ctx, base);
	// b 0x82846684
	goto loc_82846684;
loc_82846590:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lwz r11,304(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82846684
	if (cr6.lt) goto loc_82846684;
	// beq cr6,0x828465cc
	if (cr6.eq) goto loc_828465CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ff098
	sub_827FF098(ctx, base);
	// b 0x82846684
	goto loc_82846684;
loc_828465CC:
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// lhz r10,42(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stb r9,40(r30)
	PPC_STORE_U8(r30.u32 + 40, ctx.r9.u8);
	// sth r8,42(r30)
	PPC_STORE_U16(r30.u32 + 42, ctx.r8.u16);
	// b 0x82846684
	goto loc_82846684;
loc_828465F0:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82841650
	sub_82841650(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	f0.f64 = double(temp.f32);
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// sth r10,42(r30)
	PPC_STORE_U16(r30.u32 + 42, ctx.r10.u16);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f12.u64);
	// lhz r9,222(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 222);
	// sth r9,36(r30)
	PPC_STORE_U16(r30.u32 + 36, ctx.r9.u16);
	// b 0x82846684
	goto loc_82846684;
loc_82846634:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,35
	cr6.compare<uint32_t>(ctx.r10.u32, 35, xer);
	// bne cr6,0x82846684
	if (!cr6.eq) goto loc_82846684;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82841e50
	sub_82841E50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82846684
	if (cr6.eq) goto loc_82846684;
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lhz r9,42(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// rlwimi r10,r8,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r7,r9,1024
	ctx.r7.u64 = ctx.r9.u64 | 1024;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// sth r7,42(r30)
	PPC_STORE_U16(r30.u32 + 42, ctx.r7.u16);
loc_82846684:
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82846438
	if (!cr6.eq) goto loc_82846438;
	// b 0x82846c64
	goto loc_82846C64;
loc_828466A4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_828466C0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r6,27
	ctx.r6.s64 = 27;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843978
	sub_82843978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-15
	r11.s64 = r11.s64 + -15;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x82846a34
	if (cr6.gt) goto loc_82846A34;
	// lis r12,-32124
	r12.s64 = -2105278464;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26404
	r12.s64 = r12.s64 + 26404;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_828467A0;
	case 1:
		goto loc_82846A34;
	case 2:
		goto loc_82846A34;
	case 3:
		goto loc_82846A34;
	case 4:
		goto loc_82846A34;
	case 5:
		goto loc_82846A34;
	case 6:
		goto loc_82846A34;
	case 7:
		goto loc_82846A34;
	case 8:
		goto loc_8284676C;
	case 9:
		goto loc_82846A34;
	case 10:
		goto loc_828467DC;
	case 11:
		goto loc_82846810;
	case 12:
		goto loc_82846A34;
	case 13:
		goto loc_8284684C;
	case 14:
		goto loc_82846A34;
	case 15:
		goto loc_82846A34;
	case 16:
		goto loc_82846A34;
	case 17:
		goto loc_82846888;
	default:
		__builtin_unreachable();
	}
	// lwz r20,26528(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26528);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,26476(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26476);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,26588(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26588);
	// lwz r20,26640(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26640);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,26700(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26700);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,27188(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27188);
	// lwz r20,26760(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26760);
loc_8284676C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// ori r9,r11,4
	ctx.r9.u64 = r11.u64 | 4;
	// sth r9,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r9.u16);
	// sth r10,14(r25)
	PPC_STORE_U16(r25.u32 + 14, ctx.r10.u16);
	// b 0x82846a34
	goto loc_82846A34;
loc_828467A0:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82846a34
	if (cr6.lt) goto loc_82846A34;
	// lhz r10,22(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// sth r11,12(r25)
	PPC_STORE_U16(r25.u32 + 12, r11.u16);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// sth r8,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r8.u16);
	// b 0x82846a34
	goto loc_82846A34;
loc_828467DC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// ori r9,r11,8
	ctx.r9.u64 = r11.u64 | 8;
	// sth r9,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r9.u16);
	// sth r10,16(r25)
	PPC_STORE_U16(r25.u32 + 16, ctx.r10.u16);
	// b 0x82846a34
	goto loc_82846A34;
loc_82846810:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82846a34
	if (cr6.lt) goto loc_82846A34;
	// lhz r10,22(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// sth r11,18(r25)
	PPC_STORE_U16(r25.u32 + 18, r11.u16);
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// sth r8,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r8.u16);
	// b 0x82846a34
	goto loc_82846A34;
loc_8284684C:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82841598
	sub_82841598(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82846a34
	if (cr6.lt) goto loc_82846A34;
	// lhz r10,22(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// sth r11,20(r25)
	PPC_STORE_U16(r25.u32 + 20, r11.u16);
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// sth r8,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r8.u16);
	// b 0x82846a34
	goto loc_82846A34;
loc_82846888:
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828468c4
	if (cr6.eq) goto loc_828468C4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_828468A0:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// bl 0x82841528
	sub_82841528(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828468c4
	if (cr6.eq) goto loc_828468C4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x828468a0
	if (cr6.lt) goto loc_828468A0;
loc_828468C4:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r26.u32);
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x828468d8
	if (!cr6.eq) goto loc_828468D8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_828468D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82846918
	if (!cr6.lt) goto loc_82846918;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
loc_828468F0:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r9,93
	cr6.compare<uint32_t>(ctx.r9.u32, 93, xer);
	// beq cr6,0x82846918
	if (cr6.eq) goto loc_82846918;
	// cmplwi cr6,r9,44
	cr6.compare<uint32_t>(ctx.r9.u32, 44, xer);
	// bne cr6,0x82846908
	if (!cr6.eq) goto loc_82846908;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82846908:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// blt cr6,0x828468f0
	if (cr6.lt) goto loc_828468F0;
loc_82846918:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ff5f0
	sub_827FF5F0(ctx, base);
	// lhz r11,22(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 22);
	// mr r27,r18
	r27.u64 = r18.u64;
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// sth r10,22(r25)
	PPC_STORE_U16(r25.u32 + 22, ctx.r10.u16);
	// bge cr6,0x82846a34
	if (!cr6.lt) goto loc_82846A34;
loc_82846938:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// beq cr6,0x82846a34
	if (cr6.eq) goto loc_82846A34;
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x828469cc
	if (!cr6.lt) goto loc_828469CC;
	// addi r29,r11,-2
	r29.s64 = r11.s64 + -2;
loc_8284695C:
	// lhz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82846998
	if (cr6.eq) goto loc_82846998;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzu r11,2(r29)
	ea = 2 + r29.u32;
	r11.u64 = PPC_LOAD_U16(ea);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-48
	r30.s64 = r11.s64 + -48;
	// blt cr6,0x8284695c
	if (cr6.lt) goto loc_8284695C;
	// b 0x828469cc
	goto loc_828469CC;
loc_82846998:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x828469cc
	if (!cr6.lt) goto loc_828469CC;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
loc_828469A8:
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// bl 0x82841528
	sub_82841528(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828469cc
	if (cr6.eq) goto loc_828469CC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x828469a8
	if (cr6.lt) goto loc_828469A8;
loc_828469CC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ff110
	sub_827FF110(ctx, base);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lhzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r26.u32);
	// cmplwi cr6,r10,44
	cr6.compare<uint32_t>(ctx.r10.u32, 44, xer);
	// bne cr6,0x82846a2c
	if (!cr6.eq) goto loc_82846A2C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82846a34
	if (!cr6.lt) goto loc_82846A34;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
loc_82846A04:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// bl 0x82841528
	sub_82841528(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82846a2c
	if (cr6.eq) goto loc_82846A2C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82846a04
	if (cr6.lt) goto loc_82846A04;
	// b 0x82846a34
	goto loc_82846A34;
loc_82846A2C:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82846938
	if (cr6.lt) goto loc_82846938;
loc_82846A34:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843820
	sub_82843820(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828466c0
	if (!cr6.eq) goto loc_828466C0;
	// b 0x82846c64
	goto loc_82846C64;
loc_82846A54:
	// cmplwi cr6,r26,32773
	cr6.compare<uint32_t>(r26.u32, 32773, xer);
	// bne cr6,0x82846c64
	if (!cr6.eq) goto loc_82846C64;
loc_82846A5C:
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r18.u32);
	// mr r31,r18
	r31.u64 = r18.u64;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x82846aa0
	if (!cr6.eq) goto loc_82846AA0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82846a84
	if (cr6.eq) goto loc_82846A84;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r31,r11,-84
	r31.s64 = r11.s64 + -84;
loc_82846A84:
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843cb0
	sub_82843CB0(ctx, base);
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r29,216(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x82846ad0
	goto loc_82846AD0;
loc_82846AA0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82846ab4
	if (cr6.eq) goto loc_82846AB4;
	// lbz r11,9(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82846c64
	if (!cr6.eq) goto loc_82846C64;
loc_82846AB4:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r31,r11,-84
	r31.s64 = r11.s64 + -84;
	// lwz r30,-84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -84);
	// lwz r29,-80(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -80);
loc_82846AD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82842280
	sub_82842280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82846bb0
	if (cr6.eq) goto loc_82846BB0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842700
	sub_82842700(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82846b34
	if (cr6.eq) goto loc_82846B34;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82846c64
	if (!cr6.eq) goto loc_82846C64;
loc_82846B34:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_82846B3C:
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r31,r11,-84
	r31.s64 = r11.s64 + -84;
	// lwz r11,-76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846b64
	if (cr6.eq) goto loc_82846B64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82846ba8
	if (cr6.eq) goto loc_82846BA8;
loc_82846B64:
	// addi r31,r19,-1
	r31.s64 = r19.s64 + -1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x82844468
	sub_82844468(ctx, base);
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// lwz r17,112(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ble cr6,0x82846b98
	if (!cr6.gt) goto loc_82846B98;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// subf r4,r19,r31
	ctx.r4.s64 = r31.s64 - r19.s64;
	// add r3,r11,r17
	ctx.r3.u64 = r11.u64 + r17.u64;
	// bl 0x828444e8
	sub_828444E8(ctx, base);
loc_82846B98:
	// lwz r19,116(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x82846b3c
	if (!cr6.eq) goto loc_82846B3C;
	// b 0x82846c64
	goto loc_82846C64;
loc_82846BA8:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82846c64
	if (cr6.eq) goto loc_82846C64;
loc_82846BB0:
	// addi r30,r19,-1
	r30.s64 = r19.s64 + -1;
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r22,8(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r28,r11,24,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// rlwinm r27,r11,21,30,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x3;
	// mr r31,r19
	r31.u64 = r19.u64;
	// bl 0x82844468
	sub_82844468(ctx, base);
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(r30.u32, r19.u32, xer);
	// lwz r17,112(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ble cr6,0x82846bf8
	if (!cr6.gt) goto loc_82846BF8;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// subf r4,r19,r30
	ctx.r4.s64 = r30.s64 - r19.s64;
	// add r3,r11,r17
	ctx.r3.u64 = r11.u64 + r17.u64;
	// bl 0x828444e8
	sub_828444E8(ctx, base);
loc_82846BF8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82846cd8
	if (cr6.eq) goto loc_82846CD8;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82846c28
	if (cr6.eq) goto loc_82846C28;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82846c60
	if (!cr6.eq) goto loc_82846C60;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r26,32773
	cr6.compare<uint32_t>(r26.u32, 32773, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82846c60
	if (cr6.eq) goto loc_82846C60;
loc_82846C28:
	// lbz r10,855(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 855);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82846c60
	if (cr6.eq) goto loc_82846C60;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r30,28(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// lwz r31,24(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// bl 0x8283acf0
	sub_8283ACF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
loc_82846C60:
	// lwz r19,116(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82846C64:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82843558
	sub_82843558(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	cr6.compare<uint32_t>(ctx.r3.u32, 32768, xer);
	// bne cr6,0x82845a48
	if (!cr6.eq) goto loc_82845A48;
loc_82846C78:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82846d78
	if (cr6.eq) goto loc_82846D78;
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r30,r11,-84
	r30.s64 = r11.s64 + -84;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82846d70
	if (!cr6.eq) goto loc_82846D70;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846d58
	if (cr6.eq) goto loc_82846D58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827b5410
	sub_827B5410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82846d5c
	goto loc_82846D5C;
loc_82846CD8:
	// lwz r11,868(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c60
	if (cr6.eq) goto loc_82846C60;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846c60
	if (cr6.eq) goto loc_82846C60;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x82846c28
	if (cr6.eq) goto loc_82846C28;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x82846c60
	if (!cr6.eq) goto loc_82846C60;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// lbz r10,855(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 855);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82846d44
	if (cr6.eq) goto loc_82846D44;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r30,24(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r28,28(r20)
	r28.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// bl 0x8283acf0
	sub_8283ACF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
loc_82846D44:
	// subf r5,r29,r31
	ctx.r5.s64 = r31.s64 - r29.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82841140
	sub_82841140(ctx, base);
	// b 0x82846c60
	goto loc_82846C60;
loc_82846D58:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82846D5C:
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846d6c
	if (cr6.eq) goto loc_82846D6C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82846D6C:
	// stw r31,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r31.u32);
loc_82846D70:
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// b 0x82846de0
	goto loc_82846DE0;
loc_82846D78:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82846ddc
	if (!cr6.eq) goto loc_82846DDC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846dc4
	if (cr6.eq) goto loc_82846DC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827b5410
	sub_827B5410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82846dc8
	goto loc_82846DC8;
loc_82846DC4:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82846DC8:
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82846dd8
	if (cr6.eq) goto loc_82846DD8;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82846DD8:
	// stw r31,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r31.u32);
loc_82846DDC:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82846DE0:
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// bl 0x828011e0
	sub_828011E0(ctx, base);
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846e00
	if (cr6.eq) goto loc_82846E00;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82846E00:
	// stw r31,24(r20)
	PPC_STORE_U32(r20.u32 + 24, r31.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283fe58
	sub_8283FE58(ctx, base);
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// addi r21,r20,12
	r21.s64 = r20.s64 + 12;
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82846e28
	if (cr0.lt) goto loc_82846E28;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// blt cr6,0x82846e2c
	if (cr6.lt) goto loc_82846E2C;
loc_82846E28:
	// li r11,1
	r11.s64 = 1;
loc_82846E2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82847044
	if (!cr6.eq) goto loc_82847044;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82847044
	if (cr6.eq) goto loc_82847044;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82846eac
	if (cr6.eq) goto loc_82846EAC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846e7c
	if (cr6.eq) goto loc_82846E7C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82846e7c
	if (!cr6.lt) goto loc_82846E7C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82846e80
	goto loc_82846E80;
loc_82846E7C:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82846E80:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82846e94
	if (cr6.eq) goto loc_82846E94;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82846E94:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846ea4
	if (cr6.eq) goto loc_82846EA4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82846EA4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82847044
	if (!cr6.eq) goto loc_82847044;
loc_82846EAC:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r27,100
	r27.s64 = 100;
	// addi r24,r11,-1
	r24.s64 = r11.s64 + -1;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r22,r24,2,0,29
	r22.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r23,-256
	r23.s64 = -16777216;
	// addi r26,r10,-300
	r26.s64 = ctx.r10.s64 + -300;
	// addi r25,r11,-76
	r25.s64 = r11.s64 + -76;
	// li r16,1
	r16.s64 = 1;
	// li r15,-1
	r15.s64 = -1;
loc_82846ED8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82846ef0
	if (cr6.lt) goto loc_82846EF0;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// blt cr6,0x82846ef4
	if (cr6.lt) goto loc_82846EF4;
loc_82846EF0:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82846EF4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82847044
	if (!cr6.eq) goto loc_82847044;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwzx r28,r22,r11
	r28.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82846f60
	if (cr6.eq) goto loc_82846F60;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846f38
	if (cr6.eq) goto loc_82846F38;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82846f38
	if (!cr6.lt) goto loc_82846F38;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82846f3c
	goto loc_82846F3C;
loc_82846F38:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82846F3C:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// beq cr6,0x82846f50
	if (cr6.eq) goto loc_82846F50;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82846F50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82846f60
	if (cr6.eq) goto loc_82846F60;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82846F60:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82847044
	if (cr6.gt) goto loc_82847044;
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82847018
	if (!cr6.eq) goto loc_82847018;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82847000
	if (cr6.eq) goto loc_82847000;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// addi r29,r3,32
	r29.s64 = ctx.r3.s64 + 32;
	// stw r16,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r16.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r18.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// stw r18,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r18.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r16,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r16.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r16,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r16.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// stw r18,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r18.u32);
	// stw r18,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r18.u32);
	// stw r23,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r23.u32);
	// sth r18,68(r31)
	PPC_STORE_U16(r31.u32 + 68, r18.u16);
	// sth r18,70(r31)
	PPC_STORE_U16(r31.u32 + 70, r18.u16);
	// stb r18,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r18.u8);
	// sth r18,74(r31)
	PPC_STORE_U16(r31.u32 + 74, r18.u16);
	// stb r18,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r18.u8);
	// b 0x82847004
	goto loc_82847004;
loc_82847000:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82847004:
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82847014
	if (cr6.eq) goto loc_82847014;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82847014:
	// stw r31,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r31.u32);
loc_82847018:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8283eb40
	sub_8283EB40(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82846ef0
	if (cr6.lt) goto loc_82846EF0;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r22,r22,-4
	r22.s64 = r22.s64 + -4;
	// b 0x82846ed8
	goto loc_82846ED8;
loc_82847044:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r29,r11,12292
	r29.s64 = r11.s64 + 12292;
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r29.u32);
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mulli r11,r19,84
	r11.s64 = r19.s64 * 84;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// addi r11,r11,-84
	r11.s64 = r11.s64 + -84;
	// beq cr6,0x828470bc
	if (cr6.eq) goto loc_828470BC;
	// addi r31,r11,60
	r31.s64 = r11.s64 + 60;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82847094:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-84
	r31.s64 = r31.s64 + -84;
	// bne 0x82847094
	if (!cr0.eq) goto loc_82847094;
loc_828470BC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_828470D0"))) PPC_WEAK_FUNC(sub_828470D0);
PPC_FUNC_IMPL(__imp__sub_828470D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_828470D4"))) PPC_WEAK_FUNC(sub_828470D4);
PPC_FUNC_IMPL(__imp__sub_828470D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828470D8"))) PPC_WEAK_FUNC(sub_828470D8);
PPC_FUNC_IMPL(__imp__sub_828470D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,6(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,8(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,9(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,10(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284715c
	if (!cr6.eq) goto loc_8284715C;
	// lbz r11,11(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82847160
	if (cr6.eq) goto loc_82847160;
loc_8284715C:
	// li r11,0
	r11.s64 = 0;
loc_82847160:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_82847164"))) PPC_WEAK_FUNC(sub_82847164);
PPC_FUNC_IMPL(__imp__sub_82847164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847168"))) PPC_WEAK_FUNC(sub_82847168);
PPC_FUNC_IMPL(__imp__sub_82847168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82847200
	if (cr6.lt) goto loc_82847200;
	// beq cr6,0x828471a0
	if (cr6.eq) goto loc_828471A0;
	// lhz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x828471a4
	goto loc_828471A4;
loc_828471A0:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_828471A4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828471b8
	if (cr6.eq) goto loc_828471B8;
	// lbz r11,29(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x828471c0
	goto loc_828471C0;
loc_828471B8:
	// lhz r11,40(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_828471C0:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + f0.f64));
	// fcmpu cr6,f1,f6
	cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bge cr6,0x82847200
	if (!cr6.lt) goto loc_82847200;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82847200:
	// fsubs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
}

__attribute__((alias("__imp__sub_82847210"))) PPC_WEAK_FUNC(sub_82847210);
PPC_FUNC_IMPL(__imp__sub_82847210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847214"))) PPC_WEAK_FUNC(sub_82847214);
PPC_FUNC_IMPL(__imp__sub_82847214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847218"))) PPC_WEAK_FUNC(sub_82847218);
PPC_FUNC_IMPL(__imp__sub_82847218) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// rlwimi r10,r11,0,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8284727c
	if (!cr6.eq) goto loc_8284727C;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r10,r9,30,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, r11.u16);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r11.u8);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, r11.u16);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, r11.u16);
	// b 0x828472a0
	goto loc_828472A0;
loc_8284727C:
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,30,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, r11.u16);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
loc_828472A0:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_828472C0"))) PPC_WEAK_FUNC(sub_828472C0);
PPC_FUNC_IMPL(__imp__sub_828472C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828472C4"))) PPC_WEAK_FUNC(sub_828472C4);
PPC_FUNC_IMPL(__imp__sub_828472C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828472C8"))) PPC_WEAK_FUNC(sub_828472C8);
PPC_FUNC_IMPL(__imp__sub_828472C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,30
	ctx.r10.s64 = ctx.r3.s64 + 30;
	// rlwinm r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828472e4
	if (!cr6.eq) goto loc_828472E4;
	// addi r10,r3,42
	ctx.r10.s64 = ctx.r3.s64 + 42;
	// beq cr6,0x828472fc
	if (cr6.eq) goto loc_828472FC;
loc_828472E4:
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blr 
	return;
loc_828472FC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
}

__attribute__((alias("__imp__sub_82847310"))) PPC_WEAK_FUNC(sub_82847310);
PPC_FUNC_IMPL(__imp__sub_82847310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847314"))) PPC_WEAK_FUNC(sub_82847314);
PPC_FUNC_IMPL(__imp__sub_82847314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847318"))) PPC_WEAK_FUNC(sub_82847318);
PPC_FUNC_IMPL(__imp__sub_82847318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82847330
	if (cr6.eq) goto loc_82847330;
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// b 0x82847334
	goto loc_82847334;
loc_82847330:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82847334:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828473a8
	if (cr6.eq) goto loc_828473A8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r3,30
	ctx.r10.s64 = ctx.r3.s64 + 30;
	// bne cr6,0x8284734c
	if (!cr6.eq) goto loc_8284734C;
	// addi r10,r3,42
	ctx.r10.s64 = ctx.r3.s64 + 42;
loc_8284734C:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284739c
	if (cr6.eq) goto loc_8284739C;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82847388
	if (cr6.eq) goto loc_82847388;
	// lhz r11,-4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284738c
	if (cr6.eq) goto loc_8284738C;
loc_82847388:
	// li r11,0
	r11.s64 = 0;
loc_8284738C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x828473a0
	if (cr6.eq) goto loc_828473A0;
loc_8284739C:
	// li r11,0
	r11.s64 = 0;
loc_828473A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_828473A8:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_828473AC"))) PPC_WEAK_FUNC(sub_828473AC);
PPC_FUNC_IMPL(__imp__sub_828473AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828473B0"))) PPC_WEAK_FUNC(sub_828473B0);
PPC_FUNC_IMPL(__imp__sub_828473B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r8,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,0,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r11,7
	ctx.r7.s64 = r11.s64 + 7;
	// rlwinm r11,r7,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
}

__attribute__((alias("__imp__sub_828473D8"))) PPC_WEAK_FUNC(sub_828473D8);
PPC_FUNC_IMPL(__imp__sub_828473D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828473DC"))) PPC_WEAK_FUNC(sub_828473DC);
PPC_FUNC_IMPL(__imp__sub_828473DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828473E0"))) PPC_WEAK_FUNC(sub_828473E0);
PPC_FUNC_IMPL(__imp__sub_828473E0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82847408
	if (cr6.eq) goto loc_82847408;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8284ec88
	sub_8284EC88(ctx, base);
loc_82847408:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82847420"))) PPC_WEAK_FUNC(sub_82847420);
PPC_FUNC_IMPL(__imp__sub_82847420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847424"))) PPC_WEAK_FUNC(sub_82847424);
PPC_FUNC_IMPL(__imp__sub_82847424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847428"))) PPC_WEAK_FUNC(sub_82847428);
PPC_FUNC_IMPL(__imp__sub_82847428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// lbz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8284743C"))) PPC_WEAK_FUNC(sub_8284743C);
PPC_FUNC_IMPL(__imp__sub_8284743C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847440"))) PPC_WEAK_FUNC(sub_82847440);
PPC_FUNC_IMPL(__imp__sub_82847440) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_82847444"))) PPC_WEAK_FUNC(sub_82847444);
PPC_FUNC_IMPL(__imp__sub_82847444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847448"))) PPC_WEAK_FUNC(sub_82847448);
PPC_FUNC_IMPL(__imp__sub_82847448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x82847460
	if (cr6.lt) goto loc_82847460;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82847460:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stb r6,116(r11)
	PPC_STORE_U8(r11.u32 + 116, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847480"))) PPC_WEAK_FUNC(sub_82847480);
PPC_FUNC_IMPL(__imp__sub_82847480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82847494
	if (cr6.lt) goto loc_82847494;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82847494:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828474A4"))) PPC_WEAK_FUNC(sub_828474A4);
PPC_FUNC_IMPL(__imp__sub_828474A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828474A8"))) PPC_WEAK_FUNC(sub_828474A8);
PPC_FUNC_IMPL(__imp__sub_828474A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x828474d4
	if (!cr6.lt) goto loc_828474D4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x828474d8
	if (!cr6.lt) goto loc_828474D8;
loc_828474D4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_828474D8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfic r9,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// subfze r9,r7
	temp.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	ctx.r9.u64 = temp.u64;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
}

__attribute__((alias("__imp__sub_82847530"))) PPC_WEAK_FUNC(sub_82847530);
PPC_FUNC_IMPL(__imp__sub_82847530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847534"))) PPC_WEAK_FUNC(sub_82847534);
PPC_FUNC_IMPL(__imp__sub_82847534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847538"))) PPC_WEAK_FUNC(sub_82847538);
PPC_FUNC_IMPL(__imp__sub_82847538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bne cr6,0x82847598
	if (!cr6.eq) goto loc_82847598;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,-24324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + f0.f64));
	// fadds f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fcmpu cr6,f7,f6
	cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// b 0x828475f8
	goto loc_828475F8;
loc_82847598:
	// ble cr6,0x82847600
	if (!cr6.gt) goto loc_82847600;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828475bc
	if (cr6.eq) goto loc_828475BC;
	// lhz r11,22(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// b 0x828475c0
	goto loc_828475C0;
loc_828475BC:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_828475C0:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,-24324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fadds f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
loc_828475F8:
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82847604
	if (!cr6.gt) goto loc_82847604;
loc_82847600:
	// li r11,0
	r11.s64 = 0;
loc_82847604:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_82847608"))) PPC_WEAK_FUNC(sub_82847608);
PPC_FUNC_IMPL(__imp__sub_82847608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284760C"))) PPC_WEAK_FUNC(sub_8284760C);
PPC_FUNC_IMPL(__imp__sub_8284760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847610"))) PPC_WEAK_FUNC(sub_82847610);
PPC_FUNC_IMPL(__imp__sub_82847610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x828476e4
	if (!cr6.lt) goto loc_828476E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82847644
	if (cr6.eq) goto loc_82847644;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// b 0x82847648
	goto loc_82847648;
loc_82847644:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
loc_82847648:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x828476e4
	if (cr6.eq) goto loc_828476E4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82847660
	if (cr6.eq) goto loc_82847660;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// b 0x82847664
	goto loc_82847664;
loc_82847660:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_82847664:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x828476e4
	if (cr6.eq) goto loc_828476E4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f12,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f0,f9
	f0.f64 = double(float(ctx.f9.f64));
	// lfs f13,-24324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24324);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f7,f13
	cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bgt cr6,0x828476e4
	if (cr6.gt) goto loc_828476E4;
	// beq cr6,0x828476b8
	if (cr6.eq) goto loc_828476B8;
	// lhz r11,22(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// b 0x828476bc
	goto loc_828476BC;
loc_828476B8:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_828476BC:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_828476E4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_828476E8"))) PPC_WEAK_FUNC(sub_828476E8);
PPC_FUNC_IMPL(__imp__sub_828476E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828476EC"))) PPC_WEAK_FUNC(sub_828476EC);
PPC_FUNC_IMPL(__imp__sub_828476EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828476F0"))) PPC_WEAK_FUNC(sub_828476F0);
PPC_FUNC_IMPL(__imp__sub_828476F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82847704
	if (!cr6.eq) goto loc_82847704;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82847704:
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82847714:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82847728
	if (!cr6.lt) goto loc_82847728;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bge cr6,0x8284772c
	if (!cr6.lt) goto loc_8284772C;
loc_82847728:
	// li r11,1
	r11.s64 = 1;
loc_8284772C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284777c
	if (!cr6.eq) goto loc_8284777C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82847758
	if (cr6.eq) goto loc_82847758;
	// lhz r11,22(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// b 0x8284775c
	goto loc_8284775C;
loc_82847758:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_8284775C:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x82847768
	if (!cr6.lt) goto loc_82847768;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82847768:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82847728
	if (!cr6.lt) goto loc_82847728;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82847714
	goto loc_82847714;
loc_8284777C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_82847780"))) PPC_WEAK_FUNC(sub_82847780);
PPC_FUNC_IMPL(__imp__sub_82847780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847784"))) PPC_WEAK_FUNC(sub_82847784);
PPC_FUNC_IMPL(__imp__sub_82847784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847788"))) PPC_WEAK_FUNC(sub_82847788);
PPC_FUNC_IMPL(__imp__sub_82847788) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30364);
	f0.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f12,30352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30352);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f4,f9,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f8,f3,f10,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fadds f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f29,f5,f4
	f29.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// ble cr6,0x8284782c
	if (!cr6.gt) goto loc_8284782C;
	// fmuls f11,f29,f12
	ctx.f11.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmr f29,f0
	f29.f64 = f0.f64;
loc_8284782C:
	// lfs f10,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f10,f9
	f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x82847848
	if (!cr6.gt) goto loc_82847848;
	// fmuls f13,f30,f12
	ctx.f13.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_82847848:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_828478A4"))) PPC_WEAK_FUNC(sub_828478A4);
PPC_FUNC_IMPL(__imp__sub_828478A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828478A8"))) PPC_WEAK_FUNC(sub_828478A8);
PPC_FUNC_IMPL(__imp__sub_828478A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82847788
	sub_82847788(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f8,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// li r11,255
	r11.s64 = 255;
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// stfd f4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f4.u64);
	// lhz r9,118(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r7,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r7.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r10.u16);
	// sth r9,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r9.u16);
	// sth r10,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r10.u16);
	// sth r7,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r7.u16);
	// sth r8,170(r1)
	PPC_STORE_U16(ctx.r1.u32 + 170, ctx.r8.u16);
	// sth r9,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r9.u16);
	// sth r8,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r8.u16);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r5,92(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r9,14192
	ctx.r4.s64 = ctx.r9.s64 + 14192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,60(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82847AC4"))) PPC_WEAK_FUNC(sub_82847AC4);
PPC_FUNC_IMPL(__imp__sub_82847AC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82847AC8"))) PPC_WEAK_FUNC(sub_82847AC8);
PPC_FUNC_IMPL(__imp__sub_82847AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaae4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// fmr f26,f4
	f26.f64 = ctx.f4.f64;
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82847b00
	if (cr6.lt) goto loc_82847B00;
	// fmr f24,f13
	f24.f64 = ctx.f13.f64;
	// b 0x82847b18
	goto loc_82847B18;
loc_82847B00:
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x82847b14
	if (cr6.gt) goto loc_82847B14;
	// fmr f24,f0
	f24.f64 = f0.f64;
	// b 0x82847b18
	goto loc_82847B18;
loc_82847B14:
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
loc_82847B18:
	// lfs f29,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f2
	cr6.compare(f29.f64, ctx.f2.f64);
	// blt cr6,0x82847b2c
	if (cr6.lt) goto loc_82847B2C;
	// fmr f27,f29
	f27.f64 = f29.f64;
	// b 0x82847b3c
	goto loc_82847B3C;
loc_82847B2C:
	// lfs f27,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f27,f2
	cr6.compare(f27.f64, ctx.f2.f64);
	// ble cr6,0x82847b3c
	if (!cr6.gt) goto loc_82847B3C;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
loc_82847B3C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// lfs f25,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f25.f64 = double(temp.f32);
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// beq cr6,0x82847b60
	if (cr6.eq) goto loc_82847B60;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fadds f11,f2,f28
	ctx.f11.f64 = double(float(ctx.f2.f64 + f28.f64));
	// b 0x82847b6c
	goto loc_82847B6C;
loc_82847B60:
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// fmadds f11,f28,f25,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f28.f64 * f25.f64 + ctx.f2.f64));
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_82847B6C:
	// fcfid f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fadds f0,f10,f1
	f0.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82847b8c
	if (!cr6.lt) goto loc_82847B8C;
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82847b90
	if (cr6.gt) goto loc_82847B90;
loc_82847B8C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_82847B90:
	// fcmpu cr6,f29,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, ctx.f11.f64);
	// bge cr6,0x82847bb0
	if (!cr6.lt) goto loc_82847BB0;
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82847bac
	if (cr6.gt) goto loc_82847BAC;
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
	// b 0x82847bb0
	goto loc_82847BB0;
loc_82847BAC:
	// fmr f29,f11
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f11.f64;
loc_82847BB0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(f29.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82847c20
	if (!cr6.eq) goto loc_82847C20;
	// li r11,322
	r11.s64 = 322;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82847c08
	if (cr6.eq) goto loc_82847C08;
	// bl 0x82813cc0
	sub_82813CC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82847c0c
	goto loc_82847C0C;
loc_82847C08:
	// li r30,0
	r30.s64 = 0;
loc_82847C0C:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82847c1c
	if (cr6.eq) goto loc_82847C1C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82847C1C:
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
loc_82847C20:
	// lwz r4,340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82813ee0
	sub_82813EE0(ctx, base);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x82847c3c
	if (!cr6.eq) goto loc_82847C3C;
	// fmr f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f25.f64;
	// b 0x82847c44
	goto loc_82847C44;
loc_82847C3C:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
loc_82847C44:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82847f40
	if (cr6.gt) goto loc_82847F40;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82847c68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82847C68;
	// bdzf 4*cr6+eq,0x82847cd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82847CD0;
	// bdzf 4*cr6+eq,0x82847cd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82847CD0;
	// bne cr6,0x82847dfc
	if (!cr6.eq) goto loc_82847DFC;
loc_82847C68:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x828139c8
	sub_828139C8(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82813c98
	sub_82813C98(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab30
	// b 0x828e9468
	return;
loc_82847CD0:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = f24.f64;
	// fcmpu cr6,f24,f30
	cr6.compare(f24.f64, f30.f64);
	// bge cr6,0x82847f40
	if (!cr6.lt) goto loc_82847F40;
	// fmuls f28,f13,f26
	f28.f64 = double(float(ctx.f13.f64 * f26.f64));
	// lwz r30,356(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// fmuls f26,f28,f25
	f26.f64 = double(float(f28.f64 * f25.f64));
loc_82847CEC:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fadds f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f25,f1
	f25.f64 = ctx.f1.f64;
	// bl 0x828139c8
	sub_828139C8(ctx, base);
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fadds f1,f28,f6
	ctx.f1.f64 = double(float(f28.f64 + ctx.f6.f64));
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fadds f1,f28,f5
	ctx.f1.f64 = double(float(f28.f64 + ctx.f5.f64));
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82813c98
	sub_82813C98(ctx, base);
	// fadds f0,f26,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f26.f64 + f25.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82847cec
	if (cr6.lt) goto loc_82847CEC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab30
	// b 0x828e9468
	return;
loc_82847DFC:
	// lwz r30,356(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r28,0
	r28.s64 = 0;
	// lwz r29,348(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
loc_82847E08:
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f12,f26,f24
	f0.f64 = double(float(ctx.f12.f64 * f26.f64 + f24.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82847f30
	if (!cr6.lt) goto loc_82847F30;
	// fmuls f29,f26,f25
	f29.f64 = double(float(f26.f64 * f25.f64));
loc_82847E2C:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f27,92(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fadds f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f23,f1
	f23.f64 = ctx.f1.f64;
	// bl 0x828139c8
	sub_828139C8(ctx, base);
	// lfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f7,f26
	ctx.f1.f64 = double(float(ctx.f7.f64 + f26.f64));
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lfs f6,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f6,f28
	ctx.f2.f64 = double(float(ctx.f6.f64 + f28.f64));
	// fadds f1,f5,f26
	ctx.f1.f64 = double(float(ctx.f5.f64 + f26.f64));
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lfs f4,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f4,f28
	ctx.f2.f64 = double(float(ctx.f4.f64 + f28.f64));
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82813a08
	sub_82813A08(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82813c98
	sub_82813C98(ctx, base);
	// fadds f0,f29,f23
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 + f23.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82847e2c
	if (cr6.lt) goto loc_82847E2C;
loc_82847F30:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// fadds f27,f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f27.f64 + f28.f64));
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x82847e08
	if (cr6.lt) goto loc_82847E08;
loc_82847F40:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_82847F4C"))) PPC_WEAK_FUNC(sub_82847F4C);
PPC_FUNC_IMPL(__imp__sub_82847F4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82847F50"))) PPC_WEAK_FUNC(sub_82847F50);
PPC_FUNC_IMPL(__imp__sub_82847F50) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9410
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82848090
	if (cr6.eq) goto loc_82848090;
	// lis r11,255
	r11.s64 = 16711680;
	// mr r31,r26
	r31.u64 = r26.u64;
	// ori r28,r11,65535
	r28.u64 = r11.u64 | 65535;
	// li r27,-1
	r27.s64 = -1;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82848008
	if (!cr6.gt) goto loc_82848008;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82847F88:
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82847fbc
	if (cr6.eq) goto loc_82847FBC;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x82847fbc
	if (!cr6.eq) goto loc_82847FBC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82847FBC:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82847fe4
	if (cr6.lt) goto loc_82847FE4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82847fd4
	if (cr6.eq) goto loc_82847FD4;
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// b 0x82847fd8
	goto loc_82847FD8;
loc_82847FD4:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
loc_82847FD8:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x82847ffc
	if (cr6.lt) goto loc_82847FFC;
loc_82847FE4:
	// subf. r11,r5,r10
	r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82847ffc
	if (!cr0.lt) goto loc_82847FFC;
	// subf r11,r7,r8
	r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// b 0x82848000
	goto loc_82848000;
loc_82847FFC:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82848000:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82847f88
	if (cr6.gt) goto loc_82847F88;
loc_82848008:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82848018
	if (!cr6.eq) goto loc_82848018;
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
loc_82848018:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82848058
	if (cr6.eq) goto loc_82848058;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x82848048
	if (!cr6.eq) goto loc_82848048;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82848048:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82848058
	if (cr6.eq) goto loc_82848058;
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// b 0x8284805c
	goto loc_8284805C;
loc_82848058:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
loc_8284805C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82848090
	if (cr6.gt) goto loc_82848090;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828e9460
	return;
loc_82848090:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stb r26,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r26.u8);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_828480AC"))) PPC_WEAK_FUNC(sub_828480AC);
PPC_FUNC_IMPL(__imp__sub_828480AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_828480B0"))) PPC_WEAK_FUNC(sub_828480B0);
PPC_FUNC_IMPL(__imp__sub_828480B0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x828481dc
	if (cr6.eq) goto loc_828481DC;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8284812c
	if (!cr6.gt) goto loc_8284812C;
	// lwz r27,0(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_828480F0:
	// srawi r30,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r30.s64 = r31.s32 >> 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r29,r30,r28
	r29.u64 = r30.u64 + r28.u64;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82847168
	sub_82847168(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82848120
	if (!cr6.lt) goto loc_82848120;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// b 0x82848124
	goto loc_82848124;
loc_82848120:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82848124:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x828480f0
	if (cr6.gt) goto loc_828480F0;
loc_8284812C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bne cr6,0x8284813c
	if (!cr6.eq) goto loc_8284813C;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
loc_8284813C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// blt cr6,0x828481dc
	if (cr6.lt) goto loc_828481DC;
	// beq cr6,0x82848180
	if (cr6.eq) goto loc_82848180;
	// lhz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// b 0x82848184
	goto loc_82848184;
loc_82848180:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_82848184:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82848198
	if (cr6.eq) goto loc_82848198;
	// lbz r11,29(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x828481a0
	goto loc_828481A0;
loc_82848198:
	// lhz r11,40(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_828481A0:
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// bge cr6,0x828481dc
	if (!cr6.lt) goto loc_828481DC;
	// lbz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 116);
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r7,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r7.u32);
	// stb r9,16(r25)
	PPC_STORE_U8(r25.u32 + 16, ctx.r9.u8);
	// b 0x828481e8
	goto loc_828481E8;
loc_828481DC:
	// stw r23,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r23.u32);
	// stw r23,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r23.u32);
	// stb r23,16(r25)
	PPC_STORE_U8(r25.u32 + 16, r23.u8);
loc_828481E8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r23,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r23.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_82848204"))) PPC_WEAK_FUNC(sub_82848204);
PPC_FUNC_IMPL(__imp__sub_82848204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82848208"))) PPC_WEAK_FUNC(sub_82848208);
PPC_FUNC_IMPL(__imp__sub_82848208) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,4(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x828483a8
	if (cr6.eq) goto loc_828483A8;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82848288
	if (!cr6.gt) goto loc_82848288;
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f31.f64 = double(temp.f32);
	// lwz r27,0(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8284824C:
	// srawi r30,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r30.s64 = r31.s32 >> 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r29,r30,r28
	r29.u64 = r30.u64 + r28.u64;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82847168
	sub_82847168(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8284827c
	if (!cr6.lt) goto loc_8284827C;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// b 0x82848280
	goto loc_82848280;
loc_8284827C:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82848280:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x8284824c
	if (cr6.gt) goto loc_8284824C;
loc_82848288:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
	// bne cr6,0x82848298
	if (!cr6.eq) goto loc_82848298;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
loc_82848298:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwzx r11,r9,r4
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_828482C0:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x828483a8
	if (cr6.lt) goto loc_828483A8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x828482f4
	if (cr6.eq) goto loc_828482F4;
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// lhz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// b 0x82848300
	goto loc_82848300;
loc_828482F4:
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_82848300:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x828483a8
	if (!cr6.lt) goto loc_828483A8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// blt cr6,0x8284837c
	if (cr6.lt) goto loc_8284837C;
	// beq cr6,0x82848358
	if (cr6.eq) goto loc_82848358;
	// lhz r11,20(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// b 0x8284835c
	goto loc_8284835C;
loc_82848358:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
loc_8284835C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// blt cr6,0x828483d4
	if (cr6.lt) goto loc_828483D4;
loc_8284837C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r25
	cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, xer);
	// beq cr6,0x828483a8
	if (cr6.eq) goto loc_828483A8;
	// lwzx r11,r6,r4
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x828482c0
	if (cr6.eq) goto loc_828482C0;
loc_828483A8:
	// stw r22,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r22.u32);
	// stw r22,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r22.u32);
	// stb r22,16(r26)
	PPC_STORE_U8(r26.u32 + 16, r22.u8);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r22,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r22.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 12, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x828e9450
	return;
loc_828483D4:
	// lbz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 116);
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r5,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r5.u32);
	// stb r9,16(r26)
	PPC_STORE_U8(r26.u32 + 16, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_828483E8"))) PPC_WEAK_FUNC(sub_828483E8);
PPC_FUNC_IMPL(__imp__sub_828483E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828483b4
	// ERROR 828483B4
	return;
}

__attribute__((alias("__imp__sub_828483EC"))) PPC_WEAK_FUNC(sub_828483EC);
PPC_FUNC_IMPL(__imp__sub_828483EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828483F0"))) PPC_WEAK_FUNC(sub_828483F0);
PPC_FUNC_IMPL(__imp__sub_828483F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f30.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f12,f9
	ctx.f12.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// bne cr6,0x828484ac
	if (!cr6.eq) goto loc_828484AC;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fsqrts f31,f12
	f31.f64 = double(float(sqrt(ctx.f12.f64)));
	// b 0x828484c8
	goto loc_828484C8;
loc_828484AC:
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64 - ctx.f7.f64));
	// fdivs f31,f6,f12
	f31.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
loc_828484C8:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fabs f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_828484E8"))) PPC_WEAK_FUNC(sub_828484E8);
PPC_FUNC_IMPL(__imp__sub_828484E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828484EC"))) PPC_WEAK_FUNC(sub_828484EC);
PPC_FUNC_IMPL(__imp__sub_828484EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828484F0"))) PPC_WEAK_FUNC(sub_828484F0);
PPC_FUNC_IMPL(__imp__sub_828484F0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82848598
	if (cr6.eq) goto loc_82848598;
	// addi r29,r3,6
	r29.s64 = ctx.r3.s64 + 6;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
loc_82848510:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284858c
	if (cr6.eq) goto loc_8284858C;
	// rlwinm r11,r11,19,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x7;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284855c
	if (cr6.eq) goto loc_8284855C;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne 0x82848558
	if (!cr0.eq) goto loc_82848558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82848558:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_8284855C:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r11,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82848574
	if (cr6.eq) goto loc_82848574;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82848574:
	// rlwinm r11,r11,21,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1F;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284858c
	if (cr6.eq) goto loc_8284858C;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284858C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82848510
	if (!cr0.eq) goto loc_82848510;
loc_82848598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284859C"))) PPC_WEAK_FUNC(sub_8284859C);
PPC_FUNC_IMPL(__imp__sub_8284859C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_828485A0"))) PPC_WEAK_FUNC(sub_828485A0);
PPC_FUNC_IMPL(__imp__sub_828485A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82848600
	if (!cr6.lt) goto loc_82848600;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82848600
	if (!cr6.gt) goto loc_82848600;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828484f0
	sub_828484F0(ctx, base);
loc_82848600:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8284863C"))) PPC_WEAK_FUNC(sub_8284863C);
PPC_FUNC_IMPL(__imp__sub_8284863C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848640"))) PPC_WEAK_FUNC(sub_82848640);
PPC_FUNC_IMPL(__imp__sub_82848640) {
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
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828486f0
	if (cr6.eq) goto loc_828486F0;
	// rlwinm r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r3,r3,30
	ctx.r3.s64 = ctx.r3.s64 + 30;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284867c
	if (!cr6.eq) goto loc_8284867C;
	// addi r3,r31,42
	ctx.r3.s64 = r31.s64 + 42;
	// beq cr6,0x82848684
	if (cr6.eq) goto loc_82848684;
loc_8284867C:
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// b 0x82848688
	goto loc_82848688;
loc_82848684:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82848688:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r31,30
	ctx.r10.s64 = r31.s64 + 30;
	// bne cr6,0x8284869c
	if (!cr6.eq) goto loc_8284869C;
	// addi r10,r31,42
	ctx.r10.s64 = r31.s64 + 42;
	// beq cr6,0x828486a4
	if (cr6.eq) goto loc_828486A4;
loc_8284869C:
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// b 0x828486a8
	goto loc_828486A8;
loc_828486A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_828486A8:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x828484f0
	sub_828484F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828486e8
	if (cr6.eq) goto loc_828486E8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828486E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_828486F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82848700"))) PPC_WEAK_FUNC(sub_82848700);
PPC_FUNC_IMPL(__imp__sub_82848700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848704"))) PPC_WEAK_FUNC(sub_82848704);
PPC_FUNC_IMPL(__imp__sub_82848704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848708"))) PPC_WEAK_FUNC(sub_82848708);
PPC_FUNC_IMPL(__imp__sub_82848708) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82848734
	if (cr6.eq) goto loc_82848734;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82848640
	sub_82848640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82848734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82848744"))) PPC_WEAK_FUNC(sub_82848744);
PPC_FUNC_IMPL(__imp__sub_82848744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848748"))) PPC_WEAK_FUNC(sub_82848748);
PPC_FUNC_IMPL(__imp__sub_82848748) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82848768
	if (cr6.eq) goto loc_82848768;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82848768:
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82848790
	if (cr6.eq) goto loc_82848790;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// blt cr6,0x82848794
	if (cr6.lt) goto loc_82848794;
loc_82848790:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82848794:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828489e8
	if (!cr6.eq) goto loc_828489E8;
	// lhz r11,6(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284889c
	if (cr6.eq) goto loc_8284889C;
	// rlwinm r11,r11,19,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x7;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284881c
	if (cr6.eq) goto loc_8284881C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828487e0
	if (cr6.eq) goto loc_828487E0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_828487E0:
	// lwz r30,76(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284880c
	if (cr6.eq) goto loc_8284880C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne 0x8284880c
	if (!cr0.eq) goto loc_8284880C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284880C:
	// stw r29,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8284881C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r11,6(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8284884c
	if (cr6.eq) goto loc_8284884C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
loc_8284884C:
	// lhz r11,6(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284889c
	if (cr6.eq) goto loc_8284889C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284887c
	if (cr6.eq) goto loc_8284887C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8284887C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284888c
	if (cr6.eq) goto loc_8284888C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284888C:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8284889C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828488c4
	if (cr6.eq) goto loc_828488C4;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// b 0x828488c8
	goto loc_828488C8;
loc_828488C4:
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
loc_828488C8:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82873588
	sub_82873588(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x828489c8
	if (!cr6.eq) goto loc_828489C8;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rlwinm r7,r8,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82848910
	if (!cr6.eq) goto loc_82848910;
	// lhz r11,6(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828489e8
	if (cr6.eq) goto loc_828489E8;
loc_82848910:
	// lbz r11,36(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82848958
	if (cr6.eq) goto loc_82848958;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82848940
	if (cr6.eq) goto loc_82848940;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82848950
	goto loc_82848950;
loc_82848940:
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
loc_82848950:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82848958:
	// lbz r11,36(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284896c
	if (cr6.eq) goto loc_8284896C;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8284896C:
	// lbz r11,36(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828489e0
	if (cr6.eq) goto loc_828489E0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828489a8
	if (cr6.eq) goto loc_828489A8;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_828489A8:
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_828489C8:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828489e8
	if (cr6.eq) goto loc_828489E8;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
loc_828489E0:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_828489E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_828489EC"))) PPC_WEAK_FUNC(sub_828489EC);
PPC_FUNC_IMPL(__imp__sub_828489EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_828489F0"))) PPC_WEAK_FUNC(sub_828489F0);
PPC_FUNC_IMPL(__imp__sub_828489F0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(r31.u32 + 116, r30.u8);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// sth r30,124(r31)
	PPC_STORE_U16(r31.u32 + 124, r30.u16);
	// stb r30,126(r31)
	PPC_STORE_U8(r31.u32 + 126, r30.u8);
	// stb r30,127(r31)
	PPC_STORE_U8(r31.u32 + 127, r30.u8);
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
	// stb r30,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r30.u8);
	// stb r10,130(r31)
	PPC_STORE_U8(r31.u32 + 130, ctx.r10.u8);
	// stb r30,131(r31)
	PPC_STORE_U8(r31.u32 + 131, r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// sth r30,136(r31)
	PPC_STORE_U16(r31.u32 + 136, r30.u16);
	// stb r30,138(r31)
	PPC_STORE_U8(r31.u32 + 138, r30.u8);
	// stb r30,139(r31)
	PPC_STORE_U8(r31.u32 + 139, r30.u8);
	// stb r30,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r30.u8);
	// stb r30,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r30.u8);
	// stb r10,142(r31)
	PPC_STORE_U8(r31.u32 + 142, ctx.r10.u8);
	// stb r30,143(r31)
	PPC_STORE_U8(r31.u32 + 143, r30.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// sth r30,148(r31)
	PPC_STORE_U16(r31.u32 + 148, r30.u16);
	// sth r30,150(r31)
	PPC_STORE_U16(r31.u32 + 150, r30.u16);
	// bl 0x828155c0
	sub_828155C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82848B34"))) PPC_WEAK_FUNC(sub_82848B34);
PPC_FUNC_IMPL(__imp__sub_82848B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848B38"))) PPC_WEAK_FUNC(sub_82848B38);
PPC_FUNC_IMPL(__imp__sub_82848B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// subfic r11,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	r11.s64 = 0 - ctx.r7.s64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r8,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r11,r8,0,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r7,r11,7
	ctx.r7.s64 = r11.s64 + 7;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r7,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82847218
	sub_82847218(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82848b9c
	if (!cr6.eq) goto loc_82848B9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82848B9C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82848bb4
	if (cr6.eq) goto loc_82848BB4;
	// stb r30,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r30.u8);
	// b 0x82848bb8
	goto loc_82848BB8;
loc_82848BB4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82848BB8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8284af48
	sub_8284AF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82848BD0"))) PPC_WEAK_FUNC(sub_82848BD0);
PPC_FUNC_IMPL(__imp__sub_82848BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82848BD4"))) PPC_WEAK_FUNC(sub_82848BD4);
PPC_FUNC_IMPL(__imp__sub_82848BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848BD8"))) PPC_WEAK_FUNC(sub_82848BD8);
PPC_FUNC_IMPL(__imp__sub_82848BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaad8
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// stw r9,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r5,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r5.u32);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// stw r6,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r6.u32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f29,-30884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30884);
	f29.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r15,0
	r15.s64 = 0;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r27,24(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r26,r15
	r26.u64 = r15.u64;
	// lhz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 28);
	// mr r19,r15
	r19.u64 = r15.u64;
	// lhz r8,30(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 30);
	// mr r31,r15
	r31.u64 = r15.u64;
	// lwz r25,24192(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r24,0(r14)
	r24.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// lwz r11,16(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 16);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// stw r4,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r27.u32);
	// sth r9,220(r1)
	PPC_STORE_U16(ctx.r1.u32 + 220, ctx.r9.u16);
	// sth r8,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r8.u16);
	// lwz r20,12(r24)
	r20.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// stw r25,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, r25.u32);
	// beq cr6,0x82848ca8
	if (cr6.eq) goto loc_82848CA8;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// stw r10,16(r17)
	PPC_STORE_U32(r17.u32 + 16, ctx.r10.u32);
	// lfs f29,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f29.f64 = double(temp.f32);
	// lbz r26,40(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// lwz r31,48(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x82848cac
	goto loc_82848CAC;
loc_82848CA8:
	// stw r15,16(r17)
	PPC_STORE_U32(r17.u32 + 16, r15.u32);
loc_82848CAC:
	// lwz r9,40(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,4(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lfs f12,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f7,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f22,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f22.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f11,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f22
	ctx.f8.f64 = double(float(ctx.f13.f64 * f22.f64));
	// lfs f5,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f12,f22
	ctx.f6.f64 = double(float(ctx.f12.f64 * f22.f64));
	// stfs f0,912(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 912, temp.u32);
	// stfs f13,916(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 916, temp.u32);
	// stfs f12,928(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 928, temp.u32);
	// stfs f11,924(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 924, temp.u32);
	// fneg f4,f9
	ctx.f4.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f3,f0,f4,f8
	ctx.f3.f64 = double(float(f0.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f2,f4,f11,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f1,920(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// fadds f0,f2,f5
	f0.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f0,932(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 932, temp.u32);
	// bl 0x828474a8
	sub_828474A8(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,56(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// std r8,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lfd f12,296(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f20,-24324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24324);
	f20.f64 = double(temp.f32);
	// fmuls f31,f13,f20
	f31.f64 = double(float(ctx.f13.f64 * f20.f64));
	// fneg f21,f10
	f21.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// bl 0x828483f0
	sub_828483F0(ctx, base);
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-31496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82848d64
	if (!cr6.lt) goto loc_82848D64;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_82848D64:
	// lbz r10,199(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82848ea0
	if (cr6.eq) goto loc_82848EA0;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82848ea0
	if (!cr6.eq) goto loc_82848EA0;
	// lfs f0,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848de4
	if (!cr6.eq) goto loc_82848DE4;
	// lfs f0,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848de4
	if (!cr6.eq) goto loc_82848DE4;
	// lfs f0,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848de4
	if (!cr6.eq) goto loc_82848DE4;
	// lfs f0,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848de4
	if (!cr6.eq) goto loc_82848DE4;
	// lfs f0,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848de4
	if (!cr6.eq) goto loc_82848DE4;
	// lfs f0,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	f0.f64 = double(temp.f32);
	// mr r11,r15
	r11.u64 = r15.u64;
	// lfs f13,64(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82848de8
	if (cr6.eq) goto loc_82848DE8;
loc_82848DE4:
	// li r11,1
	r11.s64 = 1;
loc_82848DE8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82848e2c
	if (cr6.eq) goto loc_82848E2C;
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// stw r15,112(r17)
	PPC_STORE_U32(r17.u32 + 112, r15.u32);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82848e50
	if (cr6.eq) goto loc_82848E50;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// addi r11,r17,20
	r11.s64 = r17.s64 + 20;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r7,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r7.u8);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r5,r5,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r5,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r5.u8);
	// b 0x82848e50
	goto loc_82848E50;
loc_82848E2C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82848e50
	if (cr6.eq) goto loc_82848E50;
	// lwz r11,112(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 112);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,112(r17)
	PPC_STORE_U32(r17.u32 + 112, r11.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x82848e50
	if (!cr6.gt) goto loc_82848E50;
	// stw r31,112(r17)
	PPC_STORE_U32(r17.u32 + 112, r31.u32);
loc_82848E50:
	// lwz r11,112(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 112);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82848ea0
	if (cr6.lt) goto loc_82848EA0;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbz r8,211(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 211);
	// lbz r9,116(r17)
	ctx.r9.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// ori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 | 1;
	// rlwinm r7,r9,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r6,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r6.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r10,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r10.u8);
	// bne cr6,0x82848ea0
	if (!cr6.eq) goto loc_82848EA0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r17,20
	r11.s64 = r17.s64 + 20;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r8.u8);
	// ori r6,r7,8
	ctx.r6.u64 = ctx.r7.u64 | 8;
	// stb r6,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r6.u8);
loc_82848EA0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f0.f64 = double(temp.f32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f10,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f31.f64 = double(temp.f32);
	// stfs f0,976(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// stfs f13,980(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 980, temp.u32);
	// stfs f12,984(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// stfs f11,988(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 988, temp.u32);
	// stfs f10,992(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 992, temp.u32);
	// stfs f8,996(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 996, temp.u32);
	// beq cr6,0x8284933c
	if (cr6.eq) goto loc_8284933C;
	// lfs f9,44(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bne cr6,0x82848f30
	if (!cr6.eq) goto loc_82848F30;
	// lfs f0,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82848f30
	if (!cr6.eq) goto loc_82848F30;
	// lfs f0,52(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 52);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x82848f30
	if (!cr6.eq) goto loc_82848F30;
	// lfs f0,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82848f30
	if (!cr6.eq) goto loc_82848F30;
	// lfs f0,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// bne cr6,0x82848f30
	if (!cr6.eq) goto loc_82848F30;
	// lfs f0,64(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 64);
	f0.f64 = double(temp.f32);
	// mr r11,r15
	r11.u64 = r15.u64;
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// beq cr6,0x82848f34
	if (cr6.eq) goto loc_82848F34;
loc_82848F30:
	// li r11,1
	r11.s64 = 1;
loc_82848F34:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82848fb8
	if (!cr6.eq) goto loc_82848FB8;
	// lfs f0,68(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfs f13,40(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82848fa4
	if (!cr6.eq) goto loc_82848FA4;
	// lfs f0,44(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,72(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848fa4
	if (!cr6.eq) goto loc_82848FA4;
	// lfs f0,48(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848fa4
	if (!cr6.eq) goto loc_82848FA4;
	// lfs f0,52(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848fa4
	if (!cr6.eq) goto loc_82848FA4;
	// lfs f0,56(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82848fa4
	if (!cr6.eq) goto loc_82848FA4;
	// lfs f0,60(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r11,r15
	r11.u64 = r15.u64;
	// lfs f13,88(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82848fa8
	if (cr6.eq) goto loc_82848FA8;
loc_82848FA4:
	// li r11,1
	r11.s64 = 1;
loc_82848FA8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// beq cr6,0x82848fbc
	if (cr6.eq) goto loc_82848FBC;
loc_82848FB8:
	// li r11,1
	r11.s64 = 1;
loc_82848FBC:
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82849270
	if (cr6.eq) goto loc_82849270;
	// lfs f0,28(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r31,r17,68
	r31.s64 = r17.s64 + 68;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// lfs f7,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
	// lfs f0,24(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f4,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(f0.f64 * ctx.f7.f64));
	// lfs f3,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,32(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,36(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f2,f10,f4,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f1,f10,f3,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f5.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f12,44(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f7,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lfs f6,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f4,f13,f8,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f3,f13,f7,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f2,44(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f1,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// lfs f9,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f6,f13,f10,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f5,f13,f9,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// addi r31,r14,40
	r31.s64 = r14.s64 + 40;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f4,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lfs f3,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * f0.f64));
	// lfs f0,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f12,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f2.f64));
	// lfs f10,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f13,f12,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f1.f64));
	// lfs f9,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f0.f64 = double(temp.f32);
	// lfs f7,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f6,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lfs f2,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lfs f1,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f12,f13,f3,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f5.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f11,f13,f2,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f0.f64 = double(temp.f32);
	// lfs f10,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lfs f9,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f5,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f2,f13,f6,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f1,f13,f5,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f7.f64));
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfs f0,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	f0.f64 = double(temp.f32);
	// lfs f13,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f5,f3
	ctx.f5.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fabs f4,f1
	ctx.f4.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fadds f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f0,f5,f4
	f0.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f2,f8
	ctx.f2.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fadds f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// lfs f0,-512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -512);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x8284926c
	if (cr6.gt) goto loc_8284926C;
	// mr r11,r15
	r11.u64 = r15.u64;
loc_8284926C:
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
loc_82849270:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828492b0
	if (cr6.eq) goto loc_828492B0;
	// lfs f0,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 44, temp.u32);
	// lfs f13,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r17.u32 + 48, temp.u32);
	// lfs f12,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r17.u32 + 52, temp.u32);
	// lfs f11,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r17)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r17.u32 + 56, temp.u32);
	// lfs f10,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,60(r17)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r17.u32 + 60, temp.u32);
	// lfs f9,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,64(r17)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r17.u32 + 64, temp.u32);
	// b 0x828493f4
	goto loc_828493F4;
loc_828492B0:
	// lfs f0,44(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,976(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// stfs f13,980(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 980, temp.u32);
	// stfs f12,984(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// stfs f11,988(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 988, temp.u32);
	// stfs f10,992(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 992, temp.u32);
	// stfs f9,996(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 996, temp.u32);
	// lfs f8,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f28,40(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 40);
	f28.f64 = double(temp.f32);
	// fsubs f27,f5,f4
	f27.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f26,56(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f1,f6,f28,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * f28.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f2,96(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f27,f26,f31
	ctx.f1.f64 = double(float(f27.f64 * f26.f64 + f31.f64));
	// fdivs f0,f3,f28
	f0.f64 = double(float(ctx.f3.f64 / f28.f64));
	// fadds f13,f0,f2
	ctx.f13.f64 = double(float(f0.f64 + ctx.f2.f64));
	// stfs f13,984(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,100(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 / f26.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,996(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 996, temp.u32);
	// b 0x828493f4
	goto loc_828493F4;
loc_8284933C:
	// lfs f13,40(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x828493a0
	if (!cr6.eq) goto loc_828493A0;
	// lfs f13,72(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x828493a0
	if (!cr6.eq) goto loc_828493A0;
	// lfs f13,76(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x828493a0
	if (!cr6.eq) goto loc_828493A0;
	// lfs f13,80(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x828493a0
	if (!cr6.eq) goto loc_828493A0;
	// lfs f13,84(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x828493a0
	if (!cr6.eq) goto loc_828493A0;
	// lfs f13,88(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r15
	r11.u64 = r15.u64;
	// lfs f12,60(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x828493a4
	if (cr6.eq) goto loc_828493A4;
loc_828493A0:
	// li r11,1
	r11.s64 = 1;
loc_828493A4:
	// lbz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828493c8
	if (cr6.eq) goto loc_828493C8;
	// lfs f13,92(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// beq cr6,0x828493c8
	if (cr6.eq) goto loc_828493C8;
	// li r31,1
	r31.s64 = 1;
loc_828493C8:
	// stfs f0,44(r17)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 44, temp.u32);
	// lfs f0,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 48, temp.u32);
	// lfs f13,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r17.u32 + 52, temp.u32);
	// lfs f12,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r17.u32 + 56, temp.u32);
	// lfs f11,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r17)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r17.u32 + 60, temp.u32);
	// lfs f10,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,64(r17)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r17.u32 + 64, temp.u32);
loc_828493F4:
	// stfs f30,92(r17)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r17.u32 + 92, temp.u32);
	// addi r11,r14,40
	r11.s64 = r14.s64 + 40;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f0,40(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 68, temp.u32);
	// lfs f13,44(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r17.u32 + 72, temp.u32);
	// lfs f12,48(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r17.u32 + 76, temp.u32);
	// lfs f11,52(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r17)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r17.u32 + 80, temp.u32);
	// lfs f10,56(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r17)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r17.u32 + 84, temp.u32);
	// lfs f9,60(r14)
	temp.u32 = PPC_LOAD_U32(r14.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r17)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r17.u32 + 88, temp.u32);
	// beq cr6,0x8284945c
	if (cr6.eq) goto loc_8284945C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82873660
	sub_82873660(ctx, base);
	// lbz r11,24(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 24);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284945c
	if (!cr6.eq) goto loc_8284945C;
	// lbz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// addi r11,r17,20
	r11.s64 = r17.s64 + 20;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r9.u8);
loc_8284945C:
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82849488
	if (!cr6.eq) goto loc_82849488;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849488
	if (!cr6.eq) goto loc_82849488;
	// lwz r11,200(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 200);
	// lwz r10,40(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8284949c
	if (cr6.eq) goto loc_8284949C;
loc_82849488:
	// lwz r3,196(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82849498
	if (cr6.eq) goto loc_82849498;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82849498:
	// stw r15,196(r17)
	PPC_STORE_U32(r17.u32 + 196, r15.u32);
loc_8284949C:
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82849534
	if (!cr6.eq) goto loc_82849534;
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8284aeb0
	sub_8284AEB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849534
	if (cr6.eq) goto loc_82849534;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849534
	if (!cr6.eq) goto loc_82849534;
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82849534
	if (cr6.eq) goto loc_82849534;
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82849534
	if (cr6.eq) goto loc_82849534;
	// lwz r11,76(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x82849534
	if (cr6.gt) goto loc_82849534;
	// lwz r11,200(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 200);
	// lwz r10,40(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82849534
	if (!cr6.eq) goto loc_82849534;
	// lbz r11,199(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284951c
	if (cr6.eq) goto loc_8284951C;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// b 0x82849520
	goto loc_82849520;
loc_8284951C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_82849520:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// bl 0x8284f6c8
	sub_8284F6C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284955c
	if (!cr6.eq) goto loc_8284955C;
loc_82849534:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82849548
	if (cr6.eq) goto loc_82849548;
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// bl 0x8284ec88
	sub_8284EC88(ctx, base);
loc_82849548:
	// stw r15,12(r17)
	PPC_STORE_U32(r17.u32 + 12, r15.u32);
	// addi r11,r17,20
	r11.s64 = r17.s64 + 20;
	// lbz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r9.u8);
loc_8284955C:
	// lwz r11,40(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f23,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f23.f64 = double(temp.f32);
	// stw r11,200(r17)
	PPC_STORE_U32(r17.u32 + 200, r11.u32);
	// bne cr6,0x828499cc
	if (!cr6.eq) goto loc_828499CC;
	// lwz r11,76(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828499cc
	if (!cr6.eq) goto loc_828499CC;
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// stfs f21,284(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// stw r17,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r17.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// stw r15,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r15.u32);
	// addi r28,r17,20
	r28.s64 = r17.s64 + 20;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r25,-1
	r25.s64 = -1;
	// stb r10,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r10.u8);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r5,r7,30,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// rlwinm r6,r6,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r5,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r5.u8);
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// stb r6,116(r17)
	PPC_STORE_U8(r17.u32 + 116, ctx.r6.u8);
loc_828495D0:
	// stw r4,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
loc_828495D4:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828495f4
	if (cr6.eq) goto loc_828495F4;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x828495f4
	if (!cr6.lt) goto loc_828495F4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// bge cr6,0x828495f8
	if (!cr6.lt) goto loc_828495F8;
loc_828495F4:
	// li r11,1
	r11.s64 = 1;
loc_828495F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849628
	if (!cr6.eq) goto loc_82849628;
	// lbz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82849618
	if (cr6.eq) goto loc_82849618;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8284962c
	goto loc_8284962C;
loc_82849618:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f1,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82847538
	sub_82847538(ctx, base);
	// b 0x8284962c
	goto loc_8284962C;
loc_82849628:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_8284962C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828498c0
	if (cr6.eq) goto loc_828498C0;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82839d08
	sub_82839D08(ctx, base);
loc_8284964C:
	// lwz r11,704(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849668
	if (cr6.eq) goto loc_82849668;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// blt cr6,0x8284966c
	if (cr6.lt) goto loc_8284966C;
loc_82849668:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8284966C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8284985c
	if (!cr6.eq) goto loc_8284985C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r29,r11,6
	r29.s64 = r11.s64 + 6;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// clrlwi r8,r10,17
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFF;
	// sth r8,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r8.u16);
	// lwz r7,788(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x828496a4
	if (cr6.eq) goto loc_828496A4;
	// lbz r11,96(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 96);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stb r10,96(r28)
	PPC_STORE_U8(r28.u32 + 96, ctx.r10.u8);
loc_828496A4:
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bge cr6,0x82849850
	if (!cr6.lt) goto loc_82849850;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82849850
	if (cr6.eq) goto loc_82849850;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r11,r10,23,9,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82849850
	if (!cr6.eq) goto loc_82849850;
	// lwz r11,784(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849850
	if (!cr6.eq) goto loc_82849850;
	// lwz r11,780(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828496ec
	if (cr6.eq) goto loc_828496EC;
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x828496f0
	goto loc_828496F0;
loc_828496EC:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_828496F0:
	// lhz r11,4(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// bne cr6,0x8284971c
	if (!cr6.eq) goto loc_8284971C;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// b 0x82849730
	goto loc_82849730;
loc_8284971C:
	// std r11,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, r11.u64);
	// lfd f0,328(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f23
	f0.f64 = double(float(ctx.f12.f64 * f23.f64));
loc_82849730:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, f0.u64);
	// lwz r30,372(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82849850
	if (cr6.eq) goto loc_82849850;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828497b0
	if (cr6.eq) goto loc_828497B0;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, r11.u64);
	// bl 0x8282f030
	sub_8282F030(ctx, base);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fmuls f12,f1,f29
	ctx.f12.f64 = double(float(ctx.f1.f64 * f29.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82849798
	if (!cr6.gt) goto loc_82849798;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r11,r15
	r11.u64 = r15.u64;
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284979c
	if (cr6.eq) goto loc_8284979C;
loc_82849798:
	// li r11,1
	r11.s64 = 1;
loc_8284979C:
	// lbz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 96);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,96(r28)
	PPC_STORE_U8(r28.u32 + 96, ctx.r9.u8);
	// b 0x8284981c
	goto loc_8284981C;
loc_828497B0:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284981c
	if (cr6.eq) goto loc_8284981C;
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284981c
	if (cr6.eq) goto loc_8284981C;
	// stfs f22,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f22,452(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f22,460(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f22,456(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// lhz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// blt cr6,0x828497e8
	if (cr6.lt) goto loc_828497E8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_828497E8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8284df38
	sub_8284DF38(ctx, base);
loc_8284981C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849844
	if (cr6.eq) goto loc_82849844;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// ori r10,r11,32768
	ctx.r10.u64 = r11.u64 | 32768;
	// sth r10,0(r29)
	PPC_STORE_U16(r29.u32 + 0, ctx.r10.u16);
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// b 0x8284964c
	goto loc_8284964C;
loc_82849844:
	// lbz r11,96(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 96);
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// stb r10,96(r28)
	PPC_STORE_U8(r28.u32 + 96, ctx.r10.u8);
loc_82849850:
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// b 0x8284964c
	goto loc_8284964C;
loc_8284985C:
	// lwz r3,784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284986c
	if (cr6.eq) goto loc_8284986C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284986C:
	// lwz r11,780(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828498a4
	if (cr6.eq) goto loc_828498A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x828498a4
	if (!cr6.eq) goto loc_828498A4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_828498A4:
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x828495d4
	if (!cr6.lt) goto loc_828495D4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x828495d0
	goto loc_828495D0;
loc_828498C0:
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r6,204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r11,r8,-4
	r11.s64 = ctx.r8.s64 + -4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f21,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r6,132(r17)
	PPC_STORE_U32(r17.u32 + 132, ctx.r6.u32);
	// stw r7,120(r17)
	PPC_STORE_U32(r17.u32 + 120, ctx.r7.u32);
	// stw r5,124(r17)
	PPC_STORE_U32(r17.u32 + 124, ctx.r5.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r4,128(r17)
	PPC_STORE_U32(r17.u32 + 128, ctx.r4.u32);
	// stw r3,136(r17)
	PPC_STORE_U32(r17.u32 + 136, ctx.r3.u32);
	// stw r31,140(r17)
	PPC_STORE_U32(r17.u32 + 140, r31.u32);
	// stw r8,144(r17)
	PPC_STORE_U32(r17.u32 + 144, ctx.r8.u32);
	// lhz r8,222(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 222);
	// lhz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 220);
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r17.u32);
	// stw r15,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r15.u32);
	// sth r8,150(r17)
	PPC_STORE_U16(r17.u32 + 150, ctx.r8.u16);
	// sth r9,148(r17)
	PPC_STORE_U16(r17.u32 + 148, ctx.r9.u16);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r5,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r5.u32);
	// lbz r7,116(r17)
	ctx.r7.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// rlwinm r6,r7,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// stb r6,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r6.u8);
loc_82849940:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82849940
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82849940;
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// lfs f0,28(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f21
	ctx.f12.f64 = double(float(f0.f64 + f21.f64));
	// stfs f13,376(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f12,380(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// beq cr6,0x828499ac
	if (cr6.eq) goto loc_828499AC;
	// lwz r11,1572(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r31,12(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r11.u32);
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// bl 0x82851ad0
	sub_82851AD0(ctx, base);
	// stw r3,12(r17)
	PPC_STORE_U32(r17.u32 + 12, ctx.r3.u32);
loc_828499AC:
	// lwz r11,1540(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r28,1572(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r29,1548(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// mr r18,r11
	r18.u64 = r11.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 96, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r17.u32 + 100, temp.u32);
loc_828499CC:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// mr r16,r15
	r16.u64 = r15.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828499f0
	if (cr6.eq) goto loc_828499F0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r6,r1,976
	ctx.r6.s64 = ctx.r1.s64 + 976;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// bl 0x8284e708
	sub_8284E708(ctx, base);
loc_828499F0:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f26,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f26.f64 = double(temp.f32);
	// beq cr6,0x82849a40
	if (cr6.eq) goto loc_82849A40;
	// lwz r11,12(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849a30
	if (cr6.eq) goto loc_82849A30;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849a28
	if (cr6.eq) goto loc_82849A28;
	// lbz r11,36(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849a30
	if (!cr6.eq) goto loc_82849A30;
loc_82849A28:
	// mr r11,r15
	r11.u64 = r15.u64;
	// b 0x82849a34
	goto loc_82849A34;
loc_82849A30:
	// li r11,1
	r11.s64 = 1;
loc_82849A34:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a2d0
	if (cr6.eq) goto loc_8284A2D0;
loc_82849A40:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f21.f64;
	// bl 0x82847610
	sub_82847610(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849a78
	if (cr6.eq) goto loc_82849A78;
	// lwz r11,84(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 84);
	// addi r5,r17,24
	ctx.r5.s64 = r17.s64 + 24;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x828478a8
	sub_828478A8(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_82849A78:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,1212
	ctx.r10.s64 = ctx.r1.s64 + 1212;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82849A88:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82849a88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82849A88;
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r23,20(r17)
	r23.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// rlwinm r21,r11,30,31,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// stfs f22,464(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stfs f22,468(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f22,472(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// lfs f24,-23472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23472);
	f24.f64 = double(temp.f32);
	// addi r22,r11,26844
	r22.s64 = r11.s64 + 26844;
	// lfs f25,7928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7928);
	f25.f64 = double(temp.f32);
	// stfs f22,476(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
loc_82849AC8:
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bge cr6,0x82849ae0
	if (!cr6.lt) goto loc_82849AE0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// bge cr6,0x82849ae4
	if (!cr6.lt) goto loc_82849AE4;
loc_82849AE0:
	// li r11,1
	r11.s64 = 1;
loc_82849AE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849b18
	if (!cr6.eq) goto loc_82849B18;
	// clrlwi r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82849b04
	if (cr6.eq) goto loc_82849B04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82849b1c
	goto loc_82849B1C;
loc_82849B04:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f21.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82847538
	sub_82847538(ctx, base);
	// b 0x82849b1c
	goto loc_82849B1C;
loc_82849B18:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82849B1C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a2d0
	if (cr6.eq) goto loc_8284A2D0;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,28(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r17,24
	r24.s64 = r17.s64 + 24;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, r11.u64);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, r11.u64);
	// lfd f11,368(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f0,312(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// lfs f13,24(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f0,f13
	f28.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// beq cr6,0x82849ba4
	if (cr6.eq) goto loc_82849BA4;
	// lhz r11,26(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r10.u64);
	// lfd f0,328(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// b 0x82849bb4
	goto loc_82849BB4;
loc_82849BA4:
	// lhz r11,38(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r10.u64);
	// lfd f0,488(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
loc_82849BB4:
	// fcfid f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(f0.s64);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fadds f27,f0,f21
	f27.f64 = double(float(f0.f64 + f21.f64));
	// bl 0x8284b0e8
	sub_8284B0E8(ctx, base);
loc_82849BD0:
	// lwz r10,512(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82849bec
	if (cr6.eq) goto loc_82849BEC;
	// lwz r11,516(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// blt cr6,0x82849bf0
	if (cr6.lt) goto loc_82849BF0;
loc_82849BEC:
	// li r11,1
	r11.s64 = 1;
loc_82849BF0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a270
	if (!cr6.eq) goto loc_8284A270;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r26,r10,6
	r26.s64 = ctx.r10.s64 + 6;
	// rlwinm r11,r9,26,6,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82849c1c
	if (!cr6.eq) goto loc_82849C1C;
	// lhz r25,2(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// b 0x82849c24
	goto loc_82849C24;
loc_82849C1C:
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// neg r25,r11
	r25.s64 = -r11.s64;
loc_82849C24:
	// rlwinm r11,r9,17,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a23c
	if (!cr6.eq) goto loc_8284A23C;
	// rlwinm r11,r9,23,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// lwz r8,592(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// clrlwi r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82849c58
	if (cr6.eq) goto loc_82849C58;
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82849c58
	if (!cr6.eq) goto loc_82849C58;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8284a23c
	if (cr6.eq) goto loc_8284A23C;
loc_82849C58:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// fmr f29,f26
	ctx.fpscr.disableFlushMode();
	f29.f64 = f26.f64;
	// fmr f30,f22
	f30.f64 = f22.f64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// blt cr6,0x82849c74
	if (cr6.lt) goto loc_82849C74;
	// li r28,-1
	r28.s64 = -1;
loc_82849C74:
	// mr r27,r15
	r27.u64 = r15.u64;
	// mr r29,r15
	r29.u64 = r15.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82849ca0
	if (cr6.eq) goto loc_82849CA0;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// std r10,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r10.u64);
	// lfd f0,496(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// b 0x82849d90
	goto loc_82849D90;
loc_82849CA0:
	// lhz r11,4(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// bne cr6,0x82849ccc
	if (!cr6.eq) goto loc_82849CCC;
	// std r11,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, r11.u64);
	// lfd f0,480(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// b 0x82849ce0
	goto loc_82849CE0;
loc_82849CCC:
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, r11.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f23
	f0.f64 = double(float(ctx.f12.f64 * f23.f64));
loc_82849CE0:
	// fmuls f0,f0,f20
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f20.f64));
	// lwz r31,588(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// fmuls f29,f0,f25
	f29.f64 = double(float(f0.f64 * f25.f64));
	// beq cr6,0x82849cfc
	if (cr6.eq) goto loc_82849CFC;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// b 0x82849d00
	goto loc_82849D00;
loc_82849CFC:
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82849D00:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82849f70
	if (cr6.eq) goto loc_82849F70;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82849d94
	if (cr6.eq) goto loc_82849D94;
	// lwz r9,20(r14)
	ctx.r9.u64 = PPC_LOAD_U32(r14.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82849d2c
	if (cr6.eq) goto loc_82849D2C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	// b 0x82849d30
	goto loc_82849D30;
loc_82849D2C:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
loc_82849D30:
	// lbz r11,199(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r8,r11,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// beq cr6,0x82849d50
	if (cr6.eq) goto loc_82849D50;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82849d54
	goto loc_82849D54;
loc_82849D50:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82849D54:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r6,r10,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// or r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 | ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82851a60
	sub_82851A60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82849d90
	if (cr6.eq) goto loc_82849D90;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82849D8C:
	// fmuls f30,f0,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f0.f64 * f29.f64));
loc_82849D90:
	// lwz r31,588(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
loc_82849D94:
	// lwz r8,40(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lbz r9,116(r17)
	ctx.r9.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// rlwinm r10,r9,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// std r8,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r8.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f28,f12
	f0.f64 = double(float(f28.f64 - ctx.f12.f64));
	// bne cr6,0x82849dd8
	if (!cr6.eq) goto loc_82849DD8;
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 + f30.f64));
	// lfs f12,0(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8284a22c
	if (cr6.lt) goto loc_8284A22C;
	// lfs f13,32(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8284a260
	if (!cr6.lt) goto loc_8284A260;
loc_82849DD8:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82849e0c
	if (cr6.eq) goto loc_82849E0C;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82849dfc
	if (!cr6.eq) goto loc_82849DFC;
	// li r19,1
	r19.s64 = 1;
loc_82849DFC:
	// rlwinm r11,r11,23,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7F;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8284a22c
	if (!cr6.eq) goto loc_8284A22C;
loc_82849E0C:
	// clrlwi r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849e7c
	if (!cr6.eq) goto loc_82849E7C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82849e7c
	if (!cr6.eq) goto loc_82849E7C;
	// rlwinm r11,r9,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82849e7c
	if (!cr6.eq) goto loc_82849E7C;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82849e44
	if (!cr6.lt) goto loc_82849E44;
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 + f30.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82849e5c
	if (cr6.gt) goto loc_82849E5C;
loc_82849E44:
	// lfs f13,32(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82849e7c
	if (!cr6.lt) goto loc_82849E7C;
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82849e7c
	if (!cr6.gt) goto loc_82849E7C;
loc_82849E5C:
	// lwz r11,84(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 84);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x828478a8
	sub_828478A8(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_82849E7C:
	// lfs f0,912(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lfs f13,924(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f28
	ctx.f10.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f9,f28,f13
	ctx.f9.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f12,916(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,928(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,920(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,932(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,880(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 880, temp.u32);
	// stfs f12,884(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// stfs f13,892(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 892, temp.u32);
	// stfs f11,896(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 896, temp.u32);
	// fmadds f6,f27,f12,f10
	ctx.f6.f64 = double(float(f27.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f5,f27,f11,f9
	ctx.f5.f64 = double(float(f27.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f4,888(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 888, temp.u32);
	// fadds f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f3,900(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 900, temp.u32);
	// beq cr6,0x82849fd8
	if (cr6.eq) goto loc_82849FD8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8284a22c
	if (cr6.eq) goto loc_8284A22C;
	// addi r4,r27,32
	ctx.r4.s64 = r27.s64 + 32;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,1548(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// lfs f0,880(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	f0.f64 = double(temp.f32);
	// stw r14,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, r14.u32);
	// lfs f13,884(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	ctx.f13.f64 = double(temp.f32);
	// stw r15,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, r15.u32);
	// lfs f12,888(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// lfs f11,892(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	ctx.f11.f64 = double(temp.f32);
	// stw r15,1144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1144, r15.u32);
	// lfs f10,896(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f9,900(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,1148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1148, temp.u32);
	// stfs f13,1152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1152, temp.u32);
	// stfs f12,1156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1156, temp.u32);
	// stfs f11,1160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stfs f10,1164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1164, temp.u32);
	// stfs f9,1168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1168, temp.u32);
loc_82849F34:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82849f34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82849F34;
	// stw r15,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, r15.u32);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// stw r15,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, r15.u32);
	// stw r15,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, r15.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// b 0x8284a220
	goto loc_8284A220;
loc_82849F70:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82849f9c
	if (cr6.eq) goto loc_82849F9C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,588(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82849F9C:
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82849fd0
	if (!cr6.eq) goto loc_82849FD0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82849d8c
	goto loc_82849D8C;
loc_82849FD0:
	// fmr f30,f22
	ctx.fpscr.disableFlushMode();
	f30.f64 = f22.f64;
	// b 0x82849d94
	goto loc_82849D94;
loc_82849FD8:
	// lwz r11,576(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x8284a094
	if (cr6.eq) goto loc_8284A094;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// lbz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lbz r3,130(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// li r11,8
	r11.s64 = 8;
	// lbz r7,129(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lbz r10,131(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// lwz r31,1548(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// std r8,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r8.u64);
	// std r3,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r3.u64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// std r7,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r7.u64);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// lfd f10,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// addi r10,r1,1212
	ctx.r10.s64 = ctx.r1.s64 + 1212;
	// lfd f0,304(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lfd f12,320(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f8,352(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fmuls f0,f3,f24
	f0.f64 = double(float(ctx.f3.f64 * f24.f64));
	// stfs f0,1120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1120, temp.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f5,f11,f24
	ctx.f5.f64 = double(float(ctx.f11.f64 * f24.f64));
	// stfs f5,1104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1104, temp.u32);
	// fmuls f1,f4,f24
	ctx.f1.f64 = double(float(ctx.f4.f64 * f24.f64));
	// stfs f1,1112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// fmuls f13,f2,f24
	ctx.f13.f64 = double(float(ctx.f2.f64 * f24.f64));
	// stfs f13,1128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1128, temp.u32);
loc_8284A078:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8284a078
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8284A078;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x827a13d8
	sub_827A13D8(ctx, base);
	// b 0x8284a098
	goto loc_8284A098;
loc_8284A094:
	// lwz r31,1548(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
loc_8284A098:
	// stfs f29,1072(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1072, temp.u32);
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// stfs f22,1076(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1076, temp.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stfs f22,1080(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1080, temp.u32);
	// stfs f22,1084(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1084, temp.u32);
	// stfs f29,1088(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1088, temp.u32);
	// stfs f22,1092(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1092, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x8284a194
	if (!cr6.eq) goto loc_8284A194;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,576(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// bl 0x827a15f0
	sub_827A15F0(ctx, base);
	// lwz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lwz r11,84(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8284a22c
	goto loc_8284A22C;
loc_8284A194:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284a23c
	if (cr6.eq) goto loc_8284A23C;
	// lbz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 36);
	// li r11,8
	r11.s64 = 8;
	// addi r9,r1,1216
	ctx.r9.s64 = ctx.r1.s64 + 1216;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// stb r8,36(r29)
	PPC_STORE_U8(r29.u32 + 36, ctx.r8.u8);
	// lfs f10,896(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stfs f10,828(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 828, temp.u32);
	// lfs f0,888(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	f0.f64 = double(temp.f32);
	// stw r14,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, r14.u32);
	// lfs f13,884(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	ctx.f13.f64 = double(temp.f32);
	// stw r15,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, r15.u32);
	// lfs f12,880(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r9,-4
	r11.s64 = ctx.r9.s64 + -4;
	// lfs f11,892(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,900(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,820(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// stfs f13,816(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// stfs f12,812(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 812, temp.u32);
	// stfs f11,824(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stfs f9,832(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 832, temp.u32);
loc_8284A1F4:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8284a1f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8284A1F4;
	// addi r11,r17,152
	r11.s64 = r17.s64 + 152;
	// stw r15,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, r15.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r15,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, r15.u32);
	// stw r11,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, r11.u32);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// stw r10,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8284A220:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8281b818
	sub_8281B818(ctx, base);
loc_8284A22C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284a23c
	if (cr6.eq) goto loc_8284A23C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8281ddf8
	sub_8281DDF8(ctx, base);
loc_8284A23C:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// extsw r11,r25
	r11.s64 = r25.s32;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r11.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f28,f12,f28
	f28.f64 = double(float(ctx.f12.f64 + f28.f64));
	// b 0x82849bd0
	goto loc_82849BD0;
loc_8284A260:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284a274
	if (cr6.eq) goto loc_8284A274;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8281ddf8
	sub_8281DDF8(ctx, base);
loc_8284A270:
	// lwz r31,588(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
loc_8284A274:
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284a288
	if (cr6.eq) goto loc_8284A288;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// lwz r31,588(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
loc_8284A288:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284a2b8
	if (cr6.eq) goto loc_8284A2B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8284a2b8
	if (!cr6.eq) goto loc_8284A2B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284A2B8:
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r28,1572(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bge cr6,0x82849ac8
	if (!cr6.lt) goto loc_82849AC8;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x82849ac8
	goto loc_82849AC8;
loc_8284A2D0:
	// clrlwi r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a2ec
	if (!cr6.eq) goto loc_8284A2EC;
	// lbz r11,116(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284a848
	if (cr6.eq) goto loc_8284A848;
loc_8284A2EC:
	// lwz r11,196(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 196);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8284a848
	if (!cr6.eq) goto loc_8284A848;
	// lwz r9,40(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lfs f0,24(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 24);
	f0.f64 = double(temp.f32);
	// lbz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 116);
	// lfs f13,32(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r20,20(r17)
	r20.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// lfs f12,36(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r21,r17,24
	r21.s64 = r17.s64 + 24;
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// rlwinm r18,r10,30,31,31
	r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f10,224(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// rlwinm r19,r20,2,0,29
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
loc_8284A348:
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x8284a360
	if (!cr6.lt) goto loc_8284A360;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// bge cr6,0x8284a364
	if (!cr6.lt) goto loc_8284A364;
loc_8284A360:
	// li r11,1
	r11.s64 = 1;
loc_8284A364:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a398
	if (!cr6.eq) goto loc_8284A398;
	// clrlwi r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a384
	if (cr6.eq) goto loc_8284A384;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8284a39c
	goto loc_8284A39C;
loc_8284A384:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f21.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82847538
	sub_82847538(ctx, base);
	// b 0x8284a39c
	goto loc_8284A39C;
loc_8284A398:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_8284A39C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a848
	if (cr6.eq) goto loc_8284A848;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lfs f12,4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// fmr f30,f22
	f30.f64 = f22.f64;
	// li r22,1
	r22.s64 = 1;
	// fmr f28,f22
	f28.f64 = f22.f64;
	// mr r27,r15
	r27.u64 = r15.u64;
	// fmr f27,f22
	f27.f64 = f22.f64;
	// mr r31,r15
	r31.u64 = r15.u64;
	// fmr f29,f22
	f29.f64 = f22.f64;
	// lwzx r25,r19,r11
	r25.u64 = PPC_LOAD_U32(r19.u32 + r11.u32);
	// li r24,-1
	r24.s64 = -1;
	// mr r26,r15
	r26.u64 = r15.u64;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r11.u64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfd f0,224(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, r11.u64);
	// lfs f13,0(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lfd f10,352(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r5,1572(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// bl 0x8284b0e8
	sub_8284B0E8(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// mr r23,r15
	r23.u64 = r15.u64;
loc_8284A460:
	// lwz r10,608(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284a47c
	if (cr6.eq) goto loc_8284A47C;
	// lwz r11,612(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// blt cr6,0x8284a480
	if (cr6.lt) goto loc_8284A480;
loc_8284A47C:
	// li r11,1
	r11.s64 = 1;
loc_8284A480:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a7a8
	if (!cr6.eq) goto loc_8284A7A8;
	// lhz r11,6(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8284a4ac
	if (!cr6.eq) goto loc_8284A4AC;
	// lhz r28,2(r10)
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// b 0x8284a4b4
	goto loc_8284A4B4;
loc_8284A4AC:
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// neg r28,r10
	r28.s64 = -ctx.r10.s64;
loc_8284A4B4:
	// lwz r29,692(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8284a778
	if (cr6.eq) goto loc_8284A778;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8284a778
	if (!cr6.eq) goto loc_8284A778;
	// rlwinm r11,r11,24,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8284a778
	if (!cr6.eq) goto loc_8284A778;
	// lwz r10,40(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lfs f13,32(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// lfd f12,336(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f0,f10
	f0.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8284a7a8
	if (!cr6.lt) goto loc_8284A7A8;
	// extsw r11,r28
	r11.s64 = r28.s32;
	// lfs f13,0(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r11,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, r11.u64);
	// lfd f12,320(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x8284a778
	if (cr6.lt) goto loc_8284A778;
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a6fc
	if (cr6.eq) goto loc_8284A6FC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82831228
	sub_82831228(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r11,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, r11.u64);
	// bl 0x82831198
	sub_82831198(ctx, base);
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f30,f12,f1
	f30.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// bl 0x82831198
	sub_82831198(ctx, base);
	// fmadds f11,f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 * f31.f64 + ctx.f1.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,912(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r14,40
	ctx.r4.s64 = r14.s64 + 40;
	// lfs f8,916(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lfs f7,920(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,924(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,928(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,932(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	ctx.f4.f64 = double(temp.f32);
	// stfs f9,944(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 944, temp.u32);
	// stfs f8,948(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 948, temp.u32);
	// stfs f7,952(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 952, temp.u32);
	// fadds f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f6,956(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 956, temp.u32);
	// stfs f5,960(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 960, temp.u32);
	// stfs f4,964(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 964, temp.u32);
	// fadds f2,f3,f21
	ctx.f2.f64 = double(float(ctx.f3.f64 + f21.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82763cd8
	sub_82763CD8(ctx, base);
	// lfs f0,944(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	f0.f64 = double(temp.f32);
	// lfs f13,948(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// lfs f12,952(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// lfs f11,956(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,960(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,964(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,1008(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1008, temp.u32);
	// stfs f13,1012(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1012, temp.u32);
	// stfs f12,1016(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// stfs f11,1020(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1020, temp.u32);
	// stfs f10,1024(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1024, temp.u32);
	// stfs f9,1028(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1028, temp.u32);
	// stfs f0,1040(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1040, temp.u32);
	// stfs f13,1044(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1044, temp.u32);
	// stfs f12,1048(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1048, temp.u32);
	// stfs f11,1052(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1052, temp.u32);
	// stfs f10,1056(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1056, temp.u32);
	// stfs f9,1060(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1060, temp.u32);
	// bl 0x82763ab0
	sub_82763AB0(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,392(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	f0.f64 = double(temp.f32);
	// lfs f11,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// lfs f10,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// lfs f8,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fadds f5,f8,f26
	ctx.f5.f64 = double(float(ctx.f8.f64 + f26.f64));
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f4,f7,f26
	ctx.f4.f64 = double(float(ctx.f7.f64 + f26.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f0,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	f0.f64 = double(temp.f32);
	// lfs f3,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r29,692(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// mr r22,r15
	r22.u64 = r15.u64;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f29,f11,f13
	f29.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmr f28,f12
	f28.f64 = ctx.f12.f64;
	// fsubs f27,f0,f12
	f27.f64 = double(float(f0.f64 - ctx.f12.f64));
loc_8284A6FC:
	// lwz r11,680(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// beq cr6,0x8284a768
	if (cr6.eq) goto loc_8284A768;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x8284a728
	if (!cr6.eq) goto loc_8284A728;
	// addi r11,r24,1
	r11.s64 = r24.s64 + 1;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x8284a728
	if (!cr6.eq) goto loc_8284A728;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// beq cr6,0x8284a768
	if (cr6.eq) goto loc_8284A768;
loc_8284A728:
	// addi r11,r1,1008
	r11.s64 = ctx.r1.s64 + 1008;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r8,r1,944
	ctx.r8.s64 = ctx.r1.s64 + 944;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82847ac8
	sub_82847AC8(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// lfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f30.f64 = double(temp.f32);
loc_8284A768:
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8284A778:
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// extsw r11,r28
	r11.s64 = r28.s32;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// std r11,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, r11.u64);
	// lfd f13,360(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x8284a460
	goto loc_8284A460;
loc_8284A7A8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8284a7ec
	if (cr6.eq) goto loc_8284A7EC;
	// addi r11,r1,1008
	r11.s64 = ctx.r1.s64 + 1008;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r9,r1,944
	ctx.r9.s64 = ctx.r1.s64 + 944;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82847ac8
	sub_82847AC8(ctx, base);
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
loc_8284A7EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284a7f8
	if (cr6.eq) goto loc_8284A7F8;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284A7F8:
	// lwz r11,684(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a830
	if (cr6.eq) goto loc_8284A830;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8284a830
	if (!cr6.eq) goto loc_8284A830;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284A830:
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x8284a348
	if (!cr6.lt) goto loc_8284A348;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// b 0x8284a348
	goto loc_8284A348;
loc_8284A848:
	// lwz r3,196(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 196);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8284a86c
	if (cr6.eq) goto loc_8284A86C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,1548(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x828140d8
	sub_828140D8(ctx, base);
loc_8284A86C:
	// clrlwi r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284a8b4
	if (cr6.eq) goto loc_8284A8B4;
	// lwz r11,84(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284a8a0
	if (!cr6.eq) goto loc_8284A8A0;
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8284a8b4
	goto loc_8284A8B4;
loc_8284A8A0:
	// addi r5,r17,24
	ctx.r5.s64 = r17.s64 + 24;
	// lwz r4,1540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1540);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x828478a8
	sub_828478A8(ctx, base);
loc_8284A8B4:
	// lwz r3,1248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab24
}

__attribute__((alias("__imp__sub_8284A8C8"))) PPC_WEAK_FUNC(sub_8284A8C8);
PPC_FUNC_IMPL(__imp__sub_8284A8C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8284A8CC"))) PPC_WEAK_FUNC(sub_8284A8CC);
PPC_FUNC_IMPL(__imp__sub_8284A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A8D0"))) PPC_WEAK_FUNC(sub_8284A8D0);
PPC_FUNC_IMPL(__imp__sub_8284A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf8
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lfs f28,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f28.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f30,10304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10304);
	f30.f64 = double(temp.f32);
	// lfs f29,-372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -372);
	f29.f64 = double(temp.f32);
loc_8284A90C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284a92c
	if (cr6.eq) goto loc_8284A92C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8284a92c
	if (!cr6.lt) goto loc_8284A92C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bge cr6,0x8284a930
	if (!cr6.lt) goto loc_8284A930;
loc_8284A92C:
	// li r11,1
	r11.s64 = 1;
loc_8284A930:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284acc8
	if (!cr6.eq) goto loc_8284ACC8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284a960
	if (cr6.eq) goto loc_8284A960;
	// lbz r11,29(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8284a968
	goto loc_8284A968;
loc_8284A960:
	// lhz r11,40(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_8284A968:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// beq cr6,0x8284a990
	if (cr6.eq) goto loc_8284A990;
	// lhz r11,20(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// b 0x8284a994
	goto loc_8284A994;
loc_8284A990:
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_8284A994:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * f31.f64));
	// beq cr6,0x8284a9bc
	if (cr6.eq) goto loc_8284A9BC;
	// lhz r11,22(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// b 0x8284a9c0
	goto loc_8284A9C0;
loc_8284A9BC:
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_8284A9C0:
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f12,168(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmuls f0,f10,f31
	f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// beq cr6,0x8284a9f4
	if (cr6.eq) goto loc_8284A9F4;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, r11.u8);
	// b 0x8284a9f8
	goto loc_8284A9F8;
loc_8284A9F4:
	// sth r11,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, r11.u16);
loc_8284A9F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8284aa24
	if (cr6.eq) goto loc_8284AA24;
	// sth r11,20(r4)
	PPC_STORE_U16(ctx.r4.u32 + 20, r11.u16);
	// sth r10,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r10.u16);
	// b 0x8284aa2c
	goto loc_8284AA2C;
loc_8284AA24:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
loc_8284AA2C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284aa50
	if (cr6.eq) goto loc_8284AA50;
	// lhz r11,26(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// b 0x8284aa60
	goto loc_8284AA60;
loc_8284AA50:
	// lhz r11,38(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8284AA60:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(f0.s64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// beq cr6,0x8284aa88
	if (cr6.eq) goto loc_8284AA88;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,26(r4)
	PPC_STORE_U16(ctx.r4.u32 + 26, r11.u16);
	// b 0x8284aa94
	goto loc_8284AA94;
loc_8284AA88:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, r11.u16);
loc_8284AA94:
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x82839d08
	sub_82839D08(ctx, base);
loc_8284AAFC:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284ab18
	if (cr6.eq) goto loc_8284AB18;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x8284ab1c
	if (cr6.lt) goto loc_8284AB1C;
loc_8284AB18:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8284AB1C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8284ac68
	if (!cr6.eq) goto loc_8284AC68;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// beq cr6,0x8284ab50
	if (cr6.eq) goto loc_8284AB50;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_8284AB50:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8284ab94
	if (cr6.lt) goto loc_8284AB94;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r5,r5,0,26,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// b 0x8284abb0
	goto loc_8284ABB0;
loc_8284AB94:
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xor r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// ori r4,r6,64
	ctx.r4.u64 = ctx.r6.u64 | 64;
	// subf r3,r8,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r8.s64;
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// sth r3,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r3.u16);
loc_8284ABB0:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r11,4(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r6,r9,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// clrlwi r8,r11,20
	ctx.r8.u64 = r11.u32 & 0xFFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// bne cr6,0x8284abe0
	if (!cr6.eq) goto loc_8284ABE0;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// b 0x8284abf4
	goto loc_8284ABF4;
loc_8284ABE0:
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	f0.f64 = double(float(ctx.f12.f64 * f29.f64));
loc_8284ABF4:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8284ac3c
	if (!cr6.lt) goto loc_8284AC3C;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8284ac3c
	if (cr6.eq) goto loc_8284AC3C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r11,r8,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, r11.u16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// b 0x8284aafc
	goto loc_8284AAFC;
loc_8284AC3C:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r9,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r8,r11,0,16,19
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xF000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0FFF);
	// sth r8,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r8.u16);
	// bl 0x828310c8
	sub_828310C8(ctx, base);
	// b 0x8284aafc
	goto loc_8284AAFC;
loc_8284AC68:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284ac78
	if (cr6.eq) goto loc_8284AC78;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284AC78:
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284acb0
	if (cr6.eq) goto loc_8284ACB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8284acb0
	if (!cr6.eq) goto loc_8284ACB0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284ACB0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8284a90c
	if (!cr6.lt) goto loc_8284A90C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x8284a90c
	goto loc_8284A90C;
loc_8284ACC8:
	// lbz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 116);
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,116(r30)
	PPC_STORE_U8(r30.u32 + 116, ctx.r9.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_8284ACE4"))) PPC_WEAK_FUNC(sub_8284ACE4);
PPC_FUNC_IMPL(__imp__sub_8284ACE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8284ACE8"))) PPC_WEAK_FUNC(sub_8284ACE8);
PPC_FUNC_IMPL(__imp__sub_8284ACE8) {
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
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8284ad88
	if (cr6.eq) goto loc_8284AD88;
	// rlwinm r26,r4,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8284AD18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284ad38
	if (cr6.eq) goto loc_8284AD38;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8284ad38
	if (!cr6.lt) goto loc_8284AD38;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mr r11,r24
	r11.u64 = r24.u64;
	// bge cr6,0x8284ad3c
	if (!cr6.lt) goto loc_8284AD3C;
loc_8284AD38:
	// li r11,1
	r11.s64 = 1;
loc_8284AD3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284ad88
	if (!cr6.eq) goto loc_8284AD88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r30,r26,r11
	r30.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284ad68
	if (cr6.eq) goto loc_8284AD68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82848640
	sub_82848640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284AD68:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8284ad7c
	if (!cr6.lt) goto loc_8284AD7C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_8284AD7C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// blt cr6,0x8284ad18
	if (cr6.lt) goto loc_8284AD18;
loc_8284AD88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8284adf4
	if (!cr6.eq) goto loc_8284ADF4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x8284add0
	if (cr6.eq) goto loc_8284ADD0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284ade8
	if (cr6.eq) goto loc_8284ADE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284adc0
	if (cr6.eq) goto loc_8284ADC0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_8284ADC0:
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8284ADD0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x8284ade8
	if (cr6.gt) goto loc_8284ADE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793b58
	sub_82793B58(ctx, base);
loc_8284ADE8:
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8284ADF4:
	// subf r8,r27,r11
	ctx.r8.s64 = r11.s64 - r27.s64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r7,r27,r29
	ctx.r7.u64 = r27.u64 + r29.u64;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r29,r8
	ctx.r6.s64 = ctx.r8.s64 - r29.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r4,r29,r5
	ctx.r4.s64 = ctx.r5.s64 - r29.s64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8284AE2C"))) PPC_WEAK_FUNC(sub_8284AE2C);
PPC_FUNC_IMPL(__imp__sub_8284AE2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8284AE30"))) PPC_WEAK_FUNC(sub_8284AE30);
PPC_FUNC_IMPL(__imp__sub_8284AE30) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284ae58
	if (cr6.eq) goto loc_8284AE58;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8284ec88
	sub_8284EC88(ctx, base);
loc_8284AE58:
	// lbz r11,116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stb r10,116(r31)
	PPC_STORE_U8(r31.u32 + 116, ctx.r10.u8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8284ace8
	sub_8284ACE8(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284ae88
	if (cr6.eq) goto loc_8284AE88;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284AE88:
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x828152f8
	sub_828152F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8284AEA8"))) PPC_WEAK_FUNC(sub_8284AEA8);
PPC_FUNC_IMPL(__imp__sub_8284AEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284AEAC"))) PPC_WEAK_FUNC(sub_8284AEAC);
PPC_FUNC_IMPL(__imp__sub_8284AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284AEB0"))) PPC_WEAK_FUNC(sub_8284AEB0);
PPC_FUNC_IMPL(__imp__sub_8284AEB0) {
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
	// bl 0x828470d8
	sub_828470D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284af28
	if (cr6.eq) goto loc_8284AF28;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x828470d8
	sub_828470D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284af28
	if (cr6.eq) goto loc_8284AF28;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284af28
	if (!cr6.eq) goto loc_8284AF28;
	// lhz r11,28(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// lhz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8284af28
	if (!cr6.eq) goto loc_8284AF28;
	// lhz r11,30(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 30);
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 30);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8284af2c
	if (cr6.eq) goto loc_8284AF2C;
loc_8284AF28:
	// li r11,0
	r11.s64 = 0;
loc_8284AF2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8284AF44"))) PPC_WEAK_FUNC(sub_8284AF44);
PPC_FUNC_IMPL(__imp__sub_8284AF44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284AF48"))) PPC_WEAK_FUNC(sub_8284AF48);
PPC_FUNC_IMPL(__imp__sub_8284AF48) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x827769a0
	sub_827769A0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x8284af9c
	if (!cr6.lt) goto loc_8284AF9C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_8284AF9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8284afb4
	if (cr0.eq) goto loc_8284AFB4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8284AFB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284AFB8"))) PPC_WEAK_FUNC(sub_8284AFB8);
PPC_FUNC_IMPL(__imp__sub_8284AFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284AFBC"))) PPC_WEAK_FUNC(sub_8284AFBC);
PPC_FUNC_IMPL(__imp__sub_8284AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284AFC0"))) PPC_WEAK_FUNC(sub_8284AFC0);
PPC_FUNC_IMPL(__imp__sub_8284AFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// bl 0x82874218
	sub_82874218(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lbz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r10.u8);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x82848748
	sub_82848748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8284B0E0"))) PPC_WEAK_FUNC(sub_8284B0E0);
PPC_FUNC_IMPL(__imp__sub_8284B0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8284B0E4"))) PPC_WEAK_FUNC(sub_8284B0E4);
PPC_FUNC_IMPL(__imp__sub_8284B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B0E8"))) PPC_WEAK_FUNC(sub_8284B0E8);
PPC_FUNC_IMPL(__imp__sub_8284B0E8) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8284b1c4
	if (cr6.eq) goto loc_8284B1C4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8284b140
	if (cr6.eq) goto loc_8284B140;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8284b138
	if (!cr6.eq) goto loc_8284B138;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x8284b144
	goto loc_8284B144;
loc_8284B138:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x8284b144
	goto loc_8284B144;
loc_8284B140:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8284B144:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r10,r4,30
	ctx.r10.s64 = ctx.r4.s64 + 30;
	// bne cr6,0x8284b158
	if (!cr6.eq) goto loc_8284B158;
	// addi r10,r4,42
	ctx.r10.s64 = ctx.r4.s64 + 42;
	// beq cr6,0x8284b160
	if (cr6.eq) goto loc_8284B160;
loc_8284B158:
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// b 0x8284b164
	goto loc_8284B164;
loc_8284B160:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8284B164:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// beq cr6,0x8284b188
	if (cr6.eq) goto loc_8284B188;
	// lbz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// b 0x8284b18c
	goto loc_8284B18C;
loc_8284B188:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8284B18C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8284b1ac
	if (cr6.eq) goto loc_8284B1AC;
	// addi r4,r4,30
	ctx.r4.s64 = ctx.r4.s64 + 30;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8284afc0
	sub_8284AFC0(ctx, base);
	// b 0x8284b1cc
	goto loc_8284B1CC;
loc_8284B1AC:
	// addi r4,r4,42
	ctx.r4.s64 = ctx.r4.s64 + 42;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8284afc0
	sub_8284AFC0(ctx, base);
	// b 0x8284b1cc
	goto loc_8284B1CC;
loc_8284B1C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82839d08
	sub_82839D08(ctx, base);
loc_8284B1CC:
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

__attribute__((alias("__imp__sub_8284B1E0"))) PPC_WEAK_FUNC(sub_8284B1E0);
PPC_FUNC_IMPL(__imp__sub_8284B1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B1E4"))) PPC_WEAK_FUNC(sub_8284B1E4);
PPC_FUNC_IMPL(__imp__sub_8284B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B1E8"))) PPC_WEAK_FUNC(sub_8284B1E8);
PPC_FUNC_IMPL(__imp__sub_8284B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284b210
	if (cr6.eq) goto loc_8284B210;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_8284B210:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284b220
	if (cr6.eq) goto loc_8284B220;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_8284B220:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b230
	if (cr6.eq) goto loc_8284B230;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B230:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b240
	if (cr6.eq) goto loc_8284B240;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B240:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284B24C"))) PPC_WEAK_FUNC(sub_8284B24C);
PPC_FUNC_IMPL(__imp__sub_8284B24C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284B250"))) PPC_WEAK_FUNC(sub_8284B250);
PPC_FUNC_IMPL(__imp__sub_8284B250) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b274
	if (cr6.eq) goto loc_8284B274;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B274:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b284
	if (cr6.eq) goto loc_8284B284;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8284B294"))) PPC_WEAK_FUNC(sub_8284B294);
PPC_FUNC_IMPL(__imp__sub_8284B294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B298"))) PPC_WEAK_FUNC(sub_8284B298);
PPC_FUNC_IMPL(__imp__sub_8284B298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b2e0
	if (cr6.eq) goto loc_8284B2E0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284b2e0
	if (cr6.eq) goto loc_8284B2E0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r11,0
	r11.s64 = 0;
loc_8284B2BC:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x8284b2e8
	if (cr6.lt) goto loc_8284B2E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8284b2bc
	if (cr6.lt) goto loc_8284B2BC;
loc_8284B2E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8284B2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B2F0"))) PPC_WEAK_FUNC(sub_8284B2F0);
PPC_FUNC_IMPL(__imp__sub_8284B2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93e4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r12,787
	r12.s64 = 787;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// and r25,r6,r12
	r25.u64 = ctx.r6.u64 & r12.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b690
	if (cr6.eq) goto loc_8284B690;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r16,0
	r16.s64 = 0;
	// mr r17,r16
	r17.u64 = r16.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// mr r24,r16
	r24.u64 = r16.u64;
	// mr r27,r16
	r27.u64 = r16.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8284b428
	if (!cr6.gt) goto loc_8284B428;
	// mr r28,r16
	r28.u64 = r16.u64;
	// li r22,768
	r22.s64 = 768;
loc_8284B350:
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8284b428
	if (!cr6.eq) goto loc_8284B428;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r26,r28,r11
	r26.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// bl 0x827cd508
	sub_827CD508(ctx, base);
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwsync 
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b410
	if (cr6.eq) goto loc_8284B410;
	// rlwinm r11,r25,0,22,23
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x300;
	// rlwinm r10,r25,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// li r12,787
	r12.s64 = 787;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r25,r12
	r30.u64 = r25.u64 & r12.u64;
	// and r6,r7,r22
	ctx.r6.u64 = ctx.r7.u64 & r22.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// ori r29,r5,3
	r29.u64 = ctx.r5.u64 | 3;
loc_8284B3A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r10,r11,r29
	ctx.r10.u64 = r11.u64 & r29.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x8284b3e0
	if (!cr6.eq) goto loc_8284B3E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8284b3e4
	if (cr6.eq) goto loc_8284B3E4;
loc_8284B3E0:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_8284B3E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284b408
	if (!cr6.eq) goto loc_8284B408;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwsync 
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284b3a8
	if (!cr6.eq) goto loc_8284B3A8;
	// b 0x8284b410
	goto loc_8284B410;
loc_8284B408:
	// lwz r17,8(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r24,1
	r24.s64 = 1;
loc_8284B410:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x8284b350
	if (cr6.lt) goto loc_8284B350;
loc_8284B428:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b690
	if (cr6.eq) goto loc_8284B690;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8284b4a8
	if (cr6.eq) goto loc_8284B4A8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b470
	if (cr6.eq) goto loc_8284B470;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,24(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// bl 0x82804798
	sub_82804798(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8284b474
	goto loc_8284B474;
loc_8284B470:
	// mr r31,r16
	r31.u64 = r16.u64;
loc_8284B474:
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// ori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 | 1;
	// bl 0x82807a00
	sub_82807A00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284b5f8
	if (cr6.eq) goto loc_8284B5F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// b 0x8284b5f8
	goto loc_8284B5F8;
loc_8284B4A8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8284b690
	if (cr6.eq) goto loc_8284B690;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82806a48
	sub_82806A48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b528
	if (cr6.eq) goto loc_8284B528;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284B528:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b538
	if (cr6.eq) goto loc_8284B538;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284B538:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b548
	if (cr6.eq) goto loc_8284B548;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284B548:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// bl 0x82806478
	sub_82806478(ctx, base);
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,27508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b580
	if (cr6.eq) goto loc_8284B580;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82805480
	sub_82805480(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8284b584
	goto loc_8284B584;
loc_8284B580:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_8284B584:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,27508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27508);
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b5b4
	if (cr6.eq) goto loc_8284B5B4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82804798
	sub_82804798(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8284b5b8
	goto loc_8284B5B8;
loc_8284B5B4:
	// mr r31,r16
	r31.u64 = r16.u64;
loc_8284B5B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82807a00
	sub_82807A00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284b5e0
	if (cr6.eq) goto loc_8284B5E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284B5E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284b5f0
	if (cr6.eq) goto loc_8284B5F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284B5F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82805d00
	sub_82805D00(ctx, base);
loc_8284B5F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284b690
	if (cr6.eq) goto loc_8284B690;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// lbz r11,64(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b640
	if (cr6.eq) goto loc_8284B640;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// bge cr6,0x8284b640
	if (!cr6.lt) goto loc_8284B640;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r17,3,0,28
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x827d2c38
	sub_827D2C38(ctx, base);
	// b 0x8284b64c
	goto loc_8284B64C;
loc_8284B640:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82824808
	sub_82824808(ctx, base);
loc_8284B64C:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8284b688
	if (cr6.eq) goto loc_8284B688;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8284b1e8
	sub_8284B1E8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b674
	if (cr6.eq) goto loc_8284B674;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B674:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9434
	return;
loc_8284B688:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B690:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8284B698"))) PPC_WEAK_FUNC(sub_8284B698);
PPC_FUNC_IMPL(__imp__sub_8284B698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_8284B69C"))) PPC_WEAK_FUNC(sub_8284B69C);
PPC_FUNC_IMPL(__imp__sub_8284B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B6A0"))) PPC_WEAK_FUNC(sub_8284B6A0);
PPC_FUNC_IMPL(__imp__sub_8284B6A0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b734
	if (cr6.eq) goto loc_8284B734;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284b734
	if (cr6.eq) goto loc_8284B734;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284b6e4
	if (cr6.eq) goto loc_8284B6E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_8284B6E4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8284b948
	sub_8284B948(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284b704
	if (cr6.eq) goto loc_8284B704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_8284B704:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b734
	if (cr6.eq) goto loc_8284B734;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b734
	if (cr6.eq) goto loc_8284B734;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8284B734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284B738"))) PPC_WEAK_FUNC(sub_8284B738);
PPC_FUNC_IMPL(__imp__sub_8284B738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8284B73C"))) PPC_WEAK_FUNC(sub_8284B73C);
PPC_FUNC_IMPL(__imp__sub_8284B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B740"))) PPC_WEAK_FUNC(sub_8284B740);
PPC_FUNC_IMPL(__imp__sub_8284B740) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,26868
	ctx.r9.s64 = r11.s64 + 26868;
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,27508(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8284b7a8
	if (cr6.eq) goto loc_8284B7A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x8284b7ac
	goto loc_8284B7AC;
loc_8284B7A8:
	// li r11,0
	r11.s64 = 0;
loc_8284B7AC:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8284B7C0"))) PPC_WEAK_FUNC(sub_8284B7C0);
PPC_FUNC_IMPL(__imp__sub_8284B7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B7C4"))) PPC_WEAK_FUNC(sub_8284B7C4);
PPC_FUNC_IMPL(__imp__sub_8284B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B7C8"))) PPC_WEAK_FUNC(sub_8284B7C8);
PPC_FUNC_IMPL(__imp__sub_8284B7C8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,26868
	ctx.r10.s64 = r11.s64 + 26868;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8284b814
	if (cr6.eq) goto loc_8284B814;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827d2620
	sub_827D2620(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284B814:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,12284
	ctx.r10.s64 = r11.s64 + 12284;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
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

__attribute__((alias("__imp__sub_8284B83C"))) PPC_WEAK_FUNC(sub_8284B83C);
PPC_FUNC_IMPL(__imp__sub_8284B83C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B840"))) PPC_WEAK_FUNC(sub_8284B840);
PPC_FUNC_IMPL(__imp__sub_8284B840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b93c
	if (cr6.eq) goto loc_8284B93C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8284b93c
	if (!cr6.gt) goto loc_8284B93C;
	// li r29,0
	r29.s64 = 0;
	// li r28,-1
	r28.s64 = -1;
loc_8284B878:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x827cd508
	sub_827CD508(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r31,152(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwsync 
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284b924
	if (cr6.eq) goto loc_8284B924;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8284B8AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827f2068
	sub_827F2068(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r6,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
loc_8284B8E8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r28,r9
	ctx.r8.u64 = r28.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8284b8e8
	if (!cr0.eq) goto loc_8284B8E8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8284b914
	if (!cr0.eq) goto loc_8284B914;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284B914:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwsync 
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8284b8ac
	if (!cr6.eq) goto loc_8284B8AC;
loc_8284B924:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x8284b878
	if (cr6.lt) goto loc_8284B878;
loc_8284B93C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8284B940"))) PPC_WEAK_FUNC(sub_8284B940);
PPC_FUNC_IMPL(__imp__sub_8284B940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8284B944"))) PPC_WEAK_FUNC(sub_8284B944);
PPC_FUNC_IMPL(__imp__sub_8284B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B948"))) PPC_WEAK_FUNC(sub_8284B948);
PPC_FUNC_IMPL(__imp__sub_8284B948) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827c8348
	sub_827C8348(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addic. r31,r10,-4
	xer.ca = ctx.r10.u32 > 3;
	r31.s64 = ctx.r10.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8284b9a4
	if (cr0.eq) goto loc_8284B9A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284b99c
	if (cr6.eq) goto loc_8284B99C;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_8284B99C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8284B9A4:
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

__attribute__((alias("__imp__sub_8284B9B8"))) PPC_WEAK_FUNC(sub_8284B9B8);
PPC_FUNC_IMPL(__imp__sub_8284B9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284B9BC"))) PPC_WEAK_FUNC(sub_8284B9BC);
PPC_FUNC_IMPL(__imp__sub_8284B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284B9C0"))) PPC_WEAK_FUNC(sub_8284B9C0);
PPC_FUNC_IMPL(__imp__sub_8284B9C0) {
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
	// bl 0x8284b7c8
	sub_8284B7C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284b9f8
	if (cr6.eq) goto loc_8284B9F8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8284B9F8:
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

__attribute__((alias("__imp__sub_8284BA0C"))) PPC_WEAK_FUNC(sub_8284BA0C);
PPC_FUNC_IMPL(__imp__sub_8284BA0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BA10"))) PPC_WEAK_FUNC(sub_8284BA10);
PPC_FUNC_IMPL(__imp__sub_8284BA10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8284BA68"))) PPC_WEAK_FUNC(sub_8284BA68);
PPC_FUNC_IMPL(__imp__sub_8284BA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BA6C"))) PPC_WEAK_FUNC(sub_8284BA6C);
PPC_FUNC_IMPL(__imp__sub_8284BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BA70"))) PPC_WEAK_FUNC(sub_8284BA70);
PPC_FUNC_IMPL(__imp__sub_8284BA70) {
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
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x8284bb24
	if (cr6.eq) goto loc_8284BB24;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8284bb24
	if (!cr6.eq) goto loc_8284BB24;
loc_8284BABC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8284baf0
	if (!cr6.eq) goto loc_8284BAF0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8284bb18
	if (cr6.eq) goto loc_8284BB18;
loc_8284BAF0:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8284bb24
	if (cr6.eq) goto loc_8284BB24;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// b 0x8284babc
	goto loc_8284BABC;
loc_8284BB18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284BB24:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284BB2C"))) PPC_WEAK_FUNC(sub_8284BB2C);
PPC_FUNC_IMPL(__imp__sub_8284BB2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284BB30"))) PPC_WEAK_FUNC(sub_8284BB30);
PPC_FUNC_IMPL(__imp__sub_8284BB30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8284BB84"))) PPC_WEAK_FUNC(sub_8284BB84);
PPC_FUNC_IMPL(__imp__sub_8284BB84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BB88"))) PPC_WEAK_FUNC(sub_8284BB88);
PPC_FUNC_IMPL(__imp__sub_8284BB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x8284bc34
	if (cr6.eq) goto loc_8284BC34;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8284bc34
	if (!cr6.eq) goto loc_8284BC34;
loc_8284BBBC:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8284bc10
	if (!cr6.eq) goto loc_8284BC10;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r6,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8284BBE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8284bc08
	if (cr6.eq) goto loc_8284BC08;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8284bbe4
	if (cr6.eq) goto loc_8284BBE4;
loc_8284BC08:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8284BC10:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8284bc34
	if (cr6.eq) goto loc_8284BC34;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// b 0x8284bbbc
	goto loc_8284BBBC;
loc_8284BC34:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_8284BC38"))) PPC_WEAK_FUNC(sub_8284BC38);
PPC_FUNC_IMPL(__imp__sub_8284BC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BC3C"))) PPC_WEAK_FUNC(sub_8284BC3C);
PPC_FUNC_IMPL(__imp__sub_8284BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BC40"))) PPC_WEAK_FUNC(sub_8284BC40);
PPC_FUNC_IMPL(__imp__sub_8284BC40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284bc70
	if (!cr6.eq) goto loc_8284BC70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8284bcb0
	goto loc_8284BCB0;
loc_8284BC70:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// bl 0x8284ba70
	sub_8284BA70(ctx, base);
loc_8284BCB0:
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

__attribute__((alias("__imp__sub_8284BCC4"))) PPC_WEAK_FUNC(sub_8284BCC4);
PPC_FUNC_IMPL(__imp__sub_8284BCC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BCC8"))) PPC_WEAK_FUNC(sub_8284BCC8);
PPC_FUNC_IMPL(__imp__sub_8284BCC8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82762968
	sub_82762968(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284BD24"))) PPC_WEAK_FUNC(sub_8284BD24);
PPC_FUNC_IMPL(__imp__sub_8284BD24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8284BD28"))) PPC_WEAK_FUNC(sub_8284BD28);
PPC_FUNC_IMPL(__imp__sub_8284BD28) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284bd94
	if (cr6.eq) goto loc_8284BD94;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// li r27,-2
	r27.s64 = -2;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_8284BD54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x8284bd78
	if (cr6.eq) goto loc_8284BD78;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827e8860
	sub_827E8860(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_8284BD78:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x8284bd54
	if (!cr0.eq) goto loc_8284BD54;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8284BD94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284BD98"))) PPC_WEAK_FUNC(sub_8284BD98);
PPC_FUNC_IMPL(__imp__sub_8284BD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284BD9C"))) PPC_WEAK_FUNC(sub_8284BD9C);
PPC_FUNC_IMPL(__imp__sub_8284BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BDA0"))) PPC_WEAK_FUNC(sub_8284BDA0);
PPC_FUNC_IMPL(__imp__sub_8284BDA0) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8284bc40
	sub_8284BC40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8284bde4
	if (cr6.lt) goto loc_8284BDE4;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8284bde8
	goto loc_8284BDE8;
loc_8284BDE4:
	// li r11,0
	r11.s64 = 0;
loc_8284BDE8:
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8284BE08"))) PPC_WEAK_FUNC(sub_8284BE08);
PPC_FUNC_IMPL(__imp__sub_8284BE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BE0C"))) PPC_WEAK_FUNC(sub_8284BE0C);
PPC_FUNC_IMPL(__imp__sub_8284BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BE10"))) PPC_WEAK_FUNC(sub_8284BE10);
PPC_FUNC_IMPL(__imp__sub_8284BE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284bebc
	if (cr6.eq) goto loc_8284BEBC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8284bda0
	sub_8284BDA0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_8284BE64:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8284be64
	if (!cr0.eq) goto loc_8284BE64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8284be90
	if (!cr0.eq) goto loc_8284BE90;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284BE90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284bebc
	if (cr6.eq) goto loc_8284BEBC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x8284bec0
	goto loc_8284BEC0;
loc_8284BEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8284BEC0:
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

__attribute__((alias("__imp__sub_8284BED4"))) PPC_WEAK_FUNC(sub_8284BED4);
PPC_FUNC_IMPL(__imp__sub_8284BED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BED8"))) PPC_WEAK_FUNC(sub_8284BED8);
PPC_FUNC_IMPL(__imp__sub_8284BED8) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,26880
	ctx.r9.s64 = r11.s64 + 26880;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,27508(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8284bf38
	if (cr6.eq) goto loc_8284BF38;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8284bf3c
	goto loc_8284BF3C;
loc_8284BF38:
	// li r11,0
	r11.s64 = 0;
loc_8284BF3C:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8284BF50"))) PPC_WEAK_FUNC(sub_8284BF50);
PPC_FUNC_IMPL(__imp__sub_8284BF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BF54"))) PPC_WEAK_FUNC(sub_8284BF54);
PPC_FUNC_IMPL(__imp__sub_8284BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BF58"))) PPC_WEAK_FUNC(sub_8284BF58);
PPC_FUNC_IMPL(__imp__sub_8284BF58) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,26880
	ctx.r10.s64 = r11.s64 + 26880;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8284bf98
	if (cr6.eq) goto loc_8284BF98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8284bd28
	sub_8284BD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284BF98:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,12284
	ctx.r10.s64 = r11.s64 + 12284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
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

__attribute__((alias("__imp__sub_8284BFC0"))) PPC_WEAK_FUNC(sub_8284BFC0);
PPC_FUNC_IMPL(__imp__sub_8284BFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284BFC4"))) PPC_WEAK_FUNC(sub_8284BFC4);
PPC_FUNC_IMPL(__imp__sub_8284BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284BFC8"))) PPC_WEAK_FUNC(sub_8284BFC8);
PPC_FUNC_IMPL(__imp__sub_8284BFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284c054
	if (cr6.eq) goto loc_8284C054;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284c054
	if (cr6.eq) goto loc_8284C054;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8284bda0
	sub_8284BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c064
	if (cr6.eq) goto loc_8284C064;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_8284C028:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8284c028
	if (!cr0.eq) goto loc_8284C028;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8284c054
	if (!cr0.eq) goto loc_8284C054;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C054:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8284C064:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,-1
	r31.s64 = -1;
	// rlwinm r3,r8,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8284C094:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8284c094
	if (!cr0.eq) goto loc_8284C094;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8284c0c0
	if (!cr0.eq) goto loc_8284C0C0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C0C0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x8284c810
	sub_8284C810(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r3,r6,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
loc_8284C0EC:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r31,r9
	ctx.r8.u64 = r31.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8284c0ec
	if (!cr0.eq) goto loc_8284C0EC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8284c118
	if (!cr0.eq) goto loc_8284C118;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C118:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8284C124:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8284c124
	if (!cr0.eq) goto loc_8284C124;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8284c150
	if (!cr0.eq) goto loc_8284C150;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C150:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8284C15C"))) PPC_WEAK_FUNC(sub_8284C15C);
PPC_FUNC_IMPL(__imp__sub_8284C15C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284C160"))) PPC_WEAK_FUNC(sub_8284C160);
PPC_FUNC_IMPL(__imp__sub_8284C160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284c1ec
	if (cr6.eq) goto loc_8284C1EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284c1ec
	if (cr6.eq) goto loc_8284C1EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763400
	sub_82763400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8284bda0
	sub_8284BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c1fc
	if (cr6.eq) goto loc_8284C1FC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_8284C1C0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8284c1c0
	if (!cr0.eq) goto loc_8284C1C0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8284c1ec
	if (!cr0.eq) goto loc_8284C1EC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8284C1FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82763400
	sub_82763400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,-1
	r31.s64 = -1;
	// rlwinm r3,r8,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8284C22C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8284c22c
	if (!cr0.eq) goto loc_8284C22C;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8284c258
	if (!cr0.eq) goto loc_8284C258;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C258:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x8284c810
	sub_8284C810(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r3,r6,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
loc_8284C284:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r31,r9
	ctx.r8.u64 = r31.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8284c284
	if (!cr0.eq) goto loc_8284C284;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8284c2b0
	if (!cr0.eq) goto loc_8284C2B0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C2B0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8284C2BC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8284c2bc
	if (!cr0.eq) goto loc_8284C2BC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8284c2e8
	if (!cr0.eq) goto loc_8284C2E8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C2E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8284C2F4"))) PPC_WEAK_FUNC(sub_8284C2F4);
PPC_FUNC_IMPL(__imp__sub_8284C2F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284C2F8"))) PPC_WEAK_FUNC(sub_8284C2F8);
PPC_FUNC_IMPL(__imp__sub_8284C2F8) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8284c320
	if (!cr6.eq) goto loc_8284C320;
	// bl 0x8284bd28
	sub_8284BD28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_8284C320:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bge cr6,0x8284c330
	if (!cr6.lt) goto loc_8284C330;
	// li r31,8
	r31.s64 = 8;
	// b 0x8284c378
	goto loc_8284C378;
loc_8284C330:
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
loc_8284C378:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r25,0
	r25.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	r27.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8284c3e8
	if (cr6.eq) goto loc_8284C3E8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r25
	r11.u64 = r25.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
loc_8284C3D4:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// bdnz 0x8284c3d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8284C3D4;
loc_8284C3E8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284c470
	if (cr6.eq) goto loc_8284C470;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_8284C400:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x8284c45c
	if (cr6.eq) goto loc_8284C45C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r9,1
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284c490
	sub_8284C490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8860
	sub_827E8860(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_8284C45C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// bne 0x8284c400
	if (!cr0.eq) goto loc_8284C400;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C470:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// bl 0x8284bd28
	sub_8284BD28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8284C488"))) PPC_WEAK_FUNC(sub_8284C488);
PPC_FUNC_IMPL(__imp__sub_8284C488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8284C48C"))) PPC_WEAK_FUNC(sub_8284C48C);
PPC_FUNC_IMPL(__imp__sub_8284C48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284C490"))) PPC_WEAK_FUNC(sub_8284C490);
PPC_FUNC_IMPL(__imp__sub_8284C490) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284c4bc
	if (!cr6.eq) goto loc_8284C4BC;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8284c4e8
	goto loc_8284C4E8;
loc_8284C4BC:
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
	// ble cr6,0x8284c4f0
	if (!cr6.gt) goto loc_8284C4F0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8284C4E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8284c2f8
	sub_8284C2F8(ctx, base);
loc_8284C4F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r30,r9,r30
	r30.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r6,-2
	cr6.compare<int32_t>(ctx.r6.s32, -2, xer);
	// bne cr6,0x8284c56c
	if (!cr6.eq) goto loc_8284C56C;
	// li r11,-1
	r11.s64 = -1;
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82762968
	sub_82762968(ctx, base);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284C56C:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8284C570:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r10
	ctx.r8.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r7,-2
	cr6.compare<int32_t>(ctx.r7.s32, -2, xer);
	// bne cr6,0x8284c570
	if (!cr6.eq) goto loc_8284C570;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x8284c5d4
	if (!cr6.eq) goto loc_8284C5D4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c5b8
	if (cr6.eq) goto loc_8284C5B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8284bcc8
	sub_8284BCC8(ctx, base);
loc_8284C5B8:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8284bb30
	sub_8284BB30(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284C5D4:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// beq cr6,0x8284c618
	if (cr6.eq) goto loc_8284C618;
loc_8284C5F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// bne cr6,0x8284c5f4
	if (!cr6.eq) goto loc_8284C5F4;
loc_8284C618:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c628
	if (cr6.eq) goto loc_8284C628;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8284bcc8
	sub_8284BCC8(ctx, base);
loc_8284C628:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8284bb30
	sub_8284BB30(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284C648"))) PPC_WEAK_FUNC(sub_8284C648);
PPC_FUNC_IMPL(__imp__sub_8284C648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284C64C"))) PPC_WEAK_FUNC(sub_8284C64C);
PPC_FUNC_IMPL(__imp__sub_8284C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284C650"))) PPC_WEAK_FUNC(sub_8284C650);
PPC_FUNC_IMPL(__imp__sub_8284C650) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284c67c
	if (!cr6.eq) goto loc_8284C67C;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8284c6a8
	goto loc_8284C6A8;
loc_8284C67C:
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
	// ble cr6,0x8284c6b0
	if (!cr6.gt) goto loc_8284C6B0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8284C6A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8284c2f8
	sub_8284C2F8(ctx, base);
loc_8284C6B0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r30,r9,r30
	r30.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r6,-2
	cr6.compare<int32_t>(ctx.r6.s32, -2, xer);
	// bne cr6,0x8284c730
	if (!cr6.eq) goto loc_8284C730;
	// li r11,-1
	r11.s64 = -1;
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82762968
	sub_82762968(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284C730:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8284C734:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r10
	ctx.r8.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r7,-2
	cr6.compare<int32_t>(ctx.r7.s32, -2, xer);
	// bne cr6,0x8284c734
	if (!cr6.eq) goto loc_8284C734;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x8284c798
	if (!cr6.eq) goto loc_8284C798;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c77c
	if (cr6.eq) goto loc_8284C77C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8284bcc8
	sub_8284BCC8(ctx, base);
loc_8284C77C:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8284ba10
	sub_8284BA10(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284C798:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// beq cr6,0x8284c7dc
	if (cr6.eq) goto loc_8284C7DC;
loc_8284C7B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// bne cr6,0x8284c7b8
	if (!cr6.eq) goto loc_8284C7B8;
loc_8284C7DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284c7ec
	if (cr6.eq) goto loc_8284C7EC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8284bcc8
	sub_8284BCC8(ctx, base);
loc_8284C7EC:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8284ba10
	sub_8284BA10(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284C80C"))) PPC_WEAK_FUNC(sub_8284C80C);
PPC_FUNC_IMPL(__imp__sub_8284C80C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284C810"))) PPC_WEAK_FUNC(sub_8284C810);
PPC_FUNC_IMPL(__imp__sub_8284C810) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8284c8c0
	if (cr6.eq) goto loc_8284C8C0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// and r5,r11,r28
	ctx.r5.u64 = r11.u64 & r28.u64;
	// bl 0x8284bb88
	sub_8284BB88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8284c8c0
	if (cr6.lt) goto loc_8284C8C0;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8284C8C0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8284c650
	sub_8284C650(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284C8D8"))) PPC_WEAK_FUNC(sub_8284C8D8);
PPC_FUNC_IMPL(__imp__sub_8284C8D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284C8DC"))) PPC_WEAK_FUNC(sub_8284C8DC);
PPC_FUNC_IMPL(__imp__sub_8284C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284C8E0"))) PPC_WEAK_FUNC(sub_8284C8E0);
PPC_FUNC_IMPL(__imp__sub_8284C8E0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,26880
	ctx.r10.s64 = r11.s64 + 26880;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8284c91c
	if (cr6.eq) goto loc_8284C91C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8284bd28
	sub_8284BD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8284C91C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,12284
	ctx.r10.s64 = r11.s64 + 12284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8284c948
	if (cr6.eq) goto loc_8284C948;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8284C948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284C94C"))) PPC_WEAK_FUNC(sub_8284C94C);
PPC_FUNC_IMPL(__imp__sub_8284C94C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284C950"))) PPC_WEAK_FUNC(sub_8284C950);
PPC_FUNC_IMPL(__imp__sub_8284C950) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8274ee38
	sub_8274EE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284C958"))) PPC_WEAK_FUNC(sub_8284C958);
PPC_FUNC_IMPL(__imp__sub_8284C958) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8274ee60
	sub_8274EE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284C960"))) PPC_WEAK_FUNC(sub_8284C960);
PPC_FUNC_IMPL(__imp__sub_8284C960) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284C968"))) PPC_WEAK_FUNC(sub_8284C968);
PPC_FUNC_IMPL(__imp__sub_8284C968) {
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
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,12(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r29,16(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x827c62c8
	sub_827C62C8(ctx, base);
	// xor r11,r29,r30
	r11.u64 = r29.u64 ^ r30.u64;
	// xor r10,r11,r31
	ctx.r10.u64 = r11.u64 ^ r31.u64;
	// rlwinm r9,r10,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// xor r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// xor r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 ^ r29.u64;
	// xor r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 ^ r30.u64;
	// xor r3,r6,r31
	ctx.r3.u64 = ctx.r6.u64 ^ r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284C9A8"))) PPC_WEAK_FUNC(sub_8284C9A8);
PPC_FUNC_IMPL(__imp__sub_8284C9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284C9AC"))) PPC_WEAK_FUNC(sub_8284C9AC);
PPC_FUNC_IMPL(__imp__sub_8284C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284C9B0"))) PPC_WEAK_FUNC(sub_8284C9B0);
PPC_FUNC_IMPL(__imp__sub_8284C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8284c9c4
	if (cr6.eq) goto loc_8284C9C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8284C9C4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8284ca88
	sub_8284CA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284C9D0"))) PPC_WEAK_FUNC(sub_8284C9D0);
PPC_FUNC_IMPL(__imp__sub_8284C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284C9E4"))) PPC_WEAK_FUNC(sub_8284C9E4);
PPC_FUNC_IMPL(__imp__sub_8284C9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284C9E8"))) PPC_WEAK_FUNC(sub_8284C9E8);
PPC_FUNC_IMPL(__imp__sub_8284C9E8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8284ca18
	if (cr6.eq) goto loc_8284CA18;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8284ca20
	goto loc_8284CA20;
loc_8284CA18:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
loc_8284CA20:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284ca50
	if (cr6.eq) goto loc_8284CA50;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8284cb18
	sub_8284CB18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8284ca54
	goto loc_8284CA54;
loc_8284CA50:
	// li r31,0
	r31.s64 = 0;
loc_8284CA54:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,18420
	ctx.r4.s64 = r11.s64 + 18420;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827c6328
	sub_827C6328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8284ca78
	if (cr6.eq) goto loc_8284CA78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284CA78:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284CA80"))) PPC_WEAK_FUNC(sub_8284CA80);
PPC_FUNC_IMPL(__imp__sub_8284CA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284CA84"))) PPC_WEAK_FUNC(sub_8284CA84);
PPC_FUNC_IMPL(__imp__sub_8284CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CA88"))) PPC_WEAK_FUNC(sub_8284CA88);
PPC_FUNC_IMPL(__imp__sub_8284CA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8284cb08
	if (!cr6.eq) goto loc_8284CB08;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8284cb08
	if (!cr6.eq) goto loc_8284CB08;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8284cb08
	if (!cr6.eq) goto loc_8284CB08;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_8284CAD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8284cafc
	if (cr6.eq) goto loc_8284CAFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8284cad8
	if (cr6.eq) goto loc_8284CAD8;
loc_8284CAFC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8284cb0c
	if (cr6.eq) goto loc_8284CB0C;
loc_8284CB08:
	// li r11,0
	r11.s64 = 0;
loc_8284CB0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284CB14"))) PPC_WEAK_FUNC(sub_8284CB14);
PPC_FUNC_IMPL(__imp__sub_8284CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CB18"))) PPC_WEAK_FUNC(sub_8284CB18);
PPC_FUNC_IMPL(__imp__sub_8284CB18) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,26920
	ctx.r9.s64 = r11.s64 + 26920;
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284cb70
	if (cr6.eq) goto loc_8284CB70;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_8284CB70:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cb80
	if (cr6.eq) goto loc_8284CB80;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284CB80:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8284cb94
	if (cr6.eq) goto loc_8284CB94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8284CB94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cba4
	if (cr6.eq) goto loc_8284CBA4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284CBA4:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8284cbb8
	if (cr6.eq) goto loc_8284CBB8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8284CBB8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cbc8
	if (cr6.eq) goto loc_8284CBC8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284CBC8:
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284CBD8"))) PPC_WEAK_FUNC(sub_8284CBD8);
PPC_FUNC_IMPL(__imp__sub_8284CBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8284CBDC"))) PPC_WEAK_FUNC(sub_8284CBDC);
PPC_FUNC_IMPL(__imp__sub_8284CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CBE0"))) PPC_WEAK_FUNC(sub_8284CBE0);
PPC_FUNC_IMPL(__imp__sub_8284CBE0) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cc0c
	if (cr6.eq) goto loc_8284CC0C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284CC0C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cc1c
	if (cr6.eq) goto loc_8284CC1C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284CC1C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cc2c
	if (cr6.eq) goto loc_8284CC2C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8284CC2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284cc4c
	if (cr6.eq) goto loc_8284CC4C;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8284CC4C:
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

__attribute__((alias("__imp__sub_8284CC60"))) PPC_WEAK_FUNC(sub_8284CC60);
PPC_FUNC_IMPL(__imp__sub_8284CC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284CC64"))) PPC_WEAK_FUNC(sub_8284CC64);
PPC_FUNC_IMPL(__imp__sub_8284CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CC68"))) PPC_WEAK_FUNC(sub_8284CC68);
PPC_FUNC_IMPL(__imp__sub_8284CC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8284cc8c
	if (cr6.eq) goto loc_8284CC8C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// blr 
	return;
loc_8284CC8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284CC94"))) PPC_WEAK_FUNC(sub_8284CC94);
PPC_FUNC_IMPL(__imp__sub_8284CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CC98"))) PPC_WEAK_FUNC(sub_8284CC98);
PPC_FUNC_IMPL(__imp__sub_8284CC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8284ccbc
	if (cr6.eq) goto loc_8284CCBC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
loc_8284CCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284CCC4"))) PPC_WEAK_FUNC(sub_8284CCC4);
PPC_FUNC_IMPL(__imp__sub_8284CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CCC8"))) PPC_WEAK_FUNC(sub_8284CCC8);
PPC_FUNC_IMPL(__imp__sub_8284CCC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8284ccf8
	if (cr6.eq) goto loc_8284CCF8;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_8284CCF8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284cd08
	if (cr6.eq) goto loc_8284CD08;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284CD08:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8284cd44
	if (cr6.eq) goto loc_8284CD44;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8284CD44:
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

__attribute__((alias("__imp__sub_8284CD58"))) PPC_WEAK_FUNC(sub_8284CD58);
PPC_FUNC_IMPL(__imp__sub_8284CD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284CD5C"))) PPC_WEAK_FUNC(sub_8284CD5C);
PPC_FUNC_IMPL(__imp__sub_8284CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CD60"))) PPC_WEAK_FUNC(sub_8284CD60);
PPC_FUNC_IMPL(__imp__sub_8284CD60) {
	PPC_FUNC_PROLOGUE();
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_8284CD68"))) PPC_WEAK_FUNC(sub_8284CD68);
PPC_FUNC_IMPL(__imp__sub_8284CD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8284ccc8
	sub_8284CCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284CD6C"))) PPC_WEAK_FUNC(sub_8284CD6C);
PPC_FUNC_IMPL(__imp__sub_8284CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284CD70"))) PPC_WEAK_FUNC(sub_8284CD70);
PPC_FUNC_IMPL(__imp__sub_8284CD70) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8284cdc0
	if (cr6.eq) goto loc_8284CDC0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8284cdc0
	if (cr6.eq) goto loc_8284CDC0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8284cdc4
	if (!cr6.eq) goto loc_8284CDC4;
loc_8284CDC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8284CDC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

