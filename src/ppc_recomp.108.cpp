#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824BC7E0"))) PPC_WEAK_FUNC(sub_824BC7E0);
PPC_FUNC_IMPL(__imp__sub_824BC7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BC7E4"))) PPC_WEAK_FUNC(sub_824BC7E4);
PPC_FUNC_IMPL(__imp__sub_824BC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BC7E8"))) PPC_WEAK_FUNC(sub_824BC7E8);
PPC_FUNC_IMPL(__imp__sub_824BC7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,724
	ctx.r10.s64 = r11.s64 + 724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BC7F8"))) PPC_WEAK_FUNC(sub_824BC7F8);
PPC_FUNC_IMPL(__imp__sub_824BC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,724
	ctx.r10.s64 = r11.s64 + 724;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BC848"))) PPC_WEAK_FUNC(sub_824BC848);
PPC_FUNC_IMPL(__imp__sub_824BC848) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r10,728
	ctx.r5.s64 = ctx.r10.s64 + 728;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826df6e0
	sub_826DF6E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc580
	sub_826DC580(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x826dc7b8
	sub_826DC7B8(ctx, base);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x824bc938
	if (!cr6.gt) goto loc_824BC938;
	// li r31,0
	r31.s64 = 0;
loc_824BC8BC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826dc360
	sub_826DC360(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc3f0
	sub_826DC3F0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc1c8
	sub_826DC1C8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x824bc8bc
	if (cr6.lt) goto loc_824BC8BC;
loc_824BC938:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc198
	sub_826DC198(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc188
	sub_826DC188(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826df868
	sub_826DF868(ctx, base);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_824BC95C"))) PPC_WEAK_FUNC(sub_824BC95C);
PPC_FUNC_IMPL(__imp__sub_824BC95C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824BC960"))) PPC_WEAK_FUNC(sub_824BC960);
PPC_FUNC_IMPL(__imp__sub_824BC960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x824bc990
	if (!cr6.lt) goto loc_824BC990;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824bc990
	if (cr6.lt) goto loc_824BC990;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_824BC990:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_824BC994"))) PPC_WEAK_FUNC(sub_824BC994);
PPC_FUNC_IMPL(__imp__sub_824BC994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BC998"))) PPC_WEAK_FUNC(sub_824BC998);
PPC_FUNC_IMPL(__imp__sub_824BC998) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// bge cr6,0x824bcd68
	if (!cr6.lt) goto loc_824BCD68;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824bcd68
	if (cr6.lt) goto loc_824BCD68;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bcd68
	if (cr6.eq) goto loc_824BCD68;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 756);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f10,3656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3656);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,752(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 752);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,3792(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lfs f9,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	ctx.f9.f64 = double(temp.f32);
	// addi r28,r11,20
	r28.s64 = r11.s64 + 20;
	// lfs f7,748(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 748);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r1,104
	r31.s64 = ctx.r1.s64 + 104;
	// lfs f6,6240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6240);
	ctx.f6.f64 = double(temp.f32);
	// li r29,16
	r29.s64 = 16;
	// lfs f8,744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	ctx.f8.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f7,232(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f6,264(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f6,280(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f0,284(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f11,292(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f8,296(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f11,308(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f8,312(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,316(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f8,328(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f0,332(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f0,340(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f8,344(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f0,348(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
loc_824BCB3C:
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = f0.f64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + f0.f64));
	// stfs f5,-8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f3,-4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824bcb3c
	if (!cr0.eq) goto loc_824BCB3C;
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249e5a0
	sub_8249E5A0(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249e5a0
	sub_8249E5A0(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8249e5a0
	sub_8249E5A0(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8249e5a0
	sub_8249E5A0(ctx, base);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
loc_824BCD68:
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_824BCD74"))) PPC_WEAK_FUNC(sub_824BCD74);
PPC_FUNC_IMPL(__imp__sub_824BCD74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824BCD78"))) PPC_WEAK_FUNC(sub_824BCD78);
PPC_FUNC_IMPL(__imp__sub_824BCD78) {
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
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,776
	ctx.r8.s64 = ctx.r10.s64 + 776;
	// addi r7,r9,764
	ctx.r7.s64 = ctx.r9.s64 + 764;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BCDE4"))) PPC_WEAK_FUNC(sub_824BCDE4);
PPC_FUNC_IMPL(__imp__sub_824BCDE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BCDE8"))) PPC_WEAK_FUNC(sub_824BCDE8);
PPC_FUNC_IMPL(__imp__sub_824BCDE8) {
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
	// addi r9,r11,776
	ctx.r9.s64 = r11.s64 + 776;
	// addi r8,r10,764
	ctx.r8.s64 = ctx.r10.s64 + 764;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824bd498
	sub_824BD498(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,712
	ctx.r6.s64 = ctx.r7.s64 + 712;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
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

__attribute__((alias("__imp__sub_824BCE58"))) PPC_WEAK_FUNC(sub_824BCE58);
PPC_FUNC_IMPL(__imp__sub_824BCE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BCE5C"))) PPC_WEAK_FUNC(sub_824BCE5C);
PPC_FUNC_IMPL(__imp__sub_824BCE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BCE60"))) PPC_WEAK_FUNC(sub_824BCE60);
PPC_FUNC_IMPL(__imp__sub_824BCE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r8,728
	ctx.r5.s64 = ctx.r8.s64 + 728;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826df6e0
	sub_826DF6E0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826dcb98
	sub_826DCB98(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826dcef0
	sub_826DCEF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x824bcf54
	if (!cr6.gt) goto loc_824BCF54;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,724
	r30.s64 = r11.s64 + 724;
loc_824BCEE0:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826dd560
	sub_826DD560(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826dd5f8
	sub_826DD5F8(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x824bd268
	sub_824BD268(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bne 0x824bcee0
	if (!cr0.eq) goto loc_824BCEE0;
loc_824BCF54:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826dcab8
	sub_826DCAB8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826dcaa8
	sub_826DCAA8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826df868
	sub_826DF868(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_824BCF78"))) PPC_WEAK_FUNC(sub_824BCF78);
PPC_FUNC_IMPL(__imp__sub_824BCF78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824BCF7C"))) PPC_WEAK_FUNC(sub_824BCF7C);
PPC_FUNC_IMPL(__imp__sub_824BCF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BCF80"))) PPC_WEAK_FUNC(sub_824BCF80);
PPC_FUNC_IMPL(__imp__sub_824BCF80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f0,176(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,724
	ctx.r9.s64 = ctx.r10.s64 + 724;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,184(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,188(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lfs f10,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x824bd268
	sub_824BD268(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD00C"))) PPC_WEAK_FUNC(sub_824BD00C);
PPC_FUNC_IMPL(__imp__sub_824BD00C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD010"))) PPC_WEAK_FUNC(sub_824BD010);
PPC_FUNC_IMPL(__imp__sub_824BD010) {
	PPC_FUNC_PROLOGUE();
	// b 0x824bd498
	sub_824BD498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BD010"))) PPC_WEAK_FUNC(sub_824BD010);
PPC_FUNC_IMPL(__imp__sub_824BD010) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824BD014"))) PPC_WEAK_FUNC(sub_824BD014);
PPC_FUNC_IMPL(__imp__sub_824BD014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD018"))) PPC_WEAK_FUNC(sub_824BD018);
PPC_FUNC_IMPL(__imp__sub_824BD018) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824bd080
	if (!cr6.gt) goto loc_824BD080;
loc_824BD038:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-36
	ctx.r3.s64 = r11.s64 + -36;
	// lwz r10,-36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -36);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bgt cr6,0x824bd038
	if (cr6.gt) goto loc_824BD038;
loc_824BD080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD090"))) PPC_WEAK_FUNC(sub_824BD090);
PPC_FUNC_IMPL(__imp__sub_824BD090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD094"))) PPC_WEAK_FUNC(sub_824BD094);
PPC_FUNC_IMPL(__imp__sub_824BD094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD098"))) PPC_WEAK_FUNC(sub_824BD098);
PPC_FUNC_IMPL(__imp__sub_824BD098) {
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
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
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
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824BD100"))) PPC_WEAK_FUNC(sub_824BD100);
PPC_FUNC_IMPL(__imp__sub_824BD100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD104"))) PPC_WEAK_FUNC(sub_824BD104);
PPC_FUNC_IMPL(__imp__sub_824BD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD108"))) PPC_WEAK_FUNC(sub_824BD108);
PPC_FUNC_IMPL(__imp__sub_824BD108) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,724
	ctx.r9.s64 = r11.s64 + 724;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824bd13c
	if (cr6.eq) goto loc_824BD13C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BD13C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD14C"))) PPC_WEAK_FUNC(sub_824BD14C);
PPC_FUNC_IMPL(__imp__sub_824BD14C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD150"))) PPC_WEAK_FUNC(sub_824BD150);
PPC_FUNC_IMPL(__imp__sub_824BD150) {
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
	// addi r10,r11,712
	ctx.r10.s64 = r11.s64 + 712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824bd194
	if (cr6.eq) goto loc_824BD194;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BD194:
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

__attribute__((alias("__imp__sub_824BD1A8"))) PPC_WEAK_FUNC(sub_824BD1A8);
PPC_FUNC_IMPL(__imp__sub_824BD1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD1AC"))) PPC_WEAK_FUNC(sub_824BD1AC);
PPC_FUNC_IMPL(__imp__sub_824BD1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD1B0"))) PPC_WEAK_FUNC(sub_824BD1B0);
PPC_FUNC_IMPL(__imp__sub_824BD1B0) {
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
	// addi r9,r10,764
	ctx.r9.s64 = ctx.r10.s64 + 764;
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

__attribute__((alias("__imp__sub_824BD208"))) PPC_WEAK_FUNC(sub_824BD208);
PPC_FUNC_IMPL(__imp__sub_824BD208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD20C"))) PPC_WEAK_FUNC(sub_824BD20C);
PPC_FUNC_IMPL(__imp__sub_824BD20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD210"))) PPC_WEAK_FUNC(sub_824BD210);
PPC_FUNC_IMPL(__imp__sub_824BD210) {
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
	// addi r10,r11,764
	ctx.r10.s64 = r11.s64 + 764;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824bd498
	sub_824BD498(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,712
	ctx.r8.s64 = ctx.r9.s64 + 712;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD264"))) PPC_WEAK_FUNC(sub_824BD264);
PPC_FUNC_IMPL(__imp__sub_824BD264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD268"))) PPC_WEAK_FUNC(sub_824BD268);
PPC_FUNC_IMPL(__imp__sub_824BD268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824bd2a8
	if (!cr6.gt) goto loc_824BD2A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824BD2A8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824bd318
	if (cr0.eq) goto loc_824BD318;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,724
	ctx.r9.s64 = ctx.r10.s64 + 724;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f9,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f8,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f7,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_824BD318:
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

__attribute__((alias("__imp__sub_824BD32C"))) PPC_WEAK_FUNC(sub_824BD32C);
PPC_FUNC_IMPL(__imp__sub_824BD32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD330"))) PPC_WEAK_FUNC(sub_824BD330);
PPC_FUNC_IMPL(__imp__sub_824BD330) {
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
	// addi r10,r11,764
	ctx.r10.s64 = r11.s64 + 764;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824bd498
	sub_824BD498(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,712
	ctx.r8.s64 = ctx.r9.s64 + 712;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824bd394
	if (cr6.eq) goto loc_824BD394;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BD394:
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

__attribute__((alias("__imp__sub_824BD3A8"))) PPC_WEAK_FUNC(sub_824BD3A8);
PPC_FUNC_IMPL(__imp__sub_824BD3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD3AC"))) PPC_WEAK_FUNC(sub_824BD3AC);
PPC_FUNC_IMPL(__imp__sub_824BD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD3B0"))) PPC_WEAK_FUNC(sub_824BD3B0);
PPC_FUNC_IMPL(__imp__sub_824BD3B0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824bd018
	sub_824BD018(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x824bd3ec
	if (!cr6.gt) goto loc_824BD3EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824BD3EC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bd43c
	if (cr6.eq) goto loc_824BD43C;
loc_824BD40C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824bd268
	sub_824BD268(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bd40c
	if (!cr6.eq) goto loc_824BD40C;
loc_824BD43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824BD440"))) PPC_WEAK_FUNC(sub_824BD440);
PPC_FUNC_IMPL(__imp__sub_824BD440) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824BD444"))) PPC_WEAK_FUNC(sub_824BD444);
PPC_FUNC_IMPL(__imp__sub_824BD444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD448"))) PPC_WEAK_FUNC(sub_824BD448);
PPC_FUNC_IMPL(__imp__sub_824BD448) {
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
	// bl 0x824bcde8
	sub_824BCDE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bd480
	if (cr6.eq) goto loc_824BD480;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BD480:
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

__attribute__((alias("__imp__sub_824BD494"))) PPC_WEAK_FUNC(sub_824BD494);
PPC_FUNC_IMPL(__imp__sub_824BD494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD498"))) PPC_WEAK_FUNC(sub_824BD498);
PPC_FUNC_IMPL(__imp__sub_824BD498) {
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
	// beq cr6,0x824bd57c
	if (cr6.eq) goto loc_824BD57C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bd50c
	if (!cr6.eq) goto loc_824BD50C;
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
	// beq cr6,0x824bd57c
	if (cr6.eq) goto loc_824BD57C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824bd098
	sub_824BD098(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x824bd57c
	goto loc_824BD57C;
loc_824BD50C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824bd1b0
	sub_824BD1B0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824bd538
	if (!cr6.gt) goto loc_824BD538;
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
loc_824BD538:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824bd3b0
	sub_824BD3B0(ctx, base);
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
	// bl 0x824bd210
	sub_824BD210(ctx, base);
loc_824BD57C:
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

__attribute__((alias("__imp__sub_824BD590"))) PPC_WEAK_FUNC(sub_824BD590);
PPC_FUNC_IMPL(__imp__sub_824BD590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD594"))) PPC_WEAK_FUNC(sub_824BD594);
PPC_FUNC_IMPL(__imp__sub_824BD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD598"))) PPC_WEAK_FUNC(sub_824BD598);
PPC_FUNC_IMPL(__imp__sub_824BD598) {
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
	// bl 0x824bbdf8
	sub_824BBDF8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,788
	ctx.r9.s64 = ctx.r10.s64 + 788;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_824BD5DC"))) PPC_WEAK_FUNC(sub_824BD5DC);
PPC_FUNC_IMPL(__imp__sub_824BD5DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD5E0"))) PPC_WEAK_FUNC(sub_824BD5E0);
PPC_FUNC_IMPL(__imp__sub_824BD5E0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,788
	ctx.r10.s64 = r11.s64 + 788;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824bd62c
	if (cr6.eq) goto loc_824BD62C;
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
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_824BD62C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bd650
	if (cr6.eq) goto loc_824BD650;
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
loc_824BD650:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bbe10
	sub_824BBE10(ctx, base);
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

__attribute__((alias("__imp__sub_824BD66C"))) PPC_WEAK_FUNC(sub_824BD66C);
PPC_FUNC_IMPL(__imp__sub_824BD66C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD670"))) PPC_WEAK_FUNC(sub_824BD670);
PPC_FUNC_IMPL(__imp__sub_824BD670) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bd6a4
	if (cr6.eq) goto loc_824BD6A4;
	// bl 0x824b9890
	sub_824B9890(ctx, base);
	// b 0x824bd6a8
	goto loc_824BD6A8;
loc_824BD6A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BD6A8:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824ba648
	sub_824BA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bbe20
	sub_824BBE20(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bd6d4
	if (cr6.eq) goto loc_824BD6D4;
	// bl 0x824bf850
	sub_824BF850(ctx, base);
	// b 0x824bd6d8
	goto loc_824BD6D8;
loc_824BD6D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BD6D8:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bl 0x824be270
	sub_824BE270(ctx, base);
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

__attribute__((alias("__imp__sub_824BD6F4"))) PPC_WEAK_FUNC(sub_824BD6F4);
PPC_FUNC_IMPL(__imp__sub_824BD6F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD6F8"))) PPC_WEAK_FUNC(sub_824BD6F8);
PPC_FUNC_IMPL(__imp__sub_824BD6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD6FC"))) PPC_WEAK_FUNC(sub_824BD6FC);
PPC_FUNC_IMPL(__imp__sub_824BD6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD700"))) PPC_WEAK_FUNC(sub_824BD700);
PPC_FUNC_IMPL(__imp__sub_824BD700) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
}

__attribute__((alias("__imp__sub_824BD70C"))) PPC_WEAK_FUNC(sub_824BD70C);
PPC_FUNC_IMPL(__imp__sub_824BD70C) {
	PPC_FUNC_PROLOGUE();
	// b 0x824bc720
	sub_824BC720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BD710"))) PPC_WEAK_FUNC(sub_824BD710);
PPC_FUNC_IMPL(__imp__sub_824BD710) {
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
	// bl 0x824bd5e0
	sub_824BD5E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bd748
	if (cr6.eq) goto loc_824BD748;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BD748:
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

__attribute__((alias("__imp__sub_824BD75C"))) PPC_WEAK_FUNC(sub_824BD75C);
PPC_FUNC_IMPL(__imp__sub_824BD75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD760"))) PPC_WEAK_FUNC(sub_824BD760);
PPC_FUNC_IMPL(__imp__sub_824BD760) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,828
	ctx.r10.s64 = r11.s64 + 828;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c19c0
	sub_824C19C0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD7B4"))) PPC_WEAK_FUNC(sub_824BD7B4);
PPC_FUNC_IMPL(__imp__sub_824BD7B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD7B8"))) PPC_WEAK_FUNC(sub_824BD7B8);
PPC_FUNC_IMPL(__imp__sub_824BD7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,828
	ctx.r9.s64 = ctx.r10.s64 + 828;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_824BD7CC"))) PPC_WEAK_FUNC(sub_824BD7CC);
PPC_FUNC_IMPL(__imp__sub_824BD7CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c1a38
	sub_824C1A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BD7D0"))) PPC_WEAK_FUNC(sub_824BD7D0);
PPC_FUNC_IMPL(__imp__sub_824BD7D0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD814"))) PPC_WEAK_FUNC(sub_824BD814);
PPC_FUNC_IMPL(__imp__sub_824BD814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD818"))) PPC_WEAK_FUNC(sub_824BD818);
PPC_FUNC_IMPL(__imp__sub_824BD818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824c17e0
	sub_824C17E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BD820"))) PPC_WEAK_FUNC(sub_824BD820);
PPC_FUNC_IMPL(__imp__sub_824BD820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f7,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64));
	// lfs f2,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f2,f31
	f0.f64 = double(float(ctx.f2.f64 * f31.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,52(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f8,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r7,-24224
	ctx.r7.s64 = ctx.r7.s64 + -24224;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_824BD904"))) PPC_WEAK_FUNC(sub_824BD904);
PPC_FUNC_IMPL(__imp__sub_824BD904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824BD908"))) PPC_WEAK_FUNC(sub_824BD908);
PPC_FUNC_IMPL(__imp__sub_824BD908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bd990
	if (cr6.eq) goto loc_824BD990;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bd990
	if (cr6.eq) goto loc_824BD990;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824bd990
	if (cr6.eq) goto loc_824BD990;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r10,-24224
	ctx.r6.s64 = ctx.r10.s64 + -24224;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
loc_824BD990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BD9A0"))) PPC_WEAK_FUNC(sub_824BD9A0);
PPC_FUNC_IMPL(__imp__sub_824BD9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BD9A4"))) PPC_WEAK_FUNC(sub_824BD9A4);
PPC_FUNC_IMPL(__imp__sub_824BD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BD9A8"))) PPC_WEAK_FUNC(sub_824BD9A8);
PPC_FUNC_IMPL(__imp__sub_824BD9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// bl 0x828eaaec
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bl 0x824bb760
	sub_824BB760(ctx, base);
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x824bda50
	if (!cr6.gt) goto loc_824BDA50;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824BDA50:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x824bda78
	if (cr6.eq) goto loc_824BDA78;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_824BDA6C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x824bda6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824BDA6C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_824BDA78:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r31,16(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r23,r11,816
	r23.s64 = r11.s64 + 816;
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r27,12
	r28.s64 = r27.s64 + 12;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lfs f27,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f27.f64 = double(temp.f32);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x824bdbc8
	if (cr6.eq) goto loc_824BDBC8;
loc_824BDAA8:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x824bdb90
	if (!cr6.eq) goto loc_824BDB90;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdb50
	if (cr6.eq) goto loc_824BDB50;
	// lfs f3,-4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823be900
	sub_823BE900(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdb50
	if (cr6.eq) goto loc_824BDB50;
	// lwz r11,84(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824be290
	sub_824BE290(ctx, base);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bdb3c
	if (cr6.eq) goto loc_824BDB3C;
loc_824BDB08:
	// lbz r11,20(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdb30
	if (cr6.eq) goto loc_824BDB30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824be290
	sub_824BE290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824bdb08
	if (!cr6.eq) goto loc_824BDB08;
	// b 0x824bdb3c
	goto loc_824BDB3C;
loc_824BDB30:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
loc_824BDB3C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824bdb50
	if (cr6.eq) goto loc_824BDB50;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
loc_824BDB50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824bdb7c
	if (cr6.eq) goto loc_824BDB7C;
	// lfs f3,-4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823be900
	sub_823BE900(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bdbac
	if (!cr6.eq) goto loc_824BDBAC;
loc_824BDB7C:
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x824c1638
	sub_824C1638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824bdba4
	goto loc_824BDBA4;
loc_824BDB90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824bdbac
	if (!cr6.eq) goto loc_824BDBAC;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_824BDBA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
loc_824BDBAC:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x824bdaa8
	if (!cr6.eq) goto loc_824BDAA8;
loc_824BDBC8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824bbd08
	sub_824BBD08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824bb980
	sub_824BB980(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824bbc28
	sub_824BBC28(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f12,8(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r26.u32 + 8, temp.u32);
	// stfs f11,12(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r26.u32 + 12, temp.u32);
	// lfs f28,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f28.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x824bba60
	sub_824BBA60(ctx, base);
	// lfs f10,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 - ctx.f10.f64));
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f26,4932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4932);
	f26.f64 = double(temp.f32);
	// stfs f6,188(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsel f31,f9,f0,f10
	f31.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// stfs f31,4(r26)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f30,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f30.f64 = double(temp.f32);
	// fsubs f8,f30,f13
	ctx.f8.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f29,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f29.f64 = double(temp.f32);
	// fsubs f7,f29,f12
	ctx.f7.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fsubs f3,f31,f31
	ctx.f3.f64 = double(float(f31.f64 - f31.f64));
	// fmr f0,f31
	f0.f64 = f31.f64;
	// fabs f5,f8
	ctx.f5.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f10,f7
	ctx.f10.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f4,f5,f26
	ctx.f4.f64 = double(float(ctx.f5.f64 - f26.f64));
	// fcmpu cr6,f4,f27
	cr6.compare(ctx.f4.f64, f27.f64);
	// bgt cr6,0x824bdca0
	if (cr6.gt) goto loc_824BDCA0;
	// fsubs f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 - f26.f64));
	// fcmpu cr6,f11,f27
	cr6.compare(ctx.f11.f64, f27.f64);
	// bgt cr6,0x824bdca0
	if (cr6.gt) goto loc_824BDCA0;
	// fsubs f11,f10,f26
	ctx.f11.f64 = double(float(ctx.f10.f64 - f26.f64));
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f11,f27
	cr6.compare(ctx.f11.f64, f27.f64);
	// ble cr6,0x824bdca4
	if (!cr6.gt) goto loc_824BDCA4;
loc_824BDCA0:
	// li r11,0
	r11.s64 = 0;
loc_824BDCA4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lfs f25,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f25.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdd78
	if (cr6.eq) goto loc_824BDD78;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f11
	ctx.f12.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f12,f25
	cr6.compare(ctx.f12.f64, f25.f64);
	// blt cr6,0x824bdcf8
	if (cr6.lt) goto loc_824BDCF8;
	// fdivs f11,f28,f12
	ctx.f11.f64 = double(float(f28.f64 / ctx.f12.f64));
	// lfs f10,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f12,f11,f27
	ctx.f12.f64 = double(float(ctx.f11.f64 * f27.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// b 0x824bdd14
	goto loc_824BDD14;
loc_824BDCF8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-24224
	ctx.r9.s64 = ctx.r10.s64 + -24224;
	// lfs f0,-24224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24224);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
loc_824BDD14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdd3c
	if (cr6.eq) goto loc_824BDD3C;
	// lfs f9,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 + f0.f64));
	// fadds f0,f31,f12
	f0.f64 = double(float(f31.f64 + ctx.f12.f64));
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f12,f29,f11
	ctx.f12.f64 = double(float(f29.f64 + ctx.f11.f64));
	// b 0x824bdd6c
	goto loc_824BDD6C;
loc_824BDD3C:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lfs f10,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,-7272
	ctx.r10.s64 = r11.s64 + -7272;
	// lfs f0,-7272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7272);
	f0.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 + f0.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 + ctx.f12.f64));
loc_824BDD6C:
	// stfs f12,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_824BDD78:
	// fsubs f13,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f10,f29,f12
	ctx.f10.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f8,f9,f26
	ctx.f8.f64 = double(float(ctx.f9.f64 - f26.f64));
	// fcmpu cr6,f8,f27
	cr6.compare(ctx.f8.f64, f27.f64);
	// bgt cr6,0x824bddb8
	if (cr6.gt) goto loc_824BDDB8;
	// fsubs f0,f0,f26
	f0.f64 = double(float(f0.f64 - f26.f64));
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bgt cr6,0x824bddb8
	if (cr6.gt) goto loc_824BDDB8;
	// fsubs f0,f13,f26
	f0.f64 = double(float(ctx.f13.f64 - f26.f64));
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// ble cr6,0x824bddbc
	if (!cr6.gt) goto loc_824BDDBC;
loc_824BDDB8:
	// li r11,0
	r11.s64 = 0;
loc_824BDDBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bde1c
	if (!cr6.eq) goto loc_824BDE1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r6,r11,-7288
	ctx.r6.s64 = r11.s64 + -7288;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824bde1c
	if (cr6.eq) goto loc_824BDE1C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r22)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r22.u32 + 0, temp.u32);
	// stfs f13,4(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r22.u32 + 4, temp.u32);
	// stfs f12,8(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r22.u32 + 8, temp.u32);
	// stfs f11,12(r22)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r22.u32 + 12, temp.u32);
loc_824BDE1C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824bb970
	sub_824BB970(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824bb7d0
	sub_824BB7D0(ctx, base);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_824BDE40"))) PPC_WEAK_FUNC(sub_824BDE40);
PPC_FUNC_IMPL(__imp__sub_824BDE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_824BDE44"))) PPC_WEAK_FUNC(sub_824BDE44);
PPC_FUNC_IMPL(__imp__sub_824BDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BDE48"))) PPC_WEAK_FUNC(sub_824BDE48);
PPC_FUNC_IMPL(__imp__sub_824BDE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// beq cr6,0x824bde94
	if (cr6.eq) goto loc_824BDE94;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 804);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824bde98
	goto loc_824BDE98;
loc_824BDE94:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_824BDE98:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,96
	ctx.r7.s64 = r11.s64 + 96;
	// addi r6,r11,176
	ctx.r6.s64 = r11.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bd9a8
	sub_824BD9A8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r11,-24224
	ctx.r6.s64 = r11.s64 + -24224;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BDF24"))) PPC_WEAK_FUNC(sub_824BDF24);
PPC_FUNC_IMPL(__imp__sub_824BDF24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BDF28"))) PPC_WEAK_FUNC(sub_824BDF28);
PPC_FUNC_IMPL(__imp__sub_824BDF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e9418
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r10,833(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 833);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824bdf88
	if (cr6.eq) goto loc_824BDF88;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_824BDF88:
	// lbz r11,28(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28);
	// lfs f30,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bdfa4
	if (cr6.eq) goto loc_824BDFA4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x824c1720
	sub_824C1720(ctx, base);
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
loc_824BDFA4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x824bdfc0
	if (!cr6.eq) goto loc_824BDFC0;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_824BDFC0:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// lfs f0,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 228);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x824be0a8
	if (!cr6.gt) goto loc_824BE0A8;
	// lbz r11,28(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824be0a8
	if (cr6.eq) goto loc_824BE0A8;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824bdff8
	if (cr6.eq) goto loc_824BDFF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824bdffc
	if (!cr6.eq) goto loc_824BDFFC;
loc_824BDFF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BDFFC:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - f0.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,812(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 812);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// blt cr6,0x824be030
	if (cr6.lt) goto loc_824BE030;
	// li r11,0
	r11.s64 = 0;
loc_824BE030:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824be06c
	if (cr6.eq) goto loc_824BE06C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824be054
	if (cr6.eq) goto loc_824BE054;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824be058
	if (!cr6.eq) goto loc_824BE058;
loc_824BE054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BE058:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// b 0x824be0a8
	goto loc_824BE0A8;
loc_824BE06C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824be080
	if (cr6.eq) goto loc_824BE080;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824be084
	if (!cr6.eq) goto loc_824BE084;
loc_824BE080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BE084:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fnmsubs f12,f1,f0,f13
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * f0.f64 - ctx.f13.f64)));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_824BE0A8:
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f12,796(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 796);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x824be0fc
	if (!cr6.gt) goto loc_824BE0FC;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f13
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x824be0dc
	if (!cr6.lt) goto loc_824BE0DC;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
loc_824BE0DC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824be0f8
	if (!cr6.lt) goto loc_824BE0F8;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_824BE0F8:
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_824BE0FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242c5a8
	sub_8242C5A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824be134
	if (cr6.eq) goto loc_824BE134;
	// lfs f0,796(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 796);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x824be134
	if (cr6.lt) goto loc_824BE134;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bde48
	sub_824BDE48(ctx, base);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_824BE134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_824BE140"))) PPC_WEAK_FUNC(sub_824BE140);
PPC_FUNC_IMPL(__imp__sub_824BE140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824BE144"))) PPC_WEAK_FUNC(sub_824BE144);
PPC_FUNC_IMPL(__imp__sub_824BE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE148"))) PPC_WEAK_FUNC(sub_824BE148);
PPC_FUNC_IMPL(__imp__sub_824BE148) {
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
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bdf28
	sub_824BDF28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824BE194"))) PPC_WEAK_FUNC(sub_824BE194);
PPC_FUNC_IMPL(__imp__sub_824BE194) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824BE198"))) PPC_WEAK_FUNC(sub_824BE198);
PPC_FUNC_IMPL(__imp__sub_824BE198) {
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
	// lbz r11,289(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 289);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824be1f0
	if (cr6.eq) goto loc_824BE1F0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bec30
	sub_824BEC30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824be1f0
	if (cr6.eq) goto loc_824BE1F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824BE1F0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bdf28
	sub_824BDF28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824BE208"))) PPC_WEAK_FUNC(sub_824BE208);
PPC_FUNC_IMPL(__imp__sub_824BE208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824BE20C"))) PPC_WEAK_FUNC(sub_824BE20C);
PPC_FUNC_IMPL(__imp__sub_824BE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE210"))) PPC_WEAK_FUNC(sub_824BE210);
PPC_FUNC_IMPL(__imp__sub_824BE210) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,828
	ctx.r10.s64 = r11.s64 + 828;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c1a38
	sub_824C1A38(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824be258
	if (cr6.eq) goto loc_824BE258;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824BE258:
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

__attribute__((alias("__imp__sub_824BE26C"))) PPC_WEAK_FUNC(sub_824BE26C);
PPC_FUNC_IMPL(__imp__sub_824BE26C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE270"))) PPC_WEAK_FUNC(sub_824BE270);
PPC_FUNC_IMPL(__imp__sub_824BE270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE274"))) PPC_WEAK_FUNC(sub_824BE274);
PPC_FUNC_IMPL(__imp__sub_824BE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE278"))) PPC_WEAK_FUNC(sub_824BE278);
PPC_FUNC_IMPL(__imp__sub_824BE278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE27C"))) PPC_WEAK_FUNC(sub_824BE27C);
PPC_FUNC_IMPL(__imp__sub_824BE27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE280"))) PPC_WEAK_FUNC(sub_824BE280);
PPC_FUNC_IMPL(__imp__sub_824BE280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE284"))) PPC_WEAK_FUNC(sub_824BE284);
PPC_FUNC_IMPL(__imp__sub_824BE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE288"))) PPC_WEAK_FUNC(sub_824BE288);
PPC_FUNC_IMPL(__imp__sub_824BE288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE28C"))) PPC_WEAK_FUNC(sub_824BE28C);
PPC_FUNC_IMPL(__imp__sub_824BE28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE290"))) PPC_WEAK_FUNC(sub_824BE290);
PPC_FUNC_IMPL(__imp__sub_824BE290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
loc_824BE2C4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r7,36
	r11.s64 = ctx.r7.s64 + 36;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r8,40(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x824be320
	if (cr6.eq) goto loc_824BE320;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_824BE300:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x824be31c
	if (cr6.eq) goto loc_824BE31C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x824be300
	if (!cr6.eq) goto loc_824BE300;
	// b 0x824be320
	goto loc_824BE320;
loc_824BE31C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_824BE320:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x824be2c4
	if (!cr6.eq) goto loc_824BE2C4;
}

__attribute__((alias("__imp__sub_824BE32C"))) PPC_WEAK_FUNC(sub_824BE32C);
PPC_FUNC_IMPL(__imp__sub_824BE32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE330"))) PPC_WEAK_FUNC(sub_824BE330);
PPC_FUNC_IMPL(__imp__sub_824BE330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x824be380
	if (cr6.eq) goto loc_824BE380;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_824BE364:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x824be364
	if (!cr6.eq) goto loc_824BE364;
loc_824BE380:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE388"))) PPC_WEAK_FUNC(sub_824BE388);
PPC_FUNC_IMPL(__imp__sub_824BE388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// bgt cr6,0x824be9d8
	if (cr6.gt) goto loc_824BE9D8;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824be504
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE504;
	// bdzf 4*cr6+eq,0x824be544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE544;
	// bdzf 4*cr6+eq,0x824be82c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE82C;
	// bdzf 4*cr6+eq,0x824be678
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE678;
	// bdzf 4*cr6+eq,0x824be86c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE86C;
	// bdzf 4*cr6+eq,0x824be9a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824BE9A0;
	// bne cr6,0x824be7ac
	if (!cr6.eq) goto loc_824BE7AC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
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
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-29224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f9,292(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f8,296(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f7,300(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f1,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,384(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f1,388(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f0,392(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f13,396(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f1,3792(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,-512(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE504:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,320(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f11,332(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE544:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f1,-29224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,448(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f9,452(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f8,456(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f7,460(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f1,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,224(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f5,228(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f4,232(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f3,236(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f1,752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,352(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f1,356(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f0,360(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f13,364(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// bl 0x824781a0
	sub_824781A0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f1,3792(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f9,268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f1,-512(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE678:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,416(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f13,420(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f12,424(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f11,428(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// bl 0x824782d0
	sub_824782D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f1,-29224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x824782d0
	sub_824782D0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,3792(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x824782d0
	sub_824782D0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f1,-512(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE7AC:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x824782d0
	sub_824782D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f1,-29224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f8,248(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x824782d0
	sub_824782D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f1,-512(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE82C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f11,284(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bl 0x8249d398
	sub_8249D398(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE86C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,304(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f11,316(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x8249d398
	sub_8249D398(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f1,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,336(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f9,340(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f8,344(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f7,348(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f1,888(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,368(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f5,372(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f4,376(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f3,380(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// bl 0x8249d398
	sub_8249D398(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f1,884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 884);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,400(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f1,404(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f0,408(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f13,412(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f1,880(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 880);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,432(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f11,436(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f10,440(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f9,444(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// bl 0x8249d398
	sub_8249D398(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f1,876(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5c0
	sub_8249E5C0(ctx, base);
	// b 0x824be9d8
	goto loc_824BE9D8;
loc_824BE9A0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,464(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f13,468(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f12,472(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f11,476(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bl 0x82478238
	sub_82478238(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lfs f1,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5b0
	sub_8249E5B0(ctx, base);
loc_824BE9D8:
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BE9F0"))) PPC_WEAK_FUNC(sub_824BE9F0);
PPC_FUNC_IMPL(__imp__sub_824BE9F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BE9F4"))) PPC_WEAK_FUNC(sub_824BE9F4);
PPC_FUNC_IMPL(__imp__sub_824BE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BE9F8"))) PPC_WEAK_FUNC(sub_824BE9F8);
PPC_FUNC_IMPL(__imp__sub_824BE9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bea8c
	if (cr6.eq) goto loc_824BEA8C;
loc_824BEA1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x824bea38
	if (cr6.eq) goto loc_824BEA38;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bea1c
	if (!cr6.eq) goto loc_824BEA1C;
	// b 0x824bea8c
	goto loc_824BEA8C;
loc_824BEA38:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x824bea80
	if (!cr6.lt) goto loc_824BEA80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_824BEA58:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x824bea58
	if (cr6.lt) goto loc_824BEA58;
loc_824BEA80:
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r11.u32);
loc_824BEA8C:
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// beq cr6,0x824beb58
	if (cr6.eq) goto loc_824BEB58;
loc_824BEAA8:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r10,36
	r11.s64 = ctx.r10.s64 + 36;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x824beb3c
	if (cr6.eq) goto loc_824BEB3C;
loc_824BEACC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x824beae8
	if (cr6.eq) goto loc_824BEAE8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x824beacc
	if (!cr6.eq) goto loc_824BEACC;
	// b 0x824beb3c
	goto loc_824BEB3C;
loc_824BEAE8:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r4,r8,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srawi r10,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x824beb30
	if (!cr6.lt) goto loc_824BEB30;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_824BEB08:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x824beb08
	if (cr6.lt) goto loc_824BEB08;
loc_824BEB30:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_824BEB3C:
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x824beaa8
	if (!cr6.eq) goto loc_824BEAA8;
loc_824BEB58:
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r11,r5,36
	r11.s64 = ctx.r5.s64 + 36;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824beb80
	if (!cr6.gt) goto loc_824BEB80;
loc_824BEB68:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824beb68
	if (cr6.gt) goto loc_824BEB68;
loc_824BEB80:
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x824beb94
	if (!cr6.eq) goto loc_824BEB94;
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
loc_824BEB94:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824BEBB4"))) PPC_WEAK_FUNC(sub_824BEBB4);
PPC_FUNC_IMPL(__imp__sub_824BEBB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BEBB8"))) PPC_WEAK_FUNC(sub_824BEBB8);
PPC_FUNC_IMPL(__imp__sub_824BEBB8) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824BEBE4"))) PPC_WEAK_FUNC(sub_824BEBE4);
PPC_FUNC_IMPL(__imp__sub_824BEBE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BEBE8"))) PPC_WEAK_FUNC(sub_824BEBE8);
PPC_FUNC_IMPL(__imp__sub_824BEBE8) {
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
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beq cr6,0x824bec20
	if (cr6.eq) goto loc_824BEC20;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824BEC20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824BEC2C"))) PPC_WEAK_FUNC(sub_824BEC2C);
PPC_FUNC_IMPL(__imp__sub_824BEC2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BEC30"))) PPC_WEAK_FUNC(sub_824BEC30);
PPC_FUNC_IMPL(__imp__sub_824BEC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
loc_824BEC64:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bece0
	if (cr6.eq) goto loc_824BECE0;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fsubs f0,f2,f4
	f0.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f11,f6,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f10,f5,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f9,f1,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f8,f0,f0,f10
	ctx.f8.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x824becd4
	if (cr6.lt) goto loc_824BECD4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824BECD4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824bece4
	if (cr6.eq) goto loc_824BECE4;
loc_824BECE0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_824BECE4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x824bec64
	if (!cr6.eq) goto loc_824BEC64;
}

__attribute__((alias("__imp__sub_824BECF0"))) PPC_WEAK_FUNC(sub_824BECF0);
PPC_FUNC_IMPL(__imp__sub_824BECF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BECF4"))) PPC_WEAK_FUNC(sub_824BECF4);
PPC_FUNC_IMPL(__imp__sub_824BECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BECF8"))) PPC_WEAK_FUNC(sub_824BECF8);
PPC_FUNC_IMPL(__imp__sub_824BECF8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824bee60
	if (cr6.eq) goto loc_824BEE60;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x824bee60
	if (!cr6.gt) goto loc_824BEE60;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x824bee60
	if (cr6.gt) goto loc_824BEE60;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824bed78
	if (cr6.eq) goto loc_824BED78;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fadds f0,f0,f4
	f0.f64 = double(float(f0.f64 + ctx.f4.f64));
loc_824BED78:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x824bed84
	if (!cr6.gt) goto loc_824BED84;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_824BED84:
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,36
	r28.s64 = r31.s64 + 36;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// stfs f11,32(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r11
	r30.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x824bee60
	if (cr6.eq) goto loc_824BEE60;
	// li r26,1
	r26.s64 = 1;
loc_824BEDB8:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x824bedf8
	if (cr6.eq) goto loc_824BEDF8;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bede4
	if (cr6.eq) goto loc_824BEDE4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x824bede4
	if (!cr6.eq) goto loc_824BEDE4;
	// stb r26,21(r5)
	PPC_STORE_U8(ctx.r5.u32 + 21, r26.u8);
loc_824BEDE4:
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824becf8
	sub_824BECF8(ctx, base);
	// b 0x824bee44
	goto loc_824BEE44;
loc_824BEDF8:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(f0.f64 + ctx.f5.f64));
	// fsubs f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsel f11,f12,f4,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// stfs f11,32(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
loc_824BEE44:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x824bedb8
	if (!cr6.eq) goto loc_824BEDB8;
loc_824BEE60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824BEE64"))) PPC_WEAK_FUNC(sub_824BEE64);
PPC_FUNC_IMPL(__imp__sub_824BEE64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824BEE68"))) PPC_WEAK_FUNC(sub_824BEE68);
PPC_FUNC_IMPL(__imp__sub_824BEE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x824beed4
	if (cr6.eq) goto loc_824BEED4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_824BEEAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stb r6,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r6.u8);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x824beeac
	if (!cr6.eq) goto loc_824BEEAC;
loc_824BEED4:
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824beef8
	if (!cr6.gt) goto loc_824BEEF8;
	// lwz r11,36(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824beef8
	if (!cr6.eq) goto loc_824BEEF8;
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r10.u32);
loc_824BEEF8:
	// lbz r11,28(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bef2c
	if (cr6.eq) goto loc_824BEF2C;
	// lwz r11,36(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bef2c
	if (cr6.eq) goto loc_824BEF2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,21(r11)
	PPC_STORE_U8(r11.u32 + 21, ctx.r10.u8);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,36(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x824becf8
	sub_824BECF8(ctx, base);
loc_824BEF2C:
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x824bef84
	if (!cr6.gt) goto loc_824BEF84;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bef84
	if (cr6.eq) goto loc_824BEF84;
loc_824BEF54:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f12,32(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x824bef54
	if (!cr6.eq) goto loc_824BEF54;
loc_824BEF84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BEF94"))) PPC_WEAK_FUNC(sub_824BEF94);
PPC_FUNC_IMPL(__imp__sub_824BEF94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BEF98"))) PPC_WEAK_FUNC(sub_824BEF98);
PPC_FUNC_IMPL(__imp__sub_824BEF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8784(r1)
	ea = -8784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,8624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8624, ctx.r10.u32);
	// bl 0x82423720
	sub_82423720(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r7,-31416
	ctx.r5.s64 = ctx.r7.s64 + -31416;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,8496
	ctx.r3.s64 = ctx.r1.s64 + 8496;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,8496
	ctx.r6.s64 = ctx.r1.s64 + 8496;
	// addi r5,r5,1356
	ctx.r5.s64 = ctx.r5.s64 + 1356;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// addi r4,r1,8368
	ctx.r4.s64 = ctx.r1.s64 + 8368;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826df6e0
	sub_826DF6E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826dfbe0
	sub_826DFBE0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826df9c8
	sub_826DF9C8(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,1332
	ctx.r4.s64 = ctx.r4.s64 + 1332;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1324
	ctx.r4.s64 = r11.s64 + 1324;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lwz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// addi r23,r20,4
	r23.s64 = r20.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bf0a0
	if (cr6.eq) goto loc_824BF0A0;
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
loc_824BF084:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x824bf0a4
	if (cr6.eq) goto loc_824BF0A4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf084
	if (!cr6.eq) goto loc_824BF084;
loc_824BF0A0:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_824BF0A4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r4,r11,1284
	ctx.r4.s64 = r11.s64 + 1284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r21,r10,13564
	r21.s64 = ctx.r10.s64 + 13564;
	// addi r22,r11,13556
	r22.s64 = r11.s64 + 13556;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lbz r10,28(r20)
	ctx.r10.u64 = PPC_LOAD_U8(r20.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824bf0dc
	if (!cr6.eq) goto loc_824BF0DC;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_824BF0DC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1252
	ctx.r4.s64 = r11.s64 + 1252;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,1212
	ctx.r4.s64 = ctx.r10.s64 + 1212;
	// li r29,0
	r29.s64 = 0;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r19,r11,1200
	r19.s64 = r11.s64 + 1200;
	// addi r18,r10,1188
	r18.s64 = ctx.r10.s64 + 1188;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r30,8(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x824bf23c
	if (cr6.eq) goto loc_824BF23C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r28,r11,1152
	r28.s64 = r11.s64 + 1152;
	// addi r25,r10,1116
	r25.s64 = ctx.r10.s64 + 1116;
	// addi r24,r9,1084
	r24.s64 = ctx.r9.s64 + 1084;
	// addi r27,r8,1040
	r27.s64 = ctx.r8.s64 + 1040;
	// addi r26,r7,1012
	r26.s64 = ctx.r7.s64 + 1012;
loc_824BF154:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// lfs f29,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f29.f64 = double(temp.f32);
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bf1c8
	if (!cr6.eq) goto loc_824BF1C8;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_824BF1C8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bf1e8
	if (!cr6.eq) goto loc_824BF1E8;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_824BF1E8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lbz r11,23(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 23);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bf208
	if (!cr6.eq) goto loc_824BF208;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_824BF208:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf154
	if (!cr6.eq) goto loc_824BF154;
loc_824BF23C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r24,r11,1000
	r24.s64 = r11.s64 + 1000;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,960
	ctx.r4.s64 = r11.s64 + 960;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r25,8(r20)
	r25.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bf394
	if (cr6.eq) goto loc_824BF394;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r9,932
	r27.s64 = ctx.r9.s64 + 932;
	// addi r26,r11,900
	r26.s64 = r11.s64 + 900;
loc_824BF28C:
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bf2bc
	if (cr6.eq) goto loc_824BF2BC;
loc_824BF2A0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x824bf3ec
	if (cr6.eq) goto loc_824BF3EC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf2a0
	if (!cr6.eq) goto loc_824BF2A0;
loc_824BF2BC:
	// li r28,-1
	r28.s64 = -1;
loc_824BF2C0:
	// lwz r11,48(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r29,r8,36
	r29.s64 = ctx.r8.s64 + 36;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bf378
	if (cr6.eq) goto loc_824BF378;
loc_824BF2E0:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824bf320
	if (cr6.eq) goto loc_824BF320;
loc_824BF304:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x824bf3f4
	if (cr6.eq) goto loc_824BF3F4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf304
	if (!cr6.eq) goto loc_824BF304;
loc_824BF320:
	// li r30,-1
	r30.s64 = -1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf2e0
	if (!cr6.eq) goto loc_824BF2E0;
loc_824BF378:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf28c
	if (!cr6.eq) goto loc_824BF28C;
loc_824BF394:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,892
	ctx.r4.s64 = r11.s64 + 892;
	// bl 0x826d7ba8
	sub_826D7BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826df938
	sub_826DF938(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826df9e0
	sub_826DF9E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826dfeb8
	sub_826DFEB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826df868
	sub_826DF868(ctx, base);
	// lwz r3,8624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8624);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,8784
	ctx.r1.s64 = ctx.r1.s64 + 8784;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x828e9440
	return;
loc_824BF3EC:
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// b 0x824bf2c0
	goto loc_824BF2C0;
loc_824BF3F4:
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
}

__attribute__((alias("__imp__sub_824BF3F8"))) PPC_WEAK_FUNC(sub_824BF3F8);
PPC_FUNC_IMPL(__imp__sub_824BF3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824bf324
	// ERROR 824BF324
	return;
}

__attribute__((alias("__imp__sub_824BF3FC"))) PPC_WEAK_FUNC(sub_824BF3FC);
PPC_FUNC_IMPL(__imp__sub_824BF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BF400"))) PPC_WEAK_FUNC(sub_824BF400);
PPC_FUNC_IMPL(__imp__sub_824BF400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r6,r11
	ctx.r6.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_824BF420:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// ble cr6,0x824bf478
	if (!cr6.gt) goto loc_824BF478;
	// lwz r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// li r11,4
	r11.s64 = 4;
loc_824BF43C:
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824bf45c
	if (cr6.eq) goto loc_824BF45C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x824bf43c
	if (cr6.lt) goto loc_824BF43C;
	// b 0x824bf478
	goto loc_824BF478;
loc_824BF45C:
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
loc_824BF478:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf420
	if (!cr6.eq) goto loc_824BF420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BF498"))) PPC_WEAK_FUNC(sub_824BF498);
PPC_FUNC_IMPL(__imp__sub_824BF498) {
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
	// bl 0x828eaaf4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-24204(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -24204);
	f0.f64 = double(temp.f32);
	// lfs f13,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f0,-24204(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -24204, temp.u32);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x824bf4f0
	if (!cr6.gt) goto loc_824BF4F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,-24204(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -24204, temp.u32);
loc_824BF4F0:
	// addi r30,r5,20
	r30.s64 = ctx.r5.s64 + 20;
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f30,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	f30.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f29,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	f29.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - f30.f64));
	// lfs f28,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f28.f64 = double(temp.f32);
	// fsubs f9,f0,f29
	ctx.f9.f64 = double(float(f0.f64 - f29.f64));
	// lfs f27,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f27.f64 = double(temp.f32);
	// fsubs f8,f13,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsubs f7,f12,f27
	ctx.f7.f64 = double(float(ctx.f12.f64 - f27.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r10,-24200
	ctx.r5.s64 = ctx.r10.s64 + -24200;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f1,860(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r8,-25128
	ctx.r3.s64 = ctx.r8.s64 + -25128;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 852);
	f0.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fadds f11,f30,f4
	ctx.f11.f64 = double(float(f30.f64 + ctx.f4.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f10,f29,f2
	ctx.f10.f64 = double(float(f29.f64 + ctx.f2.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f9,f28,f13
	ctx.f9.f64 = double(float(f28.f64 + ctx.f13.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f8,f27,f12
	ctx.f8.f64 = double(float(f27.f64 + ctx.f12.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14120(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824bf5cc
	if (cr6.eq) goto loc_824BF5CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824bf5d0
	if (!cr6.eq) goto loc_824BF5D0;
loc_824BF5CC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824BF5D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r9,r11,6656
	ctx.r9.s64 = r11.s64 + 6656;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// addi r8,r10,6644
	ctx.r8.s64 = ctx.r10.s64 + 6644;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824bf69c
	if (cr6.eq) goto loc_824BF69C;
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f0.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// lfs f13,-15528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15528);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f10,f0,f4
	ctx.f10.f64 = double(float(f0.f64 * ctx.f4.f64));
	// fmuls f6,f0,f2
	ctx.f6.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f0,f4,f13
	f0.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_824BF69C:
	// lfs f30,-24204(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -24204);
	f30.f64 = double(temp.f32);
	// bl 0x823cb890
	sub_823CB890(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8249dde0
	sub_8249DDE0(ctx, base);
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * f30.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmuls f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f30.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	f0.f64 = double(temp.f32);
	// addi r7,r9,-6984
	ctx.r7.s64 = ctx.r9.s64 + -6984;
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f2,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f11,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f10,f2,f4
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8249e598
	sub_8249E598(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_824BF774"))) PPC_WEAK_FUNC(sub_824BF774);
PPC_FUNC_IMPL(__imp__sub_824BF774) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824BF778"))) PPC_WEAK_FUNC(sub_824BF778);
PPC_FUNC_IMPL(__imp__sub_824BF778) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-7000
	ctx.r8.s64 = r11.s64 + -7000;
	// addi r7,r10,1392
	ctx.r7.s64 = ctx.r10.s64 + 1392;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f0,-7000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7000);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r4,r5,1380
	ctx.r4.s64 = ctx.r5.s64 + 1380;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lfs f0,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, r11.u8);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824BF830"))) PPC_WEAK_FUNC(sub_824BF830);
PPC_FUNC_IMPL(__imp__sub_824BF830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BF834"))) PPC_WEAK_FUNC(sub_824BF834);
PPC_FUNC_IMPL(__imp__sub_824BF834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BF838"))) PPC_WEAK_FUNC(sub_824BF838);
PPC_FUNC_IMPL(__imp__sub_824BF838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r9,r10,1392
	ctx.r9.s64 = ctx.r10.s64 + 1392;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_824BF84C"))) PPC_WEAK_FUNC(sub_824BF84C);
PPC_FUNC_IMPL(__imp__sub_824BF84C) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c0978
	sub_824C0978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BF850"))) PPC_WEAK_FUNC(sub_824BF850);
PPC_FUNC_IMPL(__imp__sub_824BF850) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,1400
	ctx.r9.s64 = r11.s64 + 1400;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,1380
	ctx.r8.s64 = ctx.r10.s64 + 1380;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r30.u8);
	// lfs f0,21036(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
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

__attribute__((alias("__imp__sub_824BF8D8"))) PPC_WEAK_FUNC(sub_824BF8D8);
PPC_FUNC_IMPL(__imp__sub_824BF8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BF8DC"))) PPC_WEAK_FUNC(sub_824BF8DC);
PPC_FUNC_IMPL(__imp__sub_824BF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BF8E0"))) PPC_WEAK_FUNC(sub_824BF8E0);
PPC_FUNC_IMPL(__imp__sub_824BF8E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,1400
	ctx.r10.s64 = r11.s64 + 1400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x824bf95c
	if (cr6.eq) goto loc_824BF95C;
loc_824BF920:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bf940
	if (cr6.eq) goto loc_824BF940;
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
loc_824BF940:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824bf920
	if (!cr6.eq) goto loc_824BF920;
loc_824BF95C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c0978
	sub_824C0978(ctx, base);
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

__attribute__((alias("__imp__sub_824BF978"))) PPC_WEAK_FUNC(sub_824BF978);
PPC_FUNC_IMPL(__imp__sub_824BF978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824BF97C"))) PPC_WEAK_FUNC(sub_824BF97C);
PPC_FUNC_IMPL(__imp__sub_824BF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BF980"))) PPC_WEAK_FUNC(sub_824BF980);
PPC_FUNC_IMPL(__imp__sub_824BF980) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// addi r7,r10,1404
	ctx.r7.s64 = ctx.r10.s64 + 1404;
	// li r8,210
	ctx.r8.s64 = 210;
	// li r3,64
	ctx.r3.s64 = 64;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824bf9f0
	if (cr6.eq) goto loc_824BF9F0;
	// bl 0x824bf778
	sub_824BF778(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x824bf9f4
	goto loc_824BF9F4;
loc_824BF9F0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_824BF9F4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stb r28,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r28.u8);
	// stb r27,22(r11)
	PPC_STORE_U8(r11.u32 + 22, r27.u8);
	// stb r26,23(r11)
	PPC_STORE_U8(r11.u32 + 23, r26.u8);
	// stw r25,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r25.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_824BFA38"))) PPC_WEAK_FUNC(sub_824BFA38);
PPC_FUNC_IMPL(__imp__sub_824BFA38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824BFA3C"))) PPC_WEAK_FUNC(sub_824BFA3C);
PPC_FUNC_IMPL(__imp__sub_824BFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BFA40"))) PPC_WEAK_FUNC(sub_824BFA40);
PPC_FUNC_IMPL(__imp__sub_824BFA40) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824bfe54
	if (cr6.eq) goto loc_824BFE54;
	// lwz r28,48(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x824bfe54
	if (!cr6.gt) goto loc_824BFE54;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// ble cr6,0x824bfe38
	if (!cr6.gt) goto loc_824BFE38;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824bfd44
	if (cr6.eq) goto loc_824BFD44;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bfd44
	if (!cr6.eq) goto loc_824BFD44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c0918
	sub_824C0918(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824c0918
	sub_824C0918(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x824bfb24
	if (!cr6.gt) goto loc_824BFB24;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_824BFAB8:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lbz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 22);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824bfaf8
	if (cr6.eq) goto loc_824BFAF8;
	// lbz r9,23(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824bfaf0
	if (!cr6.eq) goto loc_824BFAF0;
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824bfaf0
	if (cr6.eq) goto loc_824BFAF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x824bfb14
	goto loc_824BFB14;
loc_824BFAF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824bfb18
	if (!cr6.eq) goto loc_824BFB18;
loc_824BFAF8:
	// lbz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824bfb18
	if (!cr6.eq) goto loc_824BFB18;
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bfb18
	if (!cr6.eq) goto loc_824BFB18;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_824BFB14:
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824BFB18:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x824bfab8
	if (!cr0.eq) goto loc_824BFAB8;
loc_824BFB24:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bfbd4
	if (cr6.eq) goto loc_824BFBD4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f2,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x824bfbb8
	if (cr6.gt) goto loc_824BFBB8;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x824bfbb8
	if (!cr6.gt) goto loc_824BFBB8;
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// divwu r11,r3,r30
	r11.u32 = ctx.r3.u32 / r30.u32;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// ble cr6,0x824bfbb8
	if (!cr6.gt) goto loc_824BFBB8;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_824BFB90:
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x824bfbb0
	if (cr6.eq) goto loc_824BFBB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// blt cr6,0x824bfb90
	if (cr6.lt) goto loc_824BFB90;
	// b 0x824bfbb8
	goto loc_824BFBB8;
loc_824BFBB0:
	// li r31,1
	r31.s64 = 1;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_824BFBB8:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bfbd4
	if (cr6.eq) goto loc_824BFBD4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_824BFBC8:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x824bfbc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824BFBC8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_824BFBD4:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bfd18
	if (!cr6.eq) goto loc_824BFD18;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// extsw r7,r11
	ctx.r7.s64 = r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lfs f2,4932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4932);
	ctx.f2.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f1,1468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1468);
	ctx.f1.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f10,f9
	f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// fadds f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,3792(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// ble cr6,0x824bfd0c
	if (!cr6.gt) goto loc_824BFD0C;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bfd0c
	if (cr6.eq) goto loc_824BFD0C;
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// divwu r11,r3,r31
	r11.u32 = ctx.r3.u32 / r31.u32;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// ble cr6,0x824bfcd4
	if (!cr6.gt) goto loc_824BFCD4;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_824BFC7C:
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x824bfcd0
	if (cr6.eq) goto loc_824BFCD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// blt cr6,0x824bfc7c
	if (cr6.lt) goto loc_824BFC7C;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824BFCD0:
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_824BFCD4:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824BFD0C:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
loc_824BFD18:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824BFD44:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lfs f13,856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x824bfe38
	if (!cr6.gt) goto loc_824BFE38;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824BFD60:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824bfde8
	if (cr6.eq) goto loc_824BFDE8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824bfde8
	if (cr6.eq) goto loc_824BFDE8;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824bfd90
	if (!cr6.eq) goto loc_824BFD90;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbz r6,22(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 22);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x824bfe08
	if (!cr6.eq) goto loc_824BFE08;
loc_824BFD90:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbz r7,23(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x824bfe08
	if (!cr6.eq) goto loc_824BFE08;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824bfe08
	if (!cr6.lt) goto loc_824BFE08;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// b 0x824bfe08
	goto loc_824BFE08;
loc_824BFDE8:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbz r7,21(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824bfe08
	if (cr6.eq) goto loc_824BFE08;
	// lbz r11,23(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824bfe34
	if (cr6.eq) goto loc_824BFE34;
loc_824BFE08:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// blt cr6,0x824bfd60
	if (cr6.lt) goto loc_824BFD60;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824BFE34:
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_824BFE38:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824BFE54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_824BFE64"))) PPC_WEAK_FUNC(sub_824BFE64);
PPC_FUNC_IMPL(__imp__sub_824BFE64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824BFE68"))) PPC_WEAK_FUNC(sub_824BFE68);
PPC_FUNC_IMPL(__imp__sub_824BFE68) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826ce398
	sub_826CE398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826ce370
	sub_826CE370(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// li r31,0
	r31.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// fdivs f31,f31,f12
	f31.f64 = double(float(f31.f64 / ctx.f12.f64));
	// ble cr6,0x824bff14
	if (!cr6.gt) goto loc_824BFF14;
loc_824BFEC8:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826ce610
	sub_826CE610(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824bf980
	sub_824BF980(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// blt cr6,0x824bfec8
	if (cr6.lt) goto loc_824BFEC8;
loc_824BFF14:
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// ble cr6,0x824bff9c
	if (!cr6.gt) goto loc_824BFF9C;
	// li r30,4
	r30.s64 = 4;
loc_824BFF24:
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x824bff8c
	if (cr6.eq) goto loc_824BFF8C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// lwzx r28,r30,r11
	r28.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,-4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x824bff6c
	if (!cr6.gt) goto loc_824BFF6C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824BFF6C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824bff8c
	if (cr0.eq) goto loc_824BFF8C;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_824BFF8C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// blt cr6,0x824bff24
	if (cr6.lt) goto loc_824BFF24;
loc_824BFF9C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,28(r29)
	PPC_STORE_U8(r29.u32 + 28, ctx.r10.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824bffbc
	if (!cr6.gt) goto loc_824BFFBC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r10.u32);
loc_824BFFBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824bee68
	sub_824BEE68(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_824BFFD4"))) PPC_WEAK_FUNC(sub_824BFFD4);
PPC_FUNC_IMPL(__imp__sub_824BFFD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824BFFD8"))) PPC_WEAK_FUNC(sub_824BFFD8);
PPC_FUNC_IMPL(__imp__sub_824BFFD8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r3,r11,1548
	ctx.r3.s64 = r11.s64 + 1548;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r10,12(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r19,4
	r31.s64 = r19.s64 + 4;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x824c0050
	if (!cr6.gt) goto loc_824C0050;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824C0050:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r17,0
	r17.s64 = 0;
	// li r16,-1
	r16.s64 = -1;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x824c0344
	if (!cr6.gt) goto loc_824C0344;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r17.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r17,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r17.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r25,r11,13852
	r25.s64 = r11.s64 + 13852;
	// addi r24,r10,1540
	r24.s64 = ctx.r10.s64 + 1540;
	// addi r23,r9,1528
	r23.s64 = ctx.r9.s64 + 1528;
	// addi r21,r8,1520
	r21.s64 = ctx.r8.s64 + 1520;
	// addi r22,r7,9468
	r22.s64 = ctx.r7.s64 + 9468;
loc_824C00A8:
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c012c
	if (cr6.eq) goto loc_824C012C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c012c
	if (cr6.eq) goto loc_824C012C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c0134
	if (!cr6.eq) goto loc_824C0134;
loc_824C012C:
	// bl 0x82334928
	sub_82334928(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_824C0134:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c01bc
	if (cr6.eq) goto loc_824C01BC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c01bc
	if (cr6.eq) goto loc_824C01BC;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c01c0
	if (!cr6.eq) goto loc_824C01C0;
loc_824C01BC:
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
loc_824C01C0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c022c
	if (cr6.eq) goto loc_824C022C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c022c
	if (cr6.eq) goto loc_824C022C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c0230
	if (!cr6.eq) goto loc_824C0230;
loc_824C022C:
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
loc_824C0230:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c029c
	if (cr6.eq) goto loc_824C029C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c029c
	if (cr6.eq) goto loc_824C029C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c02a0
	if (!cr6.eq) goto loc_824C02A0;
loc_824C029C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_824C02A0:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c030c
	if (cr6.eq) goto loc_824C030C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c030c
	if (cr6.eq) goto loc_824C030C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c0310
	if (!cr6.eq) goto loc_824C0310;
loc_824C030C:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824C0310:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824bf980
	sub_824BF980(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x824c00a8
	if (cr6.lt) goto loc_824C00A8;
loc_824C0344:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,1508
	ctx.r3.s64 = r11.s64 + 1508;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r22,r11,-13328
	r22.s64 = r11.s64 + -13328;
	// addi r28,r10,-13220
	r28.s64 = ctx.r10.s64 + -13220;
	// addi r21,r9,16804
	r21.s64 = ctx.r9.s64 + 16804;
	// ble cr6,0x824c0654
	if (!cr6.gt) goto loc_824C0654;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// addi r24,r11,1504
	r24.s64 = r11.s64 + 1504;
	// addi r23,r10,1496
	r23.s64 = ctx.r10.s64 + 1496;
loc_824C03BC:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c04d0
	if (cr6.eq) goto loc_824C04D0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c04d0
	if (cr6.eq) goto loc_824C04D0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0458
	if (cr6.eq) goto loc_824C0458;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x824c04c8
	goto loc_824C04C8;
loc_824C0458:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c04d0
	if (cr6.eq) goto loc_824C04D0;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c04c0
	if (cr6.eq) goto loc_824C04C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c04c0
	if (cr6.eq) goto loc_824C04C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824c04c4
	goto loc_824C04C4;
loc_824C04C0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824C04C4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_824C04C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c04d4
	if (!cr6.eq) goto loc_824C04D4;
loc_824C04D0:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824C04D4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c05d0
	if (cr6.eq) goto loc_824C05D0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c05d0
	if (cr6.eq) goto loc_824C05D0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0558
	if (cr6.eq) goto loc_824C0558;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x824c05c4
	goto loc_824C05C4;
loc_824C0558:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c05d0
	if (cr6.eq) goto loc_824C05D0;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c05c0
	if (cr6.eq) goto loc_824C05C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c05c0
	if (cr6.eq) goto loc_824C05C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824c05c4
	goto loc_824C05C4;
loc_824C05C0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824C05C4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x824c05d4
	if (!cr6.eq) goto loc_824C05D4;
loc_824C05D0:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_824C05D4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// beq cr6,0x824c0648
	if (cr6.eq) goto loc_824C0648;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r30,r8,r10
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// ble cr6,0x824c0628
	if (!cr6.gt) goto loc_824C0628;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824C0628:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824c0648
	if (cr0.eq) goto loc_824C0648;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_824C0648:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(r27.s32, r25.s32, xer);
	// blt cr6,0x824c03bc
	if (cr6.lt) goto loc_824C03BC;
loc_824C0654:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// addi r3,r11,1488
	ctx.r3.s64 = r11.s64 + 1488;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824c0750
	if (cr6.eq) goto loc_824C0750;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0750
	if (cr6.eq) goto loc_824C0750;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r6,r11,16844
	ctx.r6.s64 = r11.s64 + 16844;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c06d8
	if (cr6.eq) goto loc_824C06D8;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x824c0748
	goto loc_824C0748;
loc_824C06D8:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0750
	if (cr6.eq) goto loc_824C0750;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0740
	if (cr6.eq) goto loc_824C0740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c8398
	sub_822C8398(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0740
	if (cr6.eq) goto loc_824C0740;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824c0744
	goto loc_824C0744;
loc_824C0740:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824C0744:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_824C0748:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c0754
	if (!cr6.eq) goto loc_824C0754;
loc_824C0750:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_824C0754:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r11,28(r19)
	PPC_STORE_U8(r19.u32 + 28, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// addi r3,r10,1472
	ctx.r3.s64 = ctx.r10.s64 + 1472;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824c085c
	if (cr6.eq) goto loc_824C085C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c085c
	if (cr6.eq) goto loc_824C085C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c07e4
	if (cr6.eq) goto loc_824C07E4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x824c0850
	goto loc_824C0850;
loc_824C07E4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c085c
	if (cr6.eq) goto loc_824C085C;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c084c
	if (cr6.eq) goto loc_824C084C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c084c
	if (cr6.eq) goto loc_824C084C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824c0850
	goto loc_824C0850;
loc_824C084C:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824C0850:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x824c0860
	if (!cr6.eq) goto loc_824C0860;
loc_824C085C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_824C0860:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x824c0890
	if (cr6.lt) goto loc_824C0890;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x824c0890
	if (!cr6.lt) goto loc_824C0890;
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,36(r19)
	PPC_STORE_U32(r19.u32 + 36, ctx.r9.u32);
loc_824C0890:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824bee68
	sub_824BEE68(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
}

__attribute__((alias("__imp__sub_824C089C"))) PPC_WEAK_FUNC(sub_824C089C);
PPC_FUNC_IMPL(__imp__sub_824C089C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_824C08A0"))) PPC_WEAK_FUNC(sub_824C08A0);
PPC_FUNC_IMPL(__imp__sub_824C08A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c0a60
	sub_824C0A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C08A0"))) PPC_WEAK_FUNC(sub_824C08A0);
PPC_FUNC_IMPL(__imp__sub_824C08A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824C08A4"))) PPC_WEAK_FUNC(sub_824C08A4);
PPC_FUNC_IMPL(__imp__sub_824C08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C08A8"))) PPC_WEAK_FUNC(sub_824C08A8);
PPC_FUNC_IMPL(__imp__sub_824C08A8) {
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
	// addi r9,r11,868
	ctx.r9.s64 = r11.s64 + 868;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824c08ec
	if (!cr6.gt) goto loc_824C08EC;
loc_824C08D4:
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
	// bgt cr6,0x824c08d4
	if (cr6.gt) goto loc_824C08D4;
loc_824C08EC:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0904
	if (cr6.eq) goto loc_824C0904;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C0904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C0914"))) PPC_WEAK_FUNC(sub_824C0914);
PPC_FUNC_IMPL(__imp__sub_824C0914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0918"))) PPC_WEAK_FUNC(sub_824C0918);
PPC_FUNC_IMPL(__imp__sub_824C0918) {
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
	// addi r9,r10,1380
	ctx.r9.s64 = ctx.r10.s64 + 1380;
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

__attribute__((alias("__imp__sub_824C0970"))) PPC_WEAK_FUNC(sub_824C0970);
PPC_FUNC_IMPL(__imp__sub_824C0970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0974"))) PPC_WEAK_FUNC(sub_824C0974);
PPC_FUNC_IMPL(__imp__sub_824C0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0978"))) PPC_WEAK_FUNC(sub_824C0978);
PPC_FUNC_IMPL(__imp__sub_824C0978) {
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
	// addi r9,r11,1380
	ctx.r9.s64 = r11.s64 + 1380;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824c09bc
	if (!cr6.gt) goto loc_824C09BC;
loc_824C09A4:
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
	// bgt cr6,0x824c09a4
	if (cr6.gt) goto loc_824C09A4;
loc_824C09BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c0a60
	sub_824C0A60(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,868
	ctx.r10.s64 = r11.s64 + 868;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824c09f8
	if (!cr6.gt) goto loc_824C09F8;
loc_824C09E0:
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
	// bgt cr6,0x824c09e0
	if (cr6.gt) goto loc_824C09E0;
loc_824C09F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C0A08"))) PPC_WEAK_FUNC(sub_824C0A08);
PPC_FUNC_IMPL(__imp__sub_824C0A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0A0C"))) PPC_WEAK_FUNC(sub_824C0A0C);
PPC_FUNC_IMPL(__imp__sub_824C0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0A10"))) PPC_WEAK_FUNC(sub_824C0A10);
PPC_FUNC_IMPL(__imp__sub_824C0A10) {
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
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0a48
	if (cr6.eq) goto loc_824C0A48;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C0A48:
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

__attribute__((alias("__imp__sub_824C0A5C"))) PPC_WEAK_FUNC(sub_824C0A5C);
PPC_FUNC_IMPL(__imp__sub_824C0A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0A60"))) PPC_WEAK_FUNC(sub_824C0A60);
PPC_FUNC_IMPL(__imp__sub_824C0A60) {
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
	// beq cr6,0x824c0b44
	if (cr6.eq) goto loc_824C0B44;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c0ad4
	if (!cr6.eq) goto loc_824C0AD4;
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
	// beq cr6,0x824c0b44
	if (cr6.eq) goto loc_824C0B44;
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
	// b 0x824c0b44
	goto loc_824C0B44;
loc_824C0AD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c0918
	sub_824C0918(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824c0b00
	if (!cr6.gt) goto loc_824C0B00;
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
loc_824C0B00:
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
	// bl 0x824c0978
	sub_824C0978(ctx, base);
loc_824C0B44:
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

__attribute__((alias("__imp__sub_824C0B58"))) PPC_WEAK_FUNC(sub_824C0B58);
PPC_FUNC_IMPL(__imp__sub_824C0B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0B5C"))) PPC_WEAK_FUNC(sub_824C0B5C);
PPC_FUNC_IMPL(__imp__sub_824C0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0B60"))) PPC_WEAK_FUNC(sub_824C0B60);
PPC_FUNC_IMPL(__imp__sub_824C0B60) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r10,r11,1392
	ctx.r10.s64 = r11.s64 + 1392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824c0ba8
	if (cr6.eq) goto loc_824C0BA8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C0BA8:
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

__attribute__((alias("__imp__sub_824C0BBC"))) PPC_WEAK_FUNC(sub_824C0BBC);
PPC_FUNC_IMPL(__imp__sub_824C0BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0BC0"))) PPC_WEAK_FUNC(sub_824C0BC0);
PPC_FUNC_IMPL(__imp__sub_824C0BC0) {
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
	// bl 0x824bf8e0
	sub_824BF8E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0bf8
	if (cr6.eq) goto loc_824C0BF8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C0BF8:
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

__attribute__((alias("__imp__sub_824C0C0C"))) PPC_WEAK_FUNC(sub_824C0C0C);
PPC_FUNC_IMPL(__imp__sub_824C0C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C0C10"))) PPC_WEAK_FUNC(sub_824C0C10);
PPC_FUNC_IMPL(__imp__sub_824C0C10) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_824C0C18"))) PPC_WEAK_FUNC(sub_824C0C18);
PPC_FUNC_IMPL(__imp__sub_824C0C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c17e0
	sub_824C17E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0C1C"))) PPC_WEAK_FUNC(sub_824C0C1C);
PPC_FUNC_IMPL(__imp__sub_824C0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0C20"))) PPC_WEAK_FUNC(sub_824C0C20);
PPC_FUNC_IMPL(__imp__sub_824C0C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824c0c4c
	if (!cr6.gt) goto loc_824C0C4C;
loc_824C0C34:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824c0c34
	if (cr6.gt) goto loc_824C0C34;
loc_824C0C4C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_824C0C50"))) PPC_WEAK_FUNC(sub_824C0C50);
PPC_FUNC_IMPL(__imp__sub_824C0C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c17a8
	sub_824C17A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0C54"))) PPC_WEAK_FUNC(sub_824C0C54);
PPC_FUNC_IMPL(__imp__sub_824C0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0C58"))) PPC_WEAK_FUNC(sub_824C0C58);
PPC_FUNC_IMPL(__imp__sub_824C0C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfs f12,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(f0.f64 - ctx.f8.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f5
	ctx.f6.f64 = ctx.f5.f64;
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fsubs f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fmuls f0,f7,f7
	f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f11,f4,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + f0.f64));
	// fmadds f10,f1,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f0,f6,f8
	f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f9,f6,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f7,f0,f3
	ctx.f7.f64 = double(float(f0.f64 * ctx.f3.f64));
	// fmadds f6,f10,f11,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f0,f9,f8,f6
	f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824c0d20
	if (!cr6.lt) goto loc_824C0D20;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f12,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_824C0D20:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
}

__attribute__((alias("__imp__sub_824C0D28"))) PPC_WEAK_FUNC(sub_824C0D28);
PPC_FUNC_IMPL(__imp__sub_824C0D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82580f78
	sub_82580F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0D2C"))) PPC_WEAK_FUNC(sub_824C0D2C);
PPC_FUNC_IMPL(__imp__sub_824C0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0D30"))) PPC_WEAK_FUNC(sub_824C0D30);
PPC_FUNC_IMPL(__imp__sub_824C0D30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,52(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x824c0d7c
	if (!cr6.gt) goto loc_824C0D7C;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r11,0
	r11.s64 = 0;
loc_824C0D60:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// beq cr6,0x824c0e8c
	if (cr6.eq) goto loc_824C0E8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// blt cr6,0x824c0d60
	if (cr6.lt) goto loc_824C0D60;
loc_824C0D7C:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824c0d98
	if (!cr6.eq) goto loc_824C0D98;
	// lbz r11,6(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0d9c
	if (cr6.eq) goto loc_824C0D9C;
loc_824C0D98:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824C0D9C:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c0db8
	if (!cr6.eq) goto loc_824C0DB8;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c0dbc
	if (cr6.eq) goto loc_824C0DBC;
loc_824C0DB8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824C0DBC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824bfa40
	sub_824BFA40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c0e80
	if (cr6.eq) goto loc_824C0E80;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// ble cr6,0x824c0e28
	if (!cr6.gt) goto loc_824C0E28;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// ble cr6,0x824c0e18
	if (!cr6.gt) goto loc_824C0E18;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
loc_824C0DF4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// bne 0x824c0df4
	if (!cr0.eq) goto loc_824C0DF4;
loc_824C0E18:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
loc_824C0E28:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824c0e5c
	if (!cr6.gt) goto loc_824C0E5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824C0E5C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824c0e80
	if (cr0.eq) goto loc_824C0E80;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_824C0E80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_824C0E8C:
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824C0E9C"))) PPC_WEAK_FUNC(sub_824C0E9C);
PPC_FUNC_IMPL(__imp__sub_824C0E9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824C0EA0"))) PPC_WEAK_FUNC(sub_824C0EA0);
PPC_FUNC_IMPL(__imp__sub_824C0EA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x824c1040
	if (!cr6.gt) goto loc_824C1040;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// ble cr6,0x824c0f34
	if (!cr6.gt) goto loc_824C0F34;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,4
	r11.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_824C0EE8:
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f31,f2,f31
	f31.f64 = double(float(ctx.f2.f64 + f31.f64));
	// bdnz 0x824c0ee8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824C0EE8;
loc_824C0F34:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	r27.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// lwz r31,-4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// ble cr6,0x824c0f5c
	if (!cr6.gt) goto loc_824C0F5C;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r11
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_824C0F5C:
	// lis r26,-32254
	r26.s64 = -2113798144;
	// lfs f0,1560(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 1560);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x824c1040
	if (!cr6.lt) goto loc_824C1040;
loc_824C0F6C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824c1040
	if (cr6.eq) goto loc_824C1040;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c0d30
	sub_824C0D30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x824c1030
	if (cr6.eq) goto loc_824C1030;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c1030
	if (cr6.eq) goto loc_824C1030;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f31,f2,f31
	f31.f64 = double(float(ctx.f2.f64 + f31.f64));
	// ble cr6,0x824c1008
	if (!cr6.gt) goto loc_824C1008;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824C1008:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824c1028
	if (cr0.eq) goto loc_824C1028;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_824C1028:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x824c1034
	goto loc_824C1034;
loc_824C1030:
	// li r31,0
	r31.s64 = 0;
loc_824C1034:
	// lfs f0,1560(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 1560);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x824c0f6c
	if (cr6.lt) goto loc_824C0F6C;
loc_824C1040:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_824C1048"))) PPC_WEAK_FUNC(sub_824C1048);
PPC_FUNC_IMPL(__imp__sub_824C1048) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_824C104C"))) PPC_WEAK_FUNC(sub_824C104C);
PPC_FUNC_IMPL(__imp__sub_824C104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1050"))) PPC_WEAK_FUNC(sub_824C1050);
PPC_FUNC_IMPL(__imp__sub_824C1050) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r8,833(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 833);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x824c10d4
	if (cr6.eq) goto loc_824C10D4;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824c10bc
	if (!cr6.gt) goto loc_824C10BC;
loc_824C10A4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824c10a4
	if (cr6.gt) goto loc_824C10A4;
loc_824C10BC:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e945c
	return;
loc_824C10D4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824c1118
	if (cr6.eq) goto loc_824C1118;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824c110c
	if (!cr6.gt) goto loc_824C110C;
loc_824C10F4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824c10f4
	if (cr6.gt) goto loc_824C10F4;
loc_824C110C:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
	// stb r30,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r30.u8);
loc_824C1118:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stb r28,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824c11cc
	if (!cr6.gt) goto loc_824C11CC;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824c1638
	sub_824C1638(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,1564(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1564);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x824c1184
	if (cr6.gt) goto loc_824C1184;
	// li r11,0
	r11.s64 = 0;
loc_824C1184:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c11cc
	if (cr6.eq) goto loc_824C11CC;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c11cc
	if (cr6.eq) goto loc_824C11CC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824c11c4
	if (!cr6.gt) goto loc_824C11C4;
loc_824C11AC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824c11ac
	if (cr6.gt) goto loc_824C11AC;
loc_824C11C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c17a8
	sub_824C17A8(ctx, base);
loc_824C11CC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c11fc
	if (!cr6.eq) goto loc_824C11FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824bec30
	sub_824BEC30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c11fc
	if (cr6.eq) goto loc_824C11FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824C11FC:
	// lbz r30,279(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c0ea0
	sub_824C0EA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c0c58
	sub_824C0C58(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_824C1230"))) PPC_WEAK_FUNC(sub_824C1230);
PPC_FUNC_IMPL(__imp__sub_824C1230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824C1234"))) PPC_WEAK_FUNC(sub_824C1234);
PPC_FUNC_IMPL(__imp__sub_824C1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1238"))) PPC_WEAK_FUNC(sub_824C1238);
PPC_FUNC_IMPL(__imp__sub_824C1238) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,1604
	ctx.r10.s64 = r11.s64 + 1604;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stb r30,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r30.u8);
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// bl 0x824c19c0
	sub_824C19C0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// addi r7,r8,1592
	ctx.r7.s64 = ctx.r8.s64 + 1592;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// or r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 | ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824C12C0"))) PPC_WEAK_FUNC(sub_824C12C0);
PPC_FUNC_IMPL(__imp__sub_824C12C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C12C4"))) PPC_WEAK_FUNC(sub_824C12C4);
PPC_FUNC_IMPL(__imp__sub_824C12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C12C8"))) PPC_WEAK_FUNC(sub_824C12C8);
PPC_FUNC_IMPL(__imp__sub_824C12C8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r11,1604
	ctx.r10.s64 = r11.s64 + 1604;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c13e8
	sub_824C13E8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x824c1a38
	sub_824C1A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C1308"))) PPC_WEAK_FUNC(sub_824C1308);
PPC_FUNC_IMPL(__imp__sub_824C1308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C130C"))) PPC_WEAK_FUNC(sub_824C130C);
PPC_FUNC_IMPL(__imp__sub_824C130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1310"))) PPC_WEAK_FUNC(sub_824C1310);
PPC_FUNC_IMPL(__imp__sub_824C1310) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c14d0
	sub_824C14D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1310"))) PPC_WEAK_FUNC(sub_824C1310);
PPC_FUNC_IMPL(__imp__sub_824C1310) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824C1314"))) PPC_WEAK_FUNC(sub_824C1314);
PPC_FUNC_IMPL(__imp__sub_824C1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1318"))) PPC_WEAK_FUNC(sub_824C1318);
PPC_FUNC_IMPL(__imp__sub_824C1318) {
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
	// addi r9,r11,1580
	ctx.r9.s64 = r11.s64 + 1580;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824c135c
	if (!cr6.gt) goto loc_824C135C;
loc_824C1344:
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
	// bgt cr6,0x824c1344
	if (cr6.gt) goto loc_824C1344;
loc_824C135C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c1374
	if (cr6.eq) goto loc_824C1374;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C1374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C1384"))) PPC_WEAK_FUNC(sub_824C1384);
PPC_FUNC_IMPL(__imp__sub_824C1384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1388"))) PPC_WEAK_FUNC(sub_824C1388);
PPC_FUNC_IMPL(__imp__sub_824C1388) {
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
	// addi r9,r10,1592
	ctx.r9.s64 = ctx.r10.s64 + 1592;
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

__attribute__((alias("__imp__sub_824C13E0"))) PPC_WEAK_FUNC(sub_824C13E0);
PPC_FUNC_IMPL(__imp__sub_824C13E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C13E4"))) PPC_WEAK_FUNC(sub_824C13E4);
PPC_FUNC_IMPL(__imp__sub_824C13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C13E8"))) PPC_WEAK_FUNC(sub_824C13E8);
PPC_FUNC_IMPL(__imp__sub_824C13E8) {
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
	// addi r9,r11,1592
	ctx.r9.s64 = r11.s64 + 1592;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824c142c
	if (!cr6.gt) goto loc_824C142C;
loc_824C1414:
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
	// bgt cr6,0x824c1414
	if (cr6.gt) goto loc_824C1414;
loc_824C142C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c14d0
	sub_824C14D0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,1580
	ctx.r10.s64 = r11.s64 + 1580;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824c1468
	if (!cr6.gt) goto loc_824C1468;
loc_824C1450:
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
	// bgt cr6,0x824c1450
	if (cr6.gt) goto loc_824C1450;
loc_824C1468:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C1478"))) PPC_WEAK_FUNC(sub_824C1478);
PPC_FUNC_IMPL(__imp__sub_824C1478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C147C"))) PPC_WEAK_FUNC(sub_824C147C);
PPC_FUNC_IMPL(__imp__sub_824C147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1480"))) PPC_WEAK_FUNC(sub_824C1480);
PPC_FUNC_IMPL(__imp__sub_824C1480) {
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
	// bl 0x824c13e8
	sub_824C13E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c14b8
	if (cr6.eq) goto loc_824C14B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C14B8:
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

__attribute__((alias("__imp__sub_824C14CC"))) PPC_WEAK_FUNC(sub_824C14CC);
PPC_FUNC_IMPL(__imp__sub_824C14CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C14D0"))) PPC_WEAK_FUNC(sub_824C14D0);
PPC_FUNC_IMPL(__imp__sub_824C14D0) {
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
	// beq cr6,0x824c15b4
	if (cr6.eq) goto loc_824C15B4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c1544
	if (!cr6.eq) goto loc_824C1544;
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
	// beq cr6,0x824c15b4
	if (cr6.eq) goto loc_824C15B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8259c760
	sub_8259C760(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x824c15b4
	goto loc_824C15B4;
loc_824C1544:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c1388
	sub_824C1388(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824c1570
	if (!cr6.gt) goto loc_824C1570;
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
loc_824C1570:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259fea0
	sub_8259FEA0(ctx, base);
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
	// bl 0x824c13e8
	sub_824C13E8(ctx, base);
loc_824C15B4:
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

__attribute__((alias("__imp__sub_824C15C8"))) PPC_WEAK_FUNC(sub_824C15C8);
PPC_FUNC_IMPL(__imp__sub_824C15C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C15CC"))) PPC_WEAK_FUNC(sub_824C15CC);
PPC_FUNC_IMPL(__imp__sub_824C15CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C15D0"))) PPC_WEAK_FUNC(sub_824C15D0);
PPC_FUNC_IMPL(__imp__sub_824C15D0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r11,1604
	ctx.r10.s64 = r11.s64 + 1604;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c13e8
	sub_824C13E8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x824c1a38
	sub_824C1A38(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824c1620
	if (cr6.eq) goto loc_824C1620;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C1620:
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

__attribute__((alias("__imp__sub_824C1634"))) PPC_WEAK_FUNC(sub_824C1634);
PPC_FUNC_IMPL(__imp__sub_824C1634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1638"))) PPC_WEAK_FUNC(sub_824C1638);
PPC_FUNC_IMPL(__imp__sub_824C1638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x824c16c4
	if (!cr6.gt) goto loc_824C16C4;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f4,f12
	f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fadds f6,f0,f9
	ctx.f6.f64 = double(float(f0.f64 + ctx.f9.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_824C16C4:
	// bne cr6,0x824c16f4
	if (!cr6.eq) goto loc_824C16F4;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_824C16F4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-24152
	ctx.r10.s64 = r11.s64 + -24152;
	// lfs f0,-24152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24152);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_824C171C"))) PPC_WEAK_FUNC(sub_824C171C);
PPC_FUNC_IMPL(__imp__sub_824C171C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1720"))) PPC_WEAK_FUNC(sub_824C1720);
PPC_FUNC_IMPL(__imp__sub_824C1720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x824c1788
	if (!cr6.gt) goto loc_824C1788;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// bne cr6,0x824c1768
	if (!cr6.eq) goto loc_824C1768;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f11,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f12,f11,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// blr 
	return;
loc_824C1768:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f11,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f12,f9,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// blr 
	return;
loc_824C1788:
	// bne cr6,0x824c179c
	if (!cr6.eq) goto loc_824C179C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_824C179C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_824C17A4"))) PPC_WEAK_FUNC(sub_824C17A4);
PPC_FUNC_IMPL(__imp__sub_824C17A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C17A8"))) PPC_WEAK_FUNC(sub_824C17A8);
PPC_FUNC_IMPL(__imp__sub_824C17A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824c17d0
	if (!cr6.gt) goto loc_824C17D0;
loc_824C17B8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824c17b8
	if (cr6.gt) goto loc_824C17B8;
loc_824C17D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
}

__attribute__((alias("__imp__sub_824C17DC"))) PPC_WEAK_FUNC(sub_824C17DC);
PPC_FUNC_IMPL(__imp__sub_824C17DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C17E0"))) PPC_WEAK_FUNC(sub_824C17E0);
PPC_FUNC_IMPL(__imp__sub_824C17E0) {
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
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824c1818
	if (!cr6.gt) goto loc_824C1818;
loc_824C1800:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824c1800
	if (cr6.gt) goto loc_824C1800;
loc_824C1818:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x824c1884
	if (cr6.eq) goto loc_824C1884;
loc_824C1838:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824c185c
	if (!cr6.eq) goto loc_824C185C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c1638
	sub_824C1638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824c1860
	goto loc_824C1860;
loc_824C185C:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_824C1860:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824c1838
	if (!cr6.eq) goto loc_824C1838;
loc_824C1884:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824C1888"))) PPC_WEAK_FUNC(sub_824C1888);
PPC_FUNC_IMPL(__imp__sub_824C1888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824C188C"))) PPC_WEAK_FUNC(sub_824C188C);
PPC_FUNC_IMPL(__imp__sub_824C188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1890"))) PPC_WEAK_FUNC(sub_824C1890);
PPC_FUNC_IMPL(__imp__sub_824C1890) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 844);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fadds f30,f0,f31
	f30.f64 = double(float(f0.f64 + f31.f64));
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x824c1638
	sub_824C1638(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,3792(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8249e5b0
	sub_8249E5B0(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-24184
	r31.s64 = r11.s64 + -24184;
	// lwz r11,-24156(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24156);
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x824c1968
	if (!cr6.eq) goto loc_824C1968;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-24156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24156, r11.u32);
	// bl 0x824bb760
	sub_824BB760(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20360
	ctx.r3.s64 = r11.s64 + -20360;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_824C1968:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c1984
	if (cr6.eq) goto loc_824C1984;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_824C1978:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x824c1978
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824C1978;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_824C1984:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c17e0
	sub_824C17E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824bb0b0
	sub_824BB0B0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_824C19B8"))) PPC_WEAK_FUNC(sub_824C19B8);
PPC_FUNC_IMPL(__imp__sub_824C19B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824C19BC"))) PPC_WEAK_FUNC(sub_824C19BC);
PPC_FUNC_IMPL(__imp__sub_824C19BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C19C0"))) PPC_WEAK_FUNC(sub_824C19C0);
PPC_FUNC_IMPL(__imp__sub_824C19C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r9,1612
	ctx.r7.s64 = ctx.r9.s64 + 1612;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,1380
	ctx.r6.s64 = ctx.r8.s64 + 1380;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C1A34"))) PPC_WEAK_FUNC(sub_824C1A34);
PPC_FUNC_IMPL(__imp__sub_824C1A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1A38"))) PPC_WEAK_FUNC(sub_824C1A38);
PPC_FUNC_IMPL(__imp__sub_824C1A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,1612
	ctx.r9.s64 = ctx.r10.s64 + 1612;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_824C1A4C"))) PPC_WEAK_FUNC(sub_824C1A4C);
PPC_FUNC_IMPL(__imp__sub_824C1A4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x824c0978
	sub_824C0978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1A50"))) PPC_WEAK_FUNC(sub_824C1A50);
PPC_FUNC_IMPL(__imp__sub_824C1A50) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,1612
	ctx.r10.s64 = r11.s64 + 1612;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824c0978
	sub_824C0978(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824c1a98
	if (cr6.eq) goto loc_824C1A98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C1A98:
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

__attribute__((alias("__imp__sub_824C1AAC"))) PPC_WEAK_FUNC(sub_824C1AAC);
PPC_FUNC_IMPL(__imp__sub_824C1AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1AB0"))) PPC_WEAK_FUNC(sub_824C1AB0);
PPC_FUNC_IMPL(__imp__sub_824C1AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r11.u8);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1AC8"))) PPC_WEAK_FUNC(sub_824C1AC8);
PPC_FUNC_IMPL(__imp__sub_824C1AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,1628
	ctx.r10.s64 = r11.s64 + 1628;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1AD8"))) PPC_WEAK_FUNC(sub_824C1AD8);
PPC_FUNC_IMPL(__imp__sub_824C1AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// beq cr6,0x824c1cd4
	if (cr6.eq) goto loc_824C1CD4;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,20948
	ctx.r4.s64 = ctx.r8.s64 + 20948;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c1cd4
	if (cr6.eq) goto loc_824C1CD4;
	// addi r28,r3,-4
	r28.s64 = ctx.r3.s64 + -4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824c1cd4
	if (cr6.eq) goto loc_824C1CD4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,27116
	ctx.r4.s64 = ctx.r9.s64 + 27116;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c1cd4
	if (cr6.eq) goto loc_824C1CD4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r8,-6636
	ctx.r5.s64 = ctx.r8.s64 + -6636;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82700280
	sub_82700280(ctx, base);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + f0.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x827002f8
	sub_827002F8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827002f8
	sub_827002F8(ctx, base);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v63,v0,99
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmsum3fp128 v62,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vpermwi128 v61,v0,135
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v60,v13,v0
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v59,v13,135
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v58,v13,99
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vspltw v12,v13,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v57,v59,v63
	_mm_store_ps(v57.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v56,v58,v61
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v61.f32)));
	// vspltw128 v55,v62,0
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vsubfp128 v10,v56,v57
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(v56.f32), _mm_load_ps(v57.f32)));
	// vsubfp128 v54,v60,v55
	_mm_store_ps(v54.f32, _mm_sub_ps(_mm_load_ps(v60.f32), _mm_load_ps(v55.f32)));
	// vmaddfp v0,v0,v12,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v0,v54,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 228), 1));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// bl 0x826281e8
	sub_826281E8(ctx, base);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v53,r0,r9
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x827005c0
	sub_827005C0(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x824c1cfc
	goto loc_824C1CFC;
loc_824C1CD4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-24136
	ctx.r10.s64 = r11.s64 + -24136;
	// lfs f0,-24136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24136);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_824C1CFC:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_824C1D14"))) PPC_WEAK_FUNC(sub_824C1D14);
PPC_FUNC_IMPL(__imp__sub_824C1D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824C1D18"))) PPC_WEAK_FUNC(sub_824C1D18);
PPC_FUNC_IMPL(__imp__sub_824C1D18) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r29,40(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824c1d64
	if (cr6.eq) goto loc_824C1D64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// bne cr6,0x824c1d68
	if (!cr6.eq) goto loc_824C1D68;
loc_824C1D64:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_824C1D68:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824c1d98
	if (cr6.eq) goto loc_824C1D98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c1d9c
	if (!cr6.eq) goto loc_824C1D9C;
loc_824C1D98:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_824C1D9C:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r4,224(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// bl 0x825cb820
	sub_825CB820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ca180
	sub_825CA180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822bf0c0
	sub_822BF0C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824c1e60
	if (cr6.eq) goto loc_824C1E60;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// li r28,1
	r28.s64 = 1;
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x824c1e44
	if (cr6.eq) goto loc_824C1E44;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x824c1e44
	if (cr6.eq) goto loc_824C1E44;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x824c1e1c
	if (cr6.eq) goto loc_824C1E1C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x824c1e60
	if (!cr6.eq) goto loc_824C1E60;
loc_824C1E1C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r27,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r27.u8);
	// std r9,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r9.u64);
	// b 0x824c1e60
	goto loc_824C1E60;
loc_824C1E44:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r3.u64);
	// stb r28,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r28.u8);
loc_824C1E60:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c1e7c
	if (!cr6.eq) goto loc_824C1E7C;
	// li r11,-1
	r11.s64 = -1;
	// stb r27,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r27.u8);
	// std r27,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r27.u64);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
loc_824C1E7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824C1E80"))) PPC_WEAK_FUNC(sub_824C1E80);
PPC_FUNC_IMPL(__imp__sub_824C1E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824C1E84"))) PPC_WEAK_FUNC(sub_824C1E84);
PPC_FUNC_IMPL(__imp__sub_824C1E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1E88"))) PPC_WEAK_FUNC(sub_824C1E88);
PPC_FUNC_IMPL(__imp__sub_824C1E88) {
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
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824c1ad8
	sub_824C1AD8(ctx, base);
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

__attribute__((alias("__imp__sub_824C1EBC"))) PPC_WEAK_FUNC(sub_824C1EBC);
PPC_FUNC_IMPL(__imp__sub_824C1EBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1EC0"))) PPC_WEAK_FUNC(sub_824C1EC0);
PPC_FUNC_IMPL(__imp__sub_824C1EC0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,-26428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26428);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824c1f04
	if (cr6.eq) goto loc_824C1F04;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c1f08
	if (!cr6.eq) goto loc_824C1F08;
loc_824C1F04:
	// li r11,0
	r11.s64 = 0;
loc_824C1F08:
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
	// beq cr6,0x824c1f54
	if (cr6.eq) goto loc_824C1F54;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c1f54
	if (!cr6.eq) goto loc_824C1F54;
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
loc_824C1F54:
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

__attribute__((alias("__imp__sub_824C1F68"))) PPC_WEAK_FUNC(sub_824C1F68);
PPC_FUNC_IMPL(__imp__sub_824C1F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C1F6C"))) PPC_WEAK_FUNC(sub_824C1F6C);
PPC_FUNC_IMPL(__imp__sub_824C1F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1F70"))) PPC_WEAK_FUNC(sub_824C1F70);
PPC_FUNC_IMPL(__imp__sub_824C1F70) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r31,0
	r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r31.u8);
	// std r31,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r31.u64);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-26432(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26432);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824c1fc8
	if (cr6.eq) goto loc_824C1FC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c1fcc
	if (!cr6.eq) goto loc_824C1FCC;
loc_824C1FC8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824C1FCC:
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
	// beq cr6,0x824c2018
	if (cr6.eq) goto loc_824C2018;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c2018
	if (!cr6.eq) goto loc_824C2018;
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
loc_824C2018:
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

__attribute__((alias("__imp__sub_824C202C"))) PPC_WEAK_FUNC(sub_824C202C);
PPC_FUNC_IMPL(__imp__sub_824C202C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C2030"))) PPC_WEAK_FUNC(sub_824C2030);
PPC_FUNC_IMPL(__imp__sub_824C2030) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-24136
	ctx.r8.s64 = ctx.r10.s64 + -24136;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,1628
	ctx.r7.s64 = ctx.r9.s64 + 1628;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f0,-24136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24136);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r10,r5,9016
	ctx.r10.s64 = ctx.r5.s64 + 9016;
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r3,r4,-12660
	ctx.r3.s64 = ctx.r4.s64 + -12660;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824c2104
	if (cr6.eq) goto loc_824C2104;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c2104
	if (cr6.eq) goto loc_824C2104;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c2108
	if (!cr6.eq) goto loc_824C2108;
loc_824C2104:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_824C2108:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-3668
	ctx.r3.s64 = ctx.r10.s64 + -3668;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 888);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824c219c
	if (cr6.eq) goto loc_824C219C;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824c219c
	if (cr6.eq) goto loc_824C219C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824c21a0
	if (!cr6.eq) goto loc_824C21A0;
loc_824C219C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_824C21A0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824C21D0"))) PPC_WEAK_FUNC(sub_824C21D0);
PPC_FUNC_IMPL(__imp__sub_824C21D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824C21D4"))) PPC_WEAK_FUNC(sub_824C21D4);
PPC_FUNC_IMPL(__imp__sub_824C21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C21D8"))) PPC_WEAK_FUNC(sub_824C21D8);
PPC_FUNC_IMPL(__imp__sub_824C21D8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,1628
	ctx.r9.s64 = r11.s64 + 1628;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824c220c
	if (cr6.eq) goto loc_824C220C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C220C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824C221C"))) PPC_WEAK_FUNC(sub_824C221C);
PPC_FUNC_IMPL(__imp__sub_824C221C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C2220"))) PPC_WEAK_FUNC(sub_824C2220);
PPC_FUNC_IMPL(__imp__sub_824C2220) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x824c229c
	if (cr6.eq) goto loc_824C229C;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824c229c
	if (!cr6.eq) goto loc_824C229C;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824c22a0
	if (cr6.eq) goto loc_824C22A0;
loc_824C229C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C22A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824C22A4"))) PPC_WEAK_FUNC(sub_824C22A4);
PPC_FUNC_IMPL(__imp__sub_824C22A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824C22A8"))) PPC_WEAK_FUNC(sub_824C22A8);
PPC_FUNC_IMPL(__imp__sub_824C22A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,614(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 614);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C22B0"))) PPC_WEAK_FUNC(sub_824C22B0);
PPC_FUNC_IMPL(__imp__sub_824C22B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,615(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 615);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C22B8"))) PPC_WEAK_FUNC(sub_824C22B8);
PPC_FUNC_IMPL(__imp__sub_824C22B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,616(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 616);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C22C0"))) PPC_WEAK_FUNC(sub_824C22C0);
PPC_FUNC_IMPL(__imp__sub_824C22C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,1144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x824c22dc
	if (cr6.gt) goto loc_824C22DC;
	// li r11,0
	r11.s64 = 0;
loc_824C22DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C22E4"))) PPC_WEAK_FUNC(sub_824C22E4);
PPC_FUNC_IMPL(__imp__sub_824C22E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C22E8"))) PPC_WEAK_FUNC(sub_824C22E8);
PPC_FUNC_IMPL(__imp__sub_824C22E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,1148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x824c2304
	if (cr6.gt) goto loc_824C2304;
	// li r11,0
	r11.s64 = 0;
loc_824C2304:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C230C"))) PPC_WEAK_FUNC(sub_824C230C);
PPC_FUNC_IMPL(__imp__sub_824C230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C2310"))) PPC_WEAK_FUNC(sub_824C2310);
PPC_FUNC_IMPL(__imp__sub_824C2310) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C2318"))) PPC_WEAK_FUNC(sub_824C2318);
PPC_FUNC_IMPL(__imp__sub_824C2318) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_824C231C"))) PPC_WEAK_FUNC(sub_824C231C);
PPC_FUNC_IMPL(__imp__sub_824C231C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C2320"))) PPC_WEAK_FUNC(sub_824C2320);
PPC_FUNC_IMPL(__imp__sub_824C2320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C2328"))) PPC_WEAK_FUNC(sub_824C2328);
PPC_FUNC_IMPL(__imp__sub_824C2328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

