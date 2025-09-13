#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827A2A94"))) PPC_WEAK_FUNC(sub_827A2A94);
PPC_FUNC_IMPL(__imp__sub_827A2A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A2A98"))) PPC_WEAK_FUNC(sub_827A2A98);
PPC_FUNC_IMPL(__imp__sub_827A2A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-856(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -856);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x827a2ac0
	if (cr6.eq) goto loc_827A2AC0;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,2040(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, ctx.r8.u32);
loc_827A2AC0:
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2af0
	if (!cr6.eq) goto loc_827A2AF0;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r10.u32);
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2af0
	if (!cr6.eq) goto loc_827A2AF0;
	// stw r8,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r8.u32);
loc_827A2AF0:
	// lwz r9,2004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2b08
	if (cr6.lt) goto loc_827A2B08;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2B08:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stb r4,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r4.u8);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,14(r11)
	PPC_STORE_U8(r11.u32 + 14, ctx.r6.u8);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r8,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r8.u16);
	// stb r9,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_827A2B48"))) PPC_WEAK_FUNC(sub_827A2B48);
PPC_FUNC_IMPL(__imp__sub_827A2B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2B4C"))) PPC_WEAK_FUNC(sub_827A2B4C);
PPC_FUNC_IMPL(__imp__sub_827A2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A2B50"))) PPC_WEAK_FUNC(sub_827A2B50);
PPC_FUNC_IMPL(__imp__sub_827A2B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2b80
	if (!cr6.eq) goto loc_827A2B80;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r10.u32);
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2b80
	if (!cr6.eq) goto loc_827A2B80;
	// li r11,0
	r11.s64 = 0;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
loc_827A2B80:
	// lwz r9,2004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2b98
	if (cr6.lt) goto loc_827A2B98;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2B98:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// sth r4,8(r11)
	PPC_STORE_U16(r11.u32 + 8, ctx.r4.u16);
	// stb r5,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r5.u8);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stb r8,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r8.u8);
	// stb r7,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2BD0"))) PPC_WEAK_FUNC(sub_827A2BD0);
PPC_FUNC_IMPL(__imp__sub_827A2BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a2e58
	if (!cr6.eq) goto loc_827A2E58;
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// li r6,99
	ctx.r6.s64 = 99;
	// li r7,64
	ctx.r7.s64 = 64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a2c7c
	if (cr6.eq) goto loc_827A2C7C;
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2c20
	if (!cr6.eq) goto loc_827A2C20;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// stw r6,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r6.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2c20
	if (!cr6.eq) goto loc_827A2C20;
	// stw r10,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r10.u32);
loc_827A2C20:
	// lwz r8,2004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2c38
	if (cr6.lt) goto loc_827A2C38;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2C38:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r8.u32);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
	// lfs f0,2008(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,2012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r7,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r7.u8);
	// lwz r4,2040(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, r11.u32);
loc_827A2C7C:
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a2d14
	if (cr6.eq) goto loc_827A2D14;
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2cb4
	if (!cr6.eq) goto loc_827A2CB4;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// stw r6,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r6.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2cb4
	if (!cr6.eq) goto loc_827A2CB4;
	// stw r10,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r10.u32);
loc_827A2CB4:
	// lwz r8,2004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2ccc
	if (cr6.lt) goto loc_827A2CCC;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2CCC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r8.u32);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stb r4,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r4.u8);
	// lfs f0,2016(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2016);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,2020(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2020);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// stb r7,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r7.u8);
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r9,r11,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, ctx.r9.u32);
loc_827A2D14:
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a2dac
	if (cr6.eq) goto loc_827A2DAC;
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2d4c
	if (!cr6.eq) goto loc_827A2D4C;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// stw r6,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r6.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2d4c
	if (!cr6.eq) goto loc_827A2D4C;
	// stw r10,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r10.u32);
loc_827A2D4C:
	// lwz r8,2004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2d64
	if (cr6.lt) goto loc_827A2D64;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2D64:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r8,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r8.u32);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stb r4,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r4.u8);
	// lfs f0,2024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,2028(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// stb r7,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r7.u8);
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, ctx.r9.u32);
loc_827A2DAC:
	// lwz r11,2040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a2e44
	if (cr6.eq) goto loc_827A2E44;
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2de4
	if (!cr6.eq) goto loc_827A2DE4;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// stw r6,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r6.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x827a2de4
	if (!cr6.eq) goto loc_827A2DE4;
	// stw r10,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r10.u32);
loc_827A2DE4:
	// lwz r8,2004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x827a2dfc
	if (cr6.lt) goto loc_827A2DFC;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
loc_827A2DFC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r8.u32);
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stb r5,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r5.u8);
	// lfs f0,2032(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,2036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// stb r7,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r7.u8);
	// lwz r4,2040(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// rlwinm r11,r4,0,29,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, r11.u32);
loc_827A2E44:
	// lwz r11,2004(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a2e58
	if (!cr6.eq) goto loc_827A2E58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827A2E58:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwz r11,2000(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r8,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r8.u32);
	// stw r9,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r9.u32);
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bne cr6,0x827a2e78
	if (!cr6.eq) goto loc_827A2E78;
	// stw r10,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r10.u32);
