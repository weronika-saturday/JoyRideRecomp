#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825DD5B8"))) PPC_WEAK_FUNC(sub_825DD5B8);
PPC_FUNC_IMPL(__imp__sub_825DD5B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD5C0"))) PPC_WEAK_FUNC(sub_825DD5C0);
PPC_FUNC_IMPL(__imp__sub_825DD5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,12816(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// li r12,1
	r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12292, ctx.r4.u32);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r11,r9,0,0,27
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD5F4"))) PPC_WEAK_FUNC(sub_825DD5F4);
PPC_FUNC_IMPL(__imp__sub_825DD5F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD5F8"))) PPC_WEAK_FUNC(sub_825DD5F8);
PPC_FUNC_IMPL(__imp__sub_825DD5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD600"))) PPC_WEAK_FUNC(sub_825DD600);
PPC_FUNC_IMPL(__imp__sub_825DD600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,12820(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12820);
	// li r12,1
	r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12296, ctx.r4.u32);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD634"))) PPC_WEAK_FUNC(sub_825DD634);
PPC_FUNC_IMPL(__imp__sub_825DD634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD638"))) PPC_WEAK_FUNC(sub_825DD638);
PPC_FUNC_IMPL(__imp__sub_825DD638) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12296);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD640"))) PPC_WEAK_FUNC(sub_825DD640);
PPC_FUNC_IMPL(__imp__sub_825DD640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,12824(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12824);
	// li r12,1
	r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12300, ctx.r4.u32);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD674"))) PPC_WEAK_FUNC(sub_825DD674);
PPC_FUNC_IMPL(__imp__sub_825DD674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD678"))) PPC_WEAK_FUNC(sub_825DD678);
PPC_FUNC_IMPL(__imp__sub_825DD678) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12300);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD680"))) PPC_WEAK_FUNC(sub_825DD680);
PPC_FUNC_IMPL(__imp__sub_825DD680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,12828(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12828);
	// li r12,1
	r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12304, ctx.r4.u32);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD6B4"))) PPC_WEAK_FUNC(sub_825DD6B4);
PPC_FUNC_IMPL(__imp__sub_825DD6B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD6B8"))) PPC_WEAK_FUNC(sub_825DD6B8);
PPC_FUNC_IMPL(__imp__sub_825DD6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD6C0"))) PPC_WEAK_FUNC(sub_825DD6C0);
PPC_FUNC_IMPL(__imp__sub_825DD6C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12316, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD6C8"))) PPC_WEAK_FUNC(sub_825DD6C8);
PPC_FUNC_IMPL(__imp__sub_825DD6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD6D0"))) PPC_WEAK_FUNC(sub_825DD6D0);
PPC_FUNC_IMPL(__imp__sub_825DD6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,12324(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12324, temp.u32);
	// lfs f13,2816(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2816);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,10598(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10598, r11.u16);
	// sth r11,10596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10596, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD718"))) PPC_WEAK_FUNC(sub_825DD718);
PPC_FUNC_IMPL(__imp__sub_825DD718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12324(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12324);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD728"))) PPC_WEAK_FUNC(sub_825DD728);
PPC_FUNC_IMPL(__imp__sub_825DD728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,12328(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12328, temp.u32);
	// lfs f13,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10602, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD768"))) PPC_WEAK_FUNC(sub_825DD768);
PPC_FUNC_IMPL(__imp__sub_825DD768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12328(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12328);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD778"))) PPC_WEAK_FUNC(sub_825DD778);
PPC_FUNC_IMPL(__imp__sub_825DD778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,12332(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12332, temp.u32);
	// lfs f13,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10600(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10600, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD7B8"))) PPC_WEAK_FUNC(sub_825DD7B8);
PPC_FUNC_IMPL(__imp__sub_825DD7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12332(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12332);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD7C8"))) PPC_WEAK_FUNC(sub_825DD7C8);
PPC_FUNC_IMPL(__imp__sub_825DD7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD7E8"))) PPC_WEAK_FUNC(sub_825DD7E8);
PPC_FUNC_IMPL(__imp__sub_825DD7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD80C"))) PPC_WEAK_FUNC(sub_825DD80C);
PPC_FUNC_IMPL(__imp__sub_825DD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD810"))) PPC_WEAK_FUNC(sub_825DD810);
PPC_FUNC_IMPL(__imp__sub_825DD810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD834"))) PPC_WEAK_FUNC(sub_825DD834);
PPC_FUNC_IMPL(__imp__sub_825DD834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD838"))) PPC_WEAK_FUNC(sub_825DD838);
PPC_FUNC_IMPL(__imp__sub_825DD838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD85C"))) PPC_WEAK_FUNC(sub_825DD85C);
PPC_FUNC_IMPL(__imp__sub_825DD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD860"))) PPC_WEAK_FUNC(sub_825DD860);
PPC_FUNC_IMPL(__imp__sub_825DD860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD884"))) PPC_WEAK_FUNC(sub_825DD884);
PPC_FUNC_IMPL(__imp__sub_825DD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD888"))) PPC_WEAK_FUNC(sub_825DD888);
PPC_FUNC_IMPL(__imp__sub_825DD888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD8AC"))) PPC_WEAK_FUNC(sub_825DD8AC);
PPC_FUNC_IMPL(__imp__sub_825DD8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD8B0"))) PPC_WEAK_FUNC(sub_825DD8B0);
PPC_FUNC_IMPL(__imp__sub_825DD8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD8D4"))) PPC_WEAK_FUNC(sub_825DD8D4);
PPC_FUNC_IMPL(__imp__sub_825DD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD8D8"))) PPC_WEAK_FUNC(sub_825DD8D8);
PPC_FUNC_IMPL(__imp__sub_825DD8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD8F4"))) PPC_WEAK_FUNC(sub_825DD8F4);
PPC_FUNC_IMPL(__imp__sub_825DD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD8F8"))) PPC_WEAK_FUNC(sub_825DD8F8);
PPC_FUNC_IMPL(__imp__sub_825DD8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD918"))) PPC_WEAK_FUNC(sub_825DD918);
PPC_FUNC_IMPL(__imp__sub_825DD918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD93C"))) PPC_WEAK_FUNC(sub_825DD93C);
PPC_FUNC_IMPL(__imp__sub_825DD93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD940"))) PPC_WEAK_FUNC(sub_825DD940);
PPC_FUNC_IMPL(__imp__sub_825DD940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD964"))) PPC_WEAK_FUNC(sub_825DD964);
PPC_FUNC_IMPL(__imp__sub_825DD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD968"))) PPC_WEAK_FUNC(sub_825DD968);
PPC_FUNC_IMPL(__imp__sub_825DD968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD98C"))) PPC_WEAK_FUNC(sub_825DD98C);
PPC_FUNC_IMPL(__imp__sub_825DD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD990"))) PPC_WEAK_FUNC(sub_825DD990);
PPC_FUNC_IMPL(__imp__sub_825DD990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD9B4"))) PPC_WEAK_FUNC(sub_825DD9B4);
PPC_FUNC_IMPL(__imp__sub_825DD9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD9B8"))) PPC_WEAK_FUNC(sub_825DD9B8);
PPC_FUNC_IMPL(__imp__sub_825DD9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD9DC"))) PPC_WEAK_FUNC(sub_825DD9DC);
PPC_FUNC_IMPL(__imp__sub_825DD9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD9E0"))) PPC_WEAK_FUNC(sub_825DD9E0);
PPC_FUNC_IMPL(__imp__sub_825DD9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA04"))) PPC_WEAK_FUNC(sub_825DDA04);
PPC_FUNC_IMPL(__imp__sub_825DDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA08"))) PPC_WEAK_FUNC(sub_825DDA08);
PPC_FUNC_IMPL(__imp__sub_825DDA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA24"))) PPC_WEAK_FUNC(sub_825DDA24);
PPC_FUNC_IMPL(__imp__sub_825DDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA28"))) PPC_WEAK_FUNC(sub_825DDA28);
PPC_FUNC_IMPL(__imp__sub_825DDA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA34"))) PPC_WEAK_FUNC(sub_825DDA34);
PPC_FUNC_IMPL(__imp__sub_825DDA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA38"))) PPC_WEAK_FUNC(sub_825DDA38);
PPC_FUNC_IMPL(__imp__sub_825DDA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA44"))) PPC_WEAK_FUNC(sub_825DDA44);
PPC_FUNC_IMPL(__imp__sub_825DDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA48"))) PPC_WEAK_FUNC(sub_825DDA48);
PPC_FUNC_IMPL(__imp__sub_825DDA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA54"))) PPC_WEAK_FUNC(sub_825DDA54);
PPC_FUNC_IMPL(__imp__sub_825DDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA58"))) PPC_WEAK_FUNC(sub_825DDA58);
PPC_FUNC_IMPL(__imp__sub_825DDA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA64"))) PPC_WEAK_FUNC(sub_825DDA64);
PPC_FUNC_IMPL(__imp__sub_825DDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA68"))) PPC_WEAK_FUNC(sub_825DDA68);
PPC_FUNC_IMPL(__imp__sub_825DDA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10540(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA74"))) PPC_WEAK_FUNC(sub_825DDA74);
PPC_FUNC_IMPL(__imp__sub_825DDA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA78"))) PPC_WEAK_FUNC(sub_825DDA78);
PPC_FUNC_IMPL(__imp__sub_825DDA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA84"))) PPC_WEAK_FUNC(sub_825DDA84);
PPC_FUNC_IMPL(__imp__sub_825DDA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA88"))) PPC_WEAK_FUNC(sub_825DDA88);
PPC_FUNC_IMPL(__imp__sub_825DDA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10540(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDA94"))) PPC_WEAK_FUNC(sub_825DDA94);
PPC_FUNC_IMPL(__imp__sub_825DDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDA98"))) PPC_WEAK_FUNC(sub_825DDA98);
PPC_FUNC_IMPL(__imp__sub_825DDA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAA4"))) PPC_WEAK_FUNC(sub_825DDAA4);
PPC_FUNC_IMPL(__imp__sub_825DDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAA8"))) PPC_WEAK_FUNC(sub_825DDAA8);
PPC_FUNC_IMPL(__imp__sub_825DDAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAB4"))) PPC_WEAK_FUNC(sub_825DDAB4);
PPC_FUNC_IMPL(__imp__sub_825DDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAB8"))) PPC_WEAK_FUNC(sub_825DDAB8);
PPC_FUNC_IMPL(__imp__sub_825DDAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAC4"))) PPC_WEAK_FUNC(sub_825DDAC4);
PPC_FUNC_IMPL(__imp__sub_825DDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAC8"))) PPC_WEAK_FUNC(sub_825DDAC8);
PPC_FUNC_IMPL(__imp__sub_825DDAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAD4"))) PPC_WEAK_FUNC(sub_825DDAD4);
PPC_FUNC_IMPL(__imp__sub_825DDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAD8"))) PPC_WEAK_FUNC(sub_825DDAD8);
PPC_FUNC_IMPL(__imp__sub_825DDAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAE4"))) PPC_WEAK_FUNC(sub_825DDAE4);
PPC_FUNC_IMPL(__imp__sub_825DDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAE8"))) PPC_WEAK_FUNC(sub_825DDAE8);
PPC_FUNC_IMPL(__imp__sub_825DDAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10544(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDAF4"))) PPC_WEAK_FUNC(sub_825DDAF4);
PPC_FUNC_IMPL(__imp__sub_825DDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDAF8"))) PPC_WEAK_FUNC(sub_825DDAF8);
PPC_FUNC_IMPL(__imp__sub_825DDAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDB04"))) PPC_WEAK_FUNC(sub_825DDB04);
PPC_FUNC_IMPL(__imp__sub_825DDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDB08"))) PPC_WEAK_FUNC(sub_825DDB08);
PPC_FUNC_IMPL(__imp__sub_825DDB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10544(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDB14"))) PPC_WEAK_FUNC(sub_825DDB14);
PPC_FUNC_IMPL(__imp__sub_825DDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDB18"))) PPC_WEAK_FUNC(sub_825DDB18);
PPC_FUNC_IMPL(__imp__sub_825DDB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDB24"))) PPC_WEAK_FUNC(sub_825DDB24);
PPC_FUNC_IMPL(__imp__sub_825DDB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDB28"))) PPC_WEAK_FUNC(sub_825DDB28);
PPC_FUNC_IMPL(__imp__sub_825DDB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1087
	r11.s64 = 1087;
	// bne cr6,0x825ddb38
	if (!cr6.eq) goto loc_825DDB38;
	// li r11,1024
	r11.s64 = 1024;
loc_825DDB38:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, r11.u32);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DDB64"))) PPC_WEAK_FUNC(sub_825DDB64);
PPC_FUNC_IMPL(__imp__sub_825DDB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDB68"))) PPC_WEAK_FUNC(sub_825DDB68);
PPC_FUNC_IMPL(__imp__sub_825DDB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10572(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
}

__attribute__((alias("__imp__sub_825DDB70"))) PPC_WEAK_FUNC(sub_825DDB70);
PPC_FUNC_IMPL(__imp__sub_825DDB70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDB74"))) PPC_WEAK_FUNC(sub_825DDB74);
PPC_FUNC_IMPL(__imp__sub_825DDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDB78"))) PPC_WEAK_FUNC(sub_825DDB78);
PPC_FUNC_IMPL(__imp__sub_825DDB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12816(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// stw r4,12408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12408, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10372(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825ddbb0
	if (cr6.eq) goto loc_825DDBB0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825ddbb0
	if (cr6.eq) goto loc_825DDBB0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x825ddbb0
	if (cr6.eq) goto loc_825DDBB0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825DDBB0:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10372, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDC08"))) PPC_WEAK_FUNC(sub_825DDC08);
PPC_FUNC_IMPL(__imp__sub_825DDC08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDC10"))) PPC_WEAK_FUNC(sub_825DDC10);
PPC_FUNC_IMPL(__imp__sub_825DDC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12820(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12820);
	// stw r4,12412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12412, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10380);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825ddc48
	if (cr6.eq) goto loc_825DDC48;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825ddc48
	if (cr6.eq) goto loc_825DDC48;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x825ddc48
	if (cr6.eq) goto loc_825DDC48;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825DDC48:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10380, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDCA0"))) PPC_WEAK_FUNC(sub_825DDCA0);
PPC_FUNC_IMPL(__imp__sub_825DDCA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12412);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDCA8"))) PPC_WEAK_FUNC(sub_825DDCA8);
PPC_FUNC_IMPL(__imp__sub_825DDCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12824(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12824);
	// stw r4,12416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12416, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825ddce0
	if (cr6.eq) goto loc_825DDCE0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825ddce0
	if (cr6.eq) goto loc_825DDCE0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x825ddce0
	if (cr6.eq) goto loc_825DDCE0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825DDCE0:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10384, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDD38"))) PPC_WEAK_FUNC(sub_825DDD38);
PPC_FUNC_IMPL(__imp__sub_825DDD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12416);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDD40"))) PPC_WEAK_FUNC(sub_825DDD40);
PPC_FUNC_IMPL(__imp__sub_825DDD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12828(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12828);
	// stw r4,12420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12420, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825ddd78
	if (cr6.eq) goto loc_825DDD78;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825ddd78
	if (cr6.eq) goto loc_825DDD78;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x825ddd78
	if (cr6.eq) goto loc_825DDD78;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825DDD78:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10388, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDDD0"))) PPC_WEAK_FUNC(sub_825DDDD0);
PPC_FUNC_IMPL(__imp__sub_825DDDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12420);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDDD8"))) PPC_WEAK_FUNC(sub_825DDDD8);
PPC_FUNC_IMPL(__imp__sub_825DDDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDDFC"))) PPC_WEAK_FUNC(sub_825DDDFC);
PPC_FUNC_IMPL(__imp__sub_825DDDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDE00"))) PPC_WEAK_FUNC(sub_825DDE00);
PPC_FUNC_IMPL(__imp__sub_825DDE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDE10"))) PPC_WEAK_FUNC(sub_825DDE10);
PPC_FUNC_IMPL(__imp__sub_825DDE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10620(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10620, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,48,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDE34"))) PPC_WEAK_FUNC(sub_825DDE34);
PPC_FUNC_IMPL(__imp__sub_825DDE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDE38"))) PPC_WEAK_FUNC(sub_825DDE38);
PPC_FUNC_IMPL(__imp__sub_825DDE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10620);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDE48"))) PPC_WEAK_FUNC(sub_825DDE48);
PPC_FUNC_IMPL(__imp__sub_825DDE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10616(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10616, ctx.r4.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDE6C"))) PPC_WEAK_FUNC(sub_825DDE6C);
PPC_FUNC_IMPL(__imp__sub_825DDE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDE70"))) PPC_WEAK_FUNC(sub_825DDE70);
PPC_FUNC_IMPL(__imp__sub_825DDE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10616(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDE7C"))) PPC_WEAK_FUNC(sub_825DDE7C);
PPC_FUNC_IMPL(__imp__sub_825DDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDE80"))) PPC_WEAK_FUNC(sub_825DDE80);
PPC_FUNC_IMPL(__imp__sub_825DDE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825DDEA0"))) PPC_WEAK_FUNC(sub_825DDEA0);
PPC_FUNC_IMPL(__imp__sub_825DDEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDEA4"))) PPC_WEAK_FUNC(sub_825DDEA4);
PPC_FUNC_IMPL(__imp__sub_825DDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDEA8"))) PPC_WEAK_FUNC(sub_825DDEA8);
PPC_FUNC_IMPL(__imp__sub_825DDEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
}

__attribute__((alias("__imp__sub_825DDEB0"))) PPC_WEAK_FUNC(sub_825DDEB0);
PPC_FUNC_IMPL(__imp__sub_825DDEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDEB4"))) PPC_WEAK_FUNC(sub_825DDEB4);
PPC_FUNC_IMPL(__imp__sub_825DDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDEB8"))) PPC_WEAK_FUNC(sub_825DDEB8);
PPC_FUNC_IMPL(__imp__sub_825DDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDED4"))) PPC_WEAK_FUNC(sub_825DDED4);
PPC_FUNC_IMPL(__imp__sub_825DDED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDED8"))) PPC_WEAK_FUNC(sub_825DDED8);
PPC_FUNC_IMPL(__imp__sub_825DDED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDEE4"))) PPC_WEAK_FUNC(sub_825DDEE4);
PPC_FUNC_IMPL(__imp__sub_825DDEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDEE8"))) PPC_WEAK_FUNC(sub_825DDEE8);
PPC_FUNC_IMPL(__imp__sub_825DDEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,1
	r12.s64 = 1;
	// stw r4,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF04"))) PPC_WEAK_FUNC(sub_825DDF04);
PPC_FUNC_IMPL(__imp__sub_825DDF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDF08"))) PPC_WEAK_FUNC(sub_825DDF08);
PPC_FUNC_IMPL(__imp__sub_825DDF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF10"))) PPC_WEAK_FUNC(sub_825DDF10);
PPC_FUNC_IMPL(__imp__sub_825DDF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,4,27,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DDF28"))) PPC_WEAK_FUNC(sub_825DDF28);
PPC_FUNC_IMPL(__imp__sub_825DDF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF2C"))) PPC_WEAK_FUNC(sub_825DDF2C);
PPC_FUNC_IMPL(__imp__sub_825DDF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDF30"))) PPC_WEAK_FUNC(sub_825DDF30);
PPC_FUNC_IMPL(__imp__sub_825DDF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF3C"))) PPC_WEAK_FUNC(sub_825DDF3C);
PPC_FUNC_IMPL(__imp__sub_825DDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDF40"))) PPC_WEAK_FUNC(sub_825DDF40);
PPC_FUNC_IMPL(__imp__sub_825DDF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF5C"))) PPC_WEAK_FUNC(sub_825DDF5C);
PPC_FUNC_IMPL(__imp__sub_825DDF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDF60"))) PPC_WEAK_FUNC(sub_825DDF60);
PPC_FUNC_IMPL(__imp__sub_825DDF60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10556(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF68"))) PPC_WEAK_FUNC(sub_825DDF68);
PPC_FUNC_IMPL(__imp__sub_825DDF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF8C"))) PPC_WEAK_FUNC(sub_825DDF8C);
PPC_FUNC_IMPL(__imp__sub_825DDF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDF90"))) PPC_WEAK_FUNC(sub_825DDF90);
PPC_FUNC_IMPL(__imp__sub_825DDF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDF98"))) PPC_WEAK_FUNC(sub_825DDF98);
PPC_FUNC_IMPL(__imp__sub_825DDF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDFBC"))) PPC_WEAK_FUNC(sub_825DDFBC);
PPC_FUNC_IMPL(__imp__sub_825DDFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDFC0"))) PPC_WEAK_FUNC(sub_825DDFC0);
PPC_FUNC_IMPL(__imp__sub_825DDFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDFC8"))) PPC_WEAK_FUNC(sub_825DDFC8);
PPC_FUNC_IMPL(__imp__sub_825DDFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDFE4"))) PPC_WEAK_FUNC(sub_825DDFE4);
PPC_FUNC_IMPL(__imp__sub_825DDFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DDFE8"))) PPC_WEAK_FUNC(sub_825DDFE8);
PPC_FUNC_IMPL(__imp__sub_825DDFE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DDFF0"))) PPC_WEAK_FUNC(sub_825DDFF0);
PPC_FUNC_IMPL(__imp__sub_825DDFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE014"))) PPC_WEAK_FUNC(sub_825DE014);
PPC_FUNC_IMPL(__imp__sub_825DE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE018"))) PPC_WEAK_FUNC(sub_825DE018);
PPC_FUNC_IMPL(__imp__sub_825DE018) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE020"))) PPC_WEAK_FUNC(sub_825DE020);
PPC_FUNC_IMPL(__imp__sub_825DE020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DE038"))) PPC_WEAK_FUNC(sub_825DE038);
PPC_FUNC_IMPL(__imp__sub_825DE038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE03C"))) PPC_WEAK_FUNC(sub_825DE03C);
PPC_FUNC_IMPL(__imp__sub_825DE03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE040"))) PPC_WEAK_FUNC(sub_825DE040);
PPC_FUNC_IMPL(__imp__sub_825DE040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE04C"))) PPC_WEAK_FUNC(sub_825DE04C);
PPC_FUNC_IMPL(__imp__sub_825DE04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE050"))) PPC_WEAK_FUNC(sub_825DE050);
PPC_FUNC_IMPL(__imp__sub_825DE050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// lbz r10,11071(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, r11.u32);
	// bne 0x825de088
	if (!cr0.eq) goto loc_825DE088;
	// rlwinm r11,r11,0,12,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825de088
	if (!cr6.eq) goto loc_825DE088;
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	r12.s64 = -257;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// b 0x825de090
	goto loc_825DE090;
loc_825DE088:
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_825DE090:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DE0A0"))) PPC_WEAK_FUNC(sub_825DE0A0);
PPC_FUNC_IMPL(__imp__sub_825DE0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE0A4"))) PPC_WEAK_FUNC(sub_825DE0A4);
PPC_FUNC_IMPL(__imp__sub_825DE0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE0A8"))) PPC_WEAK_FUNC(sub_825DE0A8);
PPC_FUNC_IMPL(__imp__sub_825DE0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE0B4"))) PPC_WEAK_FUNC(sub_825DE0B4);
PPC_FUNC_IMPL(__imp__sub_825DE0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE0B8"))) PPC_WEAK_FUNC(sub_825DE0B8);
PPC_FUNC_IMPL(__imp__sub_825DE0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE0D4"))) PPC_WEAK_FUNC(sub_825DE0D4);
PPC_FUNC_IMPL(__imp__sub_825DE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE0D8"))) PPC_WEAK_FUNC(sub_825DE0D8);
PPC_FUNC_IMPL(__imp__sub_825DE0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE0E4"))) PPC_WEAK_FUNC(sub_825DE0E4);
PPC_FUNC_IMPL(__imp__sub_825DE0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE0E8"))) PPC_WEAK_FUNC(sub_825DE0E8);
PPC_FUNC_IMPL(__imp__sub_825DE0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE104"))) PPC_WEAK_FUNC(sub_825DE104);
PPC_FUNC_IMPL(__imp__sub_825DE104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE108"))) PPC_WEAK_FUNC(sub_825DE108);
PPC_FUNC_IMPL(__imp__sub_825DE108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE114"))) PPC_WEAK_FUNC(sub_825DE114);
PPC_FUNC_IMPL(__imp__sub_825DE114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE118"))) PPC_WEAK_FUNC(sub_825DE118);
PPC_FUNC_IMPL(__imp__sub_825DE118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE134"))) PPC_WEAK_FUNC(sub_825DE134);
PPC_FUNC_IMPL(__imp__sub_825DE134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE138"))) PPC_WEAK_FUNC(sub_825DE138);
PPC_FUNC_IMPL(__imp__sub_825DE138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE144"))) PPC_WEAK_FUNC(sub_825DE144);
PPC_FUNC_IMPL(__imp__sub_825DE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE148"))) PPC_WEAK_FUNC(sub_825DE148);
PPC_FUNC_IMPL(__imp__sub_825DE148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10562(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE15C"))) PPC_WEAK_FUNC(sub_825DE15C);
PPC_FUNC_IMPL(__imp__sub_825DE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE160"))) PPC_WEAK_FUNC(sub_825DE160);
PPC_FUNC_IMPL(__imp__sub_825DE160) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE168"))) PPC_WEAK_FUNC(sub_825DE168);
PPC_FUNC_IMPL(__imp__sub_825DE168) {
	PPC_FUNC_PROLOGUE();
	// stw r4,14000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14000, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825DE16C"))) PPC_WEAK_FUNC(sub_825DE16C);
PPC_FUNC_IMPL(__imp__sub_825DE16C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE170"))) PPC_WEAK_FUNC(sub_825DE170);
PPC_FUNC_IMPL(__imp__sub_825DE170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,14000(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14000);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE178"))) PPC_WEAK_FUNC(sub_825DE178);
PPC_FUNC_IMPL(__imp__sub_825DE178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r11,r4,23,2,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE188"))) PPC_WEAK_FUNC(sub_825DE188);
PPC_FUNC_IMPL(__imp__sub_825DE188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE194"))) PPC_WEAK_FUNC(sub_825DE194);
PPC_FUNC_IMPL(__imp__sub_825DE194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE198"))) PPC_WEAK_FUNC(sub_825DE198);
PPC_FUNC_IMPL(__imp__sub_825DE198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e941c
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lbz r9,10864(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,-448
	ctx.r8.s64 = ctx.r8.s64 + -448;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 11) & 0x800) | (r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x600000) | (r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
}

__attribute__((alias("__imp__sub_825DE25C"))) PPC_WEAK_FUNC(sub_825DE25C);
PPC_FUNC_IMPL(__imp__sub_825DE25C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DE260"))) PPC_WEAK_FUNC(sub_825DE260);
PPC_FUNC_IMPL(__imp__sub_825DE260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE294"))) PPC_WEAK_FUNC(sub_825DE294);
PPC_FUNC_IMPL(__imp__sub_825DE294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE298"))) PPC_WEAK_FUNC(sub_825DE298);
PPC_FUNC_IMPL(__imp__sub_825DE298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = r11.s64 + 10890;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825DE328"))) PPC_WEAK_FUNC(sub_825DE328);
PPC_FUNC_IMPL(__imp__sub_825DE328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE32C"))) PPC_WEAK_FUNC(sub_825DE32C);
PPC_FUNC_IMPL(__imp__sub_825DE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE330"))) PPC_WEAK_FUNC(sub_825DE330);
PPC_FUNC_IMPL(__imp__sub_825DE330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE340"))) PPC_WEAK_FUNC(sub_825DE340);
PPC_FUNC_IMPL(__imp__sub_825DE340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e941c
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lbz r9,10864(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,-448
	ctx.r8.s64 = ctx.r8.s64 + -448;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0x400) | (r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x180000) | (r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
}

__attribute__((alias("__imp__sub_825DE404"))) PPC_WEAK_FUNC(sub_825DE404);
PPC_FUNC_IMPL(__imp__sub_825DE404) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DE408"))) PPC_WEAK_FUNC(sub_825DE408);
PPC_FUNC_IMPL(__imp__sub_825DE408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE43C"))) PPC_WEAK_FUNC(sub_825DE43C);
PPC_FUNC_IMPL(__imp__sub_825DE43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE440"))) PPC_WEAK_FUNC(sub_825DE440);
PPC_FUNC_IMPL(__imp__sub_825DE440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = r30.u8 & 0x40 ? 0 : (r31.u64 >> (r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = r11.s64 + 10890;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	r11.u64 = ctx.r5.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825DE4C8"))) PPC_WEAK_FUNC(sub_825DE4C8);
PPC_FUNC_IMPL(__imp__sub_825DE4C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE4CC"))) PPC_WEAK_FUNC(sub_825DE4CC);
PPC_FUNC_IMPL(__imp__sub_825DE4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE4D0"))) PPC_WEAK_FUNC(sub_825DE4D0);
PPC_FUNC_IMPL(__imp__sub_825DE4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE4E0"))) PPC_WEAK_FUNC(sub_825DE4E0);
PPC_FUNC_IMPL(__imp__sub_825DE4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE51C"))) PPC_WEAK_FUNC(sub_825DE51C);
PPC_FUNC_IMPL(__imp__sub_825DE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE520"))) PPC_WEAK_FUNC(sub_825DE520);
PPC_FUNC_IMPL(__imp__sub_825DE520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE534"))) PPC_WEAK_FUNC(sub_825DE534);
PPC_FUNC_IMPL(__imp__sub_825DE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE538"))) PPC_WEAK_FUNC(sub_825DE538);
PPC_FUNC_IMPL(__imp__sub_825DE538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = r11.s64 + 10890;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825DE5C8"))) PPC_WEAK_FUNC(sub_825DE5C8);
PPC_FUNC_IMPL(__imp__sub_825DE5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE5CC"))) PPC_WEAK_FUNC(sub_825DE5CC);
PPC_FUNC_IMPL(__imp__sub_825DE5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE5D0"))) PPC_WEAK_FUNC(sub_825DE5D0);
PPC_FUNC_IMPL(__imp__sub_825DE5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10890);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE5E0"))) PPC_WEAK_FUNC(sub_825DE5E0);
PPC_FUNC_IMPL(__imp__sub_825DE5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825de600
	if (!cr0.eq) goto loc_825DE600;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825de63c
	if (cr0.eq) goto loc_825DE63C;
loc_825DE600:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-448
	ctx.r10.s64 = ctx.r10.s64 + -448;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_825DE63C:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,10864(r11)
	PPC_STORE_U8(r11.u32 + 10864, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_825DE644"))) PPC_WEAK_FUNC(sub_825DE644);
PPC_FUNC_IMPL(__imp__sub_825DE644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE648"))) PPC_WEAK_FUNC(sub_825DE648);
PPC_FUNC_IMPL(__imp__sub_825DE648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,10864(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 10864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE654"))) PPC_WEAK_FUNC(sub_825DE654);
PPC_FUNC_IMPL(__imp__sub_825DE654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE658"))) PPC_WEAK_FUNC(sub_825DE658);
PPC_FUNC_IMPL(__imp__sub_825DE658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lfs f0,-368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -368);
	f0.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE6B4"))) PPC_WEAK_FUNC(sub_825DE6B4);
PPC_FUNC_IMPL(__imp__sub_825DE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE6B8"))) PPC_WEAK_FUNC(sub_825DE6B8);
PPC_FUNC_IMPL(__imp__sub_825DE6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// lfs f0,-376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -376);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE6FC"))) PPC_WEAK_FUNC(sub_825DE6FC);
PPC_FUNC_IMPL(__imp__sub_825DE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE700"))) PPC_WEAK_FUNC(sub_825DE700);
PPC_FUNC_IMPL(__imp__sub_825DE700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lfs f0,-380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -380);
	f0.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
}

__attribute__((alias("__imp__sub_825DE758"))) PPC_WEAK_FUNC(sub_825DE758);
PPC_FUNC_IMPL(__imp__sub_825DE758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE75C"))) PPC_WEAK_FUNC(sub_825DE75C);
PPC_FUNC_IMPL(__imp__sub_825DE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE760"))) PPC_WEAK_FUNC(sub_825DE760);
PPC_FUNC_IMPL(__imp__sub_825DE760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// lfs f0,-364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -364);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFF) != 0);
	r11.s64 = r11.s32 >> 22;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE7A0"))) PPC_WEAK_FUNC(sub_825DE7A0);
PPC_FUNC_IMPL(__imp__sub_825DE7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3230
	r11.s64 = ctx.r4.s64 + 3230;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825de800
	if (cr6.eq) goto loc_825DE800;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x825de7d4
	if (cr6.gt) goto loc_825DE7D4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_825DE7D4:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_825DE800:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12356(r11)
	PPC_STORE_U8(r11.u32 + 12356, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_825DE808"))) PPC_WEAK_FUNC(sub_825DE808);
PPC_FUNC_IMPL(__imp__sub_825DE808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE80C"))) PPC_WEAK_FUNC(sub_825DE80C);
PPC_FUNC_IMPL(__imp__sub_825DE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE810"))) PPC_WEAK_FUNC(sub_825DE810);
PPC_FUNC_IMPL(__imp__sub_825DE810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12356(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 12356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE81C"))) PPC_WEAK_FUNC(sub_825DE81C);
PPC_FUNC_IMPL(__imp__sub_825DE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE820"))) PPC_WEAK_FUNC(sub_825DE820);
PPC_FUNC_IMPL(__imp__sub_825DE820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3230
	r11.s64 = ctx.r4.s64 + 3230;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825de880
	if (cr6.eq) goto loc_825DE880;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x825de854
	if (cr6.lt) goto loc_825DE854;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_825DE854:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_825DE880:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12382(r11)
	PPC_STORE_U8(r11.u32 + 12382, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_825DE888"))) PPC_WEAK_FUNC(sub_825DE888);
PPC_FUNC_IMPL(__imp__sub_825DE888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE88C"))) PPC_WEAK_FUNC(sub_825DE88C);
PPC_FUNC_IMPL(__imp__sub_825DE88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE890"))) PPC_WEAK_FUNC(sub_825DE890);
PPC_FUNC_IMPL(__imp__sub_825DE890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12382(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 12382);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE89C"))) PPC_WEAK_FUNC(sub_825DE89C);
PPC_FUNC_IMPL(__imp__sub_825DE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE8A0"))) PPC_WEAK_FUNC(sub_825DE8A0);
PPC_FUNC_IMPL(__imp__sub_825DE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addic r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r10,r7,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// srd r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE8E4"))) PPC_WEAK_FUNC(sub_825DE8E4);
PPC_FUNC_IMPL(__imp__sub_825DE8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE8E8"))) PPC_WEAK_FUNC(sub_825DE8E8);
PPC_FUNC_IMPL(__imp__sub_825DE8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE90C"))) PPC_WEAK_FUNC(sub_825DE90C);
PPC_FUNC_IMPL(__imp__sub_825DE90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE910"))) PPC_WEAK_FUNC(sub_825DE910);
PPC_FUNC_IMPL(__imp__sub_825DE910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE948"))) PPC_WEAK_FUNC(sub_825DE948);
PPC_FUNC_IMPL(__imp__sub_825DE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x7;
}

__attribute__((alias("__imp__sub_825DE958"))) PPC_WEAK_FUNC(sub_825DE958);
PPC_FUNC_IMPL(__imp__sub_825DE958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE95C"))) PPC_WEAK_FUNC(sub_825DE95C);
PPC_FUNC_IMPL(__imp__sub_825DE95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE960"))) PPC_WEAK_FUNC(sub_825DE960);
PPC_FUNC_IMPL(__imp__sub_825DE960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE998"))) PPC_WEAK_FUNC(sub_825DE998);
PPC_FUNC_IMPL(__imp__sub_825DE998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x7;
}

__attribute__((alias("__imp__sub_825DE9A8"))) PPC_WEAK_FUNC(sub_825DE9A8);
PPC_FUNC_IMPL(__imp__sub_825DE9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE9AC"))) PPC_WEAK_FUNC(sub_825DE9AC);
PPC_FUNC_IMPL(__imp__sub_825DE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE9B0"))) PPC_WEAK_FUNC(sub_825DE9B0);
PPC_FUNC_IMPL(__imp__sub_825DE9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE9E8"))) PPC_WEAK_FUNC(sub_825DE9E8);
PPC_FUNC_IMPL(__imp__sub_825DE9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lhzx r11,r11,r3
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE9FC"))) PPC_WEAK_FUNC(sub_825DE9FC);
PPC_FUNC_IMPL(__imp__sub_825DE9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEA00"))) PPC_WEAK_FUNC(sub_825DEA00);
PPC_FUNC_IMPL(__imp__sub_825DEA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEA3C"))) PPC_WEAK_FUNC(sub_825DEA3C);
PPC_FUNC_IMPL(__imp__sub_825DEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEA40"))) PPC_WEAK_FUNC(sub_825DEA40);
PPC_FUNC_IMPL(__imp__sub_825DEA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEA54"))) PPC_WEAK_FUNC(sub_825DEA54);
PPC_FUNC_IMPL(__imp__sub_825DEA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEA58"))) PPC_WEAK_FUNC(sub_825DEA58);
PPC_FUNC_IMPL(__imp__sub_825DEA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,22,5,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r8.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEA94"))) PPC_WEAK_FUNC(sub_825DEA94);
PPC_FUNC_IMPL(__imp__sub_825DEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEA98"))) PPC_WEAK_FUNC(sub_825DEA98);
PPC_FUNC_IMPL(__imp__sub_825DEA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEAB0"))) PPC_WEAK_FUNC(sub_825DEAB0);
PPC_FUNC_IMPL(__imp__sub_825DEAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEAEC"))) PPC_WEAK_FUNC(sub_825DEAEC);
PPC_FUNC_IMPL(__imp__sub_825DEAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEAF0"))) PPC_WEAK_FUNC(sub_825DEAF0);
PPC_FUNC_IMPL(__imp__sub_825DEAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEB04"))) PPC_WEAK_FUNC(sub_825DEB04);
PPC_FUNC_IMPL(__imp__sub_825DEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEB08"))) PPC_WEAK_FUNC(sub_825DEB08);
PPC_FUNC_IMPL(__imp__sub_825DEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEB44"))) PPC_WEAK_FUNC(sub_825DEB44);
PPC_FUNC_IMPL(__imp__sub_825DEB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEB48"))) PPC_WEAK_FUNC(sub_825DEB48);
PPC_FUNC_IMPL(__imp__sub_825DEB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEB5C"))) PPC_WEAK_FUNC(sub_825DEB5C);
PPC_FUNC_IMPL(__imp__sub_825DEB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEB60"))) PPC_WEAK_FUNC(sub_825DEB60);
PPC_FUNC_IMPL(__imp__sub_825DEB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r7,r10,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// srd r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEBA4"))) PPC_WEAK_FUNC(sub_825DEBA4);
PPC_FUNC_IMPL(__imp__sub_825DEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEBA8"))) PPC_WEAK_FUNC(sub_825DEBA8);
PPC_FUNC_IMPL(__imp__sub_825DEBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1156);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEBC0"))) PPC_WEAK_FUNC(sub_825DEBC0);
PPC_FUNC_IMPL(__imp__sub_825DEBC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,13024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13024);
	f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f13,13032(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13032);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,13036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13036);
	f0.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,13028(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13028);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,12(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,12288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12288);
	// stw r11,13052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13052, r11.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r10,13056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13056, ctx.r10.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r31,13060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13060, r31.u32);
	// stw r30,13064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13064, r30.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x825dec7c
	if (cr6.eq) goto loc_825DEC7C;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgt cr6,0x825dec58
	if (cr6.gt) goto loc_825DEC58;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825DEC58:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bgt cr6,0x825dec64
	if (cr6.gt) goto loc_825DEC64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_825DEC64:
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, r31.s32, xer);
	// blt cr6,0x825dec70
	if (cr6.lt) goto loc_825DEC70;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_825DEC70:
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// blt cr6,0x825dec7c
	if (cr6.lt) goto loc_825DEC7C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_825DEC7C:
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r5,16,1,15
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, r11.u32);
	// stw r10,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r10.u32);
	// bl 0x825dc610
	sub_825DC610(ctx, base);
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

__attribute__((alias("__imp__sub_825DECB4"))) PPC_WEAK_FUNC(sub_825DECB4);
PPC_FUNC_IMPL(__imp__sub_825DECB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DECB8"))) PPC_WEAK_FUNC(sub_825DECB8);
PPC_FUNC_IMPL(__imp__sub_825DECB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825ded28
	if (cr6.eq) goto loc_825DED28;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// subfic r11,r4,17
	xer.ca = ctx.r4.u32 <= 17;
	r11.s64 = 17 - ctx.r4.s64;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r11.u32);
	// stw r6,1780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_825DED28:
	// addi r11,r29,3209
	r11.s64 = r29.s64 + 3209;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	r28.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825deda0
	if (cr6.eq) goto loc_825DEDA0;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ded50
	if (cr6.eq) goto loc_825DED50;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x825deda0
	goto loc_825DEDA0;
loc_825DED50:
	// lwz r11,11040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825deda0
	if (cr0.eq) goto loc_825DEDA0;
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825ded78
	if (cr6.lt) goto loc_825DED78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825DED78:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	r11.u64 = (__builtin_rotateleft32(r28.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
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
	// stw r9,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_825DEDA0:
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// stwx r30,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r9,12904(r11)
	PPC_STORE_U8(r11.u32 + 12904, ctx.r9.u8);
	// beq 0x825dedd0
	if (cr0.eq) goto loc_825DEDD0;
	// lbz r11,12264(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12264);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dedd0
	if (cr6.eq) goto loc_825DEDD0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825DEDD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825DEDD4"))) PPC_WEAK_FUNC(sub_825DEDD4);
PPC_FUNC_IMPL(__imp__sub_825DEDD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DEDD8"))) PPC_WEAK_FUNC(sub_825DEDD8);
PPC_FUNC_IMPL(__imp__sub_825DEDD8) {
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
	// addi r11,r4,3209
	r11.s64 = ctx.r4.s64 + 3209;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825dee3c
	if (cr6.eq) goto loc_825DEE3C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subfic r9,r4,239
	xer.ca = ctx.r4.u32 <= 239;
	ctx.r9.s64 = 239 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subf r28,r10,r11
	r28.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825DEE3C:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,12904(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12904);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825DEE58"))) PPC_WEAK_FUNC(sub_825DEE58);
PPC_FUNC_IMPL(__imp__sub_825DEE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DEE5C"))) PPC_WEAK_FUNC(sub_825DEE5C);
PPC_FUNC_IMPL(__imp__sub_825DEE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