loc_827A2E78:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2E8C"))) PPC_WEAK_FUNC(sub_827A2E8C);
PPC_FUNC_IMPL(__imp__sub_827A2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A2E90"))) PPC_WEAK_FUNC(sub_827A2E90);
PPC_FUNC_IMPL(__imp__sub_827A2E90) {
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
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// ble cr6,0x827a2f28
	if (!cr6.gt) goto loc_827A2F28;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r4,r9,22868
	ctx.r4.s64 = ctx.r9.s64 + 22868;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x827a2f2c
	if (!cr6.eq) goto loc_827A2F2C;
	// bl 0x827620f8
	sub_827620F8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r10,1
	r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
	// bl 0x82761860
	sub_82761860(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-836
	ctx.r4.s64 = ctx.r9.s64 + -836;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761860
	sub_82761860(ctx, base);
loc_827A2F28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827A2F2C:
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

__attribute__((alias("__imp__sub_827A2F40"))) PPC_WEAK_FUNC(sub_827A2F40);
PPC_FUNC_IMPL(__imp__sub_827A2F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2F44"))) PPC_WEAK_FUNC(sub_827A2F44);
PPC_FUNC_IMPL(__imp__sub_827A2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A2F48"))) PPC_WEAK_FUNC(sub_827A2F48);
PPC_FUNC_IMPL(__imp__sub_827A2F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2F50"))) PPC_WEAK_FUNC(sub_827A2F50);
PPC_FUNC_IMPL(__imp__sub_827A2F50) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a2f94
	if (cr6.eq) goto loc_827A2F94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82800d88
	sub_82800D88(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// bl 0x82800f28
	sub_82800F28(ctx, base);
loc_827A2F94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8277b350
	sub_8277B350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274d620
	sub_8274D620(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_827A2FC0"))) PPC_WEAK_FUNC(sub_827A2FC0);
PPC_FUNC_IMPL(__imp__sub_827A2FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2FC4"))) PPC_WEAK_FUNC(sub_827A2FC4);
PPC_FUNC_IMPL(__imp__sub_827A2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A2FC8"))) PPC_WEAK_FUNC(sub_827A2FC8);
PPC_FUNC_IMPL(__imp__sub_827A2FC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827a2f50
	sub_827A2F50(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274d708
	sub_8274D708(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_827A3010"))) PPC_WEAK_FUNC(sub_827A3010);
PPC_FUNC_IMPL(__imp__sub_827A3010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3014"))) PPC_WEAK_FUNC(sub_827A3014);
PPC_FUNC_IMPL(__imp__sub_827A3014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3018"))) PPC_WEAK_FUNC(sub_827A3018);
PPC_FUNC_IMPL(__imp__sub_827A3018) {
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
	// lwz r10,2512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2512);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,256(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3088
	if (cr6.eq) goto loc_827A3088;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 2512);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A3088:
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

__attribute__((alias("__imp__sub_827A309C"))) PPC_WEAK_FUNC(sub_827A309C);
PPC_FUNC_IMPL(__imp__sub_827A309C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A30A0"))) PPC_WEAK_FUNC(sub_827A30A0);
PPC_FUNC_IMPL(__imp__sub_827A30A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827a30d4
	if (cr6.eq) goto loc_827A30D4;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r11,0
	r11.s64 = 0;
loc_827A30B8:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x827a30dc
	if (cr6.eq) goto loc_827A30DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x827a30b8
	if (cr6.lt) goto loc_827A30B8;
loc_827A30D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827A30DC:
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
}

__attribute__((alias("__imp__sub_827A30E8"))) PPC_WEAK_FUNC(sub_827A30E8);
PPC_FUNC_IMPL(__imp__sub_827A30E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A30EC"))) PPC_WEAK_FUNC(sub_827A30EC);
PPC_FUNC_IMPL(__imp__sub_827A30EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A30F0"))) PPC_WEAK_FUNC(sub_827A30F0);
PPC_FUNC_IMPL(__imp__sub_827A30F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r29,0
	r29.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x827a3170
	if (!cr6.eq) goto loc_827A3170;
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
	// beq cr6,0x827a3164
	if (cr6.eq) goto loc_827A3164;
	// lwz r11,256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// bne cr6,0x827a3150
	if (!cr6.eq) goto loc_827A3150;
	// li r5,0
	ctx.r5.s64 = 0;
loc_827A3150:
	// lwz r11,108(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x82804798
	sub_82804798(ctx, base);
	// b 0x827a3168
	goto loc_827A3168;
loc_827A3164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A3168:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_827A3170:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827a3294
	if (cr6.eq) goto loc_827A3294;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ce070
	sub_827CE070(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,20(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827b1368
	sub_827B1368(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a31fc
	if (!cr6.eq) goto loc_827A31FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a31e0
	if (cr6.eq) goto loc_827A31E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A31E0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a31f0
	if (cr6.eq) goto loc_827A31F0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A31F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_827A31FC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827d15e8
	sub_827D15E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82802f50
	sub_82802F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3268
	if (cr6.eq) goto loc_827A3268;
	// lwz r11,256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x827cf3e8
	sub_827CF3E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x827a326c
	goto loc_827A326C;
loc_827A3268:
	// li r29,0
	r29.s64 = 0;
loc_827A326C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3294
	if (cr6.eq) goto loc_827A3294;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A3294:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a32a4
	if (cr6.eq) goto loc_827A32A4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A32A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827A32AC"))) PPC_WEAK_FUNC(sub_827A32AC);
PPC_FUNC_IMPL(__imp__sub_827A32AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827A32B0"))) PPC_WEAK_FUNC(sub_827A32B0);
PPC_FUNC_IMPL(__imp__sub_827A32B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r29,r4,12
	r29.s64 = ctx.r4.s64 + 12;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a340c
	if (cr6.eq) goto loc_827A340C;
	// li r11,5
	r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828030c8
	sub_828030C8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r3,r3,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827A335C:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r6,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r30,r6
	ctx.r5.u64 = r30.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x827a335c
	if (!cr0.eq) goto loc_827A335C;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addic. r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827a3388
	if (!cr0.eq) goto loc_827A3388;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A3388:
	// lwz r3,104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r5,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_827A33D8:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r30,r8
	ctx.r7.u64 = r30.u64 + ctx.r8.u64;
	// stwcx. r7,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x827a33d8
	if (!cr0.eq) goto loc_827A33D8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827a3404
	if (!cr0.eq) goto loc_827A3404;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A3404:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b15f0
	sub_827B15F0(ctx, base);
loc_827A340C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827A3410"))) PPC_WEAK_FUNC(sub_827A3410);
PPC_FUNC_IMPL(__imp__sub_827A3410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827A3414"))) PPC_WEAK_FUNC(sub_827A3414);
PPC_FUNC_IMPL(__imp__sub_827A3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3418"))) PPC_WEAK_FUNC(sub_827A3418);
PPC_FUNC_IMPL(__imp__sub_827A3418) {
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
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a3458
	if (!cr6.eq) goto loc_827A3458;
loc_827A3438:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827620f8
	sub_827620F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827A3458:
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761b38
	sub_82761B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82805fc0
	sub_82805FC0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a3438
	if (cr6.eq) goto loc_827A3438;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A34A0"))) PPC_WEAK_FUNC(sub_827A34A0);
PPC_FUNC_IMPL(__imp__sub_827A34A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A34A4"))) PPC_WEAK_FUNC(sub_827A34A4);
PPC_FUNC_IMPL(__imp__sub_827A34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A34A8"))) PPC_WEAK_FUNC(sub_827A34A8);
PPC_FUNC_IMPL(__imp__sub_827A34A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3514"))) PPC_WEAK_FUNC(sub_827A3514);
PPC_FUNC_IMPL(__imp__sub_827A3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3518"))) PPC_WEAK_FUNC(sub_827A3518);
PPC_FUNC_IMPL(__imp__sub_827A3518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a35e4
	if (cr6.eq) goto loc_827A35E4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_827A3534:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,44(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35b4
	if (!cr6.eq) goto loc_827A35B4;
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a35ac
	if (cr6.eq) goto loc_827A35AC;
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lhz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 24);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x827a35b4
	if (!cr6.eq) goto loc_827A35B4;
loc_827A35AC:
	// li r11,1
	r11.s64 = 1;
	// b 0x827a35b8
	goto loc_827A35B8;
loc_827A35B4:
	// li r11,0
	r11.s64 = 0;
loc_827A35B8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827a35cc
	if (!cr6.eq) goto loc_827A35CC;
loc_827A35C8:
	// li r11,0
	r11.s64 = 0;
loc_827A35CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a3534
	if (!cr6.eq) goto loc_827A3534;
loc_827A35E4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_827A35E8"))) PPC_WEAK_FUNC(sub_827A35E8);
PPC_FUNC_IMPL(__imp__sub_827A35E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A35EC"))) PPC_WEAK_FUNC(sub_827A35EC);
PPC_FUNC_IMPL(__imp__sub_827A35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A35F0"))) PPC_WEAK_FUNC(sub_827A35F0);
PPC_FUNC_IMPL(__imp__sub_827A35F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,102(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 102);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a3648
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A3648;
	// bdzf 4*cr6+eq,0x827a365c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A365C;
	// bne cr6,0x827a3674
	if (!cr6.eq) goto loc_827A3674;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_827A3648:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_827A365C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_827A3674:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r9,308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
}

__attribute__((alias("__imp__sub_827A3688"))) PPC_WEAK_FUNC(sub_827A3688);
PPC_FUNC_IMPL(__imp__sub_827A3688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827A368C"))) PPC_WEAK_FUNC(sub_827A368C);
PPC_FUNC_IMPL(__imp__sub_827A368C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3690"))) PPC_WEAK_FUNC(sub_827A3690);
PPC_FUNC_IMPL(__imp__sub_827A3690) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a3784
	if (cr6.eq) goto loc_827A3784;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r28,2776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2776, r28.u32);
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
	// lwz r31,2772(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a37ec
	if (cr6.eq) goto loc_827A37EC;
loc_827A36DC:
	// lbz r11,102(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 102);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r29,112(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm r8,r10,0,13,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// stw r8,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r8.u32);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827a376c
	if (cr6.eq) goto loc_827A376C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x827a3734
	if (!cr6.eq) goto loc_827A3734;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276b178
	sub_8276B178(ctx, base);
loc_827A3734:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a3750
	if (!cr6.eq) goto loc_827A3750;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a376c
	if (cr6.eq) goto loc_827A376C;
loc_827A3750:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A376C:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a36dc
	if (!cr6.eq) goto loc_827A36DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_827A3784:
	// lwz r3,2776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a37ec
	if (cr6.eq) goto loc_827A37EC;
loc_827A3790:
	// lbz r11,102(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 102);
	// lwz r31,120(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827a37e0
	if (cr6.eq) goto loc_827A37E0;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a37c8
	if (!cr6.eq) goto loc_827A37C8;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a37e0
	if (cr6.eq) goto loc_827A37E0;
loc_827A37C8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A37E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a3790
	if (!cr6.eq) goto loc_827A3790;
loc_827A37EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_827A37F4"))) PPC_WEAK_FUNC(sub_827A37F4);
PPC_FUNC_IMPL(__imp__sub_827A37F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827A37F8"))) PPC_WEAK_FUNC(sub_827A37F8);
PPC_FUNC_IMPL(__imp__sub_827A37F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,2716(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2716);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,2712(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2712);
	// li r11,0
	r11.s64 = 0;
loc_827A3810:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827a382c
	if (cr6.eq) goto loc_827A382C;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x827a3840
	if (cr6.eq) goto loc_827A3840;
loc_827A382C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x827a3810
	if (cr6.lt) goto loc_827A3810;
	// blr 
	return;
loc_827A3840:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_827A3848"))) PPC_WEAK_FUNC(sub_827A3848);
PPC_FUNC_IMPL(__imp__sub_827A3848) {
	PPC_FUNC_PROLOGUE();
	// b 0x827c98a0
	sub_827C98A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A384C"))) PPC_WEAK_FUNC(sub_827A384C);
PPC_FUNC_IMPL(__imp__sub_827A384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3850"))) PPC_WEAK_FUNC(sub_827A3850);
PPC_FUNC_IMPL(__imp__sub_827A3850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3858"))) PPC_WEAK_FUNC(sub_827A3858);
PPC_FUNC_IMPL(__imp__sub_827A3858) {
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
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,12,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a3894
	if (cr6.eq) goto loc_827A3894;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a38ec
	if (!cr6.eq) goto loc_827A38EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a38a0
	if (!cr6.eq) goto loc_827A38A0;
loc_827A3894:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a38ec
	if (cr6.eq) goto loc_827A38EC;
loc_827A38A0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// oris r10,r11,16
	ctx.r10.u64 = r11.u64 | 1048576;
	// bne cr6,0x827a38b8
	if (!cr6.eq) goto loc_827A38B8;
	// rlwinm r10,r11,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
loc_827A38B8:
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
	// lwz r3,2772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a38ec
	if (cr6.eq) goto loc_827A38EC;
loc_827A38C8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,112(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a38c8
	if (!cr6.eq) goto loc_827A38C8;
loc_827A38EC:
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

__attribute__((alias("__imp__sub_827A3900"))) PPC_WEAK_FUNC(sub_827A3900);
PPC_FUNC_IMPL(__imp__sub_827A3900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3904"))) PPC_WEAK_FUNC(sub_827A3904);
PPC_FUNC_IMPL(__imp__sub_827A3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3908"))) PPC_WEAK_FUNC(sub_827A3908);
PPC_FUNC_IMPL(__imp__sub_827A3908) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a3a30
	if (cr6.eq) goto loc_827A3A30;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3a0c
	if (cr6.eq) goto loc_827A3A0C;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x827a3a0c
	if (!cr6.eq) goto loc_827A3A0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3a0c
	if (cr6.eq) goto loc_827A3A0C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x827a3a0c
	if (!cr6.eq) goto loc_827A3A0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,56(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a3a04
	if (!cr0.eq) goto loc_827A3A04;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A3A04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x827a3a34
	goto loc_827A3A34;
loc_827A3A0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a3a30
	if (!cr0.eq) goto loc_827A3A30;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A3A30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A3A34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A3A48"))) PPC_WEAK_FUNC(sub_827A3A48);
PPC_FUNC_IMPL(__imp__sub_827A3A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3A4C"))) PPC_WEAK_FUNC(sub_827A3A4C);
PPC_FUNC_IMPL(__imp__sub_827A3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3A50"))) PPC_WEAK_FUNC(sub_827A3A50);
PPC_FUNC_IMPL(__imp__sub_827A3A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// oris r10,r11,4
	ctx.r10.u64 = r11.u64 | 262144;
	// bne cr6,0x827a3a68
	if (!cr6.eq) goto loc_827A3A68;
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
loc_827A3A68:
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3A70"))) PPC_WEAK_FUNC(sub_827A3A70);
PPC_FUNC_IMPL(__imp__sub_827A3A70) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2748);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a3ac8
	if (cr6.eq) goto loc_827A3AC8;
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3ac8
	if (cr6.eq) goto loc_827A3AC8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
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
loc_827A3AC8:
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

__attribute__((alias("__imp__sub_827A3ADC"))) PPC_WEAK_FUNC(sub_827A3ADC);
PPC_FUNC_IMPL(__imp__sub_827A3ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3AE0"))) PPC_WEAK_FUNC(sub_827A3AE0);
PPC_FUNC_IMPL(__imp__sub_827A3AE0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,2680(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2680);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r26,68(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// beq cr6,0x827a3b84
	if (cr6.eq) goto loc_827A3B84;
	// li r29,0
	r29.s64 = 0;
loc_827A3B18:
	// lwz r11,2676(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2676);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r25,r11,r29
	r25.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r24,32(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r24,32(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8276a750
	sub_8276A750(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x827a3b18
	if (!cr0.eq) goto loc_827A3B18;
loc_827A3B84:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// stw r26,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r26.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_827A3B98"))) PPC_WEAK_FUNC(sub_827A3B98);
PPC_FUNC_IMPL(__imp__sub_827A3B98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827A3B9C"))) PPC_WEAK_FUNC(sub_827A3B9C);
PPC_FUNC_IMPL(__imp__sub_827A3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3BA0"))) PPC_WEAK_FUNC(sub_827A3BA0);
PPC_FUNC_IMPL(__imp__sub_827A3BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,2784(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r3,r9,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,2784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2784);
	// rlwinm r9,r10,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r9,2784(r11)
	PPC_STORE_U32(r11.u32 + 2784, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3BC8"))) PPC_WEAK_FUNC(sub_827A3BC8);
PPC_FUNC_IMPL(__imp__sub_827A3BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3d04
	if (cr6.eq) goto loc_827A3D04;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a3c80
	if (!cr6.eq) goto loc_827A3C80;
	// bl 0x827602d0
	sub_827602D0(ctx, base);
	// li r11,1000
	r11.s64 = 1000;
	// ld r10,2704(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 2704);
	// divdu r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 / r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r30,r10,r9
	r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8279a760
	sub_8279A760(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279ac30
	sub_8279AC30(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,-828
	ctx.r4.s64 = ctx.r8.s64 + -828;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r5,-22596
	ctx.r4.s64 = ctx.r5.s64 + -22596;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// bl 0x827997b0
	sub_827997B0(ctx, base);
	// b 0x827a3d18
	goto loc_827A3D18;
loc_827A3C80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-828
	ctx.r4.s64 = r11.s64 + -828;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r3,r7,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// li r11,-1
	r11.s64 = -1;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_827A3CD4:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r6,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// stwcx. r5,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x827a3cd4
	if (!cr0.eq) goto loc_827A3CD4;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addic. r9,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r9.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827a3d18
	if (!cr0.eq) goto loc_827A3D18;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// b 0x827a3d18
	goto loc_827A3D18;
loc_827A3D04:
	// bl 0x827602d0
	sub_827602D0(ctx, base);
	// li r11,1000
	r11.s64 = 1000;
	// ld r10,2704(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 2704);
	// divdu r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 / r11.u64;
	// subf r30,r10,r9
	r30.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_827A3D18:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827A3D38"))) PPC_WEAK_FUNC(sub_827A3D38);
PPC_FUNC_IMPL(__imp__sub_827A3D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3D3C"))) PPC_WEAK_FUNC(sub_827A3D3C);
PPC_FUNC_IMPL(__imp__sub_827A3D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3D40"))) PPC_WEAK_FUNC(sub_827A3D40);
PPC_FUNC_IMPL(__imp__sub_827A3D40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r28,0
	r28.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r28.u16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r28.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r28.u8);
	// stb r28,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r28.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827a3db4
	if (cr6.eq) goto loc_827A3DB4;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_827A3DB4:
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// or r4,r11,r6
	ctx.r4.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r5,r7,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// or r29,r3,r10
	r29.u64 = ctx.r3.u64 | ctx.r10.u64;
	// beq cr6,0x827a3e1c
	if (cr6.eq) goto loc_827A3E1C;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r9,8(r30)
	PPC_STORE_U16(r30.u32 + 8, ctx.r9.u16);
loc_827A3E1C:
	// bl 0x8277ae20
	sub_8277AE20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a3e34
	if (cr6.eq) goto loc_827A3E34;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A3E34:
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r3,r27,0
	ctx.r3.u64 = __builtin_rotateleft32(r27.u32, 0);
	// bl 0x827791f0
	sub_827791F0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x827a3eac
	if (cr6.eq) goto loc_827A3EAC;
	// ble cr6,0x827a3e9c
	if (!cr6.gt) goto loc_827A3E9C;
	// subf. r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a3eac
	if (cr0.eq) goto loc_827A3EAC;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_827A3E68:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a3e80
	if (cr6.eq) goto loc_827A3E80;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_827A3E80:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bdnz 0x827a3e68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827A3E68;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_827A3E9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_827A3EAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827A3EB0"))) PPC_WEAK_FUNC(sub_827A3EB0);
PPC_FUNC_IMPL(__imp__sub_827A3EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827A3EB4"))) PPC_WEAK_FUNC(sub_827A3EB4);
PPC_FUNC_IMPL(__imp__sub_827A3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3EB8"))) PPC_WEAK_FUNC(sub_827A3EB8);
PPC_FUNC_IMPL(__imp__sub_827A3EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-816
	ctx.r9.s64 = r11.s64 + -816;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_827A3ECC"))) PPC_WEAK_FUNC(sub_827A3ECC);
PPC_FUNC_IMPL(__imp__sub_827A3ECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3ED0"))) PPC_WEAK_FUNC(sub_827A3ED0);
PPC_FUNC_IMPL(__imp__sub_827A3ED0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// beq cr6,0x827a3f50
	if (cr6.eq) goto loc_827A3F50;
	// lwz r30,5(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827a3f50
	if (!cr6.eq) goto loc_827A3F50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r30,172(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// beq cr6,0x827a3f50
	if (cr6.eq) goto loc_827A3F50;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A3F50:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A3F70"))) PPC_WEAK_FUNC(sub_827A3F70);
PPC_FUNC_IMPL(__imp__sub_827A3F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3F74"))) PPC_WEAK_FUNC(sub_827A3F74);
PPC_FUNC_IMPL(__imp__sub_827A3F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3F78"))) PPC_WEAK_FUNC(sub_827A3F78);
PPC_FUNC_IMPL(__imp__sub_827A3F78) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827a40c4
	if (cr6.lt) goto loc_827A40C4;
	// beq cr6,0x827a40b4
	if (cr6.eq) goto loc_827A40B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x827a41d0
	if (!cr6.lt) goto loc_827A41D0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827a4018
	if (!cr6.eq) goto loc_827A4018;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r31,4
	r31.s64 = 4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// b 0x827a403c
	goto loc_827A403C;
loc_827A4018:
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r31,8
	r31.s64 = 8;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827A403C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// beq cr6,0x827a4078
	if (cr6.eq) goto loc_827A4078;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827a4078
	if (!cr0.eq) goto loc_827A4078;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A4078:
	// rlwinm r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a409c
	if (cr6.eq) goto loc_827A409C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827a409c
	if (!cr0.eq) goto loc_827A409C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A409C:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827b94b0
	sub_827B94B0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827a41b8
	goto loc_827A41B8;
loc_827A40B4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827b76b8
	sub_827B76B8(ctx, base);
	// b 0x827a41d0
	goto loc_827A41D0;
loc_827A40C4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827a4108
	if (!cr6.eq) goto loc_827A4108;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r31,1
	r31.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// b 0x827a412c
	goto loc_827A412C;
loc_827A4108:
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r31,2
	r31.s64 = 2;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827A412C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// beq cr6,0x827a4168
	if (cr6.eq) goto loc_827A4168;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827a4168
	if (!cr0.eq) goto loc_827A4168;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A4168:
	// clrlwi r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a418c
	if (cr6.eq) goto loc_827A418C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827a418c
	if (!cr0.eq) goto loc_827A418C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A418C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827c0ab0
	sub_827C0AB0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_827A41B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a41d0
	if (!cr0.eq) goto loc_827A41D0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A41D0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a41e0
	if (cr6.eq) goto loc_827A41E0;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A41E0:
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827A41EC"))) PPC_WEAK_FUNC(sub_827A41EC);
PPC_FUNC_IMPL(__imp__sub_827A41EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A41F0"))) PPC_WEAK_FUNC(sub_827A41F0);
PPC_FUNC_IMPL(__imp__sub_827A41F0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// beq cr6,0x827a4270
	if (cr6.eq) goto loc_827A4270;
	// lwz r30,5(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827a4270
	if (!cr6.eq) goto loc_827A4270;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r30,172(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// beq cr6,0x827a4270
	if (cr6.eq) goto loc_827A4270;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A4270:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A4290"))) PPC_WEAK_FUNC(sub_827A4290);
PPC_FUNC_IMPL(__imp__sub_827A4290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4294"))) PPC_WEAK_FUNC(sub_827A4294);
PPC_FUNC_IMPL(__imp__sub_827A4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4298"))) PPC_WEAK_FUNC(sub_827A4298);
PPC_FUNC_IMPL(__imp__sub_827A4298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,424(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 424);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a432c
	if (!cr6.eq) goto loc_827A432C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,2784(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r8,r9,15,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827a432c
	if (!cr6.eq) goto loc_827A432C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-23476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r7.u8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x827b1558
	sub_827B1558(ctx, base);
loc_827A432C:
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

__attribute__((alias("__imp__sub_827A4340"))) PPC_WEAK_FUNC(sub_827A4340);
PPC_FUNC_IMPL(__imp__sub_827A4340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4344"))) PPC_WEAK_FUNC(sub_827A4344);
PPC_FUNC_IMPL(__imp__sub_827A4344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4348"))) PPC_WEAK_FUNC(sub_827A4348);
PPC_FUNC_IMPL(__imp__sub_827A4348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827a4384
	if (!cr6.eq) goto loc_827A4384;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827A4384:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x827a4410
	if (!cr6.eq) goto loc_827A4410;
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x827a4404
	if (!cr0.gt) goto loc_827A4404;
	// addi r11,r4,-2
	r11.s64 = ctx.r4.s64 + -2;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_827A43EC:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// rlwinm r9,r10,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// sthu r7,2(r11)
	ea = 2 + r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	r11.u32 = ea;
	// bdnz 0x827a43ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827A43EC;
loc_827A4404:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82761758
	sub_82761758(ctx, base);
	// b 0x827a448c
	goto loc_827A448C;
loc_827A4410:
	// cmplwi cr6,r11,65279
	cr6.compare<uint32_t>(r11.u32, 65279, xer);
	// bne cr6,0x827a4448
	if (!cr6.eq) goto loc_827A4448;
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x827a443c
	if (!cr0.gt) goto loc_827A443C;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_827A4434:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x827a4434
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827A4434;
loc_827A443C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82761758
	sub_82761758(ctx, base);
	// b 0x827a448c
	goto loc_827A448C;
loc_827A4448:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// ble cr6,0x827a4480
	if (!cr6.gt) goto loc_827A4480;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(r11.u32, 239, xer);
	// bne cr6,0x827a4480
	if (!cr6.eq) goto loc_827A4480;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,187
	cr6.compare<uint32_t>(r11.u32, 187, xer);
	// bne cr6,0x827a4480
	if (!cr6.eq) goto loc_827A4480;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(r11.u32, 191, xer);
	// bne cr6,0x827a4480
	if (!cr6.eq) goto loc_827A4480;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// addi r4,r30,3
	ctx.r4.s64 = r30.s64 + 3;
	// b 0x827a4484
	goto loc_827A4484;
loc_827A4480:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_827A4484:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82761860
	sub_82761860(ctx, base);
loc_827A448C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r4,r10,1
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// bl 0x82779010
	sub_82779010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r5,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_827A44C0:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x827a44c0
	if (!cr0.eq) goto loc_827A44C0;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827a44ec
	if (!cr0.eq) goto loc_827A44EC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A44EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A44F4"))) PPC_WEAK_FUNC(sub_827A44F4);
PPC_FUNC_IMPL(__imp__sub_827A44F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A44F8"))) PPC_WEAK_FUNC(sub_827A44F8);
PPC_FUNC_IMPL(__imp__sub_827A44F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, r11.u32);
	// stw r11,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, r11.u32);
	// stw r11,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A450C"))) PPC_WEAK_FUNC(sub_827A450C);
PPC_FUNC_IMPL(__imp__sub_827A450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4510"))) PPC_WEAK_FUNC(sub_827A4510);
PPC_FUNC_IMPL(__imp__sub_827A4510) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a458c
	if (cr6.eq) goto loc_827A458C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82808908
	sub_82808908(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a4580
	if (cr6.eq) goto loc_827A4580;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_827A4580:
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b15f0
	sub_827B15F0(ctx, base);
loc_827A458C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a45f0
	if (!cr6.eq) goto loc_827A45F0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82808908
	sub_82808908(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a45e4
	if (cr6.eq) goto loc_827A45E4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_827A45E4:
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b15f0
	sub_827B15F0(ctx, base);
loc_827A45F0:
	// lwsync 
	// li r11,1
	r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827A4600"))) PPC_WEAK_FUNC(sub_827A4600);
PPC_FUNC_IMPL(__imp__sub_827A4600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A4604"))) PPC_WEAK_FUNC(sub_827A4604);
PPC_FUNC_IMPL(__imp__sub_827A4604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4608"))) PPC_WEAK_FUNC(sub_827A4608);
PPC_FUNC_IMPL(__imp__sub_827A4608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwsync 
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4620"))) PPC_WEAK_FUNC(sub_827A4620);
PPC_FUNC_IMPL(__imp__sub_827A4620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwsync 
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A463C"))) PPC_WEAK_FUNC(sub_827A463C);
PPC_FUNC_IMPL(__imp__sub_827A463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4640"))) PPC_WEAK_FUNC(sub_827A4640);
PPC_FUNC_IMPL(__imp__sub_827A4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	r11.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x828030c8
	sub_828030C8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r3,r10,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827A46D8:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r5,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r30,r5
	ctx.r4.u64 = r30.u64 + ctx.r5.u64;
	// stwcx. r4,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x827a46d8
	if (!cr0.eq) goto loc_827A46D8;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addic. r8,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x827a4704
	if (!cr0.eq) goto loc_827A4704;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A4704:
	// lwsync 
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A471C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827a471c
	if (!cr0.eq) goto loc_827A471C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827a4748
	if (!cr0.eq) goto loc_827A4748;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A4748:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b15f0
	sub_827B15F0(ctx, base);
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

__attribute__((alias("__imp__sub_827A4764"))) PPC_WEAK_FUNC(sub_827A4764);
PPC_FUNC_IMPL(__imp__sub_827A4764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4768"))) PPC_WEAK_FUNC(sub_827A4768);
PPC_FUNC_IMPL(__imp__sub_827A4768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwsync 
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4780"))) PPC_WEAK_FUNC(sub_827A4780);
PPC_FUNC_IMPL(__imp__sub_827A4780) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwsync 
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lbz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827a47c4
	if (cr6.eq) goto loc_827A47C4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a4828
	if (!cr6.eq) goto loc_827A4828;
loc_827A47C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a47dc
	if (!cr6.eq) goto loc_827A47DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827A47DC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// lwz r29,80(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A4828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827A4830"))) PPC_WEAK_FUNC(sub_827A4830);
PPC_FUNC_IMPL(__imp__sub_827A4830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A4834"))) PPC_WEAK_FUNC(sub_827A4834);
PPC_FUNC_IMPL(__imp__sub_827A4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4838"))) PPC_WEAK_FUNC(sub_827A4838);
PPC_FUNC_IMPL(__imp__sub_827A4838) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8274d620
	sub_8274D620(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r27,44(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// add r26,r10,r28
	r26.u64 = ctx.r10.u64 + r28.u64;
	// bge cr6,0x827a48c0
	if (!cr6.lt) goto loc_827A48C0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a48b4
	if (cr6.eq) goto loc_827A48B4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x827a48c0
	if (cr6.gt) goto loc_827A48C0;
loc_827A48B4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x827a490c
	goto loc_827A490C;
loc_827A48C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a2f50
	sub_827A2F50(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a4918
	if (cr6.eq) goto loc_827A4918;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// ble cr6,0x827a4918
	if (!cr6.gt) goto loc_827A4918;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x827a4908
	if (!cr6.gt) goto loc_827A4908;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// b 0x827a490c
	goto loc_827A490C;
loc_827A4908:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_827A490C:
	// bl 0x8274d708
	sub_8274D708(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_827A4918:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827A4920"))) PPC_WEAK_FUNC(sub_827A4920);
PPC_FUNC_IMPL(__imp__sub_827A4920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A4924"))) PPC_WEAK_FUNC(sub_827A4924);
PPC_FUNC_IMPL(__imp__sub_827A4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4928"))) PPC_WEAK_FUNC(sub_827A4928);
PPC_FUNC_IMPL(__imp__sub_827A4928) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bne cr6,0x827a4a08
	if (!cr6.eq) goto loc_827A4A08;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x827a49b0
	if (cr6.eq) goto loc_827A49B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
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
loc_827A49B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r3,2376
	ctx.r9.s64 = ctx.r3.s64 + 2376;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82763d80
	sub_82763D80(ctx, base);
	// lfs f12,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f8,24(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f7,28(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
loc_827A4A08:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_827A4A14"))) PPC_WEAK_FUNC(sub_827A4A14);
PPC_FUNC_IMPL(__imp__sub_827A4A14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A4A18"))) PPC_WEAK_FUNC(sub_827A4A18);
PPC_FUNC_IMPL(__imp__sub_827A4A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eaaec
	// lwz r5,108(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f6,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r3,200
	r11.s64 = ctx.r3.s64 + 200;
	// lfs f4,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f5,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f31.f64 = double(temp.f32);
	// lfs f30,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	f30.f64 = double(temp.f32);
	// lfs f29,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	f29.f64 = double(temp.f32);
	// beq cr6,0x827a4fc0
	if (cr6.eq) goto loc_827A4FC0;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// lwz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsw r30,r9
	r30.s64 = ctx.r9.s32;
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r31.u64);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfd f13,-88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r30.u64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfd f0,-96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r8,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r8.u64);
	// lfd f12,-88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f11,-88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lwz r7,192(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// fcfid f0,f11
	f0.f64 = double(ctx.f11.s64);
	// addi r8,r10,-25600
	ctx.r8.s64 = ctx.r10.s64 + -25600;
	// lfs f11,-24324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24324);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lfs f12,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r6,21036
	ctx.r9.s64 = ctx.r6.s64 + 21036;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f28,f13,f11
	f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f0
	ctx.f8.f64 = double(float(f0.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f27,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	f0.f64 = double(float(f0.f64 - f27.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - f28.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// bgt cr6,0x827a4f7c
	if (cr6.gt) goto loc_827A4F7C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a4dc8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4DC8;
	// bdzf 4*cr6+eq,0x827a4f0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4F0C;
	// bne cr6,0x827a4dc8
	if (!cr6.eq) goto loc_827A4DC8;
	// lfs f10,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f9,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// fmuls f28,f10,f9
	f28.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// lfs f10,-31316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31316);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f28,f8
	ctx.f8.f64 = double(float(f28.f64 * ctx.f8.f64));
	// bgt cr6,0x827a4d80
	if (cr6.gt) goto loc_827A4D80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a4c28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4C28;
	// bdzf 4*cr6+eq,0x827a4c94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4C94;
	// bdzf 4*cr6+eq,0x827a4cf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4CF4;
	// bdzf 4*cr6+eq,0x827a4d34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4D34;
	// bdzf 4*cr6+eq,0x827a4c1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4C1C;
	// bdzf 4*cr6+eq,0x827a4c74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4C74;
	// bdzf 4*cr6+eq,0x827a4c84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A4C84;
	// bne cr6,0x827a4ce4
	if (!cr6.eq) goto loc_827A4CE4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f9,f11
	f28.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f27,f8,f11
	f27.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmsubs f0,f0,f11,f28
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - f28.f64));
	// fmsubs f13,f13,f11,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - f27.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f0,f13,f10
	f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fctiwz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f13.u64);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f11,f0
	ctx.f11.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f11.u64);
	// lwz r9,-84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r5.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r4,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r4.u64);
	// lfd f13,-88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// fcfid f0,f13
	f0.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// b 0x827a4d7c
	goto loc_827A4D7C;
loc_827A4C1C:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// b 0x827a4d80
	goto loc_827A4D80;
loc_827A4C28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmsubs f0,f13,f0,f11
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f11.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f11.u64);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// b 0x827a4d80
	goto loc_827A4D80;
loc_827A4C74:
	// fsubs f0,f13,f8
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// b 0x827a4d80
	goto loc_827A4D80;
loc_827A4C84:
	// fsubs f0,f0,f9
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f9.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// b 0x827a4d80
	goto loc_827A4D80;
loc_827A4C94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f0,f0,f9
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f9.f64));
	// stfs f0,204(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmsubs f0,f13,f0,f11
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f11.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f11.u64);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// b 0x827a4d80
	goto loc_827A4D80;
loc_827A4CE4:
	// fsubs f13,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f9
	ctx.f11.f64 = double(float(f0.f64 - ctx.f9.f64));
	// b 0x827a4d7c
	goto loc_827A4D7C;
loc_827A4CF4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f0,f13,f11
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f11.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f11.u64);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x827a4d74
	goto loc_827A4D74;
loc_827A4D34:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f0,f13,f11
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f11.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f11.u64);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
loc_827A4D74:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
loc_827A4D7C:
	// stfs f11,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
loc_827A4D80:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	f0.f64 = double(temp.f32);
	// lfs f8,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f8,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f9,188(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f8,184(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// b 0x827a4f7c
	goto loc_827A4F7C;
loc_827A4DC8:
	// lfs f10,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// bne cr6,0x827a4de8
	if (!cr6.eq) goto loc_827A4DE8;
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 / f0.f64));
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, f28.f64);
	// blt cr6,0x827a4e00
	if (cr6.lt) goto loc_827A4E00;
loc_827A4DE8:
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x827a4e88
	if (!cr6.eq) goto loc_827A4E88;
	// fdivs f9,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 / f0.f64));
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, f28.f64);
	// ble cr6,0x827a4e88
	if (!cr6.gt) goto loc_827A4E88;
loc_827A4E00:
	// fdivs f28,f13,f10
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fcmpu cr6,f8,f12
	cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// lfs f10,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-31316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31316);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f28,f11
	ctx.f11.f64 = double(float(f28.f64 * ctx.f11.f64));
	// fmuls f28,f11,f10
	f28.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f10,f0,f10,f28
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64 - f28.f64));
	// stfs f10,204(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f10,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f9,188(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// beq cr6,0x827a4e70
	if (cr6.eq) goto loc_827A4E70;
	// fdivs f0,f13,f8
	f0.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// lfs f13,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// b 0x827a4f7c
	goto loc_827A4F7C;
loc_827A4E70:
	// lfs f13,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f12,176(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// b 0x827a4f7c
	goto loc_827A4F7C;
loc_827A4E88:
	// fdivs f9,f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,-31316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31316);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f28,f10,f11
	f28.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmsubs f13,f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - f28.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f12,188(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f8,184(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// beq cr6,0x827a4ef8
	if (cr6.eq) goto loc_827A4EF8;
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f13,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// b 0x827a4f78
	goto loc_827A4F78;
loc_827A4EF8:
	// lfs f13,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// b 0x827a4f78
	goto loc_827A4F78;
loc_827A4F0C:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fcmpu cr6,f8,f12
	cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f12,188(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// beq cr6,0x827a4f50
	if (cr6.eq) goto loc_827A4F50;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fdivs f0,f10,f8
	f0.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// b 0x827a4f54
	goto loc_827A4F54;
loc_827A4F50:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_827A4F54:
	// stfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// beq cr6,0x827a4f74
	if (cr6.eq) goto loc_827A4F74;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fdivs f0,f10,f11
	f0.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// b 0x827a4f78
	goto loc_827A4F78;
loc_827A4F74:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_827A4F78:
	// stfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
loc_827A4F7C:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,-19320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19320);
	f0.f64 = double(temp.f32);
	// bne cr6,0x827a4f98
	if (!cr6.eq) goto loc_827A4F98;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// b 0x827a4f9c
	goto loc_827A4F9C;
loc_827A4F98:
	// fdivs f11,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
loc_827A4F9C:
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x827a4fac
	if (cr6.eq) goto loc_827A4FAC;
	// fdivs f0,f7,f13
	f0.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
loc_827A4FAC:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x827a4fb8
	if (cr6.lt) goto loc_827A4FB8;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_827A4FB8:
	// stfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// b 0x827a4fec
	goto loc_827A4FEC;
loc_827A4FC0:
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r8,r8,-25600
	ctx.r8.s64 = ctx.r8.s64 + -25600;
	// addi r9,r10,21036
	ctx.r9.s64 = ctx.r10.s64 + 21036;
	// lfs f12,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,188(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f7,180(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f7,176(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f7,172(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
loc_827A4FEC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// lfs f13,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f7,232(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// stfs f12,244(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f10,252(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f28,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	f28.f64 = double(temp.f32);
	// lfs f27,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	f27.f64 = double(temp.f32);
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// fsubs f26,f25,f26
	f26.f64 = double(float(f25.f64 - f26.f64));
	// lwz r8,140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f0,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	f0.f64 = double(temp.f32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r9,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r9.u64);
	// lfd f7,-88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r7,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r7.u64);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fdivs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// lfd f12,-88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f10,f0,f9
	ctx.f10.f64 = double(float(f0.f64 * ctx.f9.f64));
	// stfs f10,232(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f8,f26
	ctx.f12.f64 = double(float(ctx.f8.f64 / f26.f64));
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f8,244(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fmuls f7,f12,f28
	ctx.f7.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,236(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,240(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f12,252(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lwz r6,128(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r5.u64);
	// lfd f0,-88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// lfd f11,-88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fadds f0,f8,f12
	f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,252(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f13,240(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f6,f12
	cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// bne cr6,0x827a5124
	if (!cr6.eq) goto loc_827A5124;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, f0.f64);
	// bne cr6,0x827a5124
	if (!cr6.eq) goto loc_827A5124;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, f0.f64);
	// bne cr6,0x827a5124
	if (!cr6.eq) goto loc_827A5124;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, f0.f64);
	// beq cr6,0x827a5128
	if (cr6.eq) goto loc_827A5128;
loc_827A5124:
	// li r11,1
	r11.s64 = 1;
loc_827A5128:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a5170
	if (!cr6.eq) goto loc_827A5170;
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bne cr6,0x827a5170
	if (!cr6.eq) goto loc_827A5170;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x827a5170
	if (!cr6.eq) goto loc_827A5170;
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x827a5170
	if (!cr6.eq) goto loc_827A5170;
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bne cr6,0x827a5170
	if (!cr6.eq) goto loc_827A5170;
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// beq cr6,0x827a517c
	if (cr6.eq) goto loc_827A517C;
loc_827A5170:
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827A517C:
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab38
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A5194"))) PPC_WEAK_FUNC(sub_827A5194);
PPC_FUNC_IMPL(__imp__sub_827A5194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A5198"))) PPC_WEAK_FUNC(sub_827A5198);
PPC_FUNC_IMPL(__imp__sub_827A5198) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,2680(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2680);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r31,0
	r31.s64 = 0;
	// addic. r25,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r25.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// blt 0x827a523c
	if (cr0.lt) goto loc_827A523C;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_827A51D4:
	// lwz r11,2676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2676);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r24,32(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82763d80
	sub_82763D80(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a528c
	if (!cr6.eq) goto loc_827A528C;
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x827a51d4
	if (!cr0.lt) goto loc_827A51D4;
loc_827A523C:
	// lwz r25,96(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x827a528c
	if (!cr6.gt) goto loc_827A528C;
	// rlwinm r29,r25,3,0,28
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
loc_827A524C:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a528c
	if (!cr6.eq) goto loc_827A528C;
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bgt 0x827a524c
	if (cr0.gt) goto loc_827A524C;
loc_827A528C:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827A529C"))) PPC_WEAK_FUNC(sub_827A529C);
PPC_FUNC_IMPL(__imp__sub_827A529C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827A52A0"))) PPC_WEAK_FUNC(sub_827A52A0);
PPC_FUNC_IMPL(__imp__sub_827A52A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827a52e8
	if (!cr6.eq) goto loc_827A52E8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x827a52f0
	if (cr6.eq) goto loc_827A52F0;
	// b 0x827a5508
	goto loc_827A5508;
loc_827A52E8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x827a5304
	if (!cr6.eq) goto loc_827A5304;
loc_827A52F0:
	// lwz r11,2784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,4
	ctx.r10.u64 = r11.u64 | 262144;
	// stw r10,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r10.u32);
	// b 0x827a550c
	goto loc_827A550C;
loc_827A5304:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x827a5508
	if (cr6.gt) goto loc_827A5508;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a5424
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5424;
	// bdzf 4*cr6+eq,0x827a53b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A53B8;
	// bdzf 4*cr6+eq,0x827a5490
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5490;
	// bdzf 4*cr6+eq,0x827a5508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5508;
	// bdzf 4*cr6+eq,0x827a5508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5508;
	// bdzf 4*cr6+eq,0x827a5508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5508;
	// bdzf 4*cr6+eq,0x827a5508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A5508;
	// bne cr6,0x827a54fc
	if (!cr6.eq) goto loc_827A54FC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,2500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2500);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827a5508
	if (!cr6.lt) goto loc_827A5508;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,308
	ctx.r10.s64 = r31.s64 + 308;
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f9,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f0,-24324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// bge cr6,0x827a53b0
	if (!cr6.lt) goto loc_827A53B0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,2040(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2040);
	// addi r6,r11,251
	ctx.r6.s64 = r11.s64 + 251;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r5,r8,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r11,r5,r7
	r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,2040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2040, r11.u32);
	// stfsx f13,r4,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// stfs f0,2012(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2012, temp.u32);
loc_827A53B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x827a550c
	goto loc_827A550C;
loc_827A53B8:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,2500(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2500);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x827a5508
	if (!cr6.lt) goto loc_827A5508;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// lfs f8,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// fmadds f7,f11,f9,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// slw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827a29e8
	sub_827A29E8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x827a550c
	goto loc_827A550C;
loc_827A5424:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,2500(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2500);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x827a5508
	if (!cr6.lt) goto loc_827A5508;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// lfs f8,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmadds f7,f11,f9,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// slw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827a29e8
	sub_827A29E8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x827a550c
	goto loc_827A550C;
loc_827A5490:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,2500(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2500);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x827a5508
	if (!cr6.lt) goto loc_827A5508;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f9,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x827a2a98
	sub_827A2A98(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x827a550c
	goto loc_827A550C;
loc_827A54FC:
	// lwz r11,2784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r10.u32);
loc_827A5508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A550C:
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

__attribute__((alias("__imp__sub_827A5520"))) PPC_WEAK_FUNC(sub_827A5520);
PPC_FUNC_IMPL(__imp__sub_827A5520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A5524"))) PPC_WEAK_FUNC(sub_827A5524);
PPC_FUNC_IMPL(__imp__sub_827A5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5528"))) PPC_WEAK_FUNC(sub_827A5528);
PPC_FUNC_IMPL(__imp__sub_827A5528) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,2500(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2500);
	// lfs f12,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f1,f13
	ctx.f11.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f10,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// fmadds f9,f12,f2,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f10.f64));
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lfs f0,-24324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24324);
	f0.f64 = double(temp.f32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bge cr6,0x827a561c
	if (!cr6.lt) goto loc_827A561C;
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// bge cr6,0x827a55b4
	if (!cr6.lt) goto loc_827A55B4;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,2040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2040);
	// addi r9,r7,251
	ctx.r9.s64 = ctx.r7.s64 + 251;
	// slw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r7.u8 & 0x3F));
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r10,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, ctx.r10.u32);
	// stfs f0,2012(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2012, temp.u32);
	// stfsx f13,r6,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
loc_827A55B4:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,16
	r29.s64 = 16;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,2368(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2368);
loc_827A55CC:
	// and r6,r31,r28
	ctx.r6.u64 = r31.u64 & r28.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827a55ec
	if (cr6.eq) goto loc_827A55EC;
	// and r11,r31,r30
	r11.u64 = r31.u64 & r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a55ec
	if (!cr6.eq) goto loc_827A55EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x827a5608
	goto loc_827A5608;
loc_827A55EC:
	// and r11,r31,r30
	r11.u64 = r31.u64 & r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a5610
	if (cr6.eq) goto loc_827A5610;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827a5610
	if (!cr6.eq) goto loc_827A5610;
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_827A5608:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827a29e8
	sub_827A29E8(ctx, base);
loc_827A5610:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x827a55cc
	if (!cr0.eq) goto loc_827A55CC;
loc_827A561C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A5620"))) PPC_WEAK_FUNC(sub_827A5620);
PPC_FUNC_IMPL(__imp__sub_827A5620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A5624"))) PPC_WEAK_FUNC(sub_827A5624);
PPC_FUNC_IMPL(__imp__sub_827A5624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5628"))) PPC_WEAK_FUNC(sub_827A5628);
PPC_FUNC_IMPL(__imp__sub_827A5628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,2500(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2500);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,66
	r11.s64 = ctx.r4.s64 + 66;
	// lfs f13,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-31316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31316);
	f0.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64 - ctx.f13.f64));
	// fmsubs f6,f8,f0,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64 - ctx.f12.f64));
	// fdivs f0,f7,f11
	f0.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// fdivs f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// beq cr6,0x827a5684
	if (cr6.eq) goto loc_827A5684;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_827A5684:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827a5690
	if (cr6.eq) goto loc_827A5690;
	// stfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_827A5690:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lwz r9,2368(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2368);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A56B4"))) PPC_WEAK_FUNC(sub_827A56B4);
PPC_FUNC_IMPL(__imp__sub_827A56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A56B8"))) PPC_WEAK_FUNC(sub_827A56B8);
PPC_FUNC_IMPL(__imp__sub_827A56B8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r28,96(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f13,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f12,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f11,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// fmadds f12,f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// beq cr6,0x827a5848
	if (cr6.eq) goto loc_827A5848;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// rlwinm r29,r28,3,0,28
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
loc_827A5718:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r31,-4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82763d80
	sub_82763D80(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x827a57b0
	if (cr6.gt) goto loc_827A57B0;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827a57b0
	if (cr6.lt) goto loc_827A57B0;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x827a57b0
	if (cr6.gt) goto loc_827A57B0;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x827a57b4
	if (!cr6.lt) goto loc_827A57B4;
loc_827A57B0:
	// li r11,0
	r11.s64 = 0;
loc_827A57B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a583c
	if (cr6.eq) goto loc_827A583C;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// bgt cr6,0x827a583c
	if (cr6.gt) goto loc_827A583C;
	// mtctr r27
	ctr.u64 = r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a57e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A57E4;
	// bdzf 4*cr6+eq,0x827a57ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A57EC;
	// bne cr6,0x827a5814
	if (!cr6.eq) goto loc_827A5814;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827a5818
	goto loc_827A5818;
loc_827A57E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x827a5818
	goto loc_827A5818;
loc_827A57EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// b 0x827a5838
	goto loc_827A5838;
loc_827A5814:
	// li r5,3
	ctx.r5.s64 = 3;
loc_827A5818:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
loc_827A5838:
	// bne cr6,0x827a5864
	if (!cr6.eq) goto loc_827A5864;
loc_827A583C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bne 0x827a5718
	if (!cr0.eq) goto loc_827A5718;
loc_827A5848:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_827A5864:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_827A587C"))) PPC_WEAK_FUNC(sub_827A587C);
PPC_FUNC_IMPL(__imp__sub_827A587C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827A5880"))) PPC_WEAK_FUNC(sub_827A5880);
PPC_FUNC_IMPL(__imp__sub_827A5880) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a5960
	if (cr6.eq) goto loc_827A5960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827a5904
	if (cr6.eq) goto loc_827A5904;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_827A5904:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a5960
	if (cr6.eq) goto loc_827A5960;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82770668
	sub_82770668(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r10,-716
	ctx.r4.s64 = ctx.r10.s64 + -716;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82765aa0
	sub_82765AA0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a5960
	if (cr6.eq) goto loc_827A5960;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A5960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A5968"))) PPC_WEAK_FUNC(sub_827A5968);
PPC_FUNC_IMPL(__imp__sub_827A5968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A596C"))) PPC_WEAK_FUNC(sub_827A596C);
PPC_FUNC_IMPL(__imp__sub_827A596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5970"))) PPC_WEAK_FUNC(sub_827A5970);
PPC_FUNC_IMPL(__imp__sub_827A5970) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// beq cr6,0x827a59cc
	if (cr6.eq) goto loc_827A59CC;
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
loc_827A59B0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x827a5aa0
	if (cr6.eq) goto loc_827A5AA0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x827a59b0
	if (cr6.lt) goto loc_827A59B0;
loc_827A59CC:
	// li r29,0
	r29.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f8,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_827A5AA0:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
}

__attribute__((alias("__imp__sub_827A5AAC"))) PPC_WEAK_FUNC(sub_827A5AAC);
PPC_FUNC_IMPL(__imp__sub_827A5AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x827a59d0
	// ERROR 827A59D0
	return;
}

__attribute__((alias("__imp__sub_827A5AB0"))) PPC_WEAK_FUNC(sub_827A5AB0);
PPC_FUNC_IMPL(__imp__sub_827A5AB0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r6,24192(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// bl 0x827ca6b8
	sub_827CA6B8(ctx, base);
	// subf r28,r29,r3
	r28.s64 = ctx.r3.s64 - r29.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ca6f0
	sub_827CA6F0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827a5c40
	if (cr6.eq) goto loc_827A5C40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x827a5b2c
	if (!cr6.lt) goto loc_827A5B2C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5B2C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// bge cr6,0x827a5b78
	if (!cr6.lt) goto loc_827A5B78;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5B78:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x827cbee0
	sub_827CBEE0(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-648
	ctx.r4.s64 = ctx.r10.s64 + -648;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc9a8
	sub_827CC9A8(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// subf r11,r7,r8
	r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x827ca6b8
	sub_827CA6B8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x827a5c24
	if (!cr6.lt) goto loc_827A5C24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc0f8
	sub_827CC0F8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-660
	ctx.r4.s64 = r11.s64 + -660;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc948
	sub_827CC948(ctx, base);
loc_827A5C24:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cae90
	sub_827CAE90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a5c40
	if (cr6.eq) goto loc_827A5C40;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A5C40:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827A5C50"))) PPC_WEAK_FUNC(sub_827A5C50);
PPC_FUNC_IMPL(__imp__sub_827A5C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A5C54"))) PPC_WEAK_FUNC(sub_827A5C54);
PPC_FUNC_IMPL(__imp__sub_827A5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5C58"))) PPC_WEAK_FUNC(sub_827A5C58);
PPC_FUNC_IMPL(__imp__sub_827A5C58) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c0ab0
	sub_827C0AB0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a5cf4
	if (cr6.eq) goto loc_827A5CF4;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A5CF4:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A5D10"))) PPC_WEAK_FUNC(sub_827A5D10);
PPC_FUNC_IMPL(__imp__sub_827A5D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A5D14"))) PPC_WEAK_FUNC(sub_827A5D14);
PPC_FUNC_IMPL(__imp__sub_827A5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5D18"))) PPC_WEAK_FUNC(sub_827A5D18);
PPC_FUNC_IMPL(__imp__sub_827A5D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r6,24192(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// add r17,r10,r11
	r17.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// bl 0x827ca6b8
	sub_827CA6B8(ctx, base);
	// subf r16,r17,r3
	r16.s64 = ctx.r3.s64 - r17.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ca6f0
	sub_827CA6F0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827a6224
	if (cr6.eq) goto loc_827A6224;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x827a5d8c
	if (!cr6.lt) goto loc_827A5D8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cacf0
	sub_827CACF0(ctx, base);
loc_827A5D8C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r20,r29
	r20.u64 = r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mr r18,r29
	r18.u64 = r29.u64;
	// lbzx r30,r10,r11
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a5dd4
	if (!cr6.lt) goto loc_827A5DD4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5DD4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r27,r30,0,30,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// clrlwi r28,r30,24
	r28.u64 = r30.u32 & 0xFF;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// beq cr6,0x827a5e68
	if (cr6.eq) goto loc_827A5E68;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// ori r6,r8,2
	ctx.r6.u64 = ctx.r8.u64 | 2;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stb r6,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r6.u8);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x827a5e3c
	if (!cr6.lt) goto loc_827A5E3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5E3C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
loc_827A5E68:
	// rlwinm r19,r28,0,29,29
	r19.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x827a5e8c
	if (cr6.eq) goto loc_827A5E8C;
	// lbz r10,171(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r9.u8);
	// bl 0x827cbee0
	sub_827CBEE0(ctx, base);
loc_827A5E8C:
	// rlwinm r21,r28,0,28,28
	r21.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x827a5eb0
	if (cr6.eq) goto loc_827A5EB0;
	// lbz r10,171(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r9.u8);
	// bl 0x827cc338
	sub_827CC338(ctx, base);
loc_827A5EB0:
	// rlwinm r23,r28,0,27,27
	r23.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a5f34
	if (cr6.eq) goto loc_827A5F34;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r7,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a5eec
	if (!cr6.lt) goto loc_827A5EEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5EEC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,30356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30356);
	f0.f64 = double(temp.f32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_827A5F34:
	// rlwinm r25,r28,0,26,26
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a5f50
	if (cr6.eq) goto loc_827A5F50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x827ccca8
	sub_827CCCA8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
loc_827A5F50:
	// rlwinm r24,r28,0,25,25
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a5fb4
	if (cr6.eq) goto loc_827A5FB4;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r7,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a5f8c
	if (!cr6.lt) goto loc_827A5F8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5F8C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r5.u16);
loc_827A5FB4:
	// rlwinm r26,r28,0,24,24
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827a6094
	if (cr6.eq) goto loc_827A6094;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x827a5fe4
	if (!cr6.lt) goto loc_827A5FE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A5FE4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r22,6
	cr6.compare<uint32_t>(r22.u32, 6, xer);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// blt cr6,0x827a6058
	if (cr6.lt) goto loc_827A6058;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bge cr6,0x827a6018
	if (!cr6.lt) goto loc_827A6018;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A6018:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r20,r9,r4
	r20.u64 = ctx.r9.u64 | ctx.r4.u64;
	// b 0x827a6094
	goto loc_827A6094;
loc_827A6058:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x827a606c
	if (!cr6.lt) goto loc_827A606C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A606C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r20,r5,16
	r20.u64 = ctx.r5.u32 & 0xFFFF;
loc_827A6094:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cae90
	sub_827CAE90(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r11,-460
	ctx.r4.s64 = r11.s64 + -460;
	// rlwinm r30,r27,31,25,31
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7F;
	// clrlwi r29,r28,31
	r29.u64 = r28.u32 & 0x1;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827a60dc
	if (cr6.eq) goto loc_827A60DC;
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-476
	ctx.r4.s64 = ctx.r10.s64 + -476;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A60DC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x827a6100
	if (cr6.eq) goto loc_827A6100;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-484
	ctx.r4.s64 = r11.s64 + -484;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc9a8
	sub_827CC9A8(ctx, base);
loc_827A6100:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x827a6124
	if (cr6.eq) goto loc_827A6124;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-660
	ctx.r4.s64 = r11.s64 + -660;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc948
	sub_827CC948(ctx, base);
loc_827A6124:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a6148
	if (cr6.eq) goto loc_827A6148;
	// lfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-500
	ctx.r4.s64 = r11.s64 + -500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6148:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a6178
	if (cr6.eq) goto loc_827A6178;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x827a6160
	if (cr6.eq) goto loc_827A6160;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// b 0x827a6168
	goto loc_827A6168;
loc_827A6160:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-508
	ctx.r5.s64 = r11.s64 + -508;
loc_827A6168:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-524
	ctx.r4.s64 = r11.s64 + -524;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6178:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a6194
	if (cr6.eq) goto loc_827A6194;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lhz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-544
	ctx.r4.s64 = ctx.r10.s64 + -544;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6194:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827a61b0
	if (cr6.eq) goto loc_827A61B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,-572
	ctx.r4.s64 = r11.s64 + -572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A61B0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a61dc
	if (cr6.eq) goto loc_827A61DC;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a61d4
	if (cr6.eq) goto loc_827A61D4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-592
	ctx.r4.s64 = r11.s64 + -592;
	// b 0x827a61f0
	goto loc_827A61F0;
loc_827A61D4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a61f8
	if (!cr6.eq) goto loc_827A61F8;
loc_827A61DC:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a61f8
	if (cr6.eq) goto loc_827A61F8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-608
	ctx.r4.s64 = r11.s64 + -608;
loc_827A61F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A61F8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x827a6208
	if (cr6.eq) goto loc_827A6208;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A6208:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cae90
	sub_827CAE90(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a6224
	if (cr6.eq) goto loc_827A6224;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A6224:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_827A6234"))) PPC_WEAK_FUNC(sub_827A6234);
PPC_FUNC_IMPL(__imp__sub_827A6234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_827A6238"))) PPC_WEAK_FUNC(sub_827A6238);
PPC_FUNC_IMPL(__imp__sub_827A6238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r6,24192(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// add r17,r10,r11
	r17.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// bl 0x827ca6b8
	sub_827CA6B8(ctx, base);
	// subf r16,r17,r3
	r16.s64 = ctx.r3.s64 - r17.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ca6f0
	sub_827CA6F0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827a6810
	if (cr6.eq) goto loc_827A6810;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x827a62a8
	if (!cr6.lt) goto loc_827A62A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cacf0
	sub_827CACF0(ctx, base);
loc_827A62A8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// lbzx r30,r9,r10
	r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// bge cr6,0x827a62d8
	if (!cr6.lt) goto loc_827A62D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cacf0
	sub_827CACF0(ctx, base);
loc_827A62D8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r19,r29
	r19.u64 = r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mr r18,r29
	r18.u64 = r29.u64;
	// lbzx r28,r10,r11
	r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// bl 0x827b13e8
	sub_827B13E8(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a6320
	if (!cr6.lt) goto loc_827A6320;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A6320:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r26,r30,0,30,30
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// beq cr6,0x827a63b4
	if (cr6.eq) goto loc_827A63B4;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// ori r6,r8,2
	ctx.r6.u64 = ctx.r8.u64 | 2;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stb r6,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r6.u8);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x827a6388
	if (!cr6.lt) goto loc_827A6388;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A6388:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
loc_827A63B4:
	// rlwinm r20,r27,0,29,29
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x827a63d8
	if (cr6.eq) goto loc_827A63D8;
	// lbz r10,171(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r9.u8);
	// bl 0x827cbee0
	sub_827CBEE0(ctx, base);
loc_827A63D8:
	// rlwinm r21,r27,0,28,28
	r21.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x827a63fc
	if (cr6.eq) goto loc_827A63FC;
	// lbz r10,171(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r9.u8);
	// bl 0x827cc338
	sub_827CC338(ctx, base);
loc_827A63FC:
	// rlwinm r22,r27,0,27,27
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827a6480
	if (cr6.eq) goto loc_827A6480;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r7,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a6438
	if (!cr6.lt) goto loc_827A6438;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A6438:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,30356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30356);
	f0.f64 = double(temp.f32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_827A6480:
	// rlwinm r24,r27,0,26,26
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a649c
	if (cr6.eq) goto loc_827A649C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x827ccca8
	sub_827CCCA8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
loc_827A649C:
	// rlwinm r23,r27,0,25,25
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a6500
	if (cr6.eq) goto loc_827A6500;
	// lbz r8,171(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r7,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x827a64d8
	if (!cr6.lt) goto loc_827A64D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A64D8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r5.u16);
loc_827A6500:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a652c
	if (cr6.eq) goto loc_827A652C;
	// lbz r10,171(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r9.u8);
	// bl 0x8280ae80
	sub_8280AE80(ctx, base);
loc_827A652C:
	// rlwinm r25,r30,0,30,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a6594
	if (cr6.eq) goto loc_827A6594;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x827a6558
	if (!cr6.lt) goto loc_827A6558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cacf0
	sub_827CACF0(ctx, base);
loc_827A6558:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827a6580
	if (cr6.lt) goto loc_827A6580;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// ble cr6,0x827a6584
	if (!cr6.gt) goto loc_827A6584;
loc_827A6580:
	// li r11,1
	r11.s64 = 1;
loc_827A6584:
	// lbz r9,171(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// stb r11,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, r11.u8);
	// ori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 128;
	// stb r8,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r8.u8);
loc_827A6594:
	// rlwinm r11,r30,0,29,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a65cc
	if (cr6.eq) goto loc_827A65CC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x827a65c0
	if (!cr6.lt) goto loc_827A65C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cacf0
	sub_827CACF0(ctx, base);
loc_827A65C0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_827A65CC:
	// rlwinm r28,r27,0,24,24
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827a6664
	if (cr6.eq) goto loc_827A6664;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x827a65fc
	if (!cr6.lt) goto loc_827A65FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A65FC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bge cr6,0x827a6628
	if (!cr6.lt) goto loc_827A6628;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab58
	sub_827CAB58(ctx, base);
loc_827A6628:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r19,r9,r4
	r19.u64 = ctx.r9.u64 | ctx.r4.u64;
loc_827A6664:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cae90
	sub_827CAE90(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r11,-460
	ctx.r4.s64 = r11.s64 + -460;
	// rlwinm r30,r26,31,25,31
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7F;
	// clrlwi r29,r27,31
	r29.u64 = r27.u32 & 0x1;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827a66ac
	if (cr6.eq) goto loc_827A66AC;
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-476
	ctx.r4.s64 = ctx.r10.s64 + -476;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A66AC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x827a66d0
	if (cr6.eq) goto loc_827A66D0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-484
	ctx.r4.s64 = r11.s64 + -484;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc9a8
	sub_827CC9A8(ctx, base);
loc_827A66D0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x827a66f4
	if (cr6.eq) goto loc_827A66F4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-660
	ctx.r4.s64 = r11.s64 + -660;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cc948
	sub_827CC948(ctx, base);
loc_827A66F4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827a6718
	if (cr6.eq) goto loc_827A6718;
	// lfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-500
	ctx.r4.s64 = r11.s64 + -500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6718:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a6748
	if (cr6.eq) goto loc_827A6748;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x827a6730
	if (cr6.eq) goto loc_827A6730;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// b 0x827a6738
	goto loc_827A6738;
loc_827A6730:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-508
	ctx.r5.s64 = r11.s64 + -508;
loc_827A6738:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-524
	ctx.r4.s64 = r11.s64 + -524;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6748:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a6764
	if (cr6.eq) goto loc_827A6764;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lhz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-544
	ctx.r4.s64 = ctx.r10.s64 + -544;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6764:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a6780
	if (cr6.eq) goto loc_827A6780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lbz r5,170(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-444
	ctx.r4.s64 = ctx.r10.s64 + -444;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A6780:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827a679c
	if (cr6.eq) goto loc_827A679C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r11,-572
	ctx.r4.s64 = r11.s64 + -572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A679C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a67c8
	if (cr6.eq) goto loc_827A67C8;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a67c0
	if (cr6.eq) goto loc_827A67C0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-592
	ctx.r4.s64 = r11.s64 + -592;
	// b 0x827a67dc
	goto loc_827A67DC;
loc_827A67C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a67e4
	if (!cr6.eq) goto loc_827A67E4;
loc_827A67C8:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a67e4
	if (cr6.eq) goto loc_827A67E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-608
	ctx.r4.s64 = r11.s64 + -608;
loc_827A67DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1830
	sub_827B1830(ctx, base);
loc_827A67E4:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x827a67f4
	if (cr6.eq) goto loc_827A67F4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A67F4:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cae90
	sub_827CAE90(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a6810
	if (cr6.eq) goto loc_827A6810;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A6810:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
}

__attribute__((alias("__imp__sub_827A6820"))) PPC_WEAK_FUNC(sub_827A6820);
PPC_FUNC_IMPL(__imp__sub_827A6820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_827A6824"))) PPC_WEAK_FUNC(sub_827A6824);
PPC_FUNC_IMPL(__imp__sub_827A6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6828"))) PPC_WEAK_FUNC(sub_827A6828);
PPC_FUNC_IMPL(__imp__sub_827A6828) {
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
	// lwz r11,788(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 788);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a6854
	if (!cr6.eq) goto loc_827A6854;
	// addi r11,r4,40
	r11.s64 = ctx.r4.s64 + 40;
loc_827A6854:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827cc6e8
	sub_827CC6E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lbz r7,7(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// addi r4,r11,-424
	ctx.r4.s64 = r11.s64 + -424;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// bl 0x82789488
	sub_82789488(ctx, base);
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

__attribute__((alias("__imp__sub_827A6890"))) PPC_WEAK_FUNC(sub_827A6890);
PPC_FUNC_IMPL(__imp__sub_827A6890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A6894"))) PPC_WEAK_FUNC(sub_827A6894);
PPC_FUNC_IMPL(__imp__sub_827A6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6898"))) PPC_WEAK_FUNC(sub_827A6898);
PPC_FUNC_IMPL(__imp__sub_827A6898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lbz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A68D4"))) PPC_WEAK_FUNC(sub_827A68D4);
PPC_FUNC_IMPL(__imp__sub_827A68D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A68D8"))) PPC_WEAK_FUNC(sub_827A68D8);
PPC_FUNC_IMPL(__imp__sub_827A68D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a6944
	if (cr6.eq) goto loc_827A6944;
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// rlwinm r7,r9,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x827a6924
	if (!cr6.eq) goto loc_827A6924;
	// rlwinm r9,r9,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a6924
	if (cr6.eq) goto loc_827A6924;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x827a6928
	if (!cr6.eq) goto loc_827A6928;
loc_827A6924:
	// li r9,0
	ctx.r9.s64 = 0;
loc_827A6928:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a693c
	if (cr6.eq) goto loc_827A693C;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// b 0x827a6940
	goto loc_827A6940;
loc_827A693C:
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_827A6940:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_827A6944:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// stfd f11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f11.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x827a69b4
	if (!cr6.eq) goto loc_827A69B4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// stfd f11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f11.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-4(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x827a69b4
	if (!cr6.eq) goto loc_827A69B4;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_827A69B4:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A69D4"))) PPC_WEAK_FUNC(sub_827A69D4);
PPC_FUNC_IMPL(__imp__sub_827A69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A69D8"))) PPC_WEAK_FUNC(sub_827A69D8);
PPC_FUNC_IMPL(__imp__sub_827A69D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,-384
	ctx.r8.s64 = r11.s64 + -384;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r27,r3,24
	r27.s64 = ctx.r3.s64 + 24;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// addi r25,r31,28
	r25.s64 = r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r24,r31,32
	r24.s64 = r31.s64 + 32;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,27508(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a6aa8
	if (cr6.eq) goto loc_827A6AA8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,20(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82804798
	sub_82804798(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827A6AA8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a6ab8
	if (cr6.eq) goto loc_827A6AB8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A6AB8:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// oris r11,r7,1
	r11.u64 = ctx.r7.u64 | 65536;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x827a6ae8
	if (cr6.eq) goto loc_827A6AE8;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_827A6AE8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827a3418
	sub_827A3418(ctx, base);
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a6b54
	if (cr6.eq) goto loc_827A6B54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a2e90
	sub_827A2E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	r11.s64 = -1;
	// rlwinm r3,r7,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A6B28:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x827a6b28
	if (!cr0.eq) goto loc_827A6B28;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827a6b54
	if (!cr0.eq) goto loc_827A6B54;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A6B54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827A6B5C"))) PPC_WEAK_FUNC(sub_827A6B5C);
PPC_FUNC_IMPL(__imp__sub_827A6B5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827A6B60"))) PPC_WEAK_FUNC(sub_827A6B60);
PPC_FUNC_IMPL(__imp__sub_827A6B60) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// addi r8,r11,-368
	ctx.r8.s64 = r11.s64 + -368;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a6bb8
	if (cr6.eq) goto loc_827A6BB8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827A6BB8:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a6be4
	if (cr6.eq) goto loc_827A6BE4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827A6BE4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a6c00
	if (cr6.eq) goto loc_827A6C00;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A6C00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827A6C10"))) PPC_WEAK_FUNC(sub_827A6C10);
PPC_FUNC_IMPL(__imp__sub_827A6C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A6C14"))) PPC_WEAK_FUNC(sub_827A6C14);
PPC_FUNC_IMPL(__imp__sub_827A6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6C18"))) PPC_WEAK_FUNC(sub_827A6C18);
PPC_FUNC_IMPL(__imp__sub_827A6C18) {
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
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r10,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r10.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a4a18
	sub_827A4A18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A6C5C"))) PPC_WEAK_FUNC(sub_827A6C5C);
PPC_FUNC_IMPL(__imp__sub_827A6C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A6C60"))) PPC_WEAK_FUNC(sub_827A6C60);
PPC_FUNC_IMPL(__imp__sub_827A6C60) {
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
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r30,2356
	ctx.r3.s64 = r30.s64 + 2356;
	// bl 0x827b2a98
	sub_827B2A98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a6cc0
	if (cr6.eq) goto loc_827A6CC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a6cbc
	if (cr6.eq) goto loc_827A6CBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A6CBC:
	// stw r3,2384(r30)
	PPC_STORE_U32(r30.u32 + 2384, ctx.r3.u32);
loc_827A6CC0:
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

__attribute__((alias("__imp__sub_827A6CD4"))) PPC_WEAK_FUNC(sub_827A6CD4);
PPC_FUNC_IMPL(__imp__sub_827A6CD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A6CD8"))) PPC_WEAK_FUNC(sub_827A6CD8);
PPC_FUNC_IMPL(__imp__sub_827A6CD8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827a6d2c
	if (!cr6.eq) goto loc_827A6D2C;
	// lwz r31,2748(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2748);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a6d1c
	if (cr6.eq) goto loc_827A6D1C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827a6d1c
	if (cr0.gt) goto loc_827A6D1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A6D1C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,2748(r29)
	PPC_STORE_U32(r29.u32 + 2748, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827A6D2C:
	// lwz r30,128(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x827a6d44
	if (!cr6.eq) goto loc_827A6D44;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827A6D44:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a6d58
	if (cr6.eq) goto loc_827A6D58;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_827A6D58:
	// lwz r31,2748(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 2748);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a6d84
	if (cr6.eq) goto loc_827A6D84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827a6d84
	if (cr0.gt) goto loc_827A6D84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A6D84:
	// stw r30,2748(r29)
	PPC_STORE_U32(r29.u32 + 2748, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827A6D8C"))) PPC_WEAK_FUNC(sub_827A6D8C);
PPC_FUNC_IMPL(__imp__sub_827A6D8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A6D90"))) PPC_WEAK_FUNC(sub_827A6D90);
PPC_FUNC_IMPL(__imp__sub_827A6D90) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,2744
	ctx.r4.s64 = ctx.r3.s64 + 2744;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a7290
	if (cr6.eq) goto loc_827A7290;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// lhz r10,2784(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2784);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7288
	if (cr6.eq) goto loc_827A7288;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7288
	if (cr6.eq) goto loc_827A7288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x827a6e60
	if (!cr6.eq) goto loc_827A6E60;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x827a6e64
	if (cr6.eq) goto loc_827A6E64;
loc_827A6E60:
	// li r11,0
	r11.s64 = 0;
loc_827A6E64:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a7288
	if (!cr6.eq) goto loc_827A7288;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827a6edc
	if (cr6.lt) goto loc_827A6EDC;
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827a6edc
	if (cr6.lt) goto loc_827A6EDC;
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827a6edc
	if (cr6.lt) goto loc_827A6EDC;
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x827a6ee0
	if (!cr6.lt) goto loc_827A6EE0;
loc_827A6EDC:
	// li r11,0
	r11.s64 = 0;
loc_827A6EE0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a6f00
	if (!cr6.eq) goto loc_827A6F00;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7288
	if (cr6.eq) goto loc_827A7288;
loc_827A6F00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lfs f11,30364(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30364);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -308);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x827a6f8c
	if (!cr6.gt) goto loc_827A6F8C;
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// b 0x827a6fa0
	goto loc_827A6FA0;
loc_827A6F8C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827a6f9c
	if (!cr6.lt) goto loc_827A6F9C;
	// fmr f5,f0
	ctx.f5.f64 = f0.f64;
	// b 0x827a6fa0
	goto loc_827A6FA0;
loc_827A6F9C:
	// fmr f5,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f13.f64;
loc_827A6FA0:
	// lfs f7,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f11
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// ble cr6,0x827a6fb4
	if (!cr6.gt) goto loc_827A6FB4;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// b 0x827a6fc8
	goto loc_827A6FC8;
loc_827A6FB4:
	// fcmpu cr6,f7,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, f0.f64);
	// bge cr6,0x827a6fc4
	if (!cr6.lt) goto loc_827A6FC4;
	// fmr f6,f0
	ctx.f6.f64 = f0.f64;
	// b 0x827a6fc8
	goto loc_827A6FC8;
loc_827A6FC4:
	// fmr f6,f7
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f7.f64;
loc_827A6FC8:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x827a6fd8
	if (!cr6.gt) goto loc_827A6FD8;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// b 0x827a6fec
	goto loc_827A6FEC;
loc_827A6FD8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827a6fe8
	if (!cr6.lt) goto loc_827A6FE8;
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
	// b 0x827a6fec
	goto loc_827A6FEC;
loc_827A6FE8:
	// fmr f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f13.f64;
loc_827A6FEC:
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x827a7000
	if (!cr6.gt) goto loc_827A7000;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x827a7014
	goto loc_827A7014;
loc_827A7000:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x827a7010
	if (!cr6.lt) goto loc_827A7010;
	// fmr f9,f0
	ctx.f9.f64 = f0.f64;
	// b 0x827a7014
	goto loc_827A7014;
loc_827A7010:
	// fmr f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f12.f64;
loc_827A7014:
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x827a7028
	if (!cr6.gt) goto loc_827A7028;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x827a703c
	goto loc_827A703C;
loc_827A7028:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827a7038
	if (!cr6.lt) goto loc_827A7038;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// b 0x827a703c
	goto loc_827A703C;
loc_827A7038:
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
loc_827A703C:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x827a704c
	if (!cr6.gt) goto loc_827A704C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x827a7058
	goto loc_827A7058;
loc_827A704C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x827a7058
	if (!cr6.lt) goto loc_827A7058;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
loc_827A7058:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x827a7068
	if (!cr6.gt) goto loc_827A7068;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x827a7074
	goto loc_827A7074;
loc_827A7068:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827a7074
	if (!cr6.lt) goto loc_827A7074;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_827A7074:
	// fcmpu cr6,f7,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// ble cr6,0x827a7084
	if (!cr6.gt) goto loc_827A7084;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// b 0x827a7090
	goto loc_827A7090;
loc_827A7084:
	// fcmpu cr6,f7,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, f0.f64);
	// blt cr6,0x827a7090
	if (cr6.lt) goto loc_827A7090;
	// fmr f0,f7
	f0.f64 = ctx.f7.f64;
loc_827A7090:
	// fctiwz f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// fctiwz f7,f6
	ctx.f7.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f11,f5
	ctx.f11.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// fctiwz f6,f13
	ctx.f6.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r6,134(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// fctiwz f4,f0
	ctx.f4.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f10
	ctx.f5.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// lhz r29,86(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// fctiwz f3,f12
	ctx.f3.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lhz r27,134(r1)
	r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lhz r28,86(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f2,f9
	ctx.f2.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lhz r26,86(r1)
	r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r4,262(r1)
	PPC_STORE_U16(ctx.r1.u32 + 262, ctx.r4.u16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// sth r7,264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 264, ctx.r7.u16);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// sth r26,260(r1)
	PPC_STORE_U16(ctx.r1.u32 + 260, r26.u16);
	// sth r3,298(r1)
	PPC_STORE_U16(ctx.r1.u32 + 298, ctx.r3.u16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// sth r6,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r6.u16);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// sth r7,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r7.u16);
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// sth r26,268(r1)
	PPC_STORE_U16(ctx.r1.u32 + 268, r26.u16);
	// addi r11,r10,40
	r11.s64 = ctx.r10.s64 + 40;
	// sth r7,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r7.u16);
	// addi r10,r9,-40
	ctx.r10.s64 = ctx.r9.s64 + -40;
	// sth r29,276(r1)
	PPC_STORE_U16(ctx.r1.u32 + 276, r29.u16);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// sth r28,292(r1)
	PPC_STORE_U16(ctx.r1.u32 + 292, r28.u16);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r29,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, r29.u16);
	// addi r9,r27,-40
	ctx.r9.s64 = r27.s64 + -40;
	// sth r28,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, r28.u16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r27,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, r27.u16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r8,266(r1)
	PPC_STORE_U16(ctx.r1.u32 + 266, ctx.r8.u16);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// sth r8,274(r1)
	PPC_STORE_U16(ctx.r1.u32 + 274, ctx.r8.u16);
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// sth r3,270(r1)
	PPC_STORE_U16(ctx.r1.u32 + 270, ctx.r3.u16);
	// addi r6,r6,40
	ctx.r6.s64 = ctx.r6.s64 + 40;
	// sth r3,286(r1)
	PPC_STORE_U16(ctx.r1.u32 + 286, ctx.r3.u16);
	// addi r5,r5,-40
	ctx.r5.s64 = ctx.r5.s64 + -40;
	// sth r10,290(r1)
	PPC_STORE_U16(ctx.r1.u32 + 290, ctx.r10.u16);
	// addi r4,r4,-40
	ctx.r4.s64 = ctx.r4.s64 + -40;
	// sth r6,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r6.u16);
	// sth r5,284(r1)
	PPC_STORE_U16(ctx.r1.u32 + 284, ctx.r5.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r4,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r4.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r10,294(r1)
	PPC_STORE_U16(ctx.r1.u32 + 294, ctx.r10.u16);
	// li r5,12
	ctx.r5.s64 = 12;
	// sth r11,278(r1)
	PPC_STORE_U16(ctx.r1.u32 + 278, r11.u16);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// sth r11,282(r1)
	PPC_STORE_U16(ctx.r1.u32 + 282, r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,255
	r11.s64 = 255;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// lwz r7,92(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r6,-356
	ctx.r4.s64 = ctx.r6.s64 + -356;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,72(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A7288:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7290:
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_827A72A0"))) PPC_WEAK_FUNC(sub_827A72A0);
PPC_FUNC_IMPL(__imp__sub_827A72A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A72A4"))) PPC_WEAK_FUNC(sub_827A72A4);
PPC_FUNC_IMPL(__imp__sub_827A72A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A72A8"))) PPC_WEAK_FUNC(sub_827A72A8);
PPC_FUNC_IMPL(__imp__sub_827A72A8) {
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
	// lhz r11,2784(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2784);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a7344
	if (cr6.eq) goto loc_827A7344;
	// addi r4,r3,2744
	ctx.r4.s64 = ctx.r3.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7344
	if (cr6.eq) goto loc_827A7344;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827a733c
	if (cr6.eq) goto loc_827A733C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827a733c
	if (!cr6.eq) goto loc_827A733C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// b 0x827a7350
	goto loc_827A7350;
loc_827A733C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7344:
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,2784(r30)
	PPC_STORE_U32(r30.u32 + 2784, ctx.r10.u32);
loc_827A7350:
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

__attribute__((alias("__imp__sub_827A7364"))) PPC_WEAK_FUNC(sub_827A7364);
PPC_FUNC_IMPL(__imp__sub_827A7364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7368"))) PPC_WEAK_FUNC(sub_827A7368);
PPC_FUNC_IMPL(__imp__sub_827A7368) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r3,2744
	ctx.r4.s64 = ctx.r3.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a73ac
	if (cr6.eq) goto loc_827A73AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A73AC:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x827a7434
	if (cr6.eq) goto loc_827A7434;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a73f0
	if (cr6.eq) goto loc_827A73F0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a73f0
	if (cr6.eq) goto loc_827A73F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a743c
	if (cr6.eq) goto loc_827A743C;
loc_827A73F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a740c
	if (cr6.eq) goto loc_827A740C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A740C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827a30a0
	sub_827A30A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8280c2e8
	sub_8280C2E8(ctx, base);
loc_827A7434:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7444
	if (cr6.eq) goto loc_827A7444;
loc_827A743C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A7448"))) PPC_WEAK_FUNC(sub_827A7448);
PPC_FUNC_IMPL(__imp__sub_827A7448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A744C"))) PPC_WEAK_FUNC(sub_827A744C);
PPC_FUNC_IMPL(__imp__sub_827A744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7450"))) PPC_WEAK_FUNC(sub_827A7450);
PPC_FUNC_IMPL(__imp__sub_827A7450) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,2744
	r28.s64 = ctx.r3.s64 + 2744;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7498
	if (cr6.eq) goto loc_827A7498;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7498:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x827a7558
	if (cr6.eq) goto loc_827A7558;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a74d4
	if (cr6.eq) goto loc_827A74D4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a74d4
	if (cr6.eq) goto loc_827A74D4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A74D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a7570
	if (cr6.eq) goto loc_827A7570;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ef20
	sub_8274EF20(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a750c
	if (cr6.eq) goto loc_827A750C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x827a750c
	if (!cr0.eq) goto loc_827A750C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A750C:
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827a30a0
	sub_827A30A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8280c088
	sub_8280C088(ctx, base);
loc_827A7558:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7568
	if (cr6.eq) goto loc_827A7568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7568:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827A7570:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7590
	if (cr6.eq) goto loc_827A7590;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x827a7590
	if (!cr0.eq) goto loc_827A7590;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A7590:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_827A7598"))) PPC_WEAK_FUNC(sub_827A7598);
PPC_FUNC_IMPL(__imp__sub_827A7598) {
	PPC_FUNC_PROLOGUE();
	// b 0x827a7530
	// ERROR 827A7530
	return;
}

__attribute__((alias("__imp__sub_827A759C"))) PPC_WEAK_FUNC(sub_827A759C);
PPC_FUNC_IMPL(__imp__sub_827A759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A75A0"))) PPC_WEAK_FUNC(sub_827A75A0);
PPC_FUNC_IMPL(__imp__sub_827A75A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// beq cr6,0x827a75fc
	if (cr6.eq) goto loc_827A75FC;
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
loc_827A75E0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x827a76a0
	if (cr6.eq) goto loc_827A76A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x827a75e0
	if (cr6.lt) goto loc_827A75E0;
loc_827A75FC:
	// li r30,0
	r30.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f8,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_827A76A0:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
}

__attribute__((alias("__imp__sub_827A76AC"))) PPC_WEAK_FUNC(sub_827A76AC);
PPC_FUNC_IMPL(__imp__sub_827A76AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x827a7600
	// ERROR 827A7600
	return;
}

__attribute__((alias("__imp__sub_827A76B0"))) PPC_WEAK_FUNC(sub_827A76B0);
PPC_FUNC_IMPL(__imp__sub_827A76B0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// beq cr6,0x827a7710
	if (cr6.eq) goto loc_827A7710;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
loc_827A76F4:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x827a77d4
	if (cr6.eq) goto loc_827A77D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x827a76f4
	if (cr6.lt) goto loc_827A76F4;
loc_827A7710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A7714:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a7794
	if (!cr0.eq) goto loc_827A7794;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A7794:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a77bc
	if (cr6.eq) goto loc_827A77BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a77e4
	if (!cr6.eq) goto loc_827A77E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_827A77BC:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9460
	return;
loc_827A77D4:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x827a7714
	goto loc_827A7714;
loc_827A77E4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f9,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,236(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f7,240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f6,244(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,252(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82763a20
	sub_82763A20(ctx, base);
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f2,4(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827A7898"))) PPC_WEAK_FUNC(sub_827A7898);
PPC_FUNC_IMPL(__imp__sub_827A7898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A789C"))) PPC_WEAK_FUNC(sub_827A789C);
PPC_FUNC_IMPL(__imp__sub_827A789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A78A0"))) PPC_WEAK_FUNC(sub_827A78A0);
PPC_FUNC_IMPL(__imp__sub_827A78A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// beq cr6,0x827a7ac8
	if (cr6.eq) goto loc_827A7AC8;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827a7924
	if (!cr6.gt) goto loc_827A7924;
	// li r30,0
	r30.s64 = 0;
loc_827A78E0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827a7920
	if (!cr6.eq) goto loc_827A7920;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x827a78e0
	if (cr6.lt) goto loc_827A78E0;
	// b 0x827a7924
	goto loc_827A7924;
loc_827A7920:
	// li r28,1
	r28.s64 = 1;
loc_827A7924:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a7ac8
	if (cr6.eq) goto loc_827A7AC8;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bne cr6,0x827a7944
	if (!cr6.eq) goto loc_827A7944;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827A7944:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r9,r31,2832
	ctx.r9.s64 = r31.s64 + 2832;
	// addi r8,r31,232
	ctx.r8.s64 = r31.s64 + 232;
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x8280c840
	sub_8280C840(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a7ac0
	if (cr6.eq) goto loc_827A7AC0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827a7ac0
	if (cr6.eq) goto loc_827A7AC0;
	// lwz r10,2784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r9.u32);
	// beq cr6,0x827a79a4
	if (cr6.eq) goto loc_827A79A4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827A79A4:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a79b8
	if (cr6.eq) goto loc_827A79B8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827A79B8:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// lfs f4,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f2,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,2352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2352);
	// lfs f1,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x827a7a3c
	if (!cr6.gt) goto loc_827A7A3C;
	// li r29,0
	r29.s64 = 0;
loc_827A7A08:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x827a7a08
	if (cr6.lt) goto loc_827A7A08;
loc_827A7A3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a3ae0
	sub_827A3AE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a6d90
	sub_827A6D90(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,2784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r7.u32);
	// bl 0x8280d6e8
	sub_8280D6E8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8280d3f8
	sub_8280D3F8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8280d010
	sub_8280D010(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7ac0
	if (cr6.eq) goto loc_827A7AC0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8280d010
	sub_8280D010(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8280c8c8
	sub_8280C8C8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// ble cr6,0x827a7ac0
	if (!cr6.gt) goto loc_827A7AC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8280c990
	sub_8280C990(ctx, base);
loc_827A7AC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8280c4d0
	sub_8280C4D0(ctx, base);
loc_827A7AC8:
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
}

__attribute__((alias("__imp__sub_827A7AD4"))) PPC_WEAK_FUNC(sub_827A7AD4);
PPC_FUNC_IMPL(__imp__sub_827A7AD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A7AD8"))) PPC_WEAK_FUNC(sub_827A7AD8);
PPC_FUNC_IMPL(__imp__sub_827A7AD8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a7bfc
	if (cr6.eq) goto loc_827A7BFC;
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a7bfc
	if (cr6.eq) goto loc_827A7BFC;
	// lbz r11,2728(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a7bfc
	if (cr6.eq) goto loc_827A7BFC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x827a7bfc
	if (cr6.lt) goto loc_827A7BFC;
	// lwz r10,2736(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2736);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x827a7bfc
	if (!cr6.lt) goto loc_827A7BFC;
	// lwz r10,2732(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2732);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,2744
	ctx.r4.s64 = ctx.r3.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r30,r9,r10
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827a7b60
	if (cr6.eq) goto loc_827A7B60;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7B60:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// beq cr6,0x827a7bec
	if (cr6.eq) goto loc_827A7BEC;
	// lhz r11,24(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 24);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,2752(r31)
	PPC_STORE_U16(r31.u32 + 2752, r11.u16);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,2756(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 2756, temp.u32);
	// stfs f12,2760(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 2760, temp.u32);
	// stfs f13,2764(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 2764, temp.u32);
	// stfs f0,2768(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2768, temp.u32);
	// bl 0x827a7368
	sub_827A7368(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a7bd4
	if (cr6.eq) goto loc_827A7BD4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x827a7bd4
	if (!cr6.eq) goto loc_827A7BD4;
	// lwz r11,2784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// b 0x827a7bdc
	goto loc_827A7BDC;
loc_827A7BD4:
	// lwz r11,2784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2784);
	// oris r10,r11,1
	ctx.r10.u64 = r11.u64 | 65536;
loc_827A7BDC:
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r10.u32);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r31)
	PPC_STORE_U32(r31.u32 + 2784, ctx.r10.u32);
loc_827A7BEC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827a7bfc
	if (cr6.eq) goto loc_827A7BFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A7C00"))) PPC_WEAK_FUNC(sub_827A7C00);
PPC_FUNC_IMPL(__imp__sub_827A7C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A7C04"))) PPC_WEAK_FUNC(sub_827A7C04);
PPC_FUNC_IMPL(__imp__sub_827A7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7C08"))) PPC_WEAK_FUNC(sub_827A7C08);
PPC_FUNC_IMPL(__imp__sub_827A7C08) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r3,2744
	ctx.r4.s64 = ctx.r3.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7c48
	if (cr6.eq) goto loc_827A7C48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7C48:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x827a7cb8
	if (cr6.eq) goto loc_827A7CB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7c8c
	if (cr6.eq) goto loc_827A7C8C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a7c8c
	if (cr6.eq) goto loc_827A7C8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7cc0
	if (cr6.eq) goto loc_827A7CC0;
loc_827A7C8C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827a7450
	sub_827A7450(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a7cb8
	if (cr6.eq) goto loc_827A7CB8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A7CB8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7cc8
	if (cr6.eq) goto loc_827A7CC8;
loc_827A7CC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7CC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A7CCC"))) PPC_WEAK_FUNC(sub_827A7CCC);
PPC_FUNC_IMPL(__imp__sub_827A7CCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A7CD0"))) PPC_WEAK_FUNC(sub_827A7CD0);
PPC_FUNC_IMPL(__imp__sub_827A7CD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a7d1c
	if (cr6.eq) goto loc_827A7D1C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x827a7d1c
	if (!cr6.eq) goto loc_827A7D1C;
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// b 0x827a7d24
	goto loc_827A7D24;
loc_827A7D1C:
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// oris r10,r11,1
	ctx.r10.u64 = r11.u64 | 65536;
loc_827A7D24:
	// li r11,0
	r11.s64 = 0;
	// stw r10,2784(r30)
	PPC_STORE_U32(r30.u32 + 2784, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,2752(r30)
	PPC_STORE_U16(r30.u32 + 2752, r11.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827a7c08
	sub_827A7C08(ctx, base);
	// lhz r10,2784(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2784);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7da0
	if (cr6.eq) goto loc_827A7DA0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a7d88
	if (cr6.eq) goto loc_827A7D88;
loc_827A7D54:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a7d80
	if (cr6.eq) goto loc_827A7D80;
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a7d54
	if (!cr6.eq) goto loc_827A7D54;
loc_827A7D80:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a7d94
	if (!cr6.eq) goto loc_827A7D94;
loc_827A7D88:
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// oris r10,r11,1
	ctx.r10.u64 = r11.u64 | 65536;
	// b 0x827a7d9c
	goto loc_827A7D9C;
loc_827A7D94:
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
loc_827A7D9C:
	// stw r10,2784(r30)
	PPC_STORE_U32(r30.u32 + 2784, ctx.r10.u32);
loc_827A7DA0:
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

__attribute__((alias("__imp__sub_827A7DB4"))) PPC_WEAK_FUNC(sub_827A7DB4);
PPC_FUNC_IMPL(__imp__sub_827A7DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7DB8"))) PPC_WEAK_FUNC(sub_827A7DB8);
PPC_FUNC_IMPL(__imp__sub_827A7DB8) {
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,-868
	ctx.r10.s64 = r11.s64 + -868;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827a7df0
	if (cr6.eq) goto loc_827A7DF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b2fb0
	sub_827B2FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A7DF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A7E00"))) PPC_WEAK_FUNC(sub_827A7E00);
PPC_FUNC_IMPL(__imp__sub_827A7E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7E04"))) PPC_WEAK_FUNC(sub_827A7E04);
PPC_FUNC_IMPL(__imp__sub_827A7E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7E08"))) PPC_WEAK_FUNC(sub_827A7E08);
PPC_FUNC_IMPL(__imp__sub_827A7E08) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r10,r11,-292
	ctx.r10.s64 = r11.s64 + -292;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r30.u8);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stb r30,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r30.u8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a7ec4
	if (cr6.eq) goto loc_827A7EC4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7f24
	if (cr6.eq) goto loc_827A7F24;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r28,r3,28,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// b 0x827a7f24
	goto loc_827A7F24;
loc_827A7EC4:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x827a7f24
	if (cr6.eq) goto loc_827A7F24;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x827a30a0
	sub_827A30A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bne cr6,0x827a7efc
	if (!cr6.eq) goto loc_827A7EFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a30a0
	sub_827A30A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7f24
	if (cr6.eq) goto loc_827A7F24;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_827A7EFC:
	// bl 0x827a30a0
	sub_827A30A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r28,r3,28,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
loc_827A7F24:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7f5c
	if (cr6.eq) goto loc_827A7F5C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lbz r7,24(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x827a69d8
	sub_827A69D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827A7F5C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7f6c
	if (cr6.eq) goto loc_827A7F6C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A7F6C:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A7FB4"))) PPC_WEAK_FUNC(sub_827A7FB4);
PPC_FUNC_IMPL(__imp__sub_827A7FB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827A7FB8"))) PPC_WEAK_FUNC(sub_827A7FB8);
PPC_FUNC_IMPL(__imp__sub_827A7FB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-292
	ctx.r10.s64 = r11.s64 + -292;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7fec
	if (cr6.eq) goto loc_827A7FEC;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7FEC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a7ffc
	if (cr6.eq) goto loc_827A7FFC;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A7FFC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a800c
	if (cr6.eq) goto loc_827A800C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A800C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r11,-868
	ctx.r10.s64 = r11.s64 + -868;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827a8034
	if (cr6.eq) goto loc_827A8034;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b2fb0
	sub_827B2FB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8034:
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

__attribute__((alias("__imp__sub_827A8048"))) PPC_WEAK_FUNC(sub_827A8048);
PPC_FUNC_IMPL(__imp__sub_827A8048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A804C"))) PPC_WEAK_FUNC(sub_827A804C);
PPC_FUNC_IMPL(__imp__sub_827A804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8050"))) PPC_WEAK_FUNC(sub_827A8050);
PPC_FUNC_IMPL(__imp__sub_827A8050) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lis r29,-31933
	r29.s64 = -2092761088;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,27508(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a80e8
	if (cr6.eq) goto loc_827A80E8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r26,20(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82804798
	sub_82804798(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827a80ec
	goto loc_827A80EC;
loc_827A80E8:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_827A80EC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a80fc
	if (cr6.eq) goto loc_827A80FC;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A80FC:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x827a3418
	sub_827A3418(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,27508(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8174
	if (cr6.eq) goto loc_827A8174;
	// addi r30,r27,64
	r30.s64 = r27.s64 + 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r3,80(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8150
	if (cr6.eq) goto loc_827A8150;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827A8150:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r27,12
	ctx.r6.s64 = r27.s64 + 12;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x827a6b60
	sub_827A6B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_827A8174:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8184
	if (cr6.eq) goto loc_827A8184;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A8184:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r3,r3,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827A81D4:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r6,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x827a81d4
	if (!cr0.eq) goto loc_827A81D4;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addic. r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827a8200
	if (!cr0.eq) goto loc_827A8200;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8200:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827A8208"))) PPC_WEAK_FUNC(sub_827A8208);
PPC_FUNC_IMPL(__imp__sub_827A8208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A820C"))) PPC_WEAK_FUNC(sub_827A820C);
PPC_FUNC_IMPL(__imp__sub_827A820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8210"))) PPC_WEAK_FUNC(sub_827A8210);
PPC_FUNC_IMPL(__imp__sub_827A8210) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8244
	if (cr6.eq) goto loc_827A8244;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A8244:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8254
	if (cr6.eq) goto loc_827A8254;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A8254:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r11,-868
	ctx.r10.s64 = r11.s64 + -868;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827a827c
	if (cr6.eq) goto loc_827A827C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b2fb0
	sub_827B2FB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A827C:
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

__attribute__((alias("__imp__sub_827A8290"))) PPC_WEAK_FUNC(sub_827A8290);
PPC_FUNC_IMPL(__imp__sub_827A8290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8294"))) PPC_WEAK_FUNC(sub_827A8294);
PPC_FUNC_IMPL(__imp__sub_827A8294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8298"))) PPC_WEAK_FUNC(sub_827A8298);
PPC_FUNC_IMPL(__imp__sub_827A8298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,2540(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2540);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,2540(r31)
	PPC_STORE_U32(r31.u32 + 2540, ctx.r8.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// addi r30,r31,2540
	r30.s64 = r31.s64 + 2540;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r3,-264
	ctx.r4.s64 = ctx.r3.s64 + -264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b3ae0
	sub_827B3AE0(ctx, base);
	// lwz r11,2512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2512);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_827A8340"))) PPC_WEAK_FUNC(sub_827A8340);
PPC_FUNC_IMPL(__imp__sub_827A8340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A8344"))) PPC_WEAK_FUNC(sub_827A8344);
PPC_FUNC_IMPL(__imp__sub_827A8344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8348"))) PPC_WEAK_FUNC(sub_827A8348);
PPC_FUNC_IMPL(__imp__sub_827A8348) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x827a84c8
	if (!cr6.eq) goto loc_827A84C8;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827a8420
	if (cr6.eq) goto loc_827A8420;
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a84c8
	if (cr6.eq) goto loc_827A84C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a84c8
	if (cr6.eq) goto loc_827A84C8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827a8050
	sub_827A8050(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a84c8
	if (cr6.eq) goto loc_827A84C8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8408
	if (cr6.eq) goto loc_827A8408;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r31,2820(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 2820);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a8408
	if (cr6.eq) goto loc_827A8408;
loc_827A83F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x827a1a00
	sub_827A1A00(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a83f0
	if (!cr6.eq) goto loc_827A83F0;
loc_827A8408:
	// lwz r10,2820(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 2820);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a84e0
	if (!cr6.eq) goto loc_827A84E0;
	// stw r29,2820(r28)
	PPC_STORE_U32(r28.u32 + 2820, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827A8420:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a84c8
	if (!cr6.eq) goto loc_827A84C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a84c8
	if (cr6.eq) goto loc_827A84C8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827a7e08
	sub_827A7E08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a84c8
	if (cr6.eq) goto loc_827A84C8;
	// lwz r7,2820(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 2820);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827a8408
	if (cr6.eq) goto loc_827A8408;
	// li r6,1
	ctx.r6.s64 = 1;
loc_827A846C:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x827a849c
	if (cr6.eq) goto loc_827A849C;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a84b8
	if (cr6.eq) goto loc_827A84B8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// b 0x827a84b0
	goto loc_827A84B0;
loc_827A849C:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x827a84b8
	if (cr6.eq) goto loc_827A84B8;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
loc_827A84B0:
	// bne cr6,0x827a84b8
	if (!cr6.eq) goto loc_827A84B8;
	// stb r6,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r6.u8);
loc_827A84B8:
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x827a846c
	if (!cr6.eq) goto loc_827A846C;
	// b 0x827a8408
	goto loc_827A8408;
loc_827A84C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b2fb0
	sub_827B2FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827A84E0:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a8504
	if (cr6.eq) goto loc_827A8504;
loc_827A84F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827a84f0
	if (!cr6.eq) goto loc_827A84F0;
loc_827A8504:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A8510"))) PPC_WEAK_FUNC(sub_827A8510);
PPC_FUNC_IMPL(__imp__sub_827A8510) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A8514"))) PPC_WEAK_FUNC(sub_827A8514);
PPC_FUNC_IMPL(__imp__sub_827A8514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8518"))) PPC_WEAK_FUNC(sub_827A8518);
PPC_FUNC_IMPL(__imp__sub_827A8518) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,2512(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2512);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x827a1b38
	sub_827A1B38(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a8588
	if (!cr0.eq) goto loc_827A8588;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A8588:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a8654
	if (cr6.eq) goto loc_827A8654;
	// addi r3,r29,104
	ctx.r3.s64 = r29.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a85ac
	if (cr6.eq) goto loc_827A85AC;
	// lwz r31,424(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x827a869c
	if (!cr6.eq) goto loc_827A869C;
loc_827A85AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8614
	if (cr6.eq) goto loc_827A8614;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a85f0
	if (!cr6.eq) goto loc_827A85F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827A85F0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b2ce0
	sub_827B2CE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827a8618
	goto loc_827A8618;
loc_827A8614:
	// li r31,0
	r31.s64 = 0;
loc_827A8618:
	// clrlwi r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8738
	if (cr6.eq) goto loc_827A8738;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A8634:
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
	// bne 0x827a8634
	if (!cr0.eq) goto loc_827A8634;
	// b 0x827a8728
	goto loc_827A8728;
loc_827A8654:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// addi r10,r11,13435
	ctx.r10.s64 = r11.s64 + 13435;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// subfic r9,r3,6
	xer.ca = ctx.r3.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r3.s64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x827a1bb8
	sub_827A1BB8(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x827a87b0
	if (!cr6.eq) goto loc_827A87B0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827a87b0
	if (cr6.eq) goto loc_827A87B0;
loc_827A869C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a86ec
	if (cr6.eq) goto loc_827A86EC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r26,2
	r26.s64 = 2;
	// bl 0x827b2d78
	sub_827B2D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827a86f0
	goto loc_827A86F0;
loc_827A86EC:
	// li r31,0
	r31.s64 = 0;
loc_827A86F0:
	// rlwinm r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8738
	if (cr6.eq) goto loc_827A8738;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A870C:
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
	// bne 0x827a870c
	if (!cr0.eq) goto loc_827A870C;
loc_827A8728:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827a8738
	if (!cr0.eq) goto loc_827A8738;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8738:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a87b0
	if (cr6.eq) goto loc_827A87B0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8778
	if (cr6.eq) goto loc_827A8778;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827a8348
	sub_827A8348(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9460
	return;
loc_827A8778:
	// lwz r11,2816(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a8790
	if (!cr6.eq) goto loc_827A8790;
	// stw r31,2816(r30)
	PPC_STORE_U32(r30.u32 + 2816, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9460
	return;
loc_827A8790:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a87ac
	if (cr6.eq) goto loc_827A87AC;
loc_827A879C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a879c
	if (!cr6.eq) goto loc_827A879C;
loc_827A87AC:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_827A87B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827A87B4"))) PPC_WEAK_FUNC(sub_827A87B4);
PPC_FUNC_IMPL(__imp__sub_827A87B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A87B8"))) PPC_WEAK_FUNC(sub_827A87B8);
PPC_FUNC_IMPL(__imp__sub_827A87B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a8a70
	if (cr6.eq) goto loc_827A8A70;
	// addi r28,r4,12
	r28.s64 = ctx.r4.s64 + 12;
	// li r27,0
	r27.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a89b8
	if (cr6.eq) goto loc_827A89B8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x827a8814
	if (cr6.eq) goto loc_827A8814;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// bne cr6,0x827a89b8
	if (!cr6.eq) goto loc_827A89B8;
loc_827A8814:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763720
	sub_82763720(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82763518
	sub_82763518(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_827A884C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827a8870
	if (cr6.eq) goto loc_827A8870;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827a884c
	if (cr6.eq) goto loc_827A884C;
loc_827A8870:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827a88d4
	if (cr6.eq) goto loc_827A88D4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r29,3
	r29.s64 = 3;
	// bl 0x82763518
	sub_82763518(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,-252
	ctx.r10.s64 = r11.s64 + -252;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_827A88A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827a88c8
	if (cr6.eq) goto loc_827A88C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827a88a4
	if (cr6.eq) goto loc_827A88A4;
loc_827A88C8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x827a88d8
	if (!cr6.eq) goto loc_827A88D8;
loc_827A88D4:
	// li r11,1
	r11.s64 = 1;
loc_827A88D8:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	// li r31,-1
	r31.s64 = -1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827a8928
	if (cr6.eq) goto loc_827A8928;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_827A88FC:
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
	// bne 0x827a88fc
	if (!cr0.eq) goto loc_827A88FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x827a8928
	if (!cr0.eq) goto loc_827A8928;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8928:
	// clrlwi r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8970
	if (cr6.eq) goto loc_827A8970;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_827A8944:
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
	// bne 0x827a8944
	if (!cr0.eq) goto loc_827A8944;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x827a8970
	if (!cr0.eq) goto loc_827A8970;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8970:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a8980
	if (cr6.eq) goto loc_827A8980;
	// li r27,1
	r27.s64 = 1;
loc_827A8980:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_827A898C:
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
	// bne 0x827a898c
	if (!cr0.eq) goto loc_827A898C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x827a89b8
	if (!cr0.eq) goto loc_827A89B8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A89B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a89f4
	if (cr6.eq) goto loc_827A89F4;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a89f4
	if (!cr6.eq) goto loc_827A89F4;
	// addi r4,r25,8
	ctx.r4.s64 = r25.s64 + 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x827b12d0
	sub_827B12D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827a89f8
	if (!cr6.eq) goto loc_827A89F8;
loc_827A89F4:
	// li r11,0
	r11.s64 = 0;
loc_827A89F8:
	// rlwinm r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827a8a18
	if (cr6.eq) goto loc_827A8A18;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8a18
	if (cr6.eq) goto loc_827A8A18;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A8A18:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a8a38
	if (cr6.eq) goto loc_827A8A38;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827a8348
	sub_827A8348(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_827A8A38:
	// lwz r11,2816(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a8a50
	if (!cr6.eq) goto loc_827A8A50;
	// stw r26,2816(r25)
	PPC_STORE_U32(r25.u32 + 2816, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_827A8A50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a8a6c
	if (cr6.eq) goto loc_827A8A6C;
loc_827A8A5C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a8a5c
	if (!cr6.eq) goto loc_827A8A5C;
loc_827A8A6C:
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_827A8A70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827A8A74"))) PPC_WEAK_FUNC(sub_827A8A74);
PPC_FUNC_IMPL(__imp__sub_827A8A74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827A8A78"))) PPC_WEAK_FUNC(sub_827A8A78);
PPC_FUNC_IMPL(__imp__sub_827A8A78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a8c7c
	if (cr6.eq) goto loc_827A8C7C;
	// addi r3,r4,104
	ctx.r3.s64 = ctx.r4.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8ac0
	if (cr6.eq) goto loc_827A8AC0;
	// lwz r30,424(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x827a8b68
	if (!cr6.eq) goto loc_827A8B68;
loc_827A8AC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8b28
	if (cr6.eq) goto loc_827A8B28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827a8b04
	if (!cr6.eq) goto loc_827A8B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827A8B04:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b2ce0
	sub_827B2CE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827a8b2c
	goto loc_827A8B2C;
loc_827A8B28:
	// li r31,0
	r31.s64 = 0;
loc_827A8B2C:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8c04
	if (cr6.eq) goto loc_827A8C04;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A8B48:
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
	// bne 0x827a8b48
	if (!cr0.eq) goto loc_827A8B48;
	// b 0x827a8bf4
	goto loc_827A8BF4;
loc_827A8B68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8bb8
	if (cr6.eq) goto loc_827A8BB8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,2
	r27.s64 = 2;
	// bl 0x827b2d78
	sub_827B2D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827a8bbc
	goto loc_827A8BBC;
loc_827A8BB8:
	// li r31,0
	r31.s64 = 0;
loc_827A8BBC:
	// rlwinm r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8c04
	if (cr6.eq) goto loc_827A8C04;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A8BD8:
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
	// bne 0x827a8bd8
	if (!cr0.eq) goto loc_827A8BD8;
loc_827A8BF4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827a8c04
	if (!cr0.eq) goto loc_827A8C04;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8C04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a8c7c
	if (cr6.eq) goto loc_827A8C7C;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r3,r26,8
	ctx.r3.s64 = r26.s64 + 8;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8c44
	if (cr6.eq) goto loc_827A8C44;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827a8348
	sub_827A8348(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827A8C44:
	// lwz r11,2816(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a8c5c
	if (!cr6.eq) goto loc_827A8C5C;
	// stw r31,2816(r26)
	PPC_STORE_U32(r26.u32 + 2816, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827A8C5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a8c78
	if (cr6.eq) goto loc_827A8C78;
loc_827A8C68:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a8c68
	if (!cr6.eq) goto loc_827A8C68;
loc_827A8C78:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_827A8C7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827A8C80"))) PPC_WEAK_FUNC(sub_827A8C80);
PPC_FUNC_IMPL(__imp__sub_827A8C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827A8C84"))) PPC_WEAK_FUNC(sub_827A8C84);
PPC_FUNC_IMPL(__imp__sub_827A8C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8C88"))) PPC_WEAK_FUNC(sub_827A8C88);
PPC_FUNC_IMPL(__imp__sub_827A8C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8cfc
	if (cr6.eq) goto loc_827A8CFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x827b2c10
	sub_827B2C10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827a8d00
	goto loc_827A8D00;
loc_827A8CFC:
	// li r31,0
	r31.s64 = 0;
loc_827A8D00:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a8d48
	if (cr6.eq) goto loc_827A8D48;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827A8D1C:
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
	// bne 0x827a8d1c
	if (!cr0.eq) goto loc_827A8D1C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827a8d48
	if (!cr0.eq) goto loc_827A8D48;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827A8D48:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a8df8
	if (cr6.eq) goto loc_827A8DF8;
	// li r11,8
	r11.s64 = 8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82767990
	sub_82767990(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827a8d74
	if (cr6.eq) goto loc_827A8D74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827A8D74:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8d84
	if (cr6.eq) goto loc_827A8D84;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827A8D84:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8dc0
	if (cr6.eq) goto loc_827A8DC0;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827a8348
	sub_827A8348(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_827A8DC0:
	// lwz r11,2816(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a8dd8
	if (!cr6.eq) goto loc_827A8DD8;
	// stw r31,2816(r30)
	PPC_STORE_U32(r30.u32 + 2816, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_827A8DD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a8df4
	if (cr6.eq) goto loc_827A8DF4;
loc_827A8DE4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a8de4
	if (!cr6.eq) goto loc_827A8DE4;
loc_827A8DF4:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_827A8DF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827A8DFC"))) PPC_WEAK_FUNC(sub_827A8DFC);
PPC_FUNC_IMPL(__imp__sub_827A8DFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827A8E00"))) PPC_WEAK_FUNC(sub_827A8E00);
PPC_FUNC_IMPL(__imp__sub_827A8E00) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8e68
	if (cr6.eq) goto loc_827A8E68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,84(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,84(r29)
	PPC_STORE_U32(r29.u32 + 84, ctx.r9.u32);
loc_827A8E3C:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a8efc
	if (!cr6.eq) goto loc_827A8EFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// b 0x827a8f0c
	goto loc_827A8F0C;
loc_827A8E68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8ef0
	if (cr6.eq) goto loc_827A8EF0;
	// li r30,0
	r30.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// sth r30,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r30.u16);
	// stb r30,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, r30.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, r11.u8);
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r30.u8);
	// stb r30,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r30.u8);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r30.u8);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a8ee0
	if (cr6.eq) goto loc_827A8EE0;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A8EE0:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// b 0x827a8e3c
	goto loc_827A8E3C;
loc_827A8EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827A8EFC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
loc_827A8F0C:
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a8f20
	if (!cr6.eq) goto loc_827A8F20;
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
loc_827A8F20:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,72(r29)
	PPC_STORE_U32(r29.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A8F38"))) PPC_WEAK_FUNC(sub_827A8F38);
PPC_FUNC_IMPL(__imp__sub_827A8F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827A8F3C"))) PPC_WEAK_FUNC(sub_827A8F3C);
PPC_FUNC_IMPL(__imp__sub_827A8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8F40"))) PPC_WEAK_FUNC(sub_827A8F40);
PPC_FUNC_IMPL(__imp__sub_827A8F40) {
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
	// lwz r11,2724(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2724);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,2712
	ctx.r3.s64 = ctx.r3.s64 + 2712;
	// stw r11,2724(r31)
	PPC_STORE_U32(r31.u32 + 2724, r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, r11.u32);
	// bl 0x827b32f0
	sub_827B32F0(ctx, base);
	// lwz r3,2724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2724);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827A8F8C"))) PPC_WEAK_FUNC(sub_827A8F8C);
PPC_FUNC_IMPL(__imp__sub_827A8F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8F90"))) PPC_WEAK_FUNC(sub_827A8F90);
PPC_FUNC_IMPL(__imp__sub_827A8F90) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a9554
	if (cr6.eq) goto loc_827A9554;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r21,0
	r21.s64 = 0;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r21.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827a9530
	if (cr6.eq) goto loc_827A9530;
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x827a9530
	if (!cr6.eq) goto loc_827A9530;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a9530
	if (cr6.eq) goto loc_827A9530;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x827a9530
	if (!cr6.eq) goto loc_827A9530;
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r21,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r21.u32);
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82789ef8
	sub_82789EF8(ctx, base);
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// lwz r31,56(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// bgt cr6,0x827a94fc
	if (cr6.gt) goto loc_827A94FC;
	// mtctr r29
	ctr.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827a9174
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A9174;
	// bdzf 4*cr6+eq,0x827a9114
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A9114;
	// bdzf 4*cr6+eq,0x827a9258
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A9258;
	// bdzf 4*cr6+eq,0x827a9344
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827A9344;
	// bne cr6,0x827a91d0
	if (!cr6.eq) goto loc_827A91D0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x827a90c0
	if (cr6.lt) goto loc_827A90C0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_827A90C0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a94fc
	if (cr6.eq) goto loc_827A94FC;
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_827A90D0:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a90fc
	if (cr6.eq) goto loc_827A90FC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x827a9100
	goto loc_827A9100;
loc_827A90FC:
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
loc_827A9100:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827a90d0
	if (!cr0.eq) goto loc_827A90D0;
	// b 0x827a94fc
	goto loc_827A94FC;
loc_827A9114:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x827a9120
	if (cr6.lt) goto loc_827A9120;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_827A9120:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a94fc
	if (cr6.eq) goto loc_827A94FC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_827A9138:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a915c
	if (cr6.eq) goto loc_827A915C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x827a9160
	goto loc_827A9160;
loc_827A915C:
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_827A9160:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827a9138
	if (!cr0.eq) goto loc_827A9138;
	// b 0x827a94fc
	goto loc_827A94FC;
loc_827A9174:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x827a9180
	if (cr6.lt) goto loc_827A9180;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_827A9180:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a94fc
	if (cr6.eq) goto loc_827A94FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f31,16944(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 16944);
loc_827A9198:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a91b8
	if (cr6.eq) goto loc_827A91B8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, ctx.f1.u64);
	// b 0x827a91bc
	goto loc_827A91BC;
loc_827A91B8:
	// stfd f31,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f31.u64);
loc_827A91BC:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x827a9198
	if (!cr0.eq) goto loc_827A9198;
	// b 0x827a94fc
	goto loc_827A94FC;
loc_827A91D0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x827a91dc
	if (!cr6.lt) goto loc_827A91DC;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_827A91DC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a94fc
	if (cr6.eq) goto loc_827A94FC;
	// mr r31,r28
	r31.u64 = r28.u64;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_827A91F0:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827a921c
	if (cr6.eq) goto loc_827A921C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r21,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r21.u32);
loc_827A921C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
	// beq cr6,0x827a9240
	if (cr6.eq) goto loc_827A9240;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82757a40
	sub_82757A40(ctx, base);
	// b 0x827a9244
	goto loc_827A9244;
loc_827A9240:
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
loc_827A9244:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x827a91f0
	if (!cr0.eq) goto loc_827A91F0;
	// b 0x827a94fc
	goto loc_827A94FC;
loc_827A9258:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x827a9264
	if (cr6.lt) goto loc_827A9264;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_827A9264:
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x827a9278
	if (cr6.lt) goto loc_827A9278;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_827A9278:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82789ef8
	sub_82789EF8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a94fc
	if (cr6.eq) goto loc_827A94FC;
	// rlwinm r27,r26,2,0,29
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_827A9290:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a932c
	if (cr6.eq) goto loc_827A932C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,2516(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r30,8(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827a9308
	if (!cr0.eq) goto loc_827A9308;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A9308:
	// stwx r29,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, r29.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a9330
	if (!cr0.eq) goto loc_827A9330;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827a9330
	goto loc_827A9330;
loc_827A932C:
	// stw r21,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r21.u32);
loc_827A9330:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x827a9290
	if (!cr0.eq) goto loc_827A9290;
	// b 0x827a94fc
	goto loc_827A94FC;
loc_827A9344:
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// mr r23,r31
	r23.u64 = r31.u64;
	// blt cr6,0x827a9358
	if (cr6.lt) goto loc_827A9358;
	// mr r23,r30
	r23.u64 = r30.u64;
loc_827A9358:
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(r23.u32, 1, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x827a936c
	if (cr6.lt) goto loc_827A936C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_827A936C:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82789ef8
	sub_82789EF8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a9420
	if (cr6.eq) goto loc_827A9420;
	// mr r30,r21
	r30.u64 = r21.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r31
	r25.u64 = r31.u64;
loc_827A9388:
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827a9410
	if (cr6.eq) goto loc_827A9410;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,2516(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827a93e0
	if (!cr0.eq) goto loc_827A93E0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A93E0:
	// stwx r29,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82764480
	sub_82764480(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a9410
	if (!cr0.eq) goto loc_827A9410;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A9410:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x827a9388
	if (!cr0.eq) goto loc_827A9388;
loc_827A9420:
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,2516(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r31,r11,0,0,19
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x827a944c
	if (cr6.lt) goto loc_827A944C;
	// ble cr6,0x827a947c
	if (!cr6.gt) goto loc_827A947C;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// ble cr6,0x827a947c
	if (!cr6.gt) goto loc_827A947C;
loc_827A944C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a9464
	if (cr6.eq) goto loc_827A9464;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827a9474
	goto loc_827A9474;
loc_827A9464:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_827A9474:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_827A947C:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a94ec
	if (cr6.eq) goto loc_827A94EC;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_827A9490:
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a94d4
	if (cr6.eq) goto loc_827A94D4;
loc_827A94B8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827a94b8
	if (!cr6.eq) goto loc_827A94B8;
loc_827A94D4:
	// sth r21,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r21.u16);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stwx r27,r30,r28
	PPC_STORE_U32(r30.u32 + r28.u32, r27.u32);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827a9490
	if (!cr0.eq) goto loc_827A9490;
loc_827A94EC:
	// lwz r11,2516(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2516);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82789ef8
	sub_82789EF8(ctx, base);
loc_827A94FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a9520
	if (!cr0.eq) goto loc_827A9520;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A9520:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x828e9448
	return;
loc_827A9530:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827a9554
	if (!cr0.eq) goto loc_827A9554;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A9554:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
}

__attribute__((alias("__imp__sub_827A9560"))) PPC_WEAK_FUNC(sub_827A9560);
PPC_FUNC_IMPL(__imp__sub_827A9560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_827A9564"))) PPC_WEAK_FUNC(sub_827A9564);
PPC_FUNC_IMPL(__imp__sub_827A9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A9568"))) PPC_WEAK_FUNC(sub_827A9568);
PPC_FUNC_IMPL(__imp__sub_827A9568) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,2576
	r29.s64 = ctx.r3.s64 + 2576;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827fe598
	sub_827FE598(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a9630
	if (!cr6.eq) goto loc_827A9630;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_827A95B0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,16(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a9610
	if (cr6.eq) goto loc_827A9610;
loc_827A95D8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827a9600
	if (!cr0.eq) goto loc_827A9600;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827A9600:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827a95d8
	if (!cr6.eq) goto loc_827A95D8;
loc_827A9610:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82809cc0
	sub_82809CC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a95b0
	if (cr6.eq) goto loc_827A95B0;
loc_827A9630:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827b31a0
	sub_827B31A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A963C"))) PPC_WEAK_FUNC(sub_827A963C);
PPC_FUNC_IMPL(__imp__sub_827A963C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A9640"))) PPC_WEAK_FUNC(sub_827A9640);
PPC_FUNC_IMPL(__imp__sub_827A9640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a9774
	if (cr6.eq) goto loc_827A9774;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a9688
	if (cr6.eq) goto loc_827A9688;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_827A9688:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a96bc
	if (cr6.eq) goto loc_827A96BC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a96b8
	if (cr6.eq) goto loc_827A96B8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_827A96B8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827A96BC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a96cc
	if (cr6.eq) goto loc_827A96CC;
	// addi r31,r24,16
	r31.s64 = r24.s64 + 16;
	// b 0x827a96dc
	goto loc_827A96DC;
loc_827A96CC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// bne cr6,0x827a96dc
	if (!cr6.eq) goto loc_827A96DC;
	// li r31,0
	r31.s64 = 0;
loc_827A96DC:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	r11.s64 = ctx.r8.s32 >> 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// bl 0x8277cda8
	sub_8277CDA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a9758
	if (cr6.eq) goto loc_827A9758;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A9758:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827a9768
	if (cr6.eq) goto loc_827A9768;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827A9768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_827A9774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827A977C"))) PPC_WEAK_FUNC(sub_827A977C);
PPC_FUNC_IMPL(__imp__sub_827A977C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827A9780"))) PPC_WEAK_FUNC(sub_827A9780);
PPC_FUNC_IMPL(__imp__sub_827A9780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a989c
	if (cr6.eq) goto loc_827A989C;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a97cc
	if (cr6.eq) goto loc_827A97CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_827A97CC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r23,0(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a9800
	if (cr6.eq) goto loc_827A9800;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a97fc
	if (cr6.eq) goto loc_827A97FC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_827A97FC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827A9800:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a9810
	if (cr6.eq) goto loc_827A9810;
	// addi r31,r23,16
	r31.s64 = r23.s64 + 16;
	// b 0x827a9820
	goto loc_827A9820;
loc_827A9810:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// bne cr6,0x827a9820
	if (!cr6.eq) goto loc_827A9820;
	// li r31,0
	r31.s64 = 0;
loc_827A9820:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8277d0a0
	sub_8277D0A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a9880
	if (cr6.eq) goto loc_827A9880;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A9880:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827a9890
	if (cr6.eq) goto loc_827A9890;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827A9890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9454
	return;
loc_827A989C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827A98A4"))) PPC_WEAK_FUNC(sub_827A98A4);
PPC_FUNC_IMPL(__imp__sub_827A98A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827A98A8"))) PPC_WEAK_FUNC(sub_827A98A8);
PPC_FUNC_IMPL(__imp__sub_827A98A8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r4,24
	r25.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a98e8
	if (cr6.eq) goto loc_827A98E8;
	// lbz r11,2728(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a98e8
	if (cr6.eq) goto loc_827A98E8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a98e8
	if (!cr6.eq) goto loc_827A98E8;
	// bl 0x827b3ec0
	sub_827B3EC0(ctx, base);
loc_827A98E8:
	// lbz r11,2728(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 2728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a99e0
	if (!cr6.eq) goto loc_827A99E0;
	// lwz r11,2748(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2748);
	// li r27,0
	r27.s64 = 0;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a9944
	if (cr6.eq) goto loc_827A9944;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827a3a70
	sub_827A3A70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a9944
	if (cr6.eq) goto loc_827A9944;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// addi r4,r29,2732
	ctx.r4.s64 = r29.s64 + 2732;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827a9994
	goto loc_827A9994;
loc_827A9944:
	// lwz r31,96(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x827a9994
	if (!cr6.gt) goto loc_827A9994;
	// addi r28,r29,2732
	r28.s64 = r29.s64 + 2732;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_827A9958:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bgt 0x827a9958
	if (cr0.gt) goto loc_827A9958;
loc_827A9994:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r29,2732
	ctx.r3.s64 = r29.s64 + 2732;
	// lwz r5,2736(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 2736);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a99bc
	if (cr6.eq) goto loc_827A99BC;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lbz r6,-5166(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + -5166);
	// bl 0x827b1e08
	sub_827B1E08(ctx, base);
	// b 0x827a99c8
	goto loc_827A99C8;
loc_827A99BC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lbz r6,-5167(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + -5167);
	// bl 0x827b23b8
	sub_827B23B8(ctx, base);
loc_827A99C8:
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stb r11,2728(r29)
	PPC_STORE_U8(r29.u32 + 2728, r11.u8);
	// beq cr6,0x827a99e0
	if (cr6.eq) goto loc_827A99E0;
	// li r11,3
	r11.s64 = 3;
	// stb r11,2728(r29)
	PPC_STORE_U8(r29.u32 + 2728, r11.u8);
loc_827A99E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827A99E4"))) PPC_WEAK_FUNC(sub_827A99E4);
PPC_FUNC_IMPL(__imp__sub_827A99E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827A99E8"))) PPC_WEAK_FUNC(sub_827A99E8);
PPC_FUNC_IMPL(__imp__sub_827A99E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a9af0
	if (!cr6.eq) goto loc_827A9AF0;
	// lhz r11,2752(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2752);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r11,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r11.u16);
	// lfs f0,2768(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2768);
	f0.f64 = double(temp.f32);
	// lfs f13,2764(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2764);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2760(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2756(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2756);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stb r5,27(r30)
	PPC_STORE_U8(r30.u32 + 27, ctx.r5.u8);
	// stb r10,26(r30)
	PPC_STORE_U8(r30.u32 + 26, ctx.r10.u8);
	// bl 0x827a98a8
	sub_827A98A8(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r4,r31,2744
	ctx.r4.s64 = r31.s64 + 2744;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a9a70
	if (cr6.eq) goto loc_827A9A70;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_827A9A70:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a9a80
	if (cr6.eq) goto loc_827A9A80;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827A9A80:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a9ae8
	if (cr6.eq) goto loc_827A9AE8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x827a9ae8
	if (cr6.eq) goto loc_827A9AE8;
	// lwz r8,2736(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 2736);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827a9ae8
	if (cr6.eq) goto loc_827A9AE8;
	// lwz r9,2732(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2732);
	// li r11,0
	r11.s64 = 0;
loc_827A9AB8:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x827a9ae4
	if (cr6.eq) goto loc_827A9AE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x827a9ab8
	if (cr6.lt) goto loc_827A9AB8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_827A9AE4:
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_827A9AE8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
loc_827A9AF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827A9AF4"))) PPC_WEAK_FUNC(sub_827A9AF4);
PPC_FUNC_IMPL(__imp__sub_827A9AF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827A9AF8"))) PPC_WEAK_FUNC(sub_827A9AF8);
PPC_FUNC_IMPL(__imp__sub_827A9AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e9400
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eaac0
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// bne cr6,0x827aa76c
	if (!cr6.eq) goto loc_827AA76C;
	// extsh r24,r4
	r24.s64 = ctx.r4.s16;
	// cmpwi cr6,r24,9
	cr6.compare<int32_t>(r24.s32, 9, xer);
	// beq cr6,0x827a9b78
	if (cr6.eq) goto loc_827A9B78;
	// lhz r11,2784(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2784);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a9b58
	if (!cr6.eq) goto loc_827A9B58;
	// lbz r11,26(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 26);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa76c
	if (cr6.eq) goto loc_827AA76C;
loc_827A9B58:
	// cmpwi cr6,r24,37
	cr6.compare<int32_t>(r24.s32, 37, xer);
	// beq cr6,0x827a9b78
	if (cr6.eq) goto loc_827A9B78;
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// beq cr6,0x827a9b78
	if (cr6.eq) goto loc_827A9B78;
	// cmpwi cr6,r24,38
	cr6.compare<int32_t>(r24.s32, 38, xer);
	// beq cr6,0x827a9b78
	if (cr6.eq) goto loc_827A9B78;
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// bne cr6,0x827aa76c
	if (!cr6.eq) goto loc_827AA76C;
loc_827A9B78:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827a99e8
	sub_827A99E8(ctx, base);
	// cmpwi cr6,r24,9
	cr6.compare<int32_t>(r24.s32, 9, xer);
	// lwz r22,2736(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + 2736);
	// bne cr6,0x827a9c50
	if (!cr6.eq) goto loc_827A9C50;
	// li r11,-1
	r11.s64 = -1;
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// ble cr6,0x827a9c40
	if (!cr6.gt) goto loc_827A9C40;
loc_827A9BAC:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a9bcc
	if (cr6.eq) goto loc_827A9BCC;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x827a9be4
	if (!cr0.lt) goto loc_827A9BE4;
	// addi r31,r22,-1
	r31.s64 = r22.s64 + -1;
	// b 0x827a9be4
	goto loc_827A9BE4;
loc_827A9BCC:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r10,r22,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0x1;
	// subfc r9,r22,r11
	xer.ca = r11.u32 >= r22.u32;
	ctx.r9.s64 = r11.s64 - r22.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r11
	r31.u64 = ctx.r7.u64 & r11.u64;
loc_827A9BE4:
	// lwz r11,2732(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2732);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827a9c20
	if (cr6.eq) goto loc_827A9C20;
	// lbz r11,27(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 27);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a9c3c
	if (!cr6.eq) goto loc_827A9C3C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827a9c3c
	if (!cr6.eq) goto loc_827A9C3C;
loc_827A9C20:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(r30.s32, r22.s32, xer);
	// blt cr6,0x827a9bac
	if (cr6.lt) goto loc_827A9BAC;
	// lwz r11,2784(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r23)
	PPC_STORE_U32(r23.u32 + 2784, ctx.r10.u32);
	// b 0x827aa708
	goto loc_827AA708;
loc_827A9C3C:
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
loc_827A9C40:
	// lwz r11,2784(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r23)
	PPC_STORE_U32(r23.u32 + 2784, ctx.r10.u32);
	// b 0x827aa708
	goto loc_827AA708;
loc_827A9C50:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827aa708
	if (cr6.eq) goto loc_827AA708;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827a9c90
	if (!cr6.eq) goto loc_827A9C90;
	// lbz r11,2784(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 2784);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x827aa708
	if (cr6.eq) goto loc_827AA708;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x827aa708
	if (!cr6.eq) goto loc_827AA708;
loc_827A9C90:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a6b0
	sub_8276A6B0(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f20,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f20.f64 = double(temp.f32);
	// stfs f20,80(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f20,84(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f20,88(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f20,92(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// lhz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U16(r25.u32 + 24);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r24
	cr6.compare<int32_t>(ctx.r7.s32, r24.s32, xer);
	// bne cr6,0x827a9d40
	if (!cr6.eq) goto loc_827A9D40;
	// cmpwi cr6,r24,38
	cr6.compare<int32_t>(r24.s32, 38, xer);
	// beq cr6,0x827a9d2c
	if (cr6.eq) goto loc_827A9D2C;
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// beq cr6,0x827a9d2c
	if (cr6.eq) goto loc_827A9D2C;
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// beq cr6,0x827a9d18
	if (cr6.eq) goto loc_827A9D18;
	// cmpwi cr6,r24,37
	cr6.compare<int32_t>(r24.s32, 37, xer);
	// bne cr6,0x827a9d64
	if (!cr6.eq) goto loc_827A9D64;
loc_827A9D18:
	// lfs f0,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x827a9d64
	goto loc_827A9D64;
loc_827A9D2C:
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x827a9d64
	goto loc_827A9D64;
loc_827A9D40:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,8(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 8, temp.u32);
	// stfs f13,12(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r25.u32 + 12, temp.u32);
	// stfs f12,16(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r25.u32 + 16, temp.u32);
	// stfs f11,20(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r25.u32 + 20, temp.u32);
	// sth r31,24(r25)
	PPC_STORE_U16(r25.u32 + 24, r31.u16);
loc_827A9D64:
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// beq cr6,0x827aa248
	if (cr6.eq) goto loc_827AA248;
	// cmpwi cr6,r24,37
	cr6.compare<int32_t>(r24.s32, 37, xer);
	// beq cr6,0x827aa248
	if (cr6.eq) goto loc_827AA248;
	// cmpwi cr6,r24,38
	cr6.compare<int32_t>(r24.s32, 38, xer);
	// beq cr6,0x827a9d84
	if (cr6.eq) goto loc_827A9D84;
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// bne cr6,0x827aa708
	if (!cr6.eq) goto loc_827AA708;
loc_827A9D84:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,2784(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 2784);
	// fmr f23,f20
	ctx.fpscr.disableFlushMode();
	f23.f64 = f20.f64;
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// fmr f21,f20
	f21.f64 = f20.f64;
	// stw r9,2784(r23)
	PPC_STORE_U32(r23.u32 + 2784, ctx.r9.u32);
	// lfs f0,-228(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -228);
	f0.f64 = double(temp.f32);
	// lwz r29,4(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// fmr f24,f0
	f24.f64 = f0.f64;
	// bne cr6,0x827a9db8
	if (!cr6.eq) goto loc_827A9DB8;
	// fmr f22,f0
	f22.f64 = f0.f64;
	// b 0x827a9dc0
	goto loc_827A9DC0;
loc_827A9DB8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f22,-232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -232);
	f22.f64 = double(temp.f32);
loc_827A9DC0:
	// addic. r27,r22,-1
	xer.ca = r22.u32 > 0;
	r27.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// ble 0x827aa708
	if (!cr0.gt) goto loc_827AA708;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfd f18,7288(r11)
	ctx.fpscr.disableFlushMode();
	f18.u64 = PPC_LOAD_U64(r11.u32 + 7288);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f27,-31316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f27.f64 = double(temp.f32);
	// lfs f25,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f25.f64 = double(temp.f32);
	// lfs f15,3768(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3768);
	f15.f64 = double(temp.f32);
	// lfs f16,-856(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -856);
	f16.f64 = double(temp.f32);
	// lfs f17,30080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30080);
	f17.f64 = double(temp.f32);
	// lfs f19,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f19.f64 = double(temp.f32);
loc_827A9E08:
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// bne cr6,0x827a9e18
	if (!cr6.eq) goto loc_827A9E18;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x827a9e1c
	goto loc_827A9E1C;
loc_827A9E18:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_827A9E1C:
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(r29.s32, r22.s32, xer);
	// blt cr6,0x827a9e2c
	if (cr6.lt) goto loc_827A9E2C;
	// li r29,0
	r29.s64 = 0;
	// b 0x827a9e38
	goto loc_827A9E38;
loc_827A9E2C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x827a9e38
	if (!cr6.lt) goto loc_827A9E38;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_827A9E38:
	// lwz r10,2732(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 2732);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827a9e58
	if (cr6.eq) goto loc_827A9E58;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_827A9E58:
	// lbz r11,27(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 27);
	// lwzx r31,r9,r10
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a9e88
	if (!cr6.eq) goto loc_827A9E88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827aa230
	if (cr6.eq) goto loc_827AA230;
loc_827A9E88:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276a6b0
	sub_8276A6B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f20,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stfs f20,132(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f20,136(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f20,140(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// lfs f7,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r24,40
	cr6.compare<int32_t>(r24.s32, 40, xer);
	// lfs f29,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f29.f64 = double(temp.f32);
	// bne cr6,0x827a9ef4
	if (!cr6.eq) goto loc_827A9EF4;
	// fadds f13,f29,f19
	ctx.f13.f64 = double(float(f29.f64 + f19.f64));
	// fmr f8,f17
	ctx.f8.f64 = f17.f64;
	// b 0x827a9efc
	goto loc_827A9EFC;
loc_827A9EF4:
	// fmr f13,f16
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f16.f64;
	// fsubs f8,f7,f19
	ctx.f8.f64 = double(float(ctx.f7.f64 - f19.f64));
loc_827A9EFC:
	// lfs f30,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f30.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f31.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x827a9f38
	if (cr6.lt) goto loc_827A9F38;
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, f31.f64);
	// blt cr6,0x827a9f38
	if (cr6.lt) goto loc_827A9F38;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x827a9f38
	if (cr6.lt) goto loc_827A9F38;
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, f0.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827a9f3c
	if (!cr6.lt) goto loc_827A9F3C;
loc_827A9F38:
	// li r11,0
	r11.s64 = 0;
loc_827A9F3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a9fb8
	if (cr6.eq) goto loc_827A9FB8;
	// fmr f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// blt cr6,0x827a9f74
	if (cr6.lt) goto loc_827A9F74;
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, f31.f64);
	// blt cr6,0x827a9f74
	if (cr6.lt) goto loc_827A9F74;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x827a9f74
	if (cr6.lt) goto loc_827A9F74;
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, f0.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827a9f78
	if (!cr6.lt) goto loc_827A9F78;
loc_827A9F74:
	// li r11,0
	r11.s64 = 0;
loc_827A9F78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a9f90
	if (!cr6.eq) goto loc_827A9F90;
	// fmr f9,f20
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f20.f64;
	// fmr f10,f20
	ctx.f10.f64 = f20.f64;
	// b 0x827a9fa8
	goto loc_827A9FA8;
loc_827A9F90:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x827a9f9c
	if (cr6.gt) goto loc_827A9F9C;
	// fmr f9,f0
	ctx.f9.f64 = f0.f64;
loc_827A9F9C:
	// fcmpu cr6,f6,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// ble cr6,0x827a9fa8
	if (!cr6.gt) goto loc_827A9FA8;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_827A9FA8:
	// fsubs f13,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fcmpu cr6,f13,f15
	cr6.compare(ctx.f13.f64, f15.f64);
	// blt cr6,0x827a9fb8
	if (cr6.lt) goto loc_827A9FB8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_827A9FB8:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a9fe8
	if (cr6.eq) goto loc_827A9FE8;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827a9fe8
	if (!cr6.eq) goto loc_827A9FE8;
	// fmr f24,f12
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f12.f64;
	// li r28,1
	r28.s64 = 1;
	// fmr f22,f31
	f22.f64 = f31.f64;
	// fmr f23,f6
	f23.f64 = ctx.f6.f64;
	// fmr f21,f30
	f21.f64 = f30.f64;
	// b 0x827aa22c
	goto loc_827AA22C;
loc_827A9FE8:
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827a9ffc
	if (cr6.eq) goto loc_827A9FFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa230
	if (cr6.eq) goto loc_827AA230;
loc_827A9FFC:
	// fsubs f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - f0.f64));
	// cmpwi cr6,r24,38
	cr6.compare<int32_t>(r24.s32, 38, xer);
	// fmadds f28,f13,f25,f0
	f28.f64 = double(float(ctx.f13.f64 * f25.f64 + f0.f64));
	// bne cr6,0x827aa0e8
	if (!cr6.eq) goto loc_827AA0E8;
	// fmr f29,f7
	f29.f64 = ctx.f7.f64;
	// fmr f26,f21
	f26.f64 = f21.f64;
	// fcmpu cr6,f7,f30
	cr6.compare(ctx.f7.f64, f30.f64);
	// bge cr6,0x827aa020
	if (!cr6.lt) goto loc_827AA020;
	// fmr f30,f7
	f30.f64 = ctx.f7.f64;
loc_827AA020:
	// fcmpu cr6,f7,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, f21.f64);
	// bge cr6,0x827aa02c
	if (!cr6.lt) goto loc_827AA02C;
	// fmr f26,f7
	f26.f64 = ctx.f7.f64;
loc_827AA02C:
	// fcmpu cr6,f6,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// blt cr6,0x827aa040
	if (cr6.lt) goto loc_827AA040;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa044
	if (!cr6.lt) goto loc_827AA044;
loc_827AA040:
	// li r11,0
	r11.s64 = 0;
loc_827AA044:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa230
	if (cr6.eq) goto loc_827AA230;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fcmpu cr6,f0,f20
	cr6.compare(f0.f64, f20.f64);
	// ble cr6,0x827aa074
	if (!cr6.gt) goto loc_827AA074;
	// fadd f0,f0,f18
	f0.f64 = f0.f64 + f18.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827aa084
	goto loc_827AA084;
loc_827AA074:
	// fsub f0,f0,f18
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f18.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827AA084:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x827aa230
	if (!cr6.gt) goto loc_827AA230;
	// fsubs f0,f6,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f13,f23,f24
	ctx.f13.f64 = double(float(f23.f64 - f24.f64));
	// fmadds f12,f0,f25,f12
	ctx.f12.f64 = double(float(f0.f64 * f25.f64 + ctx.f12.f64));
	// fmadds f31,f13,f25,f24
	f31.f64 = double(float(ctx.f13.f64 * f25.f64 + f24.f64));
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f10,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f30.f64 - f29.f64));
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f10,f27
	ctx.f1.f64 = double(float(ctx.f10.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f9,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f31.f64 - f28.f64));
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f9,f27
	ctx.f1.f64 = double(float(ctx.f9.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f8,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(f26.f64 - f29.f64));
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f8,f27
	ctx.f1.f64 = double(float(ctx.f8.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f20
	cr6.compare(f31.f64, f20.f64);
	// ble cr6,0x827aa1bc
	if (!cr6.gt) goto loc_827AA1BC;
	// b 0x827aa230
	goto loc_827AA230;
loc_827AA0E8:
	// fmr f26,f22
	ctx.fpscr.disableFlushMode();
	f26.f64 = f22.f64;
	// fcmpu cr6,f29,f31
	cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x827aa0f8
	if (!cr6.gt) goto loc_827AA0F8;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_827AA0F8:
	// fcmpu cr6,f29,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f22.f64);
	// ble cr6,0x827aa104
	if (!cr6.gt) goto loc_827AA104;
	// fmr f26,f29
	f26.f64 = f29.f64;
loc_827AA104:
	// fcmpu cr6,f6,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// blt cr6,0x827aa118
	if (cr6.lt) goto loc_827AA118;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa11c
	if (!cr6.lt) goto loc_827AA11C;
loc_827AA118:
	// li r11,0
	r11.s64 = 0;
loc_827AA11C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa230
	if (cr6.eq) goto loc_827AA230;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fcmpu cr6,f0,f20
	cr6.compare(f0.f64, f20.f64);
	// ble cr6,0x827aa14c
	if (!cr6.gt) goto loc_827AA14C;
	// fadd f0,f0,f18
	f0.f64 = f0.f64 + f18.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827aa15c
	goto loc_827AA15C;
loc_827AA14C:
	// fsub f0,f0,f18
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f18.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827AA15C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x827aa230
	if (!cr6.gt) goto loc_827AA230;
	// fsubs f0,f6,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f13,f23,f24
	ctx.f13.f64 = double(float(f23.f64 - f24.f64));
	// fmadds f12,f0,f25,f12
	ctx.f12.f64 = double(float(f0.f64 * f25.f64 + ctx.f12.f64));
	// fmadds f14,f13,f25,f24
	f14.f64 = double(float(ctx.f13.f64 * f25.f64 + f24.f64));
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f10,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f31.f64 - f29.f64));
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f10,f27
	ctx.f1.f64 = double(float(ctx.f10.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f9,f14,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f14.f64 - f28.f64));
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f9,f27
	ctx.f1.f64 = double(float(ctx.f9.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f8,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(f26.f64 - f29.f64));
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f8,f27
	ctx.f1.f64 = double(float(ctx.f8.f64 * f27.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f20
	cr6.compare(f31.f64, f20.f64);
	// blt cr6,0x827aa230
	if (cr6.lt) goto loc_827AA230;
loc_827AA1BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827aa204
	if (cr6.eq) goto loc_827AA204;
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f11,f31,f31,f13
	ctx.f11.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsel f10,f0,f0,f12
	ctx.f10.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x827aa21c
	if (cr6.lt) goto loc_827AA21C;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x827aa1fc
	if (!cr6.eq) goto loc_827AA1FC;
	// fneg f13,f30
	ctx.f13.u64 = f30.u64 ^ 0x8000000000000000;
	// fneg f12,f29
	ctx.f12.u64 = f29.u64 ^ 0x8000000000000000;
	// fsel f11,f30,f30,f13
	ctx.f11.f64 = f30.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// fsel f10,f29,f29,f12
	ctx.f10.f64 = f29.f64 >= 0.0 ? f29.f64 : ctx.f12.f64;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x827aa21c
	if (cr6.lt) goto loc_827AA21C;
loc_827AA1FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827aa230
	if (!cr6.eq) goto loc_827AA230;
loc_827AA204:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * f30.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f11,f31,f31,f13
	ctx.f11.f64 = double(float(f31.f64 * f31.f64 + ctx.f13.f64));
	// fmadds f10,f29,f29,f12
	ctx.f10.f64 = double(float(f29.f64 * f29.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x827aa230
	if (!cr6.lt) goto loc_827AA230;
loc_827AA21C:
	// lfs f24,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f24.f64 = double(temp.f32);
	// lfs f22,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f22.f64 = double(temp.f32);
	// lfs f23,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f23.f64 = double(temp.f32);
	// lfs f21,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f21.f64 = double(temp.f32);
loc_827AA22C:
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
loc_827AA230:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// blt cr6,0x827a9e08
	if (cr6.lt) goto loc_827A9E08;
	// b 0x827aa708
	goto loc_827AA708;
loc_827AA248:
	// lwz r11,2784(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2784);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// ori r9,r11,1024
	ctx.r9.u64 = r11.u64 | 1024;
	// stw r9,2784(r23)
	PPC_STORE_U32(r23.u32 + 2784, ctx.r9.u32);
	// lfs f0,-228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -228);
	f0.f64 = double(temp.f32);
	// lwz r29,4(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// bne cr6,0x827aa270
	if (!cr6.eq) goto loc_827AA270;
	// fmr f23,f0
	f23.f64 = f0.f64;
	// b 0x827aa278
	goto loc_827AA278;
loc_827AA270:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f23,-232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -232);
	f23.f64 = double(temp.f32);
loc_827AA278:
	// addic. r27,r22,-1
	xer.ca = r22.u32 > 0;
	r27.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// fmr f22,f23
	ctx.fpscr.disableFlushMode();
	f22.f64 = f23.f64;
	// fmr f24,f0
	f24.f64 = f0.f64;
	// li r28,0
	r28.s64 = 0;
	// fmr f25,f0
	f25.f64 = f0.f64;
	// li r26,0
	r26.s64 = 0;
	// ble 0x827aa708
	if (!cr0.gt) goto loc_827AA708;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfd f19,7288(r11)
	f19.u64 = PPC_LOAD_U64(r11.u32 + 7288);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f28,-31316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f28.f64 = double(temp.f32);
	// lfs f26,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f26.f64 = double(temp.f32);
	// lfs f16,3768(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3768);
	f16.f64 = double(temp.f32);
	// lfs f18,-856(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -856);
	f18.f64 = double(temp.f32);
	// lfs f17,30080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30080);
	f17.f64 = double(temp.f32);
	// lfs f21,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f21.f64 = double(temp.f32);
loc_827AA2CC:
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// bne cr6,0x827aa2dc
	if (!cr6.eq) goto loc_827AA2DC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x827aa2e0
	goto loc_827AA2E0;
loc_827AA2DC:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_827AA2E0:
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(r29.s32, r22.s32, xer);
	// blt cr6,0x827aa2f0
	if (cr6.lt) goto loc_827AA2F0;
	// li r29,0
	r29.s64 = 0;
	// b 0x827aa2fc
	goto loc_827AA2FC;
loc_827AA2F0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x827aa2fc
	if (!cr6.lt) goto loc_827AA2FC;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_827AA2FC:
	// lwz r10,2732(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 2732);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827aa31c
	if (cr6.eq) goto loc_827AA31C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_827AA31C:
	// lbz r11,27(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 27);
	// lwzx r31,r9,r10
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827aa34c
	if (!cr6.eq) goto loc_827AA34C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827aa6f4
	if (cr6.eq) goto loc_827AA6F4;
loc_827AA34C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276a6b0
	sub_8276A6B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f20,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stfs f20,116(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f20,120(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f20,124(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82764000
	sub_82764000(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f27.f64 = double(temp.f32);
	// bne cr6,0x827aa3b8
	if (!cr6.eq) goto loc_827AA3B8;
	// fadds f6,f27,f21
	ctx.f6.f64 = double(float(f27.f64 + f21.f64));
	// fmr f7,f17
	ctx.f7.f64 = f17.f64;
	// b 0x827aa3c0
	goto loc_827AA3C0;
loc_827AA3B8:
	// fsubs f7,f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f5.f64 - f21.f64));
	// fmr f6,f18
	ctx.f6.f64 = f18.f64;
loc_827AA3C0:
	// lfs f4,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, f0.f64);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x827aa3fc
	if (cr6.lt) goto loc_827AA3FC;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x827aa3fc
	if (cr6.lt) goto loc_827AA3FC;
	// fcmpu cr6,f7,f12
	cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// blt cr6,0x827aa3fc
	if (cr6.lt) goto loc_827AA3FC;
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa400
	if (!cr6.lt) goto loc_827AA400;
loc_827AA3FC:
	// li r11,0
	r11.s64 = 0;
loc_827AA400:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa47c
	if (cr6.eq) goto loc_827AA47C;
	// fmr f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f9,f4
	ctx.f9.f64 = ctx.f4.f64;
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, f0.f64);
	// blt cr6,0x827aa438
	if (cr6.lt) goto loc_827AA438;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x827aa438
	if (cr6.lt) goto loc_827AA438;
	// fcmpu cr6,f7,f12
	cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// blt cr6,0x827aa438
	if (cr6.lt) goto loc_827AA438;
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa43c
	if (!cr6.lt) goto loc_827AA43C;
loc_827AA438:
	// li r11,0
	r11.s64 = 0;
loc_827AA43C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827aa454
	if (!cr6.eq) goto loc_827AA454;
	// fmr f8,f20
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f20.f64;
	// fmr f9,f20
	ctx.f9.f64 = f20.f64;
	// b 0x827aa46c
	goto loc_827AA46C;
loc_827AA454:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x827aa460
	if (cr6.gt) goto loc_827AA460;
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
loc_827AA460:
	// fcmpu cr6,f4,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// ble cr6,0x827aa46c
	if (!cr6.gt) goto loc_827AA46C;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
loc_827AA46C:
	// fsubs f9,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fcmpu cr6,f9,f16
	cr6.compare(ctx.f9.f64, f16.f64);
	// blt cr6,0x827aa47c
	if (cr6.lt) goto loc_827AA47C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_827AA47C:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa4ac
	if (cr6.eq) goto loc_827AA4AC;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827aa4ac
	if (!cr6.eq) goto loc_827AA4AC;
	// fmr f22,f12
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f12.f64;
	// li r28,1
	r28.s64 = 1;
	// fmr f25,f11
	f25.f64 = ctx.f11.f64;
	// fmr f23,f13
	f23.f64 = ctx.f13.f64;
	// fmr f24,f4
	f24.f64 = ctx.f4.f64;
	// b 0x827aa6f0
	goto loc_827AA6F0;
loc_827AA4AC:
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827aa4c0
	if (cr6.eq) goto loc_827AA4C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa6f4
	if (cr6.eq) goto loc_827AA6F4;
loc_827AA4C0:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// cmpwi cr6,r24,39
	cr6.compare<int32_t>(r24.s32, 39, xer);
	// fmadds f30,f10,f26,f0
	f30.f64 = double(float(ctx.f10.f64 * f26.f64 + f0.f64));
	// bne cr6,0x827aa5a8
	if (!cr6.eq) goto loc_827AA5A8;
	// fmr f29,f22
	f29.f64 = f22.f64;
	// fcmpu cr6,f27,f12
	cr6.compare(f27.f64, ctx.f12.f64);
	// ble cr6,0x827aa4e0
	if (!cr6.gt) goto loc_827AA4E0;
	// fmr f12,f27
	ctx.f12.f64 = f27.f64;
loc_827AA4E0:
	// fcmpu cr6,f27,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f22.f64);
	// ble cr6,0x827aa4ec
	if (!cr6.gt) goto loc_827AA4EC;
	// fmr f29,f27
	f29.f64 = f27.f64;
loc_827AA4EC:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x827aa500
	if (cr6.lt) goto loc_827AA500;
	// fcmpu cr6,f4,f11
	cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa504
	if (!cr6.lt) goto loc_827AA504;
loc_827AA500:
	// li r11,0
	r11.s64 = 0;
loc_827AA504:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa6f4
	if (cr6.eq) goto loc_827AA6F4;
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fcmpu cr6,f0,f20
	cr6.compare(f0.f64, f20.f64);
	// ble cr6,0x827aa534
	if (!cr6.gt) goto loc_827AA534;
	// fadd f0,f0,f19
	f0.f64 = f0.f64 + f19.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827aa544
	goto loc_827AA544;
loc_827AA534:
	// fsub f0,f0,f19
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f19.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827AA544:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x827aa6f4
	if (!cr6.gt) goto loc_827AA6F4;
	// fsubs f13,f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - f27.f64));
	// fsubs f0,f4,f11
	f0.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f12,f24,f25
	ctx.f12.f64 = double(float(f24.f64 - f25.f64));
	// fmuls f1,f13,f28
	ctx.f1.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmadds f31,f0,f26,f11
	f31.f64 = double(float(f0.f64 * f26.f64 + ctx.f11.f64));
	// fmadds f15,f12,f26,f25
	f15.f64 = double(float(ctx.f12.f64 * f26.f64 + f25.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f11,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f31.f64 - f30.f64));
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f10,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f29.f64 - f27.f64));
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f9,f15,f30
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f15.f64 - f30.f64));
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f20
	cr6.compare(f31.f64, f20.f64);
	// bge cr6,0x827aa680
	if (!cr6.lt) goto loc_827AA680;
	// b 0x827aa6f4
	goto loc_827AA6F4;
loc_827AA5A8:
	// fmr f27,f5
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f5.f64;
	// fmr f29,f23
	f29.f64 = f23.f64;
	// fcmpu cr6,f5,f13
	cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bge cr6,0x827aa5bc
	if (!cr6.lt) goto loc_827AA5BC;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
loc_827AA5BC:
	// fcmpu cr6,f5,f23
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f5.f64, f23.f64);
	// bge cr6,0x827aa5c8
	if (!cr6.lt) goto loc_827AA5C8;
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
loc_827AA5C8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x827aa5dc
	if (cr6.lt) goto loc_827AA5DC;
	// fcmpu cr6,f4,f11
	cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x827aa5e0
	if (!cr6.lt) goto loc_827AA5E0;
loc_827AA5DC:
	// li r11,0
	r11.s64 = 0;
loc_827AA5E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa6f4
	if (cr6.eq) goto loc_827AA6F4;
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fcmpu cr6,f0,f20
	cr6.compare(f0.f64, f20.f64);
	// ble cr6,0x827aa610
	if (!cr6.gt) goto loc_827AA610;
	// fadd f0,f0,f19
	f0.f64 = f0.f64 + f19.f64;
	// fctiwz f12,f0
	ctx.f12.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827aa620
	goto loc_827AA620;
loc_827AA610:
	// fsub f0,f0,f19
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - f19.f64;
	// fctiwz f12,f0
	ctx.f12.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827AA620:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x827aa6f4
	if (!cr6.gt) goto loc_827AA6F4;
	// fsubs f0,f4,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f12,f24,f25
	ctx.f12.f64 = double(float(f24.f64 - f25.f64));
	// fmadds f31,f0,f26,f11
	f31.f64 = double(float(f0.f64 * f26.f64 + ctx.f11.f64));
	// fmuls f1,f13,f28
	ctx.f1.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmadds f15,f12,f26,f25
	f15.f64 = double(float(ctx.f12.f64 * f26.f64 + f25.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f11,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f31.f64 - f30.f64));
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f10,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f29.f64 - f27.f64));
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fsubs f9,f15,f30
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f15.f64 - f30.f64));
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 * f28.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f20
	cr6.compare(f31.f64, f20.f64);
	// bgt cr6,0x827aa6f4
	if (cr6.gt) goto loc_827AA6F4;
loc_827AA680:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827aa6c8
	if (cr6.eq) goto loc_827AA6C8;
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f12,f30
	ctx.f12.u64 = f30.u64 ^ 0x8000000000000000;
	// fsel f11,f31,f31,f13
	ctx.f11.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsel f10,f30,f30,f12
	ctx.f10.f64 = f30.f64 >= 0.0 ? f30.f64 : ctx.f12.f64;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x827aa6e0
	if (cr6.lt) goto loc_827AA6E0;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x827aa6c0
	if (!cr6.eq) goto loc_827AA6C0;
	// fneg f13,f29
	ctx.f13.u64 = f29.u64 ^ 0x8000000000000000;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f11,f29,f29,f13
	ctx.f11.f64 = f29.f64 >= 0.0 ? f29.f64 : ctx.f13.f64;
	// fsel f10,f0,f0,f12
	ctx.f10.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x827aa6e0
	if (cr6.lt) goto loc_827AA6E0;
loc_827AA6C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827aa6f4
	if (!cr6.eq) goto loc_827AA6F4;
loc_827AA6C8:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f31.f64));
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(f30.f64 * f30.f64));
	// fmadds f11,f29,f29,f13
	ctx.f11.f64 = double(float(f29.f64 * f29.f64 + ctx.f13.f64));
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(f0.f64 * f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x827aa6f4
	if (!cr6.lt) goto loc_827AA6F4;
loc_827AA6E0:
	// lfs f22,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f22.f64 = double(temp.f32);
	// lfs f25,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f25.f64 = double(temp.f32);
	// lfs f23,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f23.f64 = double(temp.f32);
	// lfs f24,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f24.f64 = double(temp.f32);
loc_827AA6F0:
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
loc_827AA6F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// blt cr6,0x827aa2cc
	if (cr6.lt) goto loc_827AA2CC;
loc_827AA708:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x827aa754
	if (cr6.lt) goto loc_827AA754;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// bge cr6,0x827aa754
	if (!cr6.lt) goto loc_827AA754;
	// lwz r31,2732(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 2732);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827aa73c
	if (cr6.eq) goto loc_827AA73C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_827AA73C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aa74c
	if (cr6.eq) goto loc_827AA74C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AA74C:
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// b 0x827aa768
	goto loc_827AA768;
loc_827AA754:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aa764
	if (cr6.eq) goto loc_827AA764;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AA764:
	// li r11,0
	r11.s64 = 0;
loc_827AA768:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_827AA76C:
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_827AA780"))) PPC_WEAK_FUNC(sub_827AA780);
PPC_FUNC_IMPL(__imp__sub_827AA780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827AA784"))) PPC_WEAK_FUNC(sub_827AA784);
PPC_FUNC_IMPL(__imp__sub_827AA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AA788"))) PPC_WEAK_FUNC(sub_827AA788);
PPC_FUNC_IMPL(__imp__sub_827AA788) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r11.u16);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, r11.u8);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, r11.u8);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r11.u8);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827a9af8
	sub_827A9AF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a7ad8
	sub_827A7AD8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aa80c
	if (cr6.eq) goto loc_827AA80C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AA80C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827AA81C"))) PPC_WEAK_FUNC(sub_827AA81C);
PPC_FUNC_IMPL(__imp__sub_827AA81C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AA820"))) PPC_WEAK_FUNC(sub_827AA820);
PPC_FUNC_IMPL(__imp__sub_827AA820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// addi r31,r4,104
	r31.s64 = ctx.r4.s64 + 104;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x827aa868
	if (!cr6.eq) goto loc_827AA868;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x827aad84
	if (!cr6.lt) goto loc_827AAD84;
loc_827AA868:
	// lwz r11,2680(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 2680);
	// li r17,0
	r17.s64 = 0;
	// mr r15,r17
	r15.u64 = r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827aab94
	if (!cr6.gt) goto loc_827AAB94;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r23,r17
	r23.u64 = r17.u64;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// mr r30,r17
	r30.u64 = r17.u64;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// mr r25,r17
	r25.u64 = r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r17.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// mr r27,r17
	r27.u64 = r17.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// lwz r8,212(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r29,r16
	r29.u64 = r16.u64;
	// b 0x827aa8f4
	goto loc_827AA8F4;
loc_827AA8EC:
	// lwz r25,120(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,124(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_827AA8F4:
	// addi r26,r30,1
	r26.s64 = r30.s64 + 1;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x827aa914
	if (!cr6.lt) goto loc_827AA914;
	// rlwinm r11,r25,31,1,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x827aa934
	if (!cr6.lt) goto loc_827AA934;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// b 0x827aa924
	goto loc_827AA924;
loc_827AA914:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// blt cr6,0x827aa934
	if (cr6.lt) goto loc_827AA934;
	// rlwinm r11,r26,30,2,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r26
	ctx.r5.u64 = r11.u64 + r26.u64;
loc_827AA924:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827c4060
	sub_827C4060(ctx, base);
	// lwz r23,112(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_827AA934:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aa950
	if (cr0.eq) goto loc_827AA950;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_827AA950:
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r29,32(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827aa8ec
	if (!cr6.eq) goto loc_827AA8EC;
	// lwz r19,2680(r22)
	r19.u64 = PPC_LOAD_U32(r22.u32 + 2680);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x827aab84
	if (cr6.eq) goto loc_827AAB84;
	// mr r24,r17
	r24.u64 = r17.u64;
	// li r25,2
	r25.s64 = 2;
	// li r18,1
	r18.s64 = 1;
loc_827AA978:
	// lwz r11,2676(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 2676);
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// cmplw cr6,r10,r16
	cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, xer);
	// beq cr6,0x827aac48
	if (cr6.eq) goto loc_827AAC48;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827aa9c0
	if (cr6.eq) goto loc_827AA9C0;
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aa9e4
	if (cr6.eq) goto loc_827AA9E4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827aa9b4
	if (cr6.eq) goto loc_827AA9B4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r28,r17
	r28.u64 = r17.u64;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
loc_827AA9B4:
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// b 0x827aa9e4
	goto loc_827AA9E4;
loc_827AA9C0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827aa9e4
	if (!cr6.eq) goto loc_827AA9E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c4060
	sub_827C4060(ctx, base);
	// lwz r21,108(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827AA9E4:
	// lwz r10,2676(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 2676);
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// lwzx r29,r10,r24
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827aaafc
	if (cr6.eq) goto loc_827AAAFC;
loc_827AAA00:
	// addi r30,r27,1
	r30.s64 = r27.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x827aaa68
	if (!cr6.lt) goto loc_827AAA68;
	// rlwinm r11,r31,31,1,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x827aaac8
	if (!cr6.lt) goto loc_827AAAC8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827aaa3c
	if (!cr6.eq) goto loc_827AAA3C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827aaa90
	if (cr6.eq) goto loc_827AAA90;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r28,r17
	r28.u64 = r17.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// b 0x827aaac8
	goto loc_827AAAC8;
loc_827AAA3C:
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827aaa5c
	if (cr6.eq) goto loc_827AAA5C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827aaac4
	goto loc_827AAAC4;
loc_827AAA5C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// b 0x827aaabc
	goto loc_827AAABC;
loc_827AAA68:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x827aaac8
	if (cr6.lt) goto loc_827AAAC8;
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add. r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827aaa98
	if (!cr0.eq) goto loc_827AAA98;
	// beq cr6,0x827aaa90
	if (cr6.eq) goto loc_827AAA90;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r28,r17
	r28.u64 = r17.u64;
loc_827AAA90:
	// mr r31,r17
	r31.u64 = r17.u64;
	// b 0x827aaac8
	goto loc_827AAAC8;
loc_827AAA98:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827aaab4
	if (cr6.eq) goto loc_827AAAB4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827aaac4
	goto loc_827AAAC4;
loc_827AAAB4:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
loc_827AAABC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_827AAAC4:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_827AAAC8:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r30
	r27.u64 = r30.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aaae0
	if (cr0.eq) goto loc_827AAAE0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_827AAAE0:
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r29,32(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827aaa00
	if (!cr6.eq) goto loc_827AAA00;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_827AAAFC:
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x827aac24
	if (!cr6.eq) goto loc_827AAC24;
	// addic. r11,r26,-1
	xer.ca = r26.u32 > 0;
	r11.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// blt 0x827aab78
	if (cr0.lt) goto loc_827AAB78;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
loc_827AAB24:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x827aab78
	if (cr6.lt) goto loc_827AAB78;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x827aab54
	if (!cr6.eq) goto loc_827AAB54;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x827aab24
	if (!cr0.lt) goto loc_827AAB24;
	// b 0x827aab78
	goto loc_827AAB78;
loc_827AAB54:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwzx r6,r9,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x827aab78
	if (!cr6.lt) goto loc_827AAB78;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
loc_827AAB78:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aac34
	if (cr6.eq) goto loc_827AAC34;
loc_827AAB84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827AAB94:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r31,r22,2676
	r31.s64 = r22.s64 + 2676;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r11.u32);
	// lwz r27,2680(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 2680);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x827aac8c
	if (!cr6.lt) goto loc_827AAC8C;
	// subf. r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r30,r10,-4
	r30.s64 = ctx.r10.s64 + -4;
	// beq 0x827aabf0
	if (cr0.eq) goto loc_827AABF0;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_827AABD4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aabe4
	if (cr6.eq) goto loc_827AABE4;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AABE4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x827aabd4
	if (!cr0.eq) goto loc_827AABD4;
loc_827AABF0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x827aacf4
	if (!cr6.lt) goto loc_827AACF4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827aac60
	if (!cr6.eq) goto loc_827AAC60;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aacb8
	if (cr6.eq) goto loc_827AACB8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r17,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r17.u32);
	// stw r17,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r17.u32);
	// b 0x827aacf4
	goto loc_827AACF4;
loc_827AAC24:
	// lwz r11,424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 424);
	// lwz r10,424(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 424);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x827aab84
	if (cr6.gt) goto loc_827AAB84;
loc_827AAC34:
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r15,r19
	cr6.compare<uint32_t>(r15.u32, r19.u32, xer);
	// blt cr6,0x827aa978
	if (cr6.lt) goto loc_827AA978;
	// b 0x827aab84
	goto loc_827AAB84;
loc_827AAC48:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9434
	return;
loc_827AAC60:
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827aac7c
	if (cr6.eq) goto loc_827AAC7C;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827aacec
	goto loc_827AACEC;
loc_827AAC7C:
	// li r11,326
	r11.s64 = 326;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x827aace4
	goto loc_827AACE4;
loc_827AAC8C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x827aacf4
	if (cr6.lt) goto loc_827AACF4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,30,2,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// add. r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x827aacc0
	if (!cr0.eq) goto loc_827AACC0;
	// beq cr6,0x827aacb8
	if (cr6.eq) goto loc_827AACB8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r17,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r17.u32);
loc_827AACB8:
	// stw r17,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r17.u32);
	// b 0x827aacf4
	goto loc_827AACF4;
loc_827AACC0:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827aacd8
	if (cr6.eq) goto loc_827AACD8;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827aacec
	goto loc_827AACEC;
loc_827AACD8:
	// li r11,326
	r11.s64 = 326;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_827AACE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
loc_827AACEC:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_827AACF4:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// ble cr6,0x827aad2c
	if (!cr6.gt) goto loc_827AAD2C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r27,r29
	ctx.r10.s64 = r29.s64 - r27.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq 0x827aad2c
	if (cr0.eq) goto loc_827AAD2C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_827AAD18:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aad24
	if (cr6.eq) goto loc_827AAD24;
	// stw r17,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r17.u32);
loc_827AAD24:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x827aad18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827AAD18;
loc_827AAD2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r15,r10
	cr6.compare<uint32_t>(r15.u32, ctx.r10.u32, xer);
	// bge cr6,0x827aad5c
	if (!cr6.lt) goto loc_827AAD5C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r15,r11
	r11.s64 = r11.s64 - r15.s64;
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
loc_827AAD5C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r15,2,0,29
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aad7c
	if (cr0.eq) goto loc_827AAD7C;
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r16)
	PPC_STORE_U32(r16.u32 + 4, ctx.r10.u32);
	// stw r16,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r16.u32);
loc_827AAD7C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AAD84:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_827AAD88"))) PPC_WEAK_FUNC(sub_827AAD88);
PPC_FUNC_IMPL(__imp__sub_827AAD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_827AAD8C"))) PPC_WEAK_FUNC(sub_827AAD8C);
PPC_FUNC_IMPL(__imp__sub_827AAD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AAD90"))) PPC_WEAK_FUNC(sub_827AAD90);
PPC_FUNC_IMPL(__imp__sub_827AAD90) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827aaf34
	if (cr6.eq) goto loc_827AAF34;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x827aadd4
	if (cr6.lt) goto loc_827AADD4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827aadd8
	if (!cr6.eq) goto loc_827AADD8;
loc_827AADD4:
	// li r11,1
	r11.s64 = 1;
loc_827AADD8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827aaf34
	if (!cr6.eq) goto loc_827AAF34;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r29,648(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 648);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aae34
	if (cr6.eq) goto loc_827AAE34;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x8277b0e8
	sub_8277B0E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x827aae38
	goto loc_827AAE38;
loc_827AAE34:
	// mr r28,r26
	r28.u64 = r26.u64;
loc_827AAE38:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bgt cr6,0x827aae58
	if (cr6.gt) goto loc_827AAE58;
	// beq cr6,0x827aae68
	if (cr6.eq) goto loc_827AAE68;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827aae68
	if (cr6.eq) goto loc_827AAE68;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// b 0x827aae60
	goto loc_827AAE60;
loc_827AAE58:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
loc_827AAE60:
	// li r31,3
	r31.s64 = 3;
	// bne cr6,0x827aae6c
	if (!cr6.eq) goto loc_827AAE6C;
loc_827AAE68:
	// li r31,4
	r31.s64 = 4;
loc_827AAE6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aaea8
	if (cr6.eq) goto loc_827AAEA8;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8279fce0
	sub_8279FCE0(ctx, base);
	// b 0x827aaeac
	goto loc_827AAEAC;
loc_827AAEA8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_827AAEAC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827aaee4
	if (!cr6.eq) goto loc_827AAEE4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aaee4
	if (cr6.eq) goto loc_827AAEE4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827AAEE4:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827aaf08
	if (!cr6.eq) goto loc_827AAF08;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aaf08
	if (cr6.eq) goto loc_827AAF08;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827AAF08:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82770350
	sub_82770350(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827aaf34
	if (cr6.eq) goto loc_827AAF34;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AAF34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827AAF38"))) PPC_WEAK_FUNC(sub_827AAF38);
PPC_FUNC_IMPL(__imp__sub_827AAF38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827AAF3C"))) PPC_WEAK_FUNC(sub_827AAF3C);
PPC_FUNC_IMPL(__imp__sub_827AAF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AAF40"))) PPC_WEAK_FUNC(sub_827AAF40);
PPC_FUNC_IMPL(__imp__sub_827AAF40) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r31,r8,0,0,24
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827aaf98
	if (cr6.eq) goto loc_827AAF98;
	// li r11,5
	r11.s64 = 5;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_827AAF98:
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm r22,r23,0,30,30
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,64(r27)
	PPC_STORE_U32(r27.u32 + 64, ctx.r4.u32);
	// beq cr6,0x827ab004
	if (cr6.eq) goto loc_827AB004;
	// lbz r7,75(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stb r6,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r6.u8);
	// lbz r4,1(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,68(r27)
	PPC_STORE_U32(r27.u32 + 68, ctx.r7.u32);
loc_827AB004:
	// rlwinm r8,r23,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab034
	if (cr6.eq) goto loc_827AB034;
	// lbz r11,75(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// addi r4,r27,36
	ctx.r4.s64 = r27.s64 + 36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stb r10,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r10.u8);
	// bl 0x827caf88
	sub_827CAF88(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827AB034:
	// rlwinm r8,r23,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab064
	if (cr6.eq) goto loc_827AB064;
	// lbz r11,75(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// stb r10,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r10.u8);
	// bl 0x827cb468
	sub_827CB468(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827AB064:
	// rlwinm r8,r23,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab0d4
	if (cr6.eq) goto loc_827AB0D4;
	// lbz r8,75(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stb r7,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r7.u8);
	// beq cr6,0x827ab08c
	if (cr6.eq) goto loc_827AB08C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_827AB08C:
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lfs f0,30356(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30356);
	f0.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,60(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r27.u32 + 60, temp.u32);
loc_827AB0D4:
	// rlwinm r8,r23,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab120
	if (cr6.eq) goto loc_827AB120;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab0f0
	if (cr6.eq) goto loc_827AB0F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_827AB0F0:
	// add r9,r11,r24
	ctx.r9.u64 = r11.u64 + r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,80(r27)
	PPC_STORE_U32(r27.u32 + 80, ctx.r9.u32);
loc_827AB0FC:
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne cr6,0x827ab0fc
	if (!cr6.eq) goto loc_827AB0FC;
	// b 0x827ab124
	goto loc_827AB124;
loc_827AB120:
	// stw r29,80(r27)
	PPC_STORE_U32(r27.u32 + 80, r29.u32);
loc_827AB124:
	// rlwinm r8,r23,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab170
	if (cr6.eq) goto loc_827AB170;
	// lbz r8,75(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r7,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r7.u8);
	// beq cr6,0x827ab14c
	if (cr6.eq) goto loc_827AB14C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_827AB14C:
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r5,72(r27)
	PPC_STORE_U16(r27.u32 + 72, ctx.r5.u16);
loc_827AB170:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ab348
	if (cr6.eq) goto loc_827AB348;
	// lwz r30,5(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 5);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827ab348
	if (!cr6.eq) goto loc_827AB348;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab194
	if (cr6.eq) goto loc_827AB194;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_827AB194:
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// li r26,-1
	r26.s64 = -1;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// subfze r11,r26
	temp.u64 = ~r26.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r11.u64 = temp.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x827ab1c8
	if (!cr6.eq) goto loc_827AB1C8;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
loc_827AB1C8:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab1fc
	if (cr6.eq) goto loc_827AB1FC;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// b 0x827ab200
	goto loc_827AB200;
loc_827AB1FC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_827AB200:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// beq cr6,0x827ab218
	if (cr6.eq) goto loc_827AB218;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_827AB218:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// beq cr6,0x827ab260
	if (cr6.eq) goto loc_827AB260;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r8
	ctx.r10.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r9,r4
	r31.u64 = ctx.r9.u64 | ctx.r4.u64;
	// b 0x827ab280
	goto loc_827AB280;
loc_827AB260:
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
loc_827AB280:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ab344
	if (cr6.eq) goto loc_827AB344;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab2cc
	if (cr6.eq) goto loc_827AB2CC;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r29.u16);
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r29.u8);
	// stb r26,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, r26.u8);
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r29.u8);
	// stb r29,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r29.u8);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// b 0x827ab2d0
	goto loc_827AB2D0;
loc_827AB2CC:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827AB2D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827a3d40
	sub_827A3D40(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bge cr6,0x827ab308
	if (!cr6.lt) goto loc_827AB308;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x827ab324
	if (!cr6.lt) goto loc_827AB324;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x827ab318
	goto loc_827AB318;
loc_827AB308:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x827ab324
	if (cr6.lt) goto loc_827AB324;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_827AB318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b1728
	sub_827B1728(ctx, base);
loc_827AB324:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ab200
	if (cr0.eq) goto loc_827AB200;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x827ab200
	goto loc_827AB200;
loc_827AB344:
	// stw r30,5(r24)
	PPC_STORE_U32(r24.u32 + 5, r30.u32);
loc_827AB348:
	// rlwinm r11,r22,31,25,31
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0x7F;
	// stw r30,76(r27)
	PPC_STORE_U32(r27.u32 + 76, r30.u32);
	// clrlwi r10,r23,31
	ctx.r10.u64 = r23.u32 & 0x1;
	// stw r29,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ab37c
	if (cr6.eq) goto loc_827AB37C;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab37c
	if (cr6.eq) goto loc_827AB37C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_827AB37C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ab398
	if (!cr6.eq) goto loc_827AB398;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ab398
	if (cr6.eq) goto loc_827AB398;
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r11.u32);
loc_827AB398:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827AB39C"))) PPC_WEAK_FUNC(sub_827AB39C);
PPC_FUNC_IMPL(__imp__sub_827AB39C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827AB3A0"))) PPC_WEAK_FUNC(sub_827AB3A0);
PPC_FUNC_IMPL(__imp__sub_827AB3A0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r9,r11,-220
	ctx.r9.s64 = r11.s64 + -220;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827ab438
	if (cr6.eq) goto loc_827AB438;
	// lwz r28,5(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827ab438
	if (cr6.eq) goto loc_827AB438;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ab428
	if (cr6.eq) goto loc_827AB428;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827AB3F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r31,r30,r11
	r31.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ab41c
	if (cr6.eq) goto loc_827AB41C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab414
	if (cr6.eq) goto loc_827AB414;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827AB414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827AB41C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827ab3f4
	if (!cr0.eq) goto loc_827AB3F4;
loc_827AB428:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827AB438:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-21740
	ctx.r10.s64 = r11.s64 + -21740;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827AB448"))) PPC_WEAK_FUNC(sub_827AB448);
PPC_FUNC_IMPL(__imp__sub_827AB448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827AB44C"))) PPC_WEAK_FUNC(sub_827AB44C);
PPC_FUNC_IMPL(__imp__sub_827AB44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AB450"))) PPC_WEAK_FUNC(sub_827AB450);
PPC_FUNC_IMPL(__imp__sub_827AB450) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r22,1
	r22.s64 = 1;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r22
	r11.u64 = r22.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r26,r7,0,0,24
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827ab4b4
	if (cr6.eq) goto loc_827AB4B4;
	// li r11,5
	r11.s64 = 5;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB4B4:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// rlwinm r23,r24,0,30,30
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	// lbzx r31,r10,r11
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,64(r27)
	PPC_STORE_U32(r27.u32 + 64, ctx.r3.u32);
	// beq cr6,0x827ab530
	if (cr6.eq) goto loc_827AB530;
	// lbz r7,75(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stb r6,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r6.u8);
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,68(r27)
	PPC_STORE_U32(r27.u32 + 68, ctx.r7.u32);
loc_827AB530:
	// rlwinm r8,r24,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab560
	if (cr6.eq) goto loc_827AB560;
	// lbz r11,75(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// addi r4,r27,36
	ctx.r4.s64 = r27.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stb r10,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r10.u8);
	// bl 0x827caf88
	sub_827CAF88(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827AB560:
	// rlwinm r8,r24,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab590
	if (cr6.eq) goto loc_827AB590;
	// lbz r11,75(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// stb r10,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r10.u8);
	// bl 0x827cb468
	sub_827CB468(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827AB590:
	// rlwinm r8,r24,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab600
	if (cr6.eq) goto loc_827AB600;
	// lbz r8,75(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stb r7,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r7.u8);
	// beq cr6,0x827ab5b8
	if (cr6.eq) goto loc_827AB5B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB5B8:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lfs f0,30356(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30356);
	f0.f64 = double(temp.f32);
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,60(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r27.u32 + 60, temp.u32);
loc_827AB600:
	// rlwinm r8,r24,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab64c
	if (cr6.eq) goto loc_827AB64C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab61c
	if (cr6.eq) goto loc_827AB61C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB61C:
	// add r9,r11,r25
	ctx.r9.u64 = r11.u64 + r25.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,80(r27)
	PPC_STORE_U32(r27.u32 + 80, ctx.r9.u32);
loc_827AB628:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x827ab628
	if (!cr6.eq) goto loc_827AB628;
	// b 0x827ab650
	goto loc_827AB650;
loc_827AB64C:
	// stw r29,80(r27)
	PPC_STORE_U32(r27.u32 + 80, r29.u32);
loc_827AB650:
	// rlwinm r8,r24,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab6a0
	if (cr6.eq) goto loc_827AB6A0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab66c
	if (cr6.eq) goto loc_827AB66C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB66C:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// sth r4,72(r27)
	PPC_STORE_U16(r27.u32 + 72, ctx.r4.u16);
	// lbz r8,75(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r7,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r7.u8);
loc_827AB6A0:
	// clrlwi r8,r31,31
	ctx.r8.u64 = r31.u32 & 0x1;
	// clrlwi r28,r31,24
	r28.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab7b0
	if (cr6.eq) goto loc_827AB7B0;
	// lbz r11,75(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r10.u8);
	// bl 0x8280b7e0
	sub_8280B7E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab7a4
	if (cr6.eq) goto loc_827AB7A4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827ab780
	if (!cr6.eq) goto loc_827AB780;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab768
	if (cr6.eq) goto loc_827AB768;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r22.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r29.u8);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// li r11,57
	r11.s64 = 57;
	// addi r7,r8,-752
	ctx.r7.s64 = ctx.r8.s64 + -752;
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r29.u8);
	// li r6,128
	ctx.r6.s64 = 128;
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r4,450
	ctx.r4.s64 = 450;
	// stb r6,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r6.u8);
	// li r10,80
	ctx.r10.s64 = 80;
	// stb r9,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r9.u8);
	// stb r5,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r5.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// sth r10,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, r11.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, r11.u16);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// b 0x827ab76c
	goto loc_827AB76C;
loc_827AB768:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_827AB76C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab77c
	if (cr6.eq) goto loc_827AB77C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AB77C:
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
loc_827AB780:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ab7a4
	if (cr6.eq) goto loc_827AB7A4;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
loc_827AB78C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8280a460
	sub_8280A460(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x827ab78c
	if (!cr0.eq) goto loc_827AB78C;
loc_827AB7A4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_827AB7B0:
	// rlwinm r8,r28,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ab804
	if (cr6.eq) goto loc_827AB804;
	// lbz r8,75(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 75);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stb r7,75(r27)
	PPC_STORE_U8(r27.u32 + 75, ctx.r7.u8);
	// beq cr6,0x827ab7d8
	if (cr6.eq) goto loc_827AB7D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB7D8:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x827ab7fc
	if (cr6.lt) goto loc_827AB7FC;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// ble cr6,0x827ab800
	if (!cr6.gt) goto loc_827AB800;
loc_827AB7FC:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_827AB800:
	// stb r10,74(r27)
	PPC_STORE_U8(r27.u32 + 74, ctx.r10.u8);
loc_827AB804:
	// rlwinm r10,r28,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ab824
	if (cr6.eq) goto loc_827AB824;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab81c
	if (cr6.eq) goto loc_827AB81C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_827AB81C:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_827AB824:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827ab9a8
	if (cr6.eq) goto loc_827AB9A8;
	// lwz r30,5(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 5);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827ab9a8
	if (!cr6.eq) goto loc_827AB9A8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab848
	if (cr6.eq) goto loc_827AB848;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_827AB848:
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab884
	if (cr6.eq) goto loc_827AB884;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// b 0x827ab888
	goto loc_827AB888;
loc_827AB884:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_827AB888:
	// li r26,-1
	r26.s64 = -1;
loc_827AB88C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq cr6,0x827ab8a4
	if (cr6.eq) goto loc_827AB8A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_827AB8A4:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r4
	ctx.r10.u64 = r11.u64 | ctx.r4.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r9,r8
	r31.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ab9a4
	if (cr6.eq) goto loc_827AB9A4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ab92c
	if (cr6.eq) goto loc_827AB92C;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r29.u16);
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r29.u8);
	// stb r26,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, r26.u8);
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r29.u8);
	// stb r29,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r29.u8);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// b 0x827ab930
	goto loc_827AB930;
loc_827AB92C:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827AB930:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827a3d40
	sub_827A3D40(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bge cr6,0x827ab968
	if (!cr6.lt) goto loc_827AB968;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x827ab984
	if (!cr6.lt) goto loc_827AB984;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x827ab978
	goto loc_827AB978;
loc_827AB968:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x827ab984
	if (cr6.lt) goto loc_827AB984;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_827AB978:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b1728
	sub_827B1728(ctx, base);
loc_827AB984:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ab88c
	if (cr0.eq) goto loc_827AB88C;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x827ab88c
	goto loc_827AB88C;
loc_827AB9A4:
	// stw r30,5(r25)
	PPC_STORE_U32(r25.u32 + 5, r30.u32);
loc_827AB9A8:
	// rlwinm r11,r23,31,25,31
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7F;
	// stw r30,76(r27)
	PPC_STORE_U32(r27.u32 + 76, r30.u32);
	// clrlwi r10,r24,31
	ctx.r10.u64 = r24.u32 & 0x1;
	// stw r29,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ab9e4
	if (cr6.eq) goto loc_827AB9E4;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ab9e4
	if (cr6.eq) goto loc_827AB9E4;
	// li r11,2
	r11.s64 = 2;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9450
	return;
loc_827AB9E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ab9fc
	if (!cr6.eq) goto loc_827AB9FC;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ab9fc
	if (cr6.eq) goto loc_827AB9FC;
	// stw r22,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r22.u32);
loc_827AB9FC:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827ABA08"))) PPC_WEAK_FUNC(sub_827ABA08);
PPC_FUNC_IMPL(__imp__sub_827ABA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827ABA0C"))) PPC_WEAK_FUNC(sub_827ABA0C);
PPC_FUNC_IMPL(__imp__sub_827ABA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ABA10"))) PPC_WEAK_FUNC(sub_827ABA10);
PPC_FUNC_IMPL(__imp__sub_827ABA10) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827aba68
	if (!cr6.gt) goto loc_827ABA68;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r11,r24
	r11.u64 = r24.u64;
loc_827ABA48:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r25
	cr6.compare<int32_t>(ctx.r9.s32, r25.s32, xer);
	// bge cr6,0x827abac8
	if (!cr6.lt) goto loc_827ABAC8;
	// lwz r9,96(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x827aba48
	if (cr6.lt) goto loc_827ABA48;
loc_827ABA68:
	// lwz r11,2784(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2784);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// stw r10,2784(r27)
	PPC_STORE_U32(r27.u32 + 2784, ctx.r10.u32);
	// beq cr6,0x827aba88
	if (cr6.eq) goto loc_827ABA88;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_827ABA88:
	// lwz r29,96(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// addi r31,r27,92
	r31.s64 = r27.s64 + 92;
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bge cr6,0x827abae8
	if (!cr6.lt) goto loc_827ABAE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r30,r29
	ctx.r4.s64 = r29.s64 - r30.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x827b1c40
	sub_827B1C40(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x827abb08
	if (!cr6.lt) goto loc_827ABB08;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x827abafc
	goto loc_827ABAFC;
loc_827ABAC8:
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// bne cr6,0x827aba68
	if (!cr6.eq) goto loc_827ABA68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827ABAE8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x827abb08
	if (cr6.lt) goto loc_827ABB08;
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
loc_827ABAFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b1d70
	sub_827B1D70(ctx, base);
loc_827ABB08:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x827abb40
	if (!cr6.gt) goto loc_827ABB40;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r29,r30
	ctx.r10.s64 = r30.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// beq 0x827abb40
	if (cr0.eq) goto loc_827ABB40;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_827ABB2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827abb38
	if (cr6.eq) goto loc_827ABB38;
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
loc_827ABB38:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x827abb2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827ABB2C;
loc_827ABB40:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x827abb70
	if (!cr6.lt) goto loc_827ABB70;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_827ABB70:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827abb9c
	if (cr0.eq) goto loc_827ABB9C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827abb98
	if (cr6.eq) goto loc_827ABB98;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_827ABB98:
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
loc_827ABB9C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x827abd3c
	if (!cr6.eq) goto loc_827ABD3C;
	// stw r26,104(r27)
	PPC_STORE_U32(r27.u32 + 104, r26.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abbe4
	if (cr6.eq) goto loc_827ABBE4;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_827ABBE4:
	// lwz r3,108(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abbf4
	if (cr6.eq) goto loc_827ABBF4;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_827ABBF4:
	// stw r31,108(r27)
	PPC_STORE_U32(r27.u32 + 108, r31.u32);
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r30,256(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 256);
	// beq cr6,0x827abc14
	if (cr6.eq) goto loc_827ABC14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827ABC14:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abc24
	if (cr6.eq) goto loc_827ABC24;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827ABC24:
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// lwz r3,108(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,2784(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 2784);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f31,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fdivs f0,f31,f1
	f0.f64 = double(float(f31.f64 / ctx.f1.f64));
	// stfs f0,300(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 300, temp.u32);
	// bne cr6,0x827abd3c
	if (!cr6.eq) goto loc_827ABD3C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827ABD3C:
	// lwz r11,2784(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2784);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// stw r10,2784(r27)
	PPC_STORE_U32(r27.u32 + 2784, ctx.r10.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_827ABD5C"))) PPC_WEAK_FUNC(sub_827ABD5C);
PPC_FUNC_IMPL(__imp__sub_827ABD5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827ABD60"))) PPC_WEAK_FUNC(sub_827ABD60);
PPC_FUNC_IMPL(__imp__sub_827ABD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lwz r11,2512(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2512);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// beq cr6,0x827abdc8
	if (cr6.eq) goto loc_827ABDC8;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x8277ac10
	sub_8277AC10(ctx, base);
	// b 0x827abdf0
	goto loc_827ABDF0;
loc_827ABDC8:
	// li r31,2
	r31.s64 = 2;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x827a1b38
	sub_827A1B38(ctx, base);
loc_827ABDF0:
	// rlwinm r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827abe20
	if (cr6.eq) goto loc_827ABE20;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827abe20
	if (!cr0.eq) goto loc_827ABE20;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827ABE20:
	// clrlwi r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827abe4c
	if (cr6.eq) goto loc_827ABE4C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827abe4c
	if (!cr0.eq) goto loc_827ABE4C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827ABE4C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827abf18
	if (cr6.eq) goto loc_827ABF18;
	// addi r3,r28,104
	ctx.r3.s64 = r28.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abe70
	if (cr6.eq) goto loc_827ABE70;
	// lwz r30,424(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x827abf60
	if (!cr6.eq) goto loc_827ABF60;
loc_827ABE70:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abed8
	if (cr6.eq) goto loc_827ABED8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827abeb4
	if (!cr6.eq) goto loc_827ABEB4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827ABEB4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827b2ce0
	sub_827B2CE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827abedc
	goto loc_827ABEDC;
loc_827ABED8:
	// li r30,0
	r30.s64 = 0;
loc_827ABEDC:
	// rlwinm r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827abffc
	if (cr6.eq) goto loc_827ABFFC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827ABEF8:
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
	// bne 0x827abef8
	if (!cr0.eq) goto loc_827ABEF8;
	// b 0x827abfec
	goto loc_827ABFEC;
loc_827ABF18:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// addi r10,r11,13435
	ctx.r10.s64 = r11.s64 + 13435;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// subfic r9,r3,6
	xer.ca = ctx.r3.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r3.s64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x827a1bb8
	sub_827A1BB8(ctx, base);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x827ac01c
	if (!cr6.eq) goto loc_827AC01C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827ac01c
	if (cr6.eq) goto loc_827AC01C;
loc_827ABF60:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827abfb0
	if (cr6.eq) goto loc_827ABFB0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x827b2d78
	sub_827B2D78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827abfb4
	goto loc_827ABFB4;
loc_827ABFB0:
	// li r30,0
	r30.s64 = 0;
loc_827ABFB4:
	// rlwinm r11,r31,0,28,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827abffc
	if (cr6.eq) goto loc_827ABFFC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827ABFD0:
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
	// bne 0x827abfd0
	if (!cr0.eq) goto loc_827ABFD0;
loc_827ABFEC:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827abffc
	if (!cr0.eq) goto loc_827ABFFC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827ABFFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827ac01c
	if (cr6.eq) goto loc_827AC01C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82767990
	sub_82767990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827a87b8
	sub_827A87B8(ctx, base);
loc_827AC01C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827AC020"))) PPC_WEAK_FUNC(sub_827AC020);
PPC_FUNC_IMPL(__imp__sub_827AC020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827AC024"))) PPC_WEAK_FUNC(sub_827AC024);
PPC_FUNC_IMPL(__imp__sub_827AC024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AC028"))) PPC_WEAK_FUNC(sub_827AC028);
PPC_FUNC_IMPL(__imp__sub_827AC028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ac1d8
	if (cr6.eq) goto loc_827AC1D8;
	// addi r3,r4,104
	ctx.r3.s64 = ctx.r4.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac074
	if (cr6.eq) goto loc_827AC074;
	// lwz r29,424(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x827ac11c
	if (!cr6.eq) goto loc_827AC11C;
loc_827AC074:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac0dc
	if (cr6.eq) goto loc_827AC0DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827ac0b8
	if (!cr6.eq) goto loc_827AC0B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827AC0B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827b2ce0
	sub_827B2CE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827ac0e0
	goto loc_827AC0E0;
loc_827AC0DC:
	// li r31,0
	r31.s64 = 0;
loc_827AC0E0:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ac1b8
	if (cr6.eq) goto loc_827AC1B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827AC0FC:
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
	// bne 0x827ac0fc
	if (!cr0.eq) goto loc_827AC0FC;
	// b 0x827ac1a8
	goto loc_827AC1A8;
loc_827AC11C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac16c
	if (cr6.eq) goto loc_827AC16C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,2
	r27.s64 = 2;
	// bl 0x827b2d78
	sub_827B2D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827ac170
	goto loc_827AC170;
loc_827AC16C:
	// li r31,0
	r31.s64 = 0;
loc_827AC170:
	// rlwinm r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ac1b8
	if (cr6.eq) goto loc_827AC1B8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827AC18C:
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
	// bne 0x827ac18c
	if (!cr0.eq) goto loc_827AC18C;
loc_827AC1A8:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827ac1b8
	if (!cr0.eq) goto loc_827AC1B8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827AC1B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ac1d8
	if (cr6.eq) goto loc_827AC1D8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82767990
	sub_82767990(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827a87b8
	sub_827A87B8(ctx, base);
loc_827AC1D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827AC1DC"))) PPC_WEAK_FUNC(sub_827AC1DC);
PPC_FUNC_IMPL(__imp__sub_827AC1DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827AC1E0"))) PPC_WEAK_FUNC(sub_827AC1E0);
PPC_FUNC_IMPL(__imp__sub_827AC1E0) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac20c
	if (cr6.eq) goto loc_827AC20C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AC20C:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac220
	if (cr6.eq) goto loc_827AC220;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827AC220:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ac248
	if (!cr6.eq) goto loc_827AC248;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac248
	if (cr6.eq) goto loc_827AC248;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827AC248:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ac26c
	if (!cr6.eq) goto loc_827AC26C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac26c
	if (cr6.eq) goto loc_827AC26C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827AC26C:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x827b3220
	sub_827B3220(ctx, base);
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bge cr6,0x827ac2a8
	if (!cr6.lt) goto loc_827AC2A8;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r31.u32);
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,84(r28)
	PPC_STORE_U32(r28.u32 + 84, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827AC2A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b3f10
	sub_827B3F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827AC2BC"))) PPC_WEAK_FUNC(sub_827AC2BC);
PPC_FUNC_IMPL(__imp__sub_827AC2BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827AC2C0"))) PPC_WEAK_FUNC(sub_827AC2C0);
PPC_FUNC_IMPL(__imp__sub_827AC2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x827ac1e0
	sub_827AC1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AC2D4"))) PPC_WEAK_FUNC(sub_827AC2D4);
PPC_FUNC_IMPL(__imp__sub_827AC2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AC2D8"))) PPC_WEAK_FUNC(sub_827AC2D8);
PPC_FUNC_IMPL(__imp__sub_827AC2D8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x827ac314
	if (cr6.eq) goto loc_827AC314;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_827AC314:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r10
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827ac364
	if (!cr6.eq) goto loc_827AC364;
loc_827AC330:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x827ac35c
	if (!cr6.lt) goto loc_827AC35C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r10
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827ac330
	if (cr6.eq) goto loc_827AC330;
	// b 0x827ac364
	goto loc_827AC364;
loc_827AC35C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827ac3ac
	if (cr6.eq) goto loc_827AC3AC;
loc_827AC364:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x827ac38c
	if (!cr6.eq) goto loc_827AC38C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_827AC38C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
loc_827AC3AC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ac3f0
	if (!cr6.eq) goto loc_827AC3F0;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_827AC3F0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ac404
	if (cr6.eq) goto loc_827AC404;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x827ac1e0
	sub_827AC1E0(ctx, base);
loc_827AC404:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AC420"))) PPC_WEAK_FUNC(sub_827AC420);
PPC_FUNC_IMPL(__imp__sub_827AC420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AC424"))) PPC_WEAK_FUNC(sub_827AC424);
PPC_FUNC_IMPL(__imp__sub_827AC424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AC428"))) PPC_WEAK_FUNC(sub_827AC428);
PPC_FUNC_IMPL(__imp__sub_827AC428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AC444"))) PPC_WEAK_FUNC(sub_827AC444);
PPC_FUNC_IMPL(__imp__sub_827AC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AC448"))) PPC_WEAK_FUNC(sub_827AC448);
PPC_FUNC_IMPL(__imp__sub_827AC448) {
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
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,72(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x827ac484
	if (cr6.eq) goto loc_827AC484;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r11,72(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_827AC484:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x827ac56c
	if (!cr6.lt) goto loc_827AC56C;
loc_827AC494:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r7
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ac4d4
	if (cr6.eq) goto loc_827AC4D4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_827AC4B8:
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x827ac4ec
	if (cr6.eq) goto loc_827AC4EC;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827ac4b8
	if (!cr6.eq) goto loc_827AC4B8;
loc_827AC4D4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// blt cr6,0x827ac494
	if (cr6.lt) goto loc_827AC494;
	// b 0x827ac56c
	goto loc_827AC56C;
loc_827AC4EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827ac500
	if (!cr6.eq) goto loc_827AC500;
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, r11.u32);
	// b 0x827ac504
	goto loc_827AC504;
loc_827AC500:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_827AC504:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ac52c
	if (!cr6.eq) goto loc_827AC52C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_827AC52C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x827ac568
	if (!cr6.eq) goto loc_827AC568;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ac564
	if (!cr6.eq) goto loc_827AC564;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// b 0x827ac568
	goto loc_827AC568;
loc_827AC564:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_827AC568:
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_827AC56C:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ac580
	if (cr6.eq) goto loc_827AC580;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x827ac1e0
	sub_827AC1E0(ctx, base);
loc_827AC580:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
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

__attribute__((alias("__imp__sub_827AC59C"))) PPC_WEAK_FUNC(sub_827AC59C);
PPC_FUNC_IMPL(__imp__sub_827AC59C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AC5A0"))) PPC_WEAK_FUNC(sub_827AC5A0);
PPC_FUNC_IMPL(__imp__sub_827AC5A0) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,2580
	ctx.r10.s64 = ctx.r3.s64 + 2580;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x827ac2d8
	sub_827AC2D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ac5f4
	if (cr6.eq) goto loc_827AC5F4;
loc_827AC5DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827a35f0
	sub_827A35F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ac2d8
	sub_827AC2D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827ac5dc
	if (!cr6.eq) goto loc_827AC5DC;
loc_827AC5F4:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ac608
	if (cr6.eq) goto loc_827AC608;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827ac1e0
	sub_827AC1E0(ctx, base);
loc_827AC608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827AC618"))) PPC_WEAK_FUNC(sub_827AC618);
PPC_FUNC_IMPL(__imp__sub_827AC618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

