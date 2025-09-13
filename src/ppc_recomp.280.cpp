#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827EBDD8"))) PPC_WEAK_FUNC(sub_827EBDD8);
PPC_FUNC_IMPL(__imp__sub_827EBDD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EBDDC"))) PPC_WEAK_FUNC(sub_827EBDDC);
PPC_FUNC_IMPL(__imp__sub_827EBDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EBDE0"))) PPC_WEAK_FUNC(sub_827EBDE0);
PPC_FUNC_IMPL(__imp__sub_827EBDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r28,r3,-104
	r28.s64 = ctx.r3.s64 + -104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x8276f338
	sub_8276F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,105
	cr6.compare<uint32_t>(ctx.r3.u32, 105, xer);
	// bgt cr6,0x827ed718
	if (cr6.gt) goto loc_827ED718;
	// lis r12,-32129
	r12.s64 = -2105606144;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16832
	r12.s64 = r12.s64 + -16832;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_827EBFE8;
	case 1:
		goto loc_827EC03C;
	case 2:
		goto loc_827ED718;
	case 3:
		goto loc_827ED718;
	case 4:
		goto loc_827ED718;
	case 5:
		goto loc_827ED718;
	case 6:
		goto loc_827ED718;
	case 7:
		goto loc_827ED718;
	case 8:
		goto loc_827ED718;
	case 9:
		goto loc_827ED718;
	case 10:
		goto loc_827ED718;
	case 11:
		goto loc_827ED718;
	case 12:
		goto loc_827ED718;
	case 13:
		goto loc_827ED718;
	case 14:
		goto loc_827ED718;
	case 15:
		goto loc_827ED718;
	case 16:
		goto loc_827ED718;
	case 17:
		goto loc_827ED718;
	case 18:
		goto loc_827ED718;
	case 19:
		goto loc_827ED718;
	case 20:
		goto loc_827ED718;
	case 21:
		goto loc_827ED718;
	case 22:
		goto loc_827ED718;
	case 23:
		goto loc_827ED718;
	case 24:
		goto loc_827ED718;
	case 25:
		goto loc_827ECB64;
	case 26:
		goto loc_827ED718;
	case 27:
		goto loc_827ED718;
	case 28:
		goto loc_827ED718;
	case 29:
		goto loc_827ED718;
	case 30:
		goto loc_827ED718;
	case 31:
		goto loc_827ED718;
	case 32:
		goto loc_827ED718;
	case 33:
		goto loc_827ED718;
	case 34:
		goto loc_827ED718;
	case 35:
		goto loc_827ED718;
	case 36:
		goto loc_827ED718;
	case 37:
		goto loc_827ED718;
	case 38:
		goto loc_827EC228;
	case 39:
		goto loc_827EC32C;
	case 40:
		goto loc_827EC378;
	case 41:
		goto loc_827EC2E4;
	case 42:
		goto loc_827EC3C4;
	case 43:
		goto loc_827EC090;
	case 44:
		goto loc_827EC0C0;
	case 45:
		goto loc_827ECB64;
	case 46:
		goto loc_827EC3FC;
	case 47:
		goto loc_827EC4E0;
	case 48:
		goto loc_827EC514;
	case 49:
		goto loc_827EC548;
	case 50:
		goto loc_827EC580;
	case 51:
		goto loc_827EC5D0;
	case 52:
		goto loc_827EC61C;
	case 53:
		goto loc_827ECA4C;
	case 54:
		goto loc_827EC6FC;
	case 55:
		goto loc_827EC73C;
	case 56:
		goto loc_827EC774;
	case 57:
		goto loc_827EC7AC;
	case 58:
		goto loc_827EC7EC;
	case 59:
		goto loc_827EC824;
	case 60:
		goto loc_827EC854;
	case 61:
		goto loc_827EC884;
	case 62:
		goto loc_827EC8BC;
	case 63:
		goto loc_827EC9C0;
	case 64:
		goto loc_827ECA1C;
	case 65:
		goto loc_827ECB34;
	case 66:
		goto loc_827EC654;
	case 67:
		goto loc_827EC684;
	case 68:
		goto loc_827EC6C4;
	case 69:
		goto loc_827ECB84;
	case 70:
		goto loc_827ECBD8;
	case 71:
		goto loc_827ECC2C;
	case 72:
		goto loc_827ED228;
	case 73:
		goto loc_827ED26C;
	case 74:
		goto loc_827ED464;
	case 75:
		goto loc_827ED4A8;
	case 76:
		goto loc_827ED514;
	case 77:
		goto loc_827ED5F4;
	case 78:
		goto loc_827ED624;
	case 79:
		goto loc_827ECC90;
	case 80:
		goto loc_827ECD2C;
	case 81:
		goto loc_827ED654;
	case 82:
		goto loc_827ED654;
	case 83:
		goto loc_827ED654;
	case 84:
		goto loc_827ED654;
	case 85:
		goto loc_827ED698;
	case 86:
		goto loc_827ED6D8;
	case 87:
		goto loc_827ED718;
	case 88:
		goto loc_827ED718;
	case 89:
		goto loc_827ECDA4;
	case 90:
		goto loc_827ECDE8;
	case 91:
		goto loc_827ECE38;
	case 92:
		goto loc_827ECE88;
	case 93:
		goto loc_827ED590;
	case 94:
		goto loc_827ECED8;
	case 95:
		goto loc_827ECF1C;
	case 96:
		goto loc_827ECF60;
	case 97:
		goto loc_827ECFB0;
	case 98:
		goto loc_827ED004;
	case 99:
		goto loc_827ED054;
	case 100:
		goto loc_827ED0A4;
	case 101:
		goto loc_827ED0F8;
	case 102:
		goto loc_827ED13C;
	case 103:
		goto loc_827ED180;
	case 104:
		goto loc_827ED1D8;
	case 105:
		goto loc_827ED590;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-16408(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -16408);
	// lwz r19,-16324(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -16324);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-13468(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13468);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-15832(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15832);
	// lwz r19,-15572(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15572);
	// lwz r19,-15496(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15496);
	// lwz r19,-15644(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15644);
	// lwz r19,-15420(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15420);
	// lwz r19,-16240(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -16240);
	// lwz r19,-16192(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -16192);
	// lwz r19,-13468(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13468);
	// lwz r19,-15364(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15364);
	// lwz r19,-15136(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15136);
	// lwz r19,-15084(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15084);
	// lwz r19,-15032(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -15032);
	// lwz r19,-14976(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14976);
	// lwz r19,-14896(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14896);
	// lwz r19,-14820(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14820);
	// lwz r19,-13748(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13748);
	// lwz r19,-14596(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14596);
	// lwz r19,-14532(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14532);
	// lwz r19,-14476(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14476);
	// lwz r19,-14420(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14420);
	// lwz r19,-14356(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14356);
	// lwz r19,-14300(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14300);
	// lwz r19,-14252(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14252);
	// lwz r19,-14204(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14204);
	// lwz r19,-14148(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14148);
	// lwz r19,-13888(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13888);
	// lwz r19,-13796(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13796);
	// lwz r19,-13516(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13516);
	// lwz r19,-14764(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14764);
	// lwz r19,-14716(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14716);
	// lwz r19,-14652(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -14652);
	// lwz r19,-13436(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13436);
	// lwz r19,-13352(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13352);
	// lwz r19,-13268(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13268);
	// lwz r19,-11736(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11736);
	// lwz r19,-11668(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11668);
	// lwz r19,-11164(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11164);
	// lwz r19,-11096(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11096);
	// lwz r19,-10988(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10988);
	// lwz r19,-10764(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10764);
	// lwz r19,-10716(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10716);
	// lwz r19,-13168(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13168);
	// lwz r19,-13012(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -13012);
	// lwz r19,-10668(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10668);
	// lwz r19,-10668(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10668);
	// lwz r19,-10668(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10668);
	// lwz r19,-10668(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10668);
	// lwz r19,-10600(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10600);
	// lwz r19,-10536(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10536);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-10472(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10472);
	// lwz r19,-12892(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12892);
	// lwz r19,-12824(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12824);
	// lwz r19,-12744(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12744);
	// lwz r19,-12664(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12664);
	// lwz r19,-10864(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10864);
	// lwz r19,-12584(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12584);
	// lwz r19,-12516(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12516);
	// lwz r19,-12448(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12448);
	// lwz r19,-12368(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12368);
	// lwz r19,-12284(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12284);
	// lwz r19,-12204(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12204);
	// lwz r19,-12124(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12124);
	// lwz r19,-12040(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -12040);
	// lwz r19,-11972(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11972);
	// lwz r19,-11904(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11904);
	// lwz r19,-11816(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -11816);
	// lwz r19,-10864(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -10864);
loc_827EBFE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827563d0
	sub_827563D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827eba60
	sub_827EBA60(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-26536(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26536);
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * f0.f64;
	// bl 0x82756338
	sub_82756338(ctx, base);
loc_827EC028:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC03C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827563d0
	sub_827563D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827eba60
	sub_827EBA60(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-26536(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26536);
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * f0.f64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC090:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,31,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC0C0:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ec170
	if (cr6.eq) goto loc_827EC170;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82831668
	sub_82831668(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ec140
	if (!cr0.eq) goto loc_827EC140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC140:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827EC150:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827ec150
	if (!cr0.eq) goto loc_827EC150;
	// b 0x827ec204
	goto loc_827EC204;
loc_827EC170:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82831630
	sub_82831630(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ec1d8
	if (!cr0.eq) goto loc_827EC1D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC1D8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827EC1E8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827ec1e8
	if (!cr0.eq) goto loc_827EC1E8;
loc_827EC204:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827ec214
	if (!cr0.eq) goto loc_827EC214;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827EC214:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC228:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82831630
	sub_82831630(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ec294
	if (!cr0.eq) goto loc_827EC294;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC294:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827EC2A4:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827ec2a4
	if (!cr0.eq) goto loc_827EC2A4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827ec2d0
	if (!cr0.eq) goto loc_827EC2D0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827EC2D0:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC2E4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwimi r4,r5,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC32C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x828371a8
	sub_828371A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC378:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82837230
	sub_82837230(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC3C4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC3FC:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ec418
	if (!cr6.eq) goto loc_827EC418;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,32024
	ctx.r4.s64 = ctx.r10.s64 + 32024;
	// b 0x827ec480
	goto loc_827EC480;
loc_827EC418:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827ec478
	if (cr6.lt) goto loc_827EC478;
	// beq cr6,0x827ec468
	if (cr6.eq) goto loc_827EC468;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x827ec458
	if (cr6.lt) goto loc_827EC458;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC458:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,14184
	ctx.r4.s64 = ctx.r10.s64 + 14184;
	// b 0x827ec484
	goto loc_827EC484;
loc_827EC468:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-10140
	ctx.r4.s64 = ctx.r10.s64 + -10140;
	// b 0x827ec484
	goto loc_827EC484;
loc_827EC478:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-10132
	ctx.r4.s64 = ctx.r10.s64 + -10132;
loc_827EC480:
	// li r5,4
	ctx.r5.s64 = 4;
loc_827EC484:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ec4cc
	if (!cr0.eq) goto loc_827EC4CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC4CC:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC4E0:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// rlwinm r30,r10,29,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC514:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// rlwinm r30,r10,30,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC548:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,72(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// addic r9,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r9.s64 = r30.s64 + -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subfe r8,r9,r30
	temp.u8 = (~ctx.r9.u32 + r30.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r30.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stb r8,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r8.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC580:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ec5b0
	if (cr6.eq) goto loc_827EC5B0;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC5B0:
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC5D0:
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ec5e8
	if (cr6.eq) goto loc_827EC5E8;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x827ec5f4
	goto loc_827EC5F4;
loc_827EC5E8:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_827EC5F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC61C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r9,317(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r30,r8,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r7,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC654:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,30,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC684:
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r11,676(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 676);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bne cr6,0x827ec6a8
	if (!cr6.eq) goto loc_827EC6A8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
loc_827EC6A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC6C4:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC6FC:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82837108
	sub_82837108(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = r11.u32 / ctx.r10.u32;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC73C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82837158
	sub_82837158(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC774:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82837308
	sub_82837308(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC7AC:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82831f78
	sub_82831F78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = r11.u32 / ctx.r10.u32;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC7EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,68(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 68);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// addic r9,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r9.s64 = r30.s64 + -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subfe r8,r9,r30
	temp.u8 = (~ctx.r9.u32 + r30.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r30.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stb r8,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r8.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC824:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r10,r11,8
	ctx.r10.u64 = r11.u32 & 0xFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC854:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r10,r11,8
	ctx.r10.u64 = r11.u32 & 0xFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC884:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82838af8
	sub_82838AF8(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC8BC:
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ec8d4
	if (cr6.eq) goto loc_827EC8D4;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x827ec8e0
	goto loc_827EC8E0;
loc_827EC8D4:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r10,29,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_827EC8E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// beq cr6,0x827ec928
	if (cr6.eq) goto loc_827EC928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r10,-28916
	ctx.r4.s64 = ctx.r10.s64 + -28916;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x827ec954
	goto loc_827EC954;
loc_827EC928:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-26084
	ctx.r4.s64 = ctx.r10.s64 + -26084;
	// li r29,2
	r29.s64 = 2;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_827EC954:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// rlwinm r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ec988
	if (cr6.eq) goto loc_827EC988;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ec988
	if (!cr0.eq) goto loc_827EC988;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC988:
	// clrlwi r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ec9ac
	if (cr6.eq) goto loc_827EC9AC;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bne 0x827ec9ac
	if (!cr0.eq) goto loc_827EC9AC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EC9AC:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC9C0:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ec9f4
	if (!cr6.eq) goto loc_827EC9F4;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827EC9F4:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECA1C:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,28,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECA4C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827eca9c
	if (cr6.eq) goto loc_827ECA9C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r10,14172
	ctx.r4.s64 = ctx.r10.s64 + 14172;
	// li r29,4
	r29.s64 = 4;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x827ecac8
	goto loc_827ECAC8;
loc_827ECA9C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,-20736
	ctx.r4.s64 = ctx.r10.s64 + -20736;
	// li r29,8
	r29.s64 = 8;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_827ECAC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// rlwinm r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ecafc
	if (cr6.eq) goto loc_827ECAFC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ecafc
	if (!cr0.eq) goto loc_827ECAFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827ECAFC:
	// rlwinm r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ecb20
	if (cr6.eq) goto loc_827ECB20;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bne 0x827ecb20
	if (!cr0.eq) goto loc_827ECB20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827ECB20:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECB34:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,25,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECB64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECB84:
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
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lbz r8,676(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 676);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,21,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECBD8:
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
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lbz r8,676(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 676);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,29,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECC2C:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ecc70
	if (cr6.eq) goto loc_827ECC70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECC70:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,23280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 23280);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECC90:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827eccb8
	if (cr6.eq) goto loc_827ECCB8;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x827eccc4
	goto loc_827ECCC4;
loc_827ECCB8:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_827ECCC4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ecd08
	if (cr6.eq) goto loc_827ECD08;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ecd08
	if (cr6.eq) goto loc_827ECD08;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 344);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x827ecd10
	goto loc_827ECD10;
loc_827ECD08:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,23280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 23280);
loc_827ECD10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECD2C:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ecd54
	if (cr6.eq) goto loc_827ECD54;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x827ecd60
	goto loc_827ECD60;
loc_827ECD54:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_827ECD60:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ecd08
	if (cr6.eq) goto loc_827ECD08;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ecd08
	if (cr6.eq) goto loc_827ECD08;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 348);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x827ecd10
	goto loc_827ECD10;
loc_827ECDA4:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// rlwinm r30,r10,25,7,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECDE8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,288(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 288);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECE38:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,289(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 289);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECE88:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,290(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 290);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECED8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,318(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 318);
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECF1C:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,318(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 318);
	// rlwinm r30,r10,31,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECF60:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,295(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 295);
	// lfs f0,-23472(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23472);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ECFB0:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 296);
	// lfs f0,-13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED004:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 292);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED054:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,293(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 293);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED0A4:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r9,298(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 298);
	// lfs f0,-31316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED0F8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r30,r10,26,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED13C:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED180:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	r11.u64 = ctx.r7.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED1D8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,294(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 294);
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED228:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x828372b8
	sub_828372B8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED26C:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lbz r9,317(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 317);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ed2b4
	if (cr6.eq) goto loc_827ED2B4;
	// lbz r10,316(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 316);
	// rlwinm r10,r10,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x827ed444
	if (cr6.gt) goto loc_827ED444;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827ed318
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827ED318;
	// bdzf 4*cr6+eq,0x827ed37c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827ED37C;
	// bne cr6,0x827ed3e0
	if (!cr6.eq) goto loc_827ED3E0;
loc_827ED2B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,32024
	ctx.r4.s64 = ctx.r10.s64 + 32024;
loc_827ED2C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ed450
	if (!cr0.eq) goto loc_827ED450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED318:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,21884
	ctx.r4.s64 = ctx.r10.s64 + 21884;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ed450
	if (!cr0.eq) goto loc_827ED450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED37C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,21876
	ctx.r4.s64 = ctx.r10.s64 + 21876;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ed450
	if (!cr0.eq) goto loc_827ED450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED3E0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,14184
	ctx.r4.s64 = ctx.r10.s64 + 14184;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827ed450
	if (!cr0.eq) goto loc_827ED450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
loc_827ED450:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED464:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r9,314(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 314);
	// lfs f0,-31316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f0.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x827ed590
	goto loc_827ED590;
loc_827ED4A8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lbz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 316);
	// rlwinm r10,r9,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x827ed444
	if (cr6.gt) goto loc_827ED444;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ed2b4
	if (cr6.eq) goto loc_827ED2B4;
	// bdz 0x827ed4e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827ED4E4;
	// bdz 0x827ed4f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827ED4F4;
	// b 0x827ed504
	goto loc_827ED504;
loc_827ED4E4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,21884
	ctx.r4.s64 = ctx.r10.s64 + 21884;
	// b 0x827ed2c0
	goto loc_827ED2C0;
loc_827ED4F4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,21876
	ctx.r4.s64 = ctx.r10.s64 + 21876;
	// b 0x827ed2c0
	goto loc_827ED2C0;
loc_827ED504:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,14184
	ctx.r4.s64 = ctx.r10.s64 + 14184;
	// b 0x827ed2c0
	goto loc_827ED2C0;
loc_827ED514:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// lbz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 316);
	// rlwinm r10,r9,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x827ed5e4
	if (cr6.eq) goto loc_827ED5E4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x827ed5d4
	if (cr6.eq) goto loc_827ED5D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,32024
	ctx.r4.s64 = ctx.r10.s64 + 32024;
loc_827ED554:
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bne 0x827ed590
	if (!cr0.eq) goto loc_827ED590;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827ED590:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ed754
	if (cr6.eq) goto loc_827ED754;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED5D4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,14168
	ctx.r4.s64 = ctx.r10.s64 + 14168;
	// b 0x827ed554
	goto loc_827ED554;
loc_827ED5E4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,14160
	ctx.r4.s64 = ctx.r10.s64 + 14160;
	// b 0x827ed554
	goto loc_827ED554;
loc_827ED5F4:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r28,r11,31
	r28.u64 = r11.u32 & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r28.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x827ed590
	goto loc_827ED590;
loc_827ED624:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r28,r11,23,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r28.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x827ed590
	goto loc_827ED590;
loc_827ED654:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ed590
	if (cr6.eq) goto loc_827ED590;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f1,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED698:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,22,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED6D8:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ed590
	if (!cr6.eq) goto loc_827ED590;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,21,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED718:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ed590
	if (cr6.eq) goto loc_827ED590;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED754:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ed78c
	if (cr6.eq) goto loc_827ED78C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827ec028
	if (!cr6.eq) goto loc_827EC028;
loc_827ED78C:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,5984
	ctx.r10.s64 = r11.s64 + 5984;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_827ED79C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827ed7c0
	if (cr6.eq) goto loc_827ED7C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827ed79c
	if (cr6.eq) goto loc_827ED79C;
loc_827ED7C0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827ed7f4
	if (!cr6.eq) goto loc_827ED7F4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827ed7f4
	if (cr6.eq) goto loc_827ED7F4;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_827ED7F4:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_827ED804"))) PPC_WEAK_FUNC(sub_827ED804);
PPC_FUNC_IMPL(__imp__sub_827ED804) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827ED808"))) PPC_WEAK_FUNC(sub_827ED808);
PPC_FUNC_IMPL(__imp__sub_827ED808) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// beq cr6,0x827ede90
	if (cr6.eq) goto loc_827EDE90;
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82763c38
	sub_82763C38(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// addi r10,r1,252
	ctx.r10.s64 = ctx.r1.s64 + 252;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_827ED890:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827ed890
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827ED890;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a13d8
	sub_827A13D8(ctx, base);
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ede90
	if (cr6.eq) goto loc_827EDE90;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82837548
	sub_82837548(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
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
	// lfs f0,212(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 212);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827ed93c
	if (cr6.lt) goto loc_827ED93C;
	// lfs f0,204(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 204);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827ed93c
	if (cr6.lt) goto loc_827ED93C;
	// lfs f0,200(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 200);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827ed93c
	if (cr6.lt) goto loc_827ED93C;
	// lfs f0,208(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 208);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x827ed940
	if (!cr6.lt) goto loc_827ED940;
loc_827ED93C:
	// li r11,0
	r11.s64 = 0;
loc_827ED940:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ed960
	if (!cr6.eq) goto loc_827ED960;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ede90
	if (cr6.eq) goto loc_827EDE90;
loc_827ED960:
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827ed990
	if (!cr6.lt) goto loc_827ED990;
	// lfs f0,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	f0.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827ede90
	if (cr6.lt) goto loc_827EDE90;
loc_827ED990:
	// lbz r11,176(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ed9a8
	if (!cr6.eq) goto loc_827ED9A8;
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827edc18
	if (cr6.eq) goto loc_827EDC18;
loc_827ED9A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
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
	// stfs f0,288(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f11,300(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f10,304(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f9,308(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// bl 0x82837548
	sub_82837548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82847788
	sub_82847788(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f8,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r6,324(r1)
	PPC_STORE_U16(ctx.r1.u32 + 324, ctx.r6.u16);
	// sth r11,330(r1)
	PPC_STORE_U16(ctx.r1.u32 + 330, r11.u16);
	// sth r6,332(r1)
	PPC_STORE_U16(ctx.r1.u32 + 332, ctx.r6.u16);
	// sth r5,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r5.u16);
	// sth r10,322(r1)
	PPC_STORE_U16(ctx.r1.u32 + 322, ctx.r10.u16);
	// sth r10,326(r1)
	PPC_STORE_U16(ctx.r1.u32 + 326, ctx.r10.u16);
	// sth r5,328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 328, ctx.r5.u16);
	// sth r11,334(r1)
	PPC_STORE_U16(ctx.r1.u32 + 334, r11.u16);
	// sth r5,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r5.u16);
	// sth r10,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r10.u16);
	// sth r6,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r6.u16);
	// sth r10,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r10.u16);
	// sth r6,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r6.u16);
	// sth r11,170(r1)
	PPC_STORE_U16(ctx.r1.u32 + 170, r11.u16);
	// sth r5,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r5.u16);
	// sth r11,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, r11.u16);
	// sth r5,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r5.u16);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r9,14192
	ctx.r4.s64 = ctx.r9.s64 + 14192;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827EDC18:
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r27,r11,26,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r10,200(r31)
	PPC_STORE_U16(r31.u32 + 200, ctx.r10.u16);
	// bl 0x82771308
	sub_82771308(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82831c88
	sub_82831C88(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ede30
	if (cr6.eq) goto loc_827EDE30;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827edd80
	if (!cr6.gt) goto loc_827EDD80;
	// li r30,0
	r30.s64 = 0;
loc_827EDC74:
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r8,-4
	r11.s64 = ctx.r8.s64 + -4;
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
loc_827EDCBC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827edcbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827EDCBC;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// std r8,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r8.u64);
	// lfd f2,320(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f2,f6,f0,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f4.f64));
	// fmadds f3,f10,f7,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f0,f2,f12
	f0.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f0,232(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x82836f40
	sub_82836F40(ctx, base);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x827edc74
	if (cr6.lt) goto loc_827EDC74;
loc_827EDD80:
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ede30
	if (cr6.eq) goto loc_827EDE30;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_827EDD98:
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f4,f8,f12,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f3,f10,f8,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fadds f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 + f0.f64));
	// stfs f2,200(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,212(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82836f40
	sub_82836F40(ctx, base);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x827edd98
	if (cr6.lt) goto loc_827EDD98;
	// b 0x827ede48
	goto loc_827EDE48;
loc_827EDE30:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82836f40
	sub_82836F40(ctx, base);
loc_827EDE48:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ede64
	if (cr6.eq) goto loc_827EDE64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82771308
	sub_82771308(ctx, base);
loc_827EDE64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828313e0
	sub_828313E0(ctx, base);
loc_827EDE90:
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_827EDEA0"))) PPC_WEAK_FUNC(sub_827EDEA0);
PPC_FUNC_IMPL(__imp__sub_827EDEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827EDEA4"))) PPC_WEAK_FUNC(sub_827EDEA4);
PPC_FUNC_IMPL(__imp__sub_827EDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EDEA8"))) PPC_WEAK_FUNC(sub_827EDEA8);
PPC_FUNC_IMPL(__imp__sub_827EDEA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827edf84
	if (cr6.eq) goto loc_827EDF84;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r29,r31,180
	r29.s64 = r31.s64 + 180;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827edf3c
	if (cr6.eq) goto loc_827EDF3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827edf3c
	if (cr6.eq) goto loc_827EDF3C;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r30.u8);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827EDF3C:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827edfac
	if (!cr6.eq) goto loc_827EDFAC;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// rlwinm r5,r9,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r7,376(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e8628
	sub_827E8628(ctx, base);
	// b 0x827edfac
	goto loc_827EDFAC;
loc_827EDF84:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,13435
	ctx.r4.s64 = ctx.r10.s64 + 13435;
	// rlwinm r5,r9,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,376(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827EDFAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ea450
	sub_827EA450(ctx, base);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82835fd0
	sub_82835FD0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r30.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// stb r30,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r30.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x827ee040
	if (!cr6.eq) goto loc_827EE040;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f13,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// lfd f0,25816(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 25816);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// bl 0x827eba60
	sub_827EBA60(ctx, base);
loc_827EE040:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_827EE04C"))) PPC_WEAK_FUNC(sub_827EE04C);
PPC_FUNC_IMPL(__imp__sub_827EE04C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827EE050"))) PPC_WEAK_FUNC(sub_827EE050);
PPC_FUNC_IMPL(__imp__sub_827EE050) {
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
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bge cr6,0x827ee090
	if (!cr6.lt) goto loc_827EE090;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x827ee0ac
	if (!cr6.lt) goto loc_827EE0AC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x827ee0a0
	goto loc_827EE0A0;
loc_827EE090:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x827ee0ac
	if (cr6.lt) goto loc_827EE0AC;
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
loc_827EE0A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82867d88
	sub_82867D88(ctx, base);
loc_827EE0AC:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_827EE0C4"))) PPC_WEAK_FUNC(sub_827EE0C4);
PPC_FUNC_IMPL(__imp__sub_827EE0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EE0C8"))) PPC_WEAK_FUNC(sub_827EE0C8);
PPC_FUNC_IMPL(__imp__sub_827EE0C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bge cr6,0x827ee104
	if (!cr6.lt) goto loc_827EE104;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x827ee120
	if (!cr6.lt) goto loc_827EE120;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x827ee114
	goto loc_827EE114;
loc_827EE104:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x827ee120
	if (cr6.lt) goto loc_827EE120;
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
loc_827EE114:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82867d88
	sub_82867D88(ctx, base);
loc_827EE120:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-8
	xer.ca = r11.u32 > 7;
	r11.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ee148
	if (cr0.eq) goto loc_827EE148;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_827EE148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827EE14C"))) PPC_WEAK_FUNC(sub_827EE14C);
PPC_FUNC_IMPL(__imp__sub_827EE14C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827EE150"))) PPC_WEAK_FUNC(sub_827EE150);
PPC_FUNC_IMPL(__imp__sub_827EE150) {
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
	// mulli r11,r4,44
	r11.s64 = ctx.r4.s64 * 44;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r11,-44
	r31.s64 = r11.s64 + -44;
	// beq cr6,0x827ee190
	if (cr6.eq) goto loc_827EE190;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_827EE17C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827eafc8
	sub_827EAFC8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-44
	r31.s64 = r31.s64 + -44;
	// bne 0x827ee17c
	if (!cr0.eq) goto loc_827EE17C;
loc_827EE190:
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

__attribute__((alias("__imp__sub_827EE1A4"))) PPC_WEAK_FUNC(sub_827EE1A4);
PPC_FUNC_IMPL(__imp__sub_827EE1A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EE1A8"))) PPC_WEAK_FUNC(sub_827EE1A8);
PPC_FUNC_IMPL(__imp__sub_827EE1A8) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,13,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// bl 0x827ebb78
	sub_827EBB78(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827ee1f0
	if (cr6.eq) goto loc_827EE1F0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x827ee1fc
	if (!cr6.eq) goto loc_827EE1FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276b178
	sub_8276B178(ctx, base);
	// b 0x827ee1fc
	goto loc_827EE1FC;
loc_827EE1F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276b1f8
	sub_8276B1F8(ctx, base);
loc_827EE1FC:
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

__attribute__((alias("__imp__sub_827EE210"))) PPC_WEAK_FUNC(sub_827EE210);
PPC_FUNC_IMPL(__imp__sub_827EE210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EE214"))) PPC_WEAK_FUNC(sub_827EE214);
PPC_FUNC_IMPL(__imp__sub_827EE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EE218"))) PPC_WEAK_FUNC(sub_827EE218);
PPC_FUNC_IMPL(__imp__sub_827EE218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r10,288(r11)
	PPC_STORE_U8(r11.u32 + 288, ctx.r10.u8);
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r9,289(r11)
	PPC_STORE_U8(r11.u32 + 289, ctx.r9.u8);
	// lbz r8,10(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,290(r11)
	PPC_STORE_U8(r11.u32 + 290, ctx.r8.u8);
	// lbz r7,11(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r7,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r7.u8);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r6,292(r11)
	PPC_STORE_U8(r11.u32 + 292, ctx.r6.u8);
	// lbz r5,13(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r5,293(r11)
	PPC_STORE_U8(r11.u32 + 293, ctx.r5.u8);
	// lbz r3,14(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// stb r3,294(r11)
	PPC_STORE_U8(r11.u32 + 294, ctx.r3.u8);
	// lbz r10,15(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// stb r10,295(r11)
	PPC_STORE_U8(r11.u32 + 295, ctx.r10.u8);
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r9,296(r11)
	PPC_STORE_U16(r11.u32 + 296, ctx.r9.u16);
	// lhz r8,18(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r8,298(r11)
	PPC_STORE_U16(r11.u32 + 298, ctx.r8.u16);
	// lhz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r7,300(r11)
	PPC_STORE_U16(r11.u32 + 300, ctx.r7.u16);
	// lhz r6,22(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// sth r6,302(r11)
	PPC_STORE_U16(r11.u32 + 302, ctx.r6.u16);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,304(r11)
	PPC_STORE_U32(r11.u32 + 304, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EE290"))) PPC_WEAK_FUNC(sub_827EE290);
PPC_FUNC_IMPL(__imp__sub_827EE290) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lhz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r11,r10,16,14,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 16384;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// sth r7,200(r3)
	PPC_STORE_U16(ctx.r3.u32 + 200, ctx.r7.u16);
	// lwz r6,64(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r4,r5,13,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ebb78
	sub_827EBB78(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827ee308
	if (cr6.eq) goto loc_827EE308;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x827ee314
	if (!cr6.eq) goto loc_827EE314;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276b178
	sub_8276B178(ctx, base);
	// b 0x827ee314
	goto loc_827EE314;
loc_827EE308:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276b1f8
	sub_8276B1F8(ctx, base);
loc_827EE314:
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

__attribute__((alias("__imp__sub_827EE328"))) PPC_WEAK_FUNC(sub_827EE328);
PPC_FUNC_IMPL(__imp__sub_827EE328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EE32C"))) PPC_WEAK_FUNC(sub_827EE32C);
PPC_FUNC_IMPL(__imp__sub_827EE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EE330"))) PPC_WEAK_FUNC(sub_827EE330);
PPC_FUNC_IMPL(__imp__sub_827EE330) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,30
	ctx.r9.u64 = ctx.r3.u32 & 0x3;
	// clrlwi r30,r3,24
	r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ee3b0
	if (cr6.eq) goto loc_827EE3B0;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827ee3b0
	if (cr6.eq) goto loc_827EE3B0;
	// lbz r10,319(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r9.u8);
	// bl 0x827ea630
	sub_827EA630(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r7,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r5,20,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x1;
	// lwz r10,376(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827EE3B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r30,0,24,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ee408
	if (cr6.eq) goto loc_827EE408;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r11,200(r31)
	PPC_STORE_U16(r31.u32 + 200, r11.u16);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ee1a8
	sub_827EE1A8(ctx, base);
loc_827EE408:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ee428
	if (cr6.eq) goto loc_827EE428;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ea450
	sub_827EA450(ctx, base);
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// b 0x827ee434
	goto loc_827EE434;
loc_827EE428:
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_827EE434:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// sth r10,200(r31)
	PPC_STORE_U16(r31.u32 + 200, ctx.r10.u16);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee480
	if (cr6.eq) goto loc_827EE480;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82771308
	sub_82771308(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ee480
	if (cr6.eq) goto loc_827EE480;
	// lwz r11,2784(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r30)
	PPC_STORE_U32(r30.u32 + 2784, ctx.r10.u32);
loc_827EE480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827EE484"))) PPC_WEAK_FUNC(sub_827EE484);
PPC_FUNC_IMPL(__imp__sub_827EE484) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827EE488"))) PPC_WEAK_FUNC(sub_827EE488);
PPC_FUNC_IMPL(__imp__sub_827EE488) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ee7d8
	if (cr6.eq) goto loc_827EE7D8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x827ee4d8
	if (!cr6.eq) goto loc_827EE4D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276d270
	sub_8276D270(ctx, base);
loc_827EE4D8:
	// lbz r11,11(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827ee4f0
	if (cr6.lt) goto loc_827EE4F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x827ee504
	goto loc_827EE504;
loc_827EE4F0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,2356
	ctx.r4.s64 = r11.s64 + 2356;
loc_827EE504:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82770e88
	sub_82770E88(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827ee52c
	if (cr6.eq) goto loc_827EE52C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827EE52C:
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x827ee7b0
	if (!cr6.eq) goto loc_827EE7B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// beq cr6,0x827ee7c8
	if (cr6.eq) goto loc_827EE7C8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x827ee670
	if (cr6.eq) goto loc_827EE670;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x827ee5f0
	if (cr6.eq) goto loc_827EE5F0;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x827ee7b0
	if (!cr6.eq) goto loc_827EE7B0;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee7b0
	if (cr6.eq) goto loc_827EE7B0;
	// lbz r11,11(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827ee598
	if (cr6.lt) goto loc_827EE598;
	// li r31,0
	r31.s64 = 0;
	// b 0x827ee5ac
	goto loc_827EE5AC;
loc_827EE598:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r31,r11,2356
	r31.s64 = r11.s64 + 2356;
loc_827EE5AC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82763d80
	sub_82763D80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ee1a8
	sub_827EE1A8(ctx, base);
	// b 0x827ee7b0
	goto loc_827EE7B0;
loc_827EE5F0:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee7b0
	if (cr6.eq) goto loc_827EE7B0;
	// lbz r11,11(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827ee618
	if (cr6.lt) goto loc_827EE618;
	// li r31,0
	r31.s64 = 0;
	// b 0x827ee62c
	goto loc_827EE62C;
loc_827EE618:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r31,r11,2356
	r31.s64 = r11.s64 + 2356;
loc_827EE62C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82763d80
	sub_82763D80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ee1a8
	sub_827EE1A8(ctx, base);
	// b 0x827ee7b0
	goto loc_827EE7B0;
loc_827EE670:
	// lbz r11,11(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827ee688
	if (cr6.lt) goto loc_827EE688;
	// li r31,0
	r31.s64 = 0;
	// b 0x827ee69c
	goto loc_827EE69C;
loc_827EE688:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r31,r11,2356
	r31.s64 = r11.s64 + 2356;
loc_827EE69C:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee6e0
	if (cr6.eq) goto loc_827EE6E0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82763970
	sub_82763970(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276a628
	sub_8276A628(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82763d80
	sub_82763D80(ctx, base);
loc_827EE6E0:
	// lhz r11,200(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 200);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ee76c
	if (cr6.eq) goto loc_827EE76C;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827ee76c
	if (cr6.eq) goto loc_827EE76C;
	// lbz r11,11(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827eb688
	sub_827EB688(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ee73c
	if (cr6.eq) goto loc_827EE73C;
	// lhz r11,200(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 200);
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// b 0x827ee748
	goto loc_827EE748;
loc_827EE73C:
	// lhz r11,200(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_827EE748:
	// sth r10,200(r30)
	PPC_STORE_U16(r30.u32 + 200, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,11(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// b 0x827ee7a4
	goto loc_827EE7A4;
loc_827EE76C:
	// rlwinm r10,r11,27,21,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ee7b0
	if (cr6.eq) goto loc_827EE7B0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// sth r11,200(r30)
	PPC_STORE_U16(r30.u32 + 200, r11.u16);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,11(r28)
	ctx.r8.u64 = PPC_LOAD_U8(r28.u32 + 11);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
loc_827EE7A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827a1ed8
	sub_827A1ED8(ctx, base);
loc_827EE7B0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827EE7C8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827ee7d8
	if (cr6.eq) goto loc_827EE7D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827EE7D8:
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_827EE7E4"))) PPC_WEAK_FUNC(sub_827EE7E4);
PPC_FUNC_IMPL(__imp__sub_827EE7E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827EE7E8"))) PPC_WEAK_FUNC(sub_827EE7E8);
PPC_FUNC_IMPL(__imp__sub_827EE7E8) {
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
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee81c
	if (cr6.eq) goto loc_827EE81C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x827ee828
	goto loc_827EE828;
loc_827EE81C:
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lhz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_827EE828:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ee8c0
	if (cr6.eq) goto loc_827EE8C0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x827ee888
	if (!cr6.eq) goto loc_827EE888;
	// lhz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827ee87c
	if (!cr6.eq) goto loc_827EE87C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x827ee87c
	if (cr6.eq) goto loc_827EE87C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827EE87C:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// b 0x827ee890
	goto loc_827EE890;
loc_827EE888:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x827ee8c0
	if (!cr6.eq) goto loc_827EE8C0;
loc_827EE890:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee8c0
	if (cr6.eq) goto loc_827EE8C0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ee8c0
	if (cr6.eq) goto loc_827EE8C0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EE8C0:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee8d8
	if (cr6.eq) goto loc_827EE8D8;
	// li r11,0
	r11.s64 = 0;
	// b 0x827ee8e4
	goto loc_827EE8E4;
loc_827EE8D8:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lhz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r9,29,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
loc_827EE8E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ee918
	if (cr6.eq) goto loc_827EE918;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee900
	if (cr6.eq) goto loc_827EE900;
	// li r11,0
	r11.s64 = 0;
	// b 0x827ee90c
	goto loc_827EE90C;
loc_827EE900:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lhz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_827EE90C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ee9a0
	if (cr6.eq) goto loc_827EE9A0;
loc_827EE918:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x827ee950
	if (!cr6.eq) goto loc_827EE950;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee950
	if (cr6.eq) goto loc_827EE950;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ee950
	if (cr6.eq) goto loc_827EE950;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EE950:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276efa8
	sub_8276EFA8(ctx, base);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827ee9a0
	if (cr6.eq) goto loc_827EE9A0;
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r9,r11,16384
	ctx.r9.u64 = r11.u64 | 16384;
	// sth r9,200(r31)
	PPC_STORE_U16(r31.u32 + 200, ctx.r9.u16);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ee1a8
	sub_827EE1A8(ctx, base);
loc_827EE9A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827EE9A4"))) PPC_WEAK_FUNC(sub_827EE9A4);
PPC_FUNC_IMPL(__imp__sub_827EE9A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827EE9A8"))) PPC_WEAK_FUNC(sub_827EE9A8);
PPC_FUNC_IMPL(__imp__sub_827EE9A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,13764
	ctx.r8.s64 = r11.s64 + 13764;
	// addi r7,r10,13748
	ctx.r7.s64 = ctx.r10.s64 + 13748;
	// addi r6,r9,13660
	ctx.r6.s64 = ctx.r9.s64 + 13660;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r6,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r6.u32);
	// bl 0x82831a88
	sub_82831A88(ctx, base);
	// lwz r30,220(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827eea28
	if (cr6.eq) goto loc_827EEA28;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827eea20
	if (!cr0.eq) goto loc_827EEA20;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EEA20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827EEA28:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827eea38
	if (cr6.eq) goto loc_827EEA38;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827EEA38:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// li r11,-1
	r11.s64 = -1;
	// rlwinm r3,r7,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827EEA50:
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
	// bne 0x827eea50
	if (!cr0.eq) goto loc_827EEA50;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827eea7c
	if (!cr0.eq) goto loc_827EEA7C;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827EEA7C:
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827eea9c
	if (!cr0.eq) goto loc_827EEA9C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EEA9C:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827eeaac
	if (cr6.eq) goto loc_827EEAAC;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827EEAAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82770148
	sub_82770148(ctx, base);
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

__attribute__((alias("__imp__sub_827EEAC8"))) PPC_WEAK_FUNC(sub_827EEAC8);
PPC_FUNC_IMPL(__imp__sub_827EEAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EEACC"))) PPC_WEAK_FUNC(sub_827EEACC);
PPC_FUNC_IMPL(__imp__sub_827EEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EEAD0"))) PPC_WEAK_FUNC(sub_827EEAD0);
PPC_FUNC_IMPL(__imp__sub_827EEAD0) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827eeb58
	if (!cr6.eq) goto loc_827EEB58;
	// li r11,323
	r11.s64 = 323;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827eeb40
	if (cr6.eq) goto loc_827EEB40;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x827e6de0
	sub_827E6DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827eeb44
	goto loc_827EEB44;
loc_827EEB40:
	// li r30,0
	r30.s64 = 0;
loc_827EEB44:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827eeb54
	if (cr6.eq) goto loc_827EEB54;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827EEB54:
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
loc_827EEB58:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
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

__attribute__((alias("__imp__sub_827EEB70"))) PPC_WEAK_FUNC(sub_827EEB70);
PPC_FUNC_IMPL(__imp__sub_827EEB70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EEB74"))) PPC_WEAK_FUNC(sub_827EEB74);
PPC_FUNC_IMPL(__imp__sub_827EEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EEB78"))) PPC_WEAK_FUNC(sub_827EEB78);
PPC_FUNC_IMPL(__imp__sub_827EEB78) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_827EEB78"))) PPC_WEAK_FUNC(sub_827EEB78);
PPC_FUNC_IMPL(__imp__sub_827EEB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eead0
	sub_827EEAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EEB7C"))) PPC_WEAK_FUNC(sub_827EEB7C);
PPC_FUNC_IMPL(__imp__sub_827EEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EEB80"))) PPC_WEAK_FUNC(sub_827EEB80);
PPC_FUNC_IMPL(__imp__sub_827EEB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
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
	// bl 0x828e9408
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r25,r3,-104
	r25.s64 = ctx.r3.s64 + -104;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// bl 0x8276f338
	sub_8276F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x827eebec
	if (cr6.lt) goto loc_827EEBEC;
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(r31.s32, 21, xer);
	// ble cr6,0x827eec4c
	if (!cr6.gt) goto loc_827EEC4C;
loc_827EEBEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827eec4c
	if (cr6.eq) goto loc_827EEC4C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827eead0
	sub_827EEAD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827eec4c
	if (cr6.eq) goto loc_827EEC4C;
	// lwz r3,120(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827eec4c
	if (cr6.eq) goto loc_827EEC4C;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r26.u8);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82791058
	sub_82791058(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827eec44
	if (cr6.eq) goto loc_827EEC44;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_827EEC44:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827EEC4C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827eee10
	if (!cr6.eq) goto loc_827EEE10;
	// addi r11,r31,-25
	r11.s64 = r31.s64 + -25;
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(r11.u32, 79, xer);
	// bgt cr6,0x827f10b8
	if (cr6.gt) goto loc_827F10B8;
	// lis r12,-32129
	r12.s64 = -2105606144;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4964
	r12.s64 = r12.s64 + -4964;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_827EEE10;
	case 1:
		goto loc_827F10B8;
	case 2:
		goto loc_827F10B8;
	case 3:
		goto loc_827F10B8;
	case 4:
		goto loc_827F10B8;
	case 5:
		goto loc_827F10B8;
	case 6:
		goto loc_827F10B8;
	case 7:
		goto loc_827F10B8;
	case 8:
		goto loc_827F10B8;
	case 9:
		goto loc_827F10B8;
	case 10:
		goto loc_827F10B8;
	case 11:
		goto loc_827F10B8;
	case 12:
		goto loc_827F10B8;
	case 13:
		goto loc_827EEEC0;
	case 14:
		goto loc_827F10B8;
	case 15:
		goto loc_827F10B8;
	case 16:
		goto loc_827EEF54;
	case 17:
		goto loc_827F10B8;
	case 18:
		goto loc_827EEDDC;
	case 19:
		goto loc_827EEE38;
	case 20:
		goto loc_827EEE10;
	case 21:
		goto loc_827EF040;
	case 22:
		goto loc_827EF304;
	case 23:
		goto loc_827EF398;
	case 24:
		goto loc_827EF43C;
	case 25:
		goto loc_827EF4B4;
	case 26:
		goto loc_827EF574;
	case 27:
		goto loc_827EF5A8;
	case 28:
		goto loc_827EFC10;
	case 29:
		goto loc_827EF6D4;
	case 30:
		goto loc_827EF754;
	case 31:
		goto loc_827F10B8;
	case 32:
		goto loc_827F10B8;
	case 33:
		goto loc_827EF7C8;
	case 34:
		goto loc_827EF840;
	case 35:
		goto loc_827EF900;
	case 36:
		goto loc_827F10B8;
	case 37:
		goto loc_827EF9C0;
	case 38:
		goto loc_827EFB18;
	case 39:
		goto loc_827EFBB4;
	case 40:
		goto loc_827EFDB4;
	case 41:
		goto loc_827EF608;
	case 42:
		goto loc_827EFE10;
	case 43:
		goto loc_827F0268;
	case 44:
		goto loc_827F0318;
	case 45:
		goto loc_827F038C;
	case 46:
		goto loc_827F10B8;
	case 47:
		goto loc_827F10B8;
	case 48:
		goto loc_827F0DCC;
	case 49:
		goto loc_827F1048;
	case 50:
		goto loc_827F10FC;
	case 51:
		goto loc_827F1348;
	case 52:
		goto loc_827F1530;
	case 53:
		goto loc_827F15B0;
	case 54:
		goto loc_827F10B8;
	case 55:
		goto loc_827F10B8;
	case 56:
		goto loc_827F1630;
	case 57:
		goto loc_827F1630;
	case 58:
		goto loc_827F1630;
	case 59:
		goto loc_827F1630;
	case 60:
		goto loc_827F1684;
	case 61:
		goto loc_827F16F0;
	case 62:
		goto loc_827F10B8;
	case 63:
		goto loc_827F10B8;
	case 64:
		goto loc_827F041C;
	case 65:
		goto loc_827F04B0;
	case 66:
		goto loc_827F0554;
	case 67:
		goto loc_827F05F8;
	case 68:
		goto loc_827F10B8;
	case 69:
		goto loc_827F069C;
	case 70:
		goto loc_827F0730;
	case 71:
		goto loc_827F07C8;
	case 72:
		goto loc_827F088C;
	case 73:
		goto loc_827F0918;
	case 74:
		goto loc_827F09CC;
	case 75:
		goto loc_827F0A80;
	case 76:
		goto loc_827F0B28;
	case 77:
		goto loc_827F0BD0;
	case 78:
		goto loc_827F0C78;
	case 79:
		goto loc_827F0D18;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-4592(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4592);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,-4416(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4416);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,-4268(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4268);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,-4644(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4644);
	// lwz r19,-4552(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4552);
	// lwz r19,-4592(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4592);
	// lwz r19,-4032(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -4032);
	// lwz r19,-3324(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -3324);
	// lwz r19,-3176(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -3176);
	// lwz r19,-3012(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -3012);
	// lwz r19,-2892(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2892);
	// lwz r19,-2700(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2700);
	// lwz r19,-2648(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2648);
	// lwz r19,-1008(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1008);
	// lwz r19,-2348(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2348);
	// lwz r19,-2220(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2220);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,-2104(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2104);
	// lwz r19,-1984(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1984);
	// lwz r19,-1792(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1792);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,-1600(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1600);
	// lwz r19,-1256(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1256);
	// lwz r19,-1100(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -1100);
	// lwz r19,-588(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -588);
	// lwz r19,-2552(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -2552);
	// lwz r19,-496(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + -496);
	// lwz r19,616(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// lwz r19,792(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 792);
	// lwz r19,908(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 908);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,3532(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 3532);
	// lwz r19,4168(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4168);
	// lwz r19,4348(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4348);
	// lwz r19,4936(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4936);
	// lwz r19,5424(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5424);
	// lwz r19,5552(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5552);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,5680(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5680);
	// lwz r19,5680(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5680);
	// lwz r19,5680(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5680);
	// lwz r19,5680(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5680);
	// lwz r19,5764(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5764);
	// lwz r19,5872(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 5872);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,1052(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1052);
	// lwz r19,1200(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// lwz r19,1364(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1364);
	// lwz r19,1528(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// lwz r19,4280(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4280);
	// lwz r19,1692(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1692);
	// lwz r19,1840(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1840);
	// lwz r19,1992(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 1992);
	// lwz r19,2188(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// lwz r19,2328(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2328);
	// lwz r19,2508(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2508);
	// lwz r19,2688(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2688);
	// lwz r19,2856(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2856);
	// lwz r19,3024(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 3024);
	// lwz r19,3192(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r19,3352(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 3352);
loc_827EEDDC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827eee00
	if (cr6.eq) goto loc_827EEE00;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// b 0x827eee0c
	goto loc_827EEE0C;
loc_827EEE00:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_827EEE0C:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
loc_827EEE10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EEE38:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r9,96(r24)
	ctx.r9.u64 = PPC_LOAD_U16(r24.u32 + 96);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r5,r9,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// lwz r8,376(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827eee98
	if (!cr0.eq) goto loc_827EEE98;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EEE98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EEEC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827eae38
	sub_827EAE38(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,376(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827eef2c
	if (!cr0.eq) goto loc_827EEF2C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EEF2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EEF54:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r31,r31,8
	r31.u64 = r31.u32 & 0xFFFFFF;
	// lhz r7,202(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// or r11,r8,r31
	r11.u64 = ctx.r8.u64 | r31.u64;
	// sth r10,202(r1)
	PPC_STORE_U16(ctx.r1.u32 + 202, ctx.r10.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82831590
	sub_82831590(ctx, base);
	// lwz r9,56(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lhz r11,202(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// rlwinm r5,r7,0,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF000000;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// ori r9,r11,1
	ctx.r9.u64 = r11.u64 | 1;
	// or r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 | r31.u64;
	// sth r9,202(r1)
	PPC_STORE_U16(ctx.r1.u32 + 202, ctx.r9.u16);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef010
	if (cr6.eq) goto loc_827EF010;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF010:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF040:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r10,-10132
	r29.s64 = ctx.r10.s64 + -10132;
	// addi r31,r11,32024
	r31.s64 = r11.s64 + 32024;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x827ef09c
	if (!cr6.eq) goto loc_827EF09C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ef094
	if (cr6.eq) goto loc_827EF094;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x827ef0a4
	goto loc_827EF0A4;
loc_827EF094:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x827ef0a4
	goto loc_827EF0A4;
loc_827EF09C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827EF0A4:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,56(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lhz r7,96(r24)
	ctx.r7.u64 = PPC_LOAD_U16(r24.u32 + 96);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lbz r5,316(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 316);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// clrlwi r7,r5,30
	ctx.r7.u64 = ctx.r5.u32 & 0x3;
loc_827EF0D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x827ef0f8
	if (cr6.eq) goto loc_827EF0F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827ef0d4
	if (cr6.eq) goto loc_827EF0D4;
loc_827EF0F8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827ef12c
	if (!cr6.eq) goto loc_827EF12C;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// lwz r9,56(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r5,316(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 316);
	// lbz r8,319(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 319);
	// ori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 | 1;
	// rlwinm r4,r5,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r3,319(r9)
	PPC_STORE_U8(ctx.r9.u32 + 319, ctx.r3.u8);
	// stb r4,316(r9)
	PPC_STORE_U8(ctx.r9.u32 + 316, ctx.r4.u8);
	// b 0x827ef22c
	goto loc_827EF22C;
loc_827EF12C:
	// lhz r9,200(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// sth r5,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r5.u16);
loc_827EF140:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x827ef164
	if (cr6.eq) goto loc_827EF164;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827ef140
	if (cr6.eq) goto loc_827EF140;
loc_827EF164:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827ef188
	if (!cr6.eq) goto loc_827EF188;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// stb r8,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r8.u8);
	// b 0x827ef228
	goto loc_827EF228;
loc_827EF188:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-10140
	ctx.r10.s64 = ctx.r10.s64 + -10140;
loc_827EF194:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x827ef1b8
	if (cr6.eq) goto loc_827EF1B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827ef194
	if (cr6.eq) goto loc_827EF194;
loc_827EF1B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827ef1d4
	if (!cr6.eq) goto loc_827EF1D4;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// rlwimi r9,r10,0,30,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF03) | (ctx.r9.u64 & 0xFC);
	// b 0x827ef21c
	goto loc_827EF21C;
loc_827EF1D4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14184
	ctx.r10.s64 = ctx.r10.s64 + 14184;
loc_827EF1E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827ef204
	if (cr6.eq) goto loc_827EF204;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827ef1e0
	if (cr6.eq) goto loc_827EF1E0;
loc_827EF204:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827ef22c
	if (!cr6.eq) goto loc_827EF22C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// rlwimi r9,r10,1,30,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFFFFFFFF03) | (ctx.r9.u64 & 0xFC);
loc_827EF21C:
	// lbz r8,319(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// stb r9,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r9.u8);
	// ori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 | 1;
loc_827EF228:
	// stb r5,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r5.u8);
loc_827EF22C:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x827ef254
	if (!cr6.eq) goto loc_827EF254;
	// lhz r11,96(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 96);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x827ef25c
	if (cr6.eq) goto loc_827EF25C;
loc_827EF254:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ea6c0
	sub_827EA6C0(ctx, base);
loc_827EF25C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef284
	if (cr6.eq) goto loc_827EF284;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF284:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827EF294:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827ef294
	if (!cr0.eq) goto loc_827EF294;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827ef2c0
	if (!cr0.eq) goto loc_827EF2C0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827EF2C0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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
	// bne 0x827ef2dc
	if (!cr0.eq) goto loc_827EF2DC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EF2DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF304:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// rlwinm r31,r10,29,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x827ef348
	if (cr6.eq) goto loc_827EF348;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ef33c
	if (cr6.eq) goto loc_827EF33C;
	// bl 0x82831460
	sub_82831460(ctx, base);
	// b 0x827ef340
	goto loc_827EF340;
loc_827EF33C:
	// bl 0x82831490
	sub_82831490(ctx, base);
loc_827EF340:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ea6c0
	sub_827EA6C0(ctx, base);
loc_827EF348:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef370
	if (cr6.eq) goto loc_827EF370;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF370:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF398:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// rlwinm r31,r10,30,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827ef3ec
	if (cr6.eq) goto loc_827EF3EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// beq cr6,0x827ef3d4
	if (cr6.eq) goto loc_827EF3D4;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// b 0x827ef3e0
	goto loc_827EF3E0;
loc_827EF3D4:
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_827EF3E0:
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ea6c0
	sub_827EA6C0(ctx, base);
loc_827EF3EC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef414
	if (cr6.eq) goto loc_827EF414;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF414:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF43C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ef460
	if (cr6.eq) goto loc_827EF460;
	// li r11,255
	r11.s64 = 255;
	// stb r11,72(r24)
	PPC_STORE_U8(r24.u32 + 72, r11.u8);
	// b 0x827ef464
	goto loc_827EF464;
loc_827EF460:
	// stb r26,72(r24)
	PPC_STORE_U8(r24.u32 + 72, r26.u8);
loc_827EF464:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef48c
	if (cr6.eq) goto loc_827EF48C;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF48C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF4B4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r3,76(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827ef4f8
	if (!cr0.eq) goto loc_827EF4F8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EF4F8:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r31,76(r24)
	PPC_STORE_U32(r24.u32 + 76, r31.u32);
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
	// bne 0x827ef518
	if (!cr0.eq) goto loc_827EF518;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EF518:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ea450
	sub_827EA450(ctx, base);
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r10,r11,16384
	ctx.r10.u64 = r11.u64 | 16384;
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827ee1a8
	sub_827EE1A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF574:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF5A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// beq cr6,0x827ef5d4
	if (cr6.eq) goto loc_827EF5D4;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x827ef5dc
	goto loc_827EF5DC;
loc_827EF5D4:
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
loc_827EF5DC:
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF608:
	// lhz r11,96(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r11,30,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827ef684
	if (cr6.eq) goto loc_827EF684;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ef63c
	if (cr6.eq) goto loc_827EF63C;
	// lhz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// b 0x827ef648
	goto loc_827EF648;
loc_827EF63C:
	// lhz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_827EF648:
	// sth r9,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r9.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// beq cr6,0x827ef664
	if (cr6.eq) goto loc_827EF664;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x827ef670
	goto loc_827EF670;
loc_827EF664:
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_827EF670:
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,319(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r9.u8);
loc_827EF684:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef6ac
	if (cr6.eq) goto loc_827EF6AC;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF6AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF6D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// rlwinm r11,r10,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// and r11,r9,r10
	r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82832220
	sub_82832220(ctx, base);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef72c
	if (cr6.eq) goto loc_827EF72C;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF72C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF754:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bge cr6,0x827ef76c
	if (!cr6.lt) goto loc_827EF76C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_827EF76C:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x82838c00
	sub_82838C00(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef7a0
	if (cr6.eq) goto loc_827EF7A0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF7A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF7C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ef7ec
	if (cr6.eq) goto loc_827EF7EC;
	// li r11,255
	r11.s64 = 255;
	// stb r11,68(r24)
	PPC_STORE_U8(r24.u32 + 68, r11.u8);
	// b 0x827ef7f0
	goto loc_827EF7F0;
loc_827EF7EC:
	// stb r26,68(r24)
	PPC_STORE_U8(r24.u32 + 68, r26.u8);
loc_827EF7F0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef818
	if (cr6.eq) goto loc_827EF818;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF818:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF840:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r10,52,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r8,r11,r12
	ctx.r8.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// bne cr6,0x827ef880
	if (!cr6.eq) goto loc_827EF880;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827ef884
	if (!cr6.eq) goto loc_827EF884;
loc_827EF880:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_827EF884:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ef8b0
	if (!cr6.eq) goto loc_827EF8B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// lwz r11,68(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// clrlwi r10,r3,8
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFFF;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,68(r24)
	PPC_STORE_U32(r24.u32 + 68, ctx.r8.u32);
loc_827EF8B0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef8d8
	if (cr6.eq) goto loc_827EF8D8;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF8D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF900:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// li r12,2047
	r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r9,r10,52,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// and r8,r11,r12
	ctx.r8.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// bne cr6,0x827ef940
	if (!cr6.eq) goto loc_827EF940;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827ef944
	if (!cr6.eq) goto loc_827EF944;
loc_827EF940:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_827EF944:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ef970
	if (!cr6.eq) goto loc_827EF970;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// lwz r11,72(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// clrlwi r10,r3,8
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFFF;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,72(r24)
	PPC_STORE_U32(r24.u32 + 72, ctx.r8.u32);
loc_827EF970:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ef998
	if (cr6.eq) goto loc_827EF998;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EF998:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EF9C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subfic r8,r9,6
	xer.ca = ctx.r9.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r9.s64;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-28916
	ctx.r4.s64 = ctx.r10.s64 + -28916;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// clrlwi r29,r11,31
	r29.u64 = r11.u32 & 0x1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x827ea238
	sub_827EA238(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827efa4c
	if (!cr0.eq) goto loc_827EFA4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFA4C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827efac4
	if (!cr6.eq) goto loc_827EFAC4;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r8,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r10.s64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subfe r10,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r9,-26084
	ctx.r4.s64 = ctx.r9.s64 + -26084;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x827ea238
	sub_827EA238(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827efac4
	if (!cr0.eq) goto loc_827EFAC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFAC4:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,319(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r9.u8);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827efaf0
	if (!cr0.eq) goto loc_827EFAF0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFAF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFB18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// li r11,2047
	r11.s64 = 2047;
	// li r12,2047
	r12.s64 = 2047;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x827efb58
	if (!cr6.eq) goto loc_827EFB58;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827efb5c
	if (!cr6.eq) goto loc_827EFB5C;
loc_827EFB58:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_827EFB5C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827efb8c
	if (!cr6.eq) goto loc_827EFB8C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x827efb8c
	if (cr6.lt) goto loc_827EFB8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
loc_827EFB8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFBB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827efbd8
	if (cr6.eq) goto loc_827EFBD8;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// b 0x827efbe4
	goto loc_827EFBE4;
loc_827EFBD8:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_827EFBE4:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFC10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subfic r8,r9,6
	xer.ca = ctx.r9.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r9.s64;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-20736
	ctx.r4.s64 = ctx.r10.s64 + -20736;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// clrlwi r29,r11,31
	r29.u64 = r11.u32 & 0x1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x827ea238
	sub_827EA238(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827efc9c
	if (!cr0.eq) goto loc_827EFC9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFC9C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827efcbc
	if (cr6.eq) goto loc_827EFCBC;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x827efd44
	goto loc_827EFD44;
loc_827EFCBC:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r8,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r10.s64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subfe r10,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r9,14172
	ctx.r4.s64 = ctx.r9.s64 + 14172;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x827ea238
	sub_827EA238(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827efd2c
	if (!cr0.eq) goto loc_827EFD2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFD2C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827efd48
	if (cr6.eq) goto loc_827EFD48;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
loc_827EFD44:
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
loc_827EFD48:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827efd70
	if (cr6.eq) goto loc_827EFD70;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EFD70:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// bne 0x827efd8c
	if (!cr0.eq) goto loc_827EFD8C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFD8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFDB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827efdd8
	if (cr6.eq) goto loc_827EFDD8;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// b 0x827efde4
	goto loc_827EFDE4;
loc_827EFDD8:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_827EFDE4:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFE10:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827efe48
	if (cr6.eq) goto loc_827EFE48;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827EFE48:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bne cr6,0x827eff38
	if (!cr6.eq) goto loc_827EFF38;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827efee4
	if (cr6.eq) goto loc_827EFEE4;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r26,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r26.u8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r26.u8);
	// stb r26,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r26.u8);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r26.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r26.u32);
	// stw r26,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r26.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// b 0x827efee8
	goto loc_827EFEE8;
loc_827EFEE4:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_827EFEE8:
	// stw r11,116(r24)
	PPC_STORE_U32(r24.u32 + 116, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827eff38
	if (!cr6.eq) goto loc_827EFF38;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// bne 0x827eff10
	if (!cr0.eq) goto loc_827EFF10;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827EFF10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827EFF38:
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r28,5
	r28.s64 = 5;
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r6,r8,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lwz r4,116(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// rlwinm r5,r8,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lwz r3,116(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// stb r5,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f30,-26528(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -26528);
loc_827EFF80:
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x827ee050
	sub_827EE050(ctx, base);
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x827ee050
	sub_827EE050(ctx, base);
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_827EFFA8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f01b8
	if (cr6.eq) goto loc_827F01B8;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x827f0198
	if (cr6.eq) goto loc_827F0198;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x827f0198
	if (cr6.eq) goto loc_827F0198;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// beq cr6,0x827f0188
	if (cr6.eq) goto loc_827F0188;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// beq cr6,0x827f0188
	if (cr6.eq) goto loc_827F0188;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x827f01a8
	if (!cr6.eq) goto loc_827F01A8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827f01a8
	if (cr6.eq) goto loc_827F01A8;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f0018
	if (cr6.eq) goto loc_827F0018;
loc_827F0000:
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x827f0018
	if (cr6.eq) goto loc_827F0018;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r29.u32 = ea;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827f0000
	if (!cr6.eq) goto loc_827F0000;
loc_827F0018:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f01a8
	if (cr6.eq) goto loc_827F01A8;
	// subf r31,r4,r29
	r31.s64 = r29.s64 - ctx.r4.s64;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(r31.s32, 23, xer);
	// bgt cr6,0x827f01a8
	if (cr6.gt) goto loc_827F01A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// stbx r26,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r26.u8);
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r28.u8);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f00ac
	if (!cr0.eq) goto loc_827F00AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F00AC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f01a8
	if (cr6.eq) goto loc_827F01A8;
loc_827F00C4:
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x827f00dc
	if (cr6.eq) goto loc_827F00DC;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r29.u32 = ea;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827f00c4
	if (!cr6.eq) goto loc_827F00C4;
loc_827F00DC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f01a8
	if (cr6.eq) goto loc_827F01A8;
	// subf r31,r4,r29
	r31.s64 = r29.s64 - ctx.r4.s64;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(r31.s32, 23, xer);
	// bgt cr6,0x827f01a8
	if (cr6.gt) goto loc_827F01A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// stbx r26,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r26.u8);
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r28.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f016c
	if (!cr0.eq) goto loc_827F016C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F016C:
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// bl 0x827ee0c8
	sub_827EE0C8(ctx, base);
	// b 0x827effa8
	goto loc_827EFFA8;
loc_827F0188:
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r11,20
	r27.s64 = r11.s64 + 20;
	// b 0x827effa8
	goto loc_827EFFA8;
loc_827F0198:
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// b 0x827effa8
	goto loc_827EFFA8;
loc_827F01A8:
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x827eff80
	goto loc_827EFF80;
loc_827F01B8:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f0224
	if (cr6.eq) goto loc_827F0224;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,116(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827f0208
	if (!cr0.eq) goto loc_827F0208;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F0208:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f0224
	if (!cr0.eq) goto loc_827F0224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F0224:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// bne 0x827f0240
	if (!cr0.eq) goto loc_827F0240;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F0240:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0268:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f02a0
	if (cr6.eq) goto loc_827F02A0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F02A0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// lbz r11,295(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 295);
	// rlwimi r3,r11,24,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r3,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r3.u32);
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f02f0
	if (cr6.eq) goto loc_827F02F0;
	// lwz r10,56(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stb r8,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r8.u8);
	// rlwinm r6,r8,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r8,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// lwz r4,116(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lwz r3,116(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// stb r5,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
loc_827F02F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0318:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// lwz r11,140(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 140);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// ori r10,r11,2048
	ctx.r10.u64 = r11.u64 | 2048;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827f0360
	if (!cr6.eq) goto loc_827F0360;
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_827F0360:
	// stw r10,140(r25)
	PPC_STORE_U32(r25.u32 + 140, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F038C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f03d4
	if (cr6.eq) goto loc_827F03D4;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// b 0x827f03e0
	goto loc_827F03E0;
loc_827F03D4:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_827F03E0:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,319(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r9.u8);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F041C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// beq cr6,0x827f0454
	if (cr6.eq) goto loc_827F0454;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// b 0x827f045c
	goto loc_827F045C;
loc_827F0454:
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
loc_827F045C:
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0488
	if (cr6.eq) goto loc_827F0488;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0488:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F04B0:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f0500
	if (cr6.lt) goto loc_827F0500;
	// li r11,255
	r11.s64 = 255;
loc_827F0500:
	// stb r11,288(r31)
	PPC_STORE_U8(r31.u32 + 288, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f052c
	if (cr6.eq) goto loc_827F052C;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F052C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0554:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f05a4
	if (cr6.lt) goto loc_827F05A4;
	// li r11,255
	r11.s64 = 255;
loc_827F05A4:
	// stb r11,289(r31)
	PPC_STORE_U8(r31.u32 + 289, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f05d0
	if (cr6.eq) goto loc_827F05D0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F05D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F05F8:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f0648
	if (cr6.lt) goto loc_827F0648;
	// li r11,255
	r11.s64 = 255;
loc_827F0648:
	// stb r11,290(r31)
	PPC_STORE_U8(r31.u32 + 290, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0674
	if (cr6.eq) goto loc_827F0674;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0674:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F069C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f06d4
	if (cr6.eq) goto loc_827F06D4;
	// lbz r11,318(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 318);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// b 0x827f06dc
	goto loc_827F06DC;
loc_827F06D4:
	// lbz r11,318(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 318);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_827F06DC:
	// stb r10,318(r31)
	PPC_STORE_U8(r31.u32 + 318, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0708
	if (cr6.eq) goto loc_827F0708;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0708:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0730:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f0768
	if (cr6.eq) goto loc_827F0768;
	// lbz r11,318(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 318);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// b 0x827f0774
	goto loc_827F0774;
loc_827F0768:
	// lbz r11,318(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 318);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_827F0774:
	// stb r10,318(r31)
	PPC_STORE_U8(r31.u32 + 318, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f07a0
	if (cr6.eq) goto loc_827F07A0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F07A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F07C8:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-23476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23476);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827f0824
	if (!cr6.lt) goto loc_827F0824;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// lfs f12,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x827f0828
	if (cr6.lt) goto loc_827F0828;
loc_827F0824:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
loc_827F0828:
	// fctidz f0,f12
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r11,103(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r11,295(r31)
	PPC_STORE_U8(r31.u32 + 295, r11.u8);
	// stb r11,304(r31)
	PPC_STORE_U8(r31.u32 + 304, r11.u8);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0864
	if (cr6.eq) goto loc_827F0864;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0864:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F088C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x827ea3e8
	sub_827EA3E8(ctx, base);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f08f0
	if (cr6.eq) goto loc_827F08F0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F08F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0918:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,32476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f0978
	if (cr6.lt) goto loc_827F0978;
	// li r11,255
	r11.s64 = 255;
loc_827F0978:
	// stb r11,292(r31)
	PPC_STORE_U8(r31.u32 + 292, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f09a4
	if (cr6.eq) goto loc_827F09A4;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F09A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F09CC:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,32476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f0a2c
	if (cr6.lt) goto loc_827F0A2C;
	// li r11,255
	r11.s64 = 255;
loc_827F0A2C:
	// stb r11,293(r31)
	PPC_STORE_U8(r31.u32 + 293, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0a58
	if (cr6.eq) goto loc_827F0A58;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0A58:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0A80:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// lfs f0,-24324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// sth r7,298(r31)
	PPC_STORE_U16(r31.u32 + 298, ctx.r7.u16);
	// bl 0x827ea2d8
	sub_827EA2D8(ctx, base);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0b00
	if (cr6.eq) goto loc_827F0B00;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0B00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0B28:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827f0b70
	if (cr6.eq) goto loc_827F0B70;
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// b 0x827f0b7c
	goto loc_827F0B7C;
loc_827F0B70:
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_827F0B7C:
	// stb r10,291(r31)
	PPC_STORE_U8(r31.u32 + 291, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0ba8
	if (cr6.eq) goto loc_827F0BA8;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0BA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0BD0:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827f0c18
	if (cr6.eq) goto loc_827F0C18;
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// b 0x827f0c24
	goto loc_827F0C24;
loc_827F0C18:
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_827F0C24:
	// stb r10,291(r31)
	PPC_STORE_U8(r31.u32 + 291, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0c50
	if (cr6.eq) goto loc_827F0C50;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0C50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0C78:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x82768778
	sub_82768778(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x827f0cbc
	if (!cr6.gt) goto loc_827F0CBC;
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// b 0x827f0cc4
	goto loc_827F0CC4;
loc_827F0CBC:
	// lbz r11,291(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 291);
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
loc_827F0CC4:
	// stb r10,291(r31)
	PPC_STORE_U8(r31.u32 + 291, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0cf0
	if (cr6.eq) goto loc_827F0CF0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0CF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0D18:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,291(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 291);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,291(r11)
	PPC_STORE_U8(r11.u32 + 291, ctx.r9.u8);
	// lwz r31,56(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,32476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x827f0d78
	if (cr6.lt) goto loc_827F0D78;
	// li r11,255
	r11.s64 = 255;
loc_827F0D78:
	// stb r11,294(r31)
	PPC_STORE_U8(r31.u32 + 294, r11.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0da4
	if (cr6.eq) goto loc_827F0DA4;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0DA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F0DCC:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,32024
	ctx.r10.s64 = r11.s64 + 32024;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_827F0E18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f0e3c
	if (cr6.eq) goto loc_827F0E3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f0e18
	if (cr6.eq) goto loc_827F0E18;
loc_827F0E3C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f0e7c
	if (!cr6.eq) goto loc_827F0E7C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 317);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r9,317(r11)
	PPC_STORE_U8(r11.u32 + 317, ctx.r9.u8);
	// lwz r8,56(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r7,316(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 316);
	// lbz r6,319(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 319);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// ori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 | 1;
	// rlwinm r5,r5,0,30,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r4,319(r8)
	PPC_STORE_U8(ctx.r8.u32 + 319, ctx.r4.u8);
	// stb r5,316(r8)
	PPC_STORE_U8(ctx.r8.u32 + 316, ctx.r5.u8);
	// b 0x827f0f8c
	goto loc_827F0F8C;
loc_827F0E7C:
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// bl 0x82831430
	sub_82831430(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,21884
	ctx.r10.s64 = r11.s64 + 21884;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F0E9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f0ec0
	if (cr6.eq) goto loc_827F0EC0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f0e9c
	if (cr6.eq) goto loc_827F0E9C;
loc_827F0EC0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f0ee4
	if (!cr6.eq) goto loc_827F0EE4;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 4;
	// stb r6,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r6.u8);
	// b 0x827f0f80
	goto loc_827F0F80;
loc_827F0EE4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,21876
	ctx.r10.s64 = ctx.r10.s64 + 21876;
loc_827F0EF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f0f14
	if (cr6.eq) goto loc_827F0F14;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f0ef0
	if (cr6.eq) goto loc_827F0EF0;
loc_827F0F14:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f0f38
	if (!cr6.eq) goto loc_827F0F38;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r6,r8,8
	ctx.r6.u64 = ctx.r8.u64 | 8;
	// stb r6,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r6.u8);
	// b 0x827f0f80
	goto loc_827F0F80;
loc_827F0F38:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14184
	ctx.r10.s64 = ctx.r10.s64 + 14184;
loc_827F0F44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f0f68
	if (cr6.eq) goto loc_827F0F68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f0f44
	if (cr6.eq) goto loc_827F0F44;
loc_827F0F68:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f0f8c
	if (!cr6.eq) goto loc_827F0F8C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// stb r8,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r8.u8);
loc_827F0F80:
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// stb r7,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r7.u8);
loc_827F0F8C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f0fc8
	if (cr6.eq) goto loc_827F0FC8;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F0FC8:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827F0FD8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827f0fd8
	if (!cr0.eq) goto loc_827F0FD8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827f1004
	if (!cr0.eq) goto loc_827F1004;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F1004:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
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
	// bne 0x827f1020
	if (!cr0.eq) goto loc_827F1020;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F1020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F1048:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x827f1090
	if (!cr6.gt) goto loc_827F1090;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-4744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -4744);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x827f1090
	if (!cr6.lt) goto loc_827F1090;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82831ca0
	sub_82831CA0(ctx, base);
loc_827F1090:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f10b8
	if (cr6.eq) goto loc_827F10B8;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F10B8:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8276fb90
	sub_8276FB90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F10FC:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,32024
	ctx.r10.s64 = r11.s64 + 32024;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F114C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f1170
	if (cr6.eq) goto loc_827F1170;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f114c
	if (cr6.eq) goto loc_827F114C;
loc_827F1170:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f118c
	if (!cr6.eq) goto loc_827F118C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// b 0x827f1290
	goto loc_827F1290;
loc_827F118C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,21884
	ctx.r10.s64 = ctx.r10.s64 + 21884;
loc_827F1198:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f11bc
	if (cr6.eq) goto loc_827F11BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f1198
	if (cr6.eq) goto loc_827F1198;
loc_827F11BC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f11ec
	if (!cr6.eq) goto loc_827F11EC;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r7,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r7.u8);
	// ori r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 4;
	// stb r6,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r6.u8);
	// b 0x827f12a0
	goto loc_827F12A0;
loc_827F11EC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,21876
	ctx.r10.s64 = ctx.r10.s64 + 21876;
loc_827F11F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f121c
	if (cr6.eq) goto loc_827F121C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f11f8
	if (cr6.eq) goto loc_827F11F8;
loc_827F121C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f124c
	if (!cr6.eq) goto loc_827F124C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r7,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r7.u8);
	// ori r6,r8,8
	ctx.r6.u64 = ctx.r8.u64 | 8;
	// stb r6,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r6.u8);
	// b 0x827f12a0
	goto loc_827F12A0;
loc_827F124C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14184
	ctx.r10.s64 = ctx.r10.s64 + 14184;
loc_827F1258:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f127c
	if (cr6.eq) goto loc_827F127C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f1258
	if (cr6.eq) goto loc_827F1258;
loc_827F127C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f12a0
	if (!cr6.eq) goto loc_827F12A0;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
loc_827F1290:
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// stb r7,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r7.u8);
	// stb r8,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r8.u8);
loc_827F12A0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f12c8
	if (cr6.eq) goto loc_827F12C8;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F12C8:
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827F12D8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827f12d8
	if (!cr0.eq) goto loc_827F12D8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827f1304
	if (!cr0.eq) goto loc_827F1304;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F1304:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
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
	// bne 0x827f1320
	if (!cr0.eq) goto loc_827F1320;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F1320:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F1348:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r11,32024
	ctx.r10.s64 = r11.s64 + 32024;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F1398:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f13bc
	if (cr6.eq) goto loc_827F13BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f1398
	if (cr6.eq) goto loc_827F1398;
loc_827F13BC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f13dc
	if (!cr6.eq) goto loc_827F13DC;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r8,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r8.u8);
	// b 0x827f147c
	goto loc_827F147C;
loc_827F13DC:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14160
	ctx.r10.s64 = ctx.r10.s64 + 14160;
loc_827F13E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f140c
	if (cr6.eq) goto loc_827F140C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f13e8
	if (cr6.eq) goto loc_827F13E8;
loc_827F140C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f142c
	if (!cr6.eq) goto loc_827F142C;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r6,r8,16
	ctx.r6.u64 = ctx.r8.u64 | 16;
	// b 0x827f1478
	goto loc_827F1478;
loc_827F142C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14168
	ctx.r10.s64 = ctx.r10.s64 + 14168;
loc_827F1438:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f145c
	if (cr6.eq) goto loc_827F145C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f1438
	if (cr6.eq) goto loc_827F1438;
loc_827F145C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f1488
	if (!cr6.eq) goto loc_827F1488;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 316);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 | 32;
loc_827F1478:
	// stb r6,316(r11)
	PPC_STORE_U8(r11.u32 + 316, ctx.r6.u8);
loc_827F147C:
	// lbz r9,319(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 319);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// stb r7,319(r11)
	PPC_STORE_U8(r11.u32 + 319, ctx.r7.u8);
loc_827F1488:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f14b0
	if (cr6.eq) goto loc_827F14B0;
	// lwz r11,2784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
loc_827F14B0:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827F14C0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827f14c0
	if (!cr0.eq) goto loc_827F14C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827f14ec
	if (!cr0.eq) goto loc_827F14EC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F14EC:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// bne 0x827f1508
	if (!cr0.eq) goto loc_827F1508;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F1508:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F1530:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f1578
	if (cr6.eq) goto loc_827F1578;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// b 0x827f1584
	goto loc_827F1584;
loc_827F1578:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_827F1584:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F15B0:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f15f8
	if (cr6.eq) goto loc_827F15F8;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,512
	ctx.r10.u64 = r11.u64 | 512;
	// b 0x827f1604
	goto loc_827F1604;
loc_827F15F8:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
loc_827F1604:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F1630:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f10b8
	if (cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82768778
	sub_82768778(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F1684:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f10b8
	if (!cr6.eq) goto loc_827F10B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f16b8
	if (cr6.eq) goto loc_827F16B8;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,1024
	ctx.r10.u64 = r11.u64 | 1024;
	// b 0x827f16c4
	goto loc_827F16C4;
loc_827F16B8:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_827F16C4:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_827F16F0:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827eee10
	if (!cr6.eq) goto loc_827EEE10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f1724
	if (cr6.eq) goto loc_827F1724;
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// ori r10,r11,2048
	ctx.r10.u64 = r11.u64 | 2048;
	// b 0x827f1730
	goto loc_827F1730;
loc_827F1724:
	// lhz r11,200(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_827F1730:
	// sth r10,200(r25)
	PPC_STORE_U16(r25.u32 + 200, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_827F1758"))) PPC_WEAK_FUNC(sub_827F1758);
PPC_FUNC_IMPL(__imp__sub_827F1758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827F175C"))) PPC_WEAK_FUNC(sub_827F175C);
PPC_FUNC_IMPL(__imp__sub_827F175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1760"))) PPC_WEAK_FUNC(sub_827F1760);
PPC_FUNC_IMPL(__imp__sub_827F1760) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82766478
	sub_82766478(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x827f17b8
	if (cr6.lt) goto loc_827F17B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827F17B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f17cc
	if (cr6.eq) goto loc_827F17CC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_827F17CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r10,14204
	ctx.r4.s64 = ctx.r10.s64 + 14204;
	// subf r11,r8,r9
	r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r29,r29,104
	r29.s64 = r29.s64 + 104;
	// addi r28,r11,-32
	r28.s64 = r11.s64 + -32;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e4730
	sub_827E4730(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f185c
	if (!cr0.eq) goto loc_827F185C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F185C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827f1884
	if (!cr6.lt) goto loc_827F1884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_827F1884:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827F1888"))) PPC_WEAK_FUNC(sub_827F1888);
PPC_FUNC_IMPL(__imp__sub_827F1888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F188C"))) PPC_WEAK_FUNC(sub_827F188C);
PPC_FUNC_IMPL(__imp__sub_827F188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1890"))) PPC_WEAK_FUNC(sub_827F1890);
PPC_FUNC_IMPL(__imp__sub_827F1890) {
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
	// bl 0x827ee9a8
	sub_827EE9A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f18c8
	if (cr6.eq) goto loc_827F18C8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F18C8:
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

__attribute__((alias("__imp__sub_827F18DC"))) PPC_WEAK_FUNC(sub_827F18DC);
PPC_FUNC_IMPL(__imp__sub_827F18DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F18E0"))) PPC_WEAK_FUNC(sub_827F18E0);
PPC_FUNC_IMPL(__imp__sub_827F18E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
}

__attribute__((alias("__imp__sub_827F18E4"))) PPC_WEAK_FUNC(sub_827F18E4);
PPC_FUNC_IMPL(__imp__sub_827F18E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x827e8f70
	sub_827E8F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F18E8"))) PPC_WEAK_FUNC(sub_827F18E8);
PPC_FUNC_IMPL(__imp__sub_827F18E8) {
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
	// bne cr6,0x827f1914
	if (!cr6.eq) goto loc_827F1914;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x827f1940
	goto loc_827F1940;
loc_827F1914:
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
	// ble cr6,0x827f1948
	if (!cr6.gt) goto loc_827F1948;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_827F1940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e9a48
	sub_827E9A48(ctx, base);
loc_827F1948:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r8,r30
	r29.u64 = ctx.r8.u64 & r30.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r6,-2
	cr6.compare<int32_t>(ctx.r6.s32, -2, xer);
	// bne cr6,0x827f19ac
	if (!cr6.eq) goto loc_827F19AC;
	// li r11,-1
	r11.s64 = -1;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F19AC:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827F19B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// bne cr6,0x827f19b0
	if (!cr6.eq) goto loc_827F19B0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x827f1a1c
	if (!cr6.eq) goto loc_827F1A1C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f19f0
	if (cr6.eq) goto loc_827F19F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827e8ff0
	sub_827E8FF0(ctx, base);
loc_827F19F0:
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F1A1C:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x827f1a50
	if (cr6.eq) goto loc_827F1A50;
loc_827F1A34:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// bne cr6,0x827f1a34
	if (!cr6.eq) goto loc_827F1A34;
loc_827F1A50:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f1a60
	if (cr6.eq) goto loc_827F1A60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827e8ff0
	sub_827E8FF0(ctx, base);
loc_827F1A60:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F1A90"))) PPC_WEAK_FUNC(sub_827F1A90);
PPC_FUNC_IMPL(__imp__sub_827F1A90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F1A94"))) PPC_WEAK_FUNC(sub_827F1A94);
PPC_FUNC_IMPL(__imp__sub_827F1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1A98"))) PPC_WEAK_FUNC(sub_827F1A98);
PPC_FUNC_IMPL(__imp__sub_827F1A98) {
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
	// addi r31,r3,-208
	r31.s64 = ctx.r3.s64 + -208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e8628
	sub_827E8628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f1760
	sub_827F1760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F1ACC"))) PPC_WEAK_FUNC(sub_827F1ACC);
PPC_FUNC_IMPL(__imp__sub_827F1ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F1AD0"))) PPC_WEAK_FUNC(sub_827F1AD0);
PPC_FUNC_IMPL(__imp__sub_827F1AD0) {
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
	// bne cr6,0x827f1afc
	if (!cr6.eq) goto loc_827F1AFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x827f1b28
	goto loc_827F1B28;
loc_827F1AFC:
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
	// ble cr6,0x827f1b30
	if (!cr6.gt) goto loc_827F1B30;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_827F1B28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e9a48
	sub_827E9A48(ctx, base);
loc_827F1B30:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r8,r30
	r29.u64 = ctx.r8.u64 & r30.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r6,-2
	cr6.compare<int32_t>(ctx.r6.s32, -2, xer);
	// bne cr6,0x827f1b94
	if (!cr6.eq) goto loc_827F1B94;
	// li r11,-1
	r11.s64 = -1;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x827632d0
	sub_827632D0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F1B94:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827F1B98:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// bne cr6,0x827f1b98
	if (!cr6.eq) goto loc_827F1B98;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x827f1c04
	if (!cr6.eq) goto loc_827F1C04;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f1bd8
	if (cr6.eq) goto loc_827F1BD8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827e8ff0
	sub_827E8FF0(ctx, base);
loc_827F1BD8:
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F1C04:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x827f1c38
	if (cr6.eq) goto loc_827F1C38;
loc_827F1C1C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// bne cr6,0x827f1c1c
	if (!cr6.eq) goto loc_827F1C1C;
loc_827F1C38:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f1c48
	if (cr6.eq) goto loc_827F1C48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827e8ff0
	sub_827E8FF0(ctx, base);
loc_827F1C48:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F1C78"))) PPC_WEAK_FUNC(sub_827F1C78);
PPC_FUNC_IMPL(__imp__sub_827F1C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F1C7C"))) PPC_WEAK_FUNC(sub_827F1C7C);
PPC_FUNC_IMPL(__imp__sub_827F1C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1C80"))) PPC_WEAK_FUNC(sub_827F1C80);
PPC_FUNC_IMPL(__imp__sub_827F1C80) {
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
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r30,r3,204
	r30.s64 = ctx.r3.s64 + 204;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r10,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, ctx.r10.u32);
	// bl 0x82761b38
	sub_82761B38(ctx, base);
	// clrlwi r24,r29,24
	r24.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827f1cc8
	if (cr6.eq) goto loc_827F1CC8;
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// ori r10,r11,4096
	ctx.r10.u64 = r11.u64 | 4096;
	// b 0x827f1cd4
	goto loc_827F1CD4;
loc_827F1CC8:
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_827F1CD4:
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,200(r31)
	PPC_STORE_U16(r31.u32 + 200, ctx.r10.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// li r27,-1
	r27.s64 = -1;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827f1f84
	if (!cr6.eq) goto loc_827F1F84;
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f1f84
	if (cr6.eq) goto loc_827F1F84;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827f1da4
	if (!cr6.eq) goto loc_827F1DA4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827f1d64
	if (!cr6.eq) goto loc_827F1D64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
loc_827F1D64:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f1d7c
	if (cr6.eq) goto loc_827F1D7C;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x827f1dac
	goto loc_827F1DAC;
loc_827F1D7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x827f1dac
	goto loc_827F1DAC;
loc_827F1DA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
loc_827F1DAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e51a8
	sub_827E51A8(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827f1e54
	if (cr6.eq) goto loc_827F1E54;
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
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827f1e54
	if (!cr6.eq) goto loc_827F1E54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e96f8
	sub_827E96F8(ctx, base);
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x828316a0
	sub_828316A0(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r4,r1,2240
	ctx.r4.s64 = ctx.r1.s64 + 2240;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8283bc60
	sub_8283BC60(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r7,r3,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827f1e3c
	if (cr6.eq) goto loc_827F1E3C;
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x8283aa90
	sub_8283AA90(ctx, base);
loc_827F1E3C:
	// lwz r11,2240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x827f1e80
	goto loc_827F1E80;
loc_827F1E54:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e4cf8
	sub_827E4CF8(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827f1e74
	if (cr6.eq) goto loc_827F1E74;
	// lbz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r9.u8);
loc_827F1E74:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_827F1E80:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,156(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// clrlwi r30,r11,31
	r30.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f1f6c
	if (cr6.eq) goto loc_827F1F6C;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f1f10
	if (cr6.eq) goto loc_827F1F10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e96f8
	sub_827E96F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// lwz r4,2224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2224);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// bne cr6,0x827f1edc
	if (!cr6.eq) goto loc_827F1EDC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,5388
	ctx.r4.s64 = r11.s64 + 5388;
loc_827F1EDC:
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82831738
	sub_82831738(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827ee150
	sub_827EE150(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// b 0x827f1f68
	goto loc_827F1F68;
loc_827F1F10:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8283d050
	sub_8283D050(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8283e430
	sub_8283E430(ctx, base);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x8283b5a8
	sub_8283B5A8(ctx, base);
	// lwz r4,2224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2224);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827f1f5c
	if (!cr6.eq) goto loc_827F1F5C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,5388
	ctx.r4.s64 = r11.s64 + 5388;
loc_827F1F5C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82831548
	sub_82831548(ctx, base);
loc_827F1F68:
	// li r25,1
	r25.s64 = 1;
loc_827F1F6C:
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x8283a7e8
	sub_8283A7E8(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x8283a7e8
	sub_8283A7E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827F1F84:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827f2000
	if (!cr6.eq) goto loc_827F2000;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827f1ff0
	if (cr6.eq) goto loc_827F1FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e96f8
	sub_827E96F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lhz r11,200(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 200);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x828316a0
	sub_828316A0(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x827ee150
	sub_827EE150(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// b 0x827f2000
	goto loc_827F2000;
loc_827F1FF0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82831500
	sub_82831500(ctx, base);
loc_827F2000:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f2018
	if (cr6.eq) goto loc_827F2018;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
loc_827F2018:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f202c
	if (cr6.eq) goto loc_827F202C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e8628
	sub_827E8628(ctx, base);
loc_827F202C:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2040
	if (cr6.eq) goto loc_827F2040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f1760
	sub_827F1760(ctx, base);
loc_827F2040:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
}

__attribute__((alias("__imp__sub_827F2060"))) PPC_WEAK_FUNC(sub_827F2060);
PPC_FUNC_IMPL(__imp__sub_827F2060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827F2064"))) PPC_WEAK_FUNC(sub_827F2064);
PPC_FUNC_IMPL(__imp__sub_827F2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2068"))) PPC_WEAK_FUNC(sub_827F2068);
PPC_FUNC_IMPL(__imp__sub_827F2068) {
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
	// beq cr6,0x827f20fc
	if (cr6.eq) goto loc_827F20FC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// and r5,r11,r28
	ctx.r5.u64 = r11.u64 & r28.u64;
	// bl 0x827c48e0
	sub_827C48E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827f20fc
	if (cr6.lt) goto loc_827F20FC;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F20FC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f1ad0
	sub_827F1AD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F2114"))) PPC_WEAK_FUNC(sub_827F2114);
PPC_FUNC_IMPL(__imp__sub_827F2114) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F2118"))) PPC_WEAK_FUNC(sub_827F2118);
PPC_FUNC_IMPL(__imp__sub_827F2118) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f0,14400(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 14400);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x827f2154
	if (!cr6.lt) goto loc_827F2154;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// sth r9,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r9.u16);
	// lfs f0,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r11,-10(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// blr 
	return;
loc_827F2154:
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// li r11,-1
	r11.s64 = -1;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// sth r9,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r9.u16);
}

__attribute__((alias("__imp__sub_827F2168"))) PPC_WEAK_FUNC(sub_827F2168);
PPC_FUNC_IMPL(__imp__sub_827F2168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F216C"))) PPC_WEAK_FUNC(sub_827F216C);
PPC_FUNC_IMPL(__imp__sub_827F216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2170"))) PPC_WEAK_FUNC(sub_827F2170);
PPC_FUNC_IMPL(__imp__sub_827F2170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93fc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,14548
	ctx.r10.s64 = r11.s64 + 14548;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F21B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f21d4
	if (cr6.eq) goto loc_827F21D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f21b0
	if (cr6.eq) goto loc_827F21B0;
loc_827F21D4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f237c
	if (!cr6.eq) goto loc_827F237C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-10132
	ctx.r10.s64 = r11.s64 + -10132;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F2208:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f222c
	if (cr6.eq) goto loc_827F222C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2208
	if (cr6.eq) goto loc_827F2208;
loc_827F222C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2250
	if (!cr6.eq) goto loc_827F2250;
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r10,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// rlwinm r9,r9,0,23,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f2364
	goto loc_827F2364;
loc_827F2250:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-10140
	ctx.r10.s64 = ctx.r10.s64 + -10140;
loc_827F225C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2280
	if (cr6.eq) goto loc_827F2280;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f225c
	if (cr6.eq) goto loc_827F225C;
loc_827F2280:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f22a4
	if (!cr6.eq) goto loc_827F22A4;
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r10,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// rlwinm r9,r9,0,23,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r8,r9,513
	ctx.r8.u64 = ctx.r9.u64 | 513;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f2364
	goto loc_827F2364;
loc_827F22A4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14184
	ctx.r10.s64 = ctx.r10.s64 + 14184;
loc_827F22B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f22d4
	if (cr6.eq) goto loc_827F22D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f22b0
	if (cr6.eq) goto loc_827F22B0;
loc_827F22D4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f22f0
	if (!cr6.eq) goto loc_827F22F0;
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// ori r9,r10,1537
	ctx.r9.u64 = ctx.r10.u64 | 1537;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// b 0x827f2364
	goto loc_827F2364;
loc_827F22F0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14540
	ctx.r10.s64 = ctx.r10.s64 + 14540;
loc_827F22FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f2320
	if (cr6.eq) goto loc_827F2320;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f22fc
	if (cr6.eq) goto loc_827F22FC;
loc_827F2320:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// bne cr6,0x827f2344
	if (!cr6.eq) goto loc_827F2344;
	// rlwinm r9,r10,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// rlwinm r9,r9,0,23,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// ori r8,r9,1025
	ctx.r8.u64 = ctx.r9.u64 | 1025;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f2364
	goto loc_827F2364;
loc_827F2344:
	// rlwinm r9,r10,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r9,0,23,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
loc_827F2364:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827f3264
	if (!cr0.eq) goto loc_827F3264;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F237C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14528
	ctx.r10.s64 = ctx.r10.s64 + 14528;
loc_827F2388:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f23ac
	if (cr6.eq) goto loc_827F23AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2388
	if (cr6.eq) goto loc_827F2388;
loc_827F23AC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2454
	if (!cr6.eq) goto loc_827F2454;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2424
	if (cr6.eq) goto loc_827F2424;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2424
	if (cr6.eq) goto loc_827F2424;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x827f2400
	if (!cr6.lt) goto loc_827F2400;
	// li r31,0
	r31.s64 = 0;
	// b 0x827f240c
	goto loc_827F240C;
loc_827F2400:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f240c
	if (!cr6.gt) goto loc_827F240C;
	// li r31,720
	r31.s64 = 720;
loc_827F240C:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// sth r31,88(r25)
	PPC_STORE_U16(r25.u32 + 88, r31.u16);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2424:
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,88(r25)
	PPC_STORE_U16(r25.u32 + 88, ctx.r10.u16);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2454:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14520
	ctx.r10.s64 = ctx.r10.s64 + 14520;
loc_827F2460:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2484
	if (cr6.eq) goto loc_827F2484;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2460
	if (cr6.eq) goto loc_827F2460;
loc_827F2484:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2508
	if (!cr6.eq) goto loc_827F2508;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f24d4
	if (cr6.eq) goto loc_827F24D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f24d4
	if (cr6.eq) goto loc_827F24D4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82800388
	sub_82800388(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F24D4:
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 72);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r7,r7,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r8,72(r25)
	PPC_STORE_U8(r25.u32 + 72, ctx.r8.u8);
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2508:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14512
	ctx.r10.s64 = ctx.r10.s64 + 14512;
loc_827F2514:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2538
	if (cr6.eq) goto loc_827F2538;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2514
	if (cr6.eq) goto loc_827F2514;
loc_827F2538:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f25e8
	if (!cr6.eq) goto loc_827F25E8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f25c0
	if (cr6.eq) goto loc_827F25C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f25c0
	if (cr6.eq) goto loc_827F25C0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f25a4
	if (cr6.eq) goto loc_827F25A4;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F25A4:
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 22);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F25C0:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F25E8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-14656
	ctx.r10.s64 = ctx.r10.s64 + -14656;
loc_827F25F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2618
	if (cr6.eq) goto loc_827F2618;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f25f4
	if (cr6.eq) goto loc_827F25F4;
loc_827F2618:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f26a8
	if (!cr6.eq) goto loc_827F26A8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f267c
	if (cr6.eq) goto loc_827F267C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f267c
	if (cr6.eq) goto loc_827F267C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// rlwimi r31,r10,0,0,7
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF000000) | (r31.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r31,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r31.u32);
	// sth r8,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F267C:
	// lhz r11,74(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r10.u32);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// sth r9,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F26A8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,10356
	ctx.r10.s64 = ctx.r10.s64 + 10356;
loc_827F26B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f26d8
	if (cr6.eq) goto loc_827F26D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f26b4
	if (cr6.eq) goto loc_827F26B4;
loc_827F26D8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2778
	if (!cr6.eq) goto loc_827F2778;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f274c
	if (cr6.eq) goto loc_827F274C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f274c
	if (cr6.eq) goto loc_827F274C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82800060
	sub_82800060(ctx, base);
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
	// bne 0x827f3264
	if (!cr0.eq) goto loc_827F3264;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F274C:
	// lis r12,0
	r12.s64 = 0;
	// lhz r10,74(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r12,r12,61435
	r12.u64 = r12.u64 | 61435;
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & r12.u64;
	// sth r9,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2778:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14504
	ctx.r10.s64 = ctx.r10.s64 + 14504;
loc_827F2784:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f27a8
	if (cr6.eq) goto loc_827F27A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2784
	if (cr6.eq) goto loc_827F2784;
loc_827F27A8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2850
	if (!cr6.eq) goto loc_827F2850;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2820
	if (cr6.eq) goto loc_827F2820;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2820
	if (cr6.eq) goto loc_827F2820;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,-720
	cr6.compare<int32_t>(r31.s32, -720, xer);
	// bge cr6,0x827f27fc
	if (!cr6.lt) goto loc_827F27FC;
	// li r31,-720
	r31.s64 = -720;
	// b 0x827f2808
	goto loc_827F2808;
loc_827F27FC:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f2808
	if (!cr6.gt) goto loc_827F2808;
	// li r31,720
	r31.s64 = 720;
loc_827F2808:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// sth r31,90(r25)
	PPC_STORE_U16(r25.u32 + 90, r31.u16);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2820:
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,90(r25)
	PPC_STORE_U16(r25.u32 + 90, ctx.r10.u16);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2850:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14496
	ctx.r10.s64 = ctx.r10.s64 + 14496;
loc_827F285C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2880
	if (cr6.eq) goto loc_827F2880;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f285c
	if (cr6.eq) goto loc_827F285C;
loc_827F2880:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2908
	if (!cr6.eq) goto loc_827F2908;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f28d0
	if (cr6.eq) goto loc_827F28D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f28d0
	if (cr6.eq) goto loc_827F28D0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82800418
	sub_82800418(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F28D0:
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 72);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r7,r7,0,27,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stb r8,72(r25)
	PPC_STORE_U8(r25.u32 + 72, ctx.r8.u8);
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2908:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14488
	ctx.r10.s64 = ctx.r10.s64 + 14488;
loc_827F2914:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2938
	if (cr6.eq) goto loc_827F2938;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2914
	if (cr6.eq) goto loc_827F2914;
loc_827F2938:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f29e0
	if (!cr6.eq) goto loc_827F29E0;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f29b0
	if (cr6.eq) goto loc_827F29B0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f29b0
	if (cr6.eq) goto loc_827F29B0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,-720
	cr6.compare<int32_t>(r31.s32, -720, xer);
	// bge cr6,0x827f298c
	if (!cr6.lt) goto loc_827F298C;
	// li r31,-720
	r31.s64 = -720;
	// b 0x827f2998
	goto loc_827F2998;
loc_827F298C:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f2998
	if (!cr6.gt) goto loc_827F2998;
	// li r31,720
	r31.s64 = 720;
loc_827F2998:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// sth r31,92(r25)
	PPC_STORE_U16(r25.u32 + 92, r31.u16);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F29B0:
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,92(r25)
	PPC_STORE_U16(r25.u32 + 92, ctx.r10.u16);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F29E0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14476
	ctx.r10.s64 = ctx.r10.s64 + 14476;
loc_827F29EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2a10
	if (cr6.eq) goto loc_827F2A10;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f29ec
	if (cr6.eq) goto loc_827F29EC;
loc_827F2A10:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2ab8
	if (!cr6.eq) goto loc_827F2AB8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2a88
	if (cr6.eq) goto loc_827F2A88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2a88
	if (cr6.eq) goto loc_827F2A88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x827f2a64
	if (!cr6.lt) goto loc_827F2A64;
	// li r31,0
	r31.s64 = 0;
	// b 0x827f2a70
	goto loc_827F2A70;
loc_827F2A64:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f2a70
	if (!cr6.gt) goto loc_827F2A70;
	// li r31,720
	r31.s64 = 720;
loc_827F2A70:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// sth r31,94(r25)
	PPC_STORE_U16(r25.u32 + 94, r31.u16);
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2A88:
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,94(r25)
	PPC_STORE_U16(r25.u32 + 94, ctx.r10.u16);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r9,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2AB8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14464
	ctx.r10.s64 = ctx.r10.s64 + 14464;
loc_827F2AC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2ae8
	if (cr6.eq) goto loc_827F2AE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2ac4
	if (cr6.eq) goto loc_827F2AC4;
loc_827F2AE8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2b90
	if (!cr6.eq) goto loc_827F2B90;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2b60
	if (cr6.eq) goto loc_827F2B60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2b60
	if (cr6.eq) goto loc_827F2B60;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x827f2b3c
	if (!cr6.lt) goto loc_827F2B3C;
	// li r31,0
	r31.s64 = 0;
	// b 0x827f2b48
	goto loc_827F2B48;
loc_827F2B3C:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f2b48
	if (!cr6.gt) goto loc_827F2B48;
	// li r31,720
	r31.s64 = 720;
loc_827F2B48:
	// lhz r10,98(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// sth r31,96(r25)
	PPC_STORE_U16(r25.u32 + 96, r31.u16);
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// sth r8,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r8.u16);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2B60:
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,96(r25)
	PPC_STORE_U16(r25.u32 + 96, ctx.r10.u16);
	// addi r11,r25,76
	r11.s64 = r25.s64 + 76;
	// rlwinm r9,r9,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// sth r9,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2B90:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,10236
	ctx.r10.s64 = ctx.r10.s64 + 10236;
loc_827F2B9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2bc0
	if (cr6.eq) goto loc_827F2BC0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2b9c
	if (cr6.eq) goto loc_827F2B9C;
loc_827F2BC0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2c74
	if (!cr6.eq) goto loc_827F2C74;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2c44
	if (cr6.eq) goto loc_827F2C44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2c44
	if (cr6.eq) goto loc_827F2C44;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x827f3264
	if (cr6.lt) goto loc_827F3264;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// bge cr6,0x827f2c34
	if (!cr6.lt) goto loc_827F2C34;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x827f2118
	sub_827F2118(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2C34:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,27156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f2118
	sub_827F2118(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2C44:
	// lhz r11,74(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,70(r25)
	PPC_STORE_U16(r25.u32 + 70, ctx.r10.u16);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// sth r9,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r9.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2C74:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
loc_827F2C80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2ca4
	if (cr6.eq) goto loc_827F2CA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2c80
	if (cr6.eq) goto loc_827F2C80;
loc_827F2CA4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2e10
	if (!cr6.eq) goto loc_827F2E10;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2de4
	if (cr6.eq) goto loc_827F2DE4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2de4
	if (cr6.eq) goto loc_827F2DE4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x827f3264
	if (!cr6.eq) goto loc_827F3264;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x827f3264
	if (!cr6.eq) goto loc_827F3264;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r25,76
	r28.s64 = r25.s64 + 76;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x827ff5f0
	sub_827FF5F0(ctx, base);
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// li r31,0
	r31.s64 = 0;
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// sth r10,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r10.u16);
	// lwz r27,56(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x827f2da0
	if (!cr6.gt) goto loc_827F2DA0;
	// li r29,0
	r29.s64 = 0;
	// li r26,3
	r26.s64 = 3;
loc_827F2D34:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r21,100(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r21,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r21.u64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r26.u8);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stfd f12,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f12.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// bl 0x82772f28
	sub_82772F28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827ff110
	sub_827FF110(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// blt cr6,0x827f2d34
	if (cr6.lt) goto loc_827F2D34;
loc_827F2DA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e944c
	return;
loc_827F2DE4:
	// addi r3,r25,76
	ctx.r3.s64 = r25.s64 + 76;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// lhz r11,98(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 98);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r10,98(r25)
	PPC_STORE_U16(r25.u32 + 98, ctx.r10.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2E10:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14440
	ctx.r10.s64 = ctx.r10.s64 + 14440;
loc_827F2E1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2e40
	if (cr6.eq) goto loc_827F2E40;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2e1c
	if (cr6.eq) goto loc_827F2E1C;
loc_827F2E40:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2ec8
	if (!cr6.eq) goto loc_827F2EC8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2e90
	if (cr6.eq) goto loc_827F2E90;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2e90
	if (cr6.eq) goto loc_827F2E90;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827ff050
	sub_827FF050(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2E90:
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 72);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r7,r7,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r8,72(r25)
	PPC_STORE_U8(r25.u32 + 72, ctx.r8.u8);
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2EC8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15176
	ctx.r10.s64 = ctx.r10.s64 + 15176;
loc_827F2ED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2ef8
	if (cr6.eq) goto loc_827F2EF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2ed4
	if (cr6.eq) goto loc_827F2ED4;
loc_827F2EF8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f2f9c
	if (!cr6.eq) goto loc_827F2F9C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f2f6c
	if (cr6.eq) goto loc_827F2F6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f2f6c
	if (cr6.eq) goto loc_827F2F6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827fef40
	sub_827FEF40(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// bne 0x827f3264
	if (!cr0.eq) goto loc_827F3264;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2F6C:
	// addi r31,r25,32
	r31.s64 = r25.s64 + 32;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x827620f8
	sub_827620F8(ctx, base);
	// lhz r11,74(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// sth r10,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r10.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F2F9C:
	// lbz r11,124(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 124);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x827f314c
	if (cr6.lt) goto loc_827F314C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14424
	ctx.r10.s64 = ctx.r10.s64 + 14424;
loc_827F2FB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f2fdc
	if (cr6.eq) goto loc_827F2FDC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f2fb8
	if (cr6.eq) goto loc_827F2FB8;
loc_827F2FDC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f309c
	if (!cr6.eq) goto loc_827F309C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f3080
	if (cr6.eq) goto loc_827F3080;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f3080
	if (cr6.eq) goto loc_827F3080;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,-720
	cr6.compare<int32_t>(r31.s32, -720, xer);
	// bge cr6,0x827f3030
	if (!cr6.lt) goto loc_827F3030;
	// li r31,-720
	r31.s64 = -720;
	// b 0x827f303c
	goto loc_827F303C;
loc_827F3030:
	// cmpwi cr6,r31,720
	cr6.compare<int32_t>(r31.s32, 720, xer);
	// ble cr6,0x827f303c
	if (!cr6.gt) goto loc_827F303C;
	// li r31,720
	r31.s64 = 720;
loc_827F303C:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lhz r10,74(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-24324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24324);
	f0.f64 = double(temp.f32);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// sth r8,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r8.u16);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// sth r7,68(r25)
	PPC_STORE_U16(r25.u32 + 68, ctx.r7.u16);
	// b 0x827f314c
	goto loc_827F314C;
loc_827F3080:
	// lhz r11,74(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// sth r10,68(r25)
	PPC_STORE_U16(r25.u32 + 68, ctx.r10.u16);
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r9,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r9.u16);
	// b 0x827f313c
	goto loc_827F313C;
loc_827F309C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,14416
	ctx.r10.s64 = ctx.r10.s64 + 14416;
loc_827F30A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f30cc
	if (cr6.eq) goto loc_827F30CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f30a8
	if (cr6.eq) goto loc_827F30A8;
loc_827F30CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f314c
	if (!cr6.eq) goto loc_827F314C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f311c
	if (cr6.eq) goto loc_827F311C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f311c
	if (cr6.eq) goto loc_827F311C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827ff098
	sub_827FF098(ctx, base);
	// b 0x827f314c
	goto loc_827F314C;
loc_827F311C:
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 72);
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r7,r7,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stb r8,72(r25)
	PPC_STORE_U8(r25.u32 + 72, ctx.r8.u8);
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
loc_827F313C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
loc_827F314C:
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f3264
	if (!cr6.eq) goto loc_827F3264;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,9968
	ctx.r10.s64 = r11.s64 + 9968;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_827F316C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f3190
	if (cr6.eq) goto loc_827F3190;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f316c
	if (cr6.eq) goto loc_827F316C;
loc_827F3190:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f3264
	if (!cr6.eq) goto loc_827F3264;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x827f3238
	if (cr6.eq) goto loc_827F3238;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f3238
	if (cr6.eq) goto loc_827F3238;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82756338
	sub_82756338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x827f31e4
	if (!cr6.lt) goto loc_827F31E4;
	// li r31,0
	r31.s64 = 0;
	// b 0x827f31f0
	goto loc_827F31F0;
loc_827F31E4:
	// cmpwi cr6,r31,100
	cr6.compare<int32_t>(r31.s32, 100, xer);
	// ble cr6,0x827f31f0
	if (!cr6.gt) goto loc_827F31F0;
	// li r31,100
	r31.s64 = 100;
loc_827F31F0:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lhz r8,74(r25)
	ctx.r8.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// ori r7,r8,1024
	ctx.r7.u64 = ctx.r8.u64 | 1024;
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
	// lfd f0,14408(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 14408);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * f0.f64;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lbz r6,119(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// rlwimi r10,r6,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r10.u32);
	// b 0x827f3264
	goto loc_827F3264;
loc_827F3238:
	// lhz r9,74(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 74);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// oris r8,r10,65280
	ctx.r8.u64 = ctx.r10.u64 | 4278190080;
	// rlwinm r7,r7,0,22,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r8,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r8.u32);
	// sth r7,74(r25)
	PPC_STORE_U16(r25.u32 + 74, ctx.r7.u16);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
loc_827F3264:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827F3290"))) PPC_WEAK_FUNC(sub_827F3290);
PPC_FUNC_IMPL(__imp__sub_827F3290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_827F3294"))) PPC_WEAK_FUNC(sub_827F3294);
PPC_FUNC_IMPL(__imp__sub_827F3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3298"))) PPC_WEAK_FUNC(sub_827F3298);
PPC_FUNC_IMPL(__imp__sub_827F3298) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,14788
	ctx.r9.s64 = r11.s64 + 14788;
	// addi r8,r10,14700
	ctx.r8.s64 = ctx.r10.s64 + 14700;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r3,r27,48
	ctx.r3.s64 = r27.s64 + 48;
	// stw r8,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r8.u32);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// lwz r7,120(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 120);
	// addi r31,r26,120
	r31.s64 = r26.s64 + 120;
	// lwz r4,648(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 648);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r6,12292
	ctx.r5.s64 = ctx.r6.s64 + 12292;
	// li r29,1
	r29.s64 = 1;
	// stw r11,100(r27)
	PPC_STORE_U32(r27.u32 + 100, r11.u32);
	// stw r5,92(r27)
	PPC_STORE_U32(r27.u32 + 92, ctx.r5.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r29,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r29.u32);
	// sth r11,104(r27)
	PPC_STORE_U16(r27.u32 + 104, r11.u16);
	// sth r11,106(r27)
	PPC_STORE_U16(r27.u32 + 106, r11.u16);
	// sth r11,108(r27)
	PPC_STORE_U16(r27.u32 + 108, r11.u16);
	// sth r11,110(r27)
	PPC_STORE_U16(r27.u32 + 110, r11.u16);
	// sth r11,112(r27)
	PPC_STORE_U16(r27.u32 + 112, r11.u16);
	// sth r11,114(r27)
	PPC_STORE_U16(r27.u32 + 114, r11.u16);
	// lwz r3,120(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 120);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// li r28,2
	r28.s64 = 2;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stb r28,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r28.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,14548
	ctx.r5.s64 = r11.s64 + 14548;
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r28.u8);
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, r29.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,14528
	ctx.r5.s64 = ctx.r10.s64 + 14528;
	// addi r7,r1,97
	ctx.r7.s64 = ctx.r1.s64 + 97;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r5,r9,14520
	ctx.r5.s64 = ctx.r9.s64 + 14520;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r28.u8);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r29.u8);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,91
	ctx.r7.s64 = ctx.r1.s64 + 91;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r8,14512
	ctx.r5.s64 = ctx.r8.s64 + 14512;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r28.u8);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r29.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r7,-14656
	ctx.r5.s64 = ctx.r7.s64 + -14656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r28.u8);
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, r29.u8);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r6,10356
	ctx.r5.s64 = ctx.r6.s64 + 10356;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,95
	ctx.r7.s64 = ctx.r1.s64 + 95;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r29.u8);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r5,14504
	ctx.r5.s64 = ctx.r5.s64 + 14504;
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r28.u8);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, r29.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,14496
	ctx.r5.s64 = r11.s64 + 14496;
	// addi r7,r1,93
	ctx.r7.s64 = ctx.r1.s64 + 93;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r28.u8);
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r29.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,14488
	ctx.r5.s64 = ctx.r10.s64 + 14488;
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r9,14476
	ctx.r5.s64 = ctx.r9.s64 + 14476;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r8,14464
	ctx.r5.s64 = ctx.r8.s64 + 14464;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r7,10236
	ctx.r5.s64 = ctx.r7.s64 + 10236;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r28.u8);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r29.u8);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r6,14452
	ctx.r5.s64 = ctx.r6.s64 + 14452;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r29.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r5,-3892
	ctx.r5.s64 = ctx.r5.s64 + -3892;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r28.u8);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, r29.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,14440
	ctx.r5.s64 = r11.s64 + 14440;
	// addi r7,r1,90
	ctx.r7.s64 = ctx.r1.s64 + 90;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r28.u8);
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, r29.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r5,r10,15176
	ctx.r5.s64 = ctx.r10.s64 + 15176;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r9,124(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 124);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x827f3658
	if (cr6.lt) goto loc_827F3658;
	// stb r28,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, r29.u8);
	// addi r7,r1,94
	ctx.r7.s64 = ctx.r1.s64 + 94;
	// addi r5,r11,14416
	ctx.r5.s64 = r11.s64 + 14416;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, r29.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,14424
	ctx.r5.s64 = ctx.r10.s64 + 14424;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3658:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f3694
	if (!cr6.eq) goto loc_827F3694;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,9968
	ctx.r5.s64 = r11.s64 + 9968;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3694:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
}

__attribute__((alias("__imp__sub_827F369C"))) PPC_WEAK_FUNC(sub_827F369C);
PPC_FUNC_IMPL(__imp__sub_827F369C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F36A0"))) PPC_WEAK_FUNC(sub_827F36A0);
PPC_FUNC_IMPL(__imp__sub_827F36A0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// lhz r9,42(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r26,2
	r26.s64 = 2;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827f3708
	if (cr6.eq) goto loc_827F3708;
	// lbz r11,40(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// li r31,1
	r31.s64 = 1;
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r26.u8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// b 0x827f371c
	goto loc_827F371C;
loc_827F3708:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	r31.u64 = r26.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F371C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r30,16
	r24.s64 = r30.s64 + 16;
	// addi r5,r11,14520
	ctx.r5.s64 = r11.s64 + 14520;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f374c
	if (cr6.eq) goto loc_827F374C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F374C:
	// clrlwi r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3764
	if (cr6.eq) goto loc_827F3764;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3764:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3794
	if (cr6.eq) goto loc_827F3794;
	// lbz r11,40(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r26.u8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// stb r10,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// b 0x827f37a8
	goto loc_827F37A8;
loc_827F3794:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F37A8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14496
	ctx.r5.s64 = r11.s64 + 14496;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f37d4
	if (cr6.eq) goto loc_827F37D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F37D4:
	// rlwinm r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f37ec
	if (cr6.eq) goto loc_827F37EC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F37EC:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f381c
	if (cr6.eq) goto loc_827F381C;
	// lbz r11,40(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r26.u8);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// stb r10,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// b 0x827f3830
	goto loc_827F3830;
loc_827F381C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3830:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14440
	ctx.r5.s64 = r11.s64 + 14440;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f385c
	if (cr6.eq) goto loc_827F385C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F385C:
	// rlwinm r11,r31,0,27,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3874
	if (cr6.eq) goto loc_827F3874;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3874:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r25,3
	r25.s64 = 3;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lfs f31,-31316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827f38c4
	if (cr6.eq) goto loc_827F38C4;
	// lhz r11,38(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 38);
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r25.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f11.u64);
	// b 0x827f38d8
	goto loc_827F38D8;
loc_827F38C4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F38D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,10236
	ctx.r5.s64 = r11.s64 + 10236;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3904
	if (cr6.eq) goto loc_827F3904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3904:
	// rlwinm r11,r31,0,25,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f391c
	if (cr6.eq) goto loc_827F391C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F391C:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// li r28,5
	r28.s64 = 5;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3998
	if (cr6.eq) goto loc_827F3998;
	// ori r11,r31,256
	r11.u64 = r31.u64 | 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r11,512
	r30.u64 = r11.u64 | 512;
	// bl 0x827ff878
	sub_827FF878(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r8,1
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r28.u8);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// b 0x827f39b0
	goto loc_827F39B0;
loc_827F3998:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r30,r31,1024
	r30.u64 = r31.u64 | 1024;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F39B0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,10356
	ctx.r5.s64 = r11.s64 + 10356;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r30,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f39dc
	if (cr6.eq) goto loc_827F39DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F39DC:
	// rlwinm r11,r30,0,22,22
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f39f4
	if (cr6.eq) goto loc_827F39F4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F39F4:
	// rlwinm r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3a1c
	if (cr6.eq) goto loc_827F3A1C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f3a1c
	if (!cr0.eq) goto loc_827F3A1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F3A1C:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f3a54
	if (cr6.eq) goto loc_827F3A54;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// ori r31,r30,2048
	r31.u64 = r30.u64 | 2048;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r11,8
	ctx.r10.u64 = r11.u32 & 0xFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// b 0x827f3a68
	goto loc_827F3A68;
loc_827F3A54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r30,4096
	r31.u64 = r30.u64 | 4096;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3A68:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,-14656
	ctx.r5.s64 = r11.s64 + -14656;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3a94
	if (cr6.eq) goto loc_827F3A94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,20,18
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3A94:
	// rlwinm r11,r31,0,20,20
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3aac
	if (cr6.eq) goto loc_827F3AAC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,21,19
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3AAC:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3af0
	if (cr6.eq) goto loc_827F3AF0;
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// ori r31,r31,8192
	r31.u64 = r31.u64 | 8192;
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r25.u8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f11.u64);
	// b 0x827f3b04
	goto loc_827F3B04;
loc_827F3AF0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3B04:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14424
	ctx.r5.s64 = r11.s64 + 14424;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3b30
	if (cr6.eq) goto loc_827F3B30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,18,16
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3B30:
	// rlwinm r11,r31,0,18,18
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3b48
	if (cr6.eq) goto loc_827F3B48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,19,17
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3B48:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3b78
	if (cr6.eq) goto loc_827F3B78;
	// lbz r11,40(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 40);
	// ori r31,r31,32768
	r31.u64 = r31.u64 | 32768;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r26.u8);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r10.u8);
	// b 0x827f3b8c
	goto loc_827F3B8C;
loc_827F3B78:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// oris r31,r31,1
	r31.u64 = r31.u64 | 65536;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3B8C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14416
	ctx.r5.s64 = r11.s64 + 14416;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3bb8
	if (cr6.eq) goto loc_827F3BB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,16,14
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3BB8:
	// rlwinm r11,r31,0,16,16
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3bd0
	if (cr6.eq) goto loc_827F3BD0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,17,15
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3BD0:
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f3bf4
	if (cr6.eq) goto loc_827F3BF4;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827f3bf8
	if (!cr6.eq) goto loc_827F3BF8;
loc_827F3BF4:
	// li r11,0
	r11.s64 = 0;
loc_827F3BF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f3c60
	if (cr6.eq) goto loc_827F3C60;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// oris r9,r31,2
	ctx.r9.u64 = r31.u64 | 131072;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// oris r30,r9,4
	r30.u64 = ctx.r9.u64 | 262144;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r28.u8);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// b 0x827f3c78
	goto loc_827F3C78;
loc_827F3C60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// oris r30,r31,8
	r30.u64 = r31.u64 | 524288;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3C78:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,15176
	ctx.r5.s64 = r11.s64 + 15176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r30,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3ca4
	if (cr6.eq) goto loc_827F3CA4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,0,13,11
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3CA4:
	// rlwinm r11,r30,0,13,13
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3cbc
	if (cr6.eq) goto loc_827F3CBC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,14,12
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3CBC:
	// rlwinm r11,r30,0,14,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3ce4
	if (cr6.eq) goto loc_827F3CE4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r30,0,15,13
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f3ce4
	if (!cr0.eq) goto loc_827F3CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F3CE4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827f3d88
	if (!cr6.eq) goto loc_827F3D88;
	// lhz r11,42(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 42);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f3d34
	if (cr6.eq) goto loc_827F3D34;
	// lbz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// oris r31,r30,16
	r31.u64 = r30.u64 | 1048576;
	// stb r25,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r25.u8);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,14824(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 14824);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * f0.f64;
	// stfd f12,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.f12.u64);
	// b 0x827f3d48
	goto loc_827F3D48;
loc_827F3D34:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// oris r31,r30,32
	r31.u64 = r30.u64 | 2097152;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3D48:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,9968
	ctx.r5.s64 = r11.s64 + 9968;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3d74
	if (cr6.eq) goto loc_827F3D74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,11,9
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3D74:
	// rlwinm r11,r31,0,11,11
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3d88
	if (cr6.eq) goto loc_827F3D88;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3D88:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_827F3D98"))) PPC_WEAK_FUNC(sub_827F3D98);
PPC_FUNC_IMPL(__imp__sub_827F3D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827F3D9C"))) PPC_WEAK_FUNC(sub_827F3D9C);
PPC_FUNC_IMPL(__imp__sub_827F3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3DA0"))) PPC_WEAK_FUNC(sub_827F3DA0);
PPC_FUNC_IMPL(__imp__sub_827F3DA0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3e9c
	if (cr6.eq) goto loc_827F3E9C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,23,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	// addi r4,r10,-10132
	ctx.r4.s64 = ctx.r10.s64 + -10132;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x827f3e1c
	if (cr6.eq) goto loc_827F3E1C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x827f3e10
	if (cr6.eq) goto loc_827F3E10;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x827f3e24
	if (!cr6.eq) goto loc_827F3E24;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,14184
	ctx.r4.s64 = r11.s64 + 14184;
	// b 0x827f3e24
	goto loc_827F3E24;
loc_827F3E10:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,14540
	ctx.r4.s64 = r11.s64 + 14540;
	// b 0x827f3e24
	goto loc_827F3E24;
loc_827F3E1C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,-10140
	ctx.r4.s64 = r11.s64 + -10140;
loc_827F3E24:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
	// addi r5,r9,14548
	ctx.r5.s64 = ctx.r9.s64 + 14548;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f3eb8
	if (!cr0.eq) goto loc_827F3EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827f3eb8
	goto loc_827F3EB8;
loc_827F3E9C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,14548
	ctx.r5.s64 = r11.s64 + 14548;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
loc_827F3EB8:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3ee8
	if (cr6.eq) goto loc_827F3EE8;
	// rlwinm r11,r11,17,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r31,1
	r31.s64 = 1;
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, r11.u8);
	// stb r10,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// b 0x827f3efc
	goto loc_827F3EFC;
loc_827F3EE8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r31,2
	r31.s64 = 2;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3EFC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14512
	ctx.r5.s64 = r11.s64 + 14512;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3f28
	if (cr6.eq) goto loc_827F3F28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3F28:
	// clrlwi r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3f40
	if (cr6.eq) goto loc_827F3F40;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3F40:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// li r28,3
	r28.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f3f7c
	if (cr6.eq) goto loc_827F3F7C;
	// lhz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 12);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// b 0x827f3f90
	goto loc_827F3F90;
loc_827F3F7C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F3F90:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14528
	ctx.r5.s64 = r11.s64 + 14528;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f3fbc
	if (cr6.eq) goto loc_827F3FBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3FBC:
	// rlwinm r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f3fd4
	if (cr6.eq) goto loc_827F3FD4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F3FD4:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f4010
	if (cr6.eq) goto loc_827F4010;
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r28.u8);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f13.u64);
	// b 0x827f4024
	goto loc_827F4024;
loc_827F4010:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F4024:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14504
	ctx.r5.s64 = r11.s64 + 14504;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f4050
	if (cr6.eq) goto loc_827F4050;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F4050:
	// rlwinm r11,r31,0,27,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f4068
	if (cr6.eq) goto loc_827F4068;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F4068:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f40a4
	if (cr6.eq) goto loc_827F40A4;
	// lhz r11,16(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r28.u8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// b 0x827f40b8
	goto loc_827F40B8;
loc_827F40A4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F40B8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14488
	ctx.r5.s64 = r11.s64 + 14488;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f40e4
	if (cr6.eq) goto loc_827F40E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F40E4:
	// rlwinm r11,r31,0,25,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f40fc
	if (cr6.eq) goto loc_827F40FC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F40FC:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f4134
	if (cr6.eq) goto loc_827F4134;
	// lhz r10,18(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 18);
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r28.u8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f13.u64);
	// b 0x827f4148
	goto loc_827F4148;
loc_827F4134:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F4148:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14476
	ctx.r5.s64 = r11.s64 + 14476;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f4174
	if (cr6.eq) goto loc_827F4174;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,23,21
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F4174:
	// rlwinm r11,r31,0,23,23
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f418c
	if (cr6.eq) goto loc_827F418C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,0,24,22
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F418C:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f41c4
	if (cr6.eq) goto loc_827F41C4;
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// ori r31,r31,1024
	r31.u64 = r31.u64 | 1024;
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r28.u8);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f13.u64);
	// b 0x827f41d8
	goto loc_827F41D8;
loc_827F41C4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827F41D8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,14464
	ctx.r5.s64 = r11.s64 + 14464;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// rlwinm r10,r31,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827f4204
	if (cr6.eq) goto loc_827F4204;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,21,19
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F4204:
	// rlwinm r11,r31,0,21,21
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f4218
	if (cr6.eq) goto loc_827F4218;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827F4218:
	// lhz r11,22(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 22);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f431c
	if (cr6.eq) goto loc_827F431C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827ff0e0
	sub_827FF0E0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f426c
	if (cr6.eq) goto loc_827F426C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x827739d8
	sub_827739D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827f4270
	goto loc_827F4270;
loc_827F426C:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_827F4270:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82773b70
	sub_82773B70(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f42d0
	if (cr6.eq) goto loc_827F42D0;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
loc_827F4290:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r28.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f13.u64);
	// bl 0x82772f28
	sub_82772F28(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x827f4290
	if (cr6.lt) goto loc_827F4290;
loc_827F42D0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,14452
	ctx.r5.s64 = r11.s64 + 14452;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f4334
	if (cr6.eq) goto loc_827F4334;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x828e945c
	return;
loc_827F431C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,14452
	ctx.r5.s64 = r11.s64 + 14452;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
loc_827F4334:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_827F4340"))) PPC_WEAK_FUNC(sub_827F4340);
PPC_FUNC_IMPL(__imp__sub_827F4340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827F4344"))) PPC_WEAK_FUNC(sub_827F4344);
PPC_FUNC_IMPL(__imp__sub_827F4344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4348"))) PPC_WEAK_FUNC(sub_827F4348);
PPC_FUNC_IMPL(__imp__sub_827F4348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f4930
	if (cr6.eq) goto loc_827F4930;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766408
	sub_82766408(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827f43c8
	if (!cr6.eq) goto loc_827F43C8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,6216
	ctx.r4.s64 = r11.s64 + 6216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766460
	sub_82766460(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x828e9454
	return;
loc_827F43C8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// bne cr6,0x827f43dc
	if (!cr6.eq) goto loc_827F43DC;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827F43DC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r24,116(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827f4930
	if (cr6.eq) goto loc_827F4930;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r3,648(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f4428
	if (cr6.eq) goto loc_827F4428;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x827f442c
	goto loc_827F442C;
loc_827F4428:
	// mr r25,r29
	r25.u64 = r29.u64;
loc_827F442C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,320
	ctx.r4.s64 = 320;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f44b8
	if (cr6.eq) goto loc_827F44B8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x827793b8
	sub_827793B8(ctx, base);
	// bl 0x827ad200
	sub_827AD200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82838e58
	sub_82838E58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827f44bc
	goto loc_827F44BC;
loc_827F44B8:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_827F44BC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r9.u8);
	// bl 0x82831400
	sub_82831400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82831430
	sub_82831430(ctx, base);
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lbz r8,124(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// cmplwi cr6,r8,7
	cr6.compare<uint32_t>(ctx.r8.u32, 7, xer);
	// blt cr6,0x827f455c
	if (cr6.lt) goto loc_827F455C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x827f455c
	if (cr6.lt) goto loc_827F455C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// lbz r11,317(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 317);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,317(r31)
	PPC_STORE_U8(r31.u32 + 317, ctx.r10.u8);
	// bl 0x82831460
	sub_82831460(ctx, base);
	// frsp f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,-24324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x828322c0
	sub_828322C0(ctx, base);
loc_827F455C:
	// lbz r11,317(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 317);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stb r10,317(r31)
	PPC_STORE_U8(r31.u32 + 317, ctx.r10.u8);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r4,648(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 648);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r29,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r29.u16);
	// addi r26,r11,12292
	r26.s64 = r11.s64 + 12292;
	// sth r29,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r29.u16);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// sth r29,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r29.u16);
	// sth r29,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, r29.u16);
	// sth r29,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, r29.u16);
	// sth r29,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, r29.u16);
	// bl 0x82800cb8
	sub_82800CB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ff578
	sub_827FF578(ctx, base);
	// addi r5,r28,48
	ctx.r5.s64 = r28.s64 + 48;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x828004b0
	sub_828004B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addi r5,r28,92
	ctx.r5.s64 = r28.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x827ffa90
	sub_827FFA90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r26.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8283e3d8
	sub_8283E3D8(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82831500
	sub_82831500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82835fd0
	sub_82835FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828371a8
	sub_828371A8(ctx, base);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r28,3
	r28.s64 = 3;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r28.u8);
	// addi r29,r25,16
	r29.s64 = r25.s64 + 16;
	// lfd f30,14904(r5)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14904);
	// addi r5,r3,14888
	ctx.r5.s64 = ctx.r3.s64 + 14888;
	// fadd f0,f1,f30
	f0.f64 = ctx.f1.f64 + f30.f64;
	// lfd f31,-26536(r4)
	f31.u64 = PPC_LOAD_U64(ctx.r4.u32 + -26536);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmul f13,f0,f31
	ctx.f13.f64 = f0.f64 * f31.f64;
	// stfd f13,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f13.u64);
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82837230
	sub_82837230(ctx, base);
	// fadd f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 + f30.f64;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r28.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r10,14872
	ctx.r5.s64 = ctx.r10.s64 + 14872;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * f31.f64;
	// stfd f11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f11.u64);
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828371a8
	sub_828371A8(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// stfd f10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f10.u64);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r28.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r9,21888
	ctx.r5.s64 = ctx.r9.s64 + 21888;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82837230
	sub_82837230(ctx, base);
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * f31.f64;
	// stfd f9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r28.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r8,2072
	ctx.r5.s64 = ctx.r8.s64 + 2072;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r11,280(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 280);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r27,r11,31,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// clrlwi r23,r11,31
	r23.u64 = r11.u32 & 0x1;
	// bl 0x827ff878
	sub_827FF878(ctx, base);
	// addic r7,r27,-1
	xer.ca = r27.u32 > 0;
	ctx.r7.s64 = r27.s64 + -1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subfe r4,r7,r27
	temp.u8 = (~ctx.r7.u32 + r27.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + r27.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r11,r23,0
	xer.ca = r23.u32 <= 0;
	r11.s64 = 0 - r23.s64;
	// rlwinm r11,r6,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r7,0
	ctx.r7.s64 = 0;
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// or r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 | ctx.r8.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// bl 0x827fdea8
	sub_827FDEA8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfd f13,16944(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16944);
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// beq cr6,0x827f47c4
	if (cr6.eq) goto loc_827F47C4;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f30,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x827f47cc
	if (!cr6.eq) goto loc_827F47CC;
loc_827F47C4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f0,14864(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 14864);
loc_827F47CC:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f13.f64);
	// bne cr6,0x827f47e0
	if (!cr6.eq) goto loc_827F47E0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f13,14856(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 14856);
	// fsub f30,f13,f0
	f30.f64 = ctx.f13.f64 - f0.f64;
loc_827F47E0:
	// lhz r5,278(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r28.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfs f13,-31316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,14848(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 14848);
	// addi r5,r7,14840
	ctx.r5.s64 = ctx.r7.s64 + 14840;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmul f29,f8,f12
	f29.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f7,f29,f0
	ctx.f7.f64 = f29.f64 * f0.f64;
	// fmul f6,f7,f31
	ctx.f6.f64 = ctx.f7.f64 * f31.f64;
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// stfd f3,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f3.u64);
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// fmul f2,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64 * f30.f64;
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r9,14832
	ctx.r5.s64 = ctx.r9.s64 + 14832;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// fmul f1,f2,f31
	ctx.f1.f64 = ctx.f2.f64 * f31.f64;
	// fctidz f0,f1
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stfd f12,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f12.u64);
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827f48d8
	if (cr6.eq) goto loc_827F48D8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bne 0x827f48d8
	if (!cr0.eq) goto loc_827F48D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F48D8:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
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
	// bne 0x827f4918
	if (!cr0.eq) goto loc_827F4918;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4918:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827f4928
	if (cr6.eq) goto loc_827F4928;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F4928:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827F4930:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_827F4940"))) PPC_WEAK_FUNC(sub_827F4940);
PPC_FUNC_IMPL(__imp__sub_827F4940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827F4944"))) PPC_WEAK_FUNC(sub_827F4944);
PPC_FUNC_IMPL(__imp__sub_827F4944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4948"))) PPC_WEAK_FUNC(sub_827F4948);
PPC_FUNC_IMPL(__imp__sub_827F4948) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f49e0
	if (cr6.eq) goto loc_827F49E0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// bne cr6,0x827f49e0
	if (!cr6.eq) goto loc_827F49E0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827f49e0
	if (!cr6.eq) goto loc_827F49E0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f49d4
	if (cr6.eq) goto loc_827F49D4;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f49cc
	if (cr6.eq) goto loc_827F49CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_827F49CC:
	// mr r26,r11
	r26.u64 = r11.u64;
	// b 0x827f4a18
	goto loc_827F4A18;
loc_827F49D4:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// b 0x827f4a18
	goto loc_827F4A18;
loc_827F49E0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f4a10
	if (cr6.eq) goto loc_827F4A10;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827f3298
	sub_827F3298(ctx, base);
	// b 0x827f4a14
	goto loc_827F4A14;
loc_827F4A10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_827F4A14:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_827F4A18:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,10356
	ctx.r4.s64 = r11.s64 + 10356;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,16(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4ab0
	if (!cr0.eq) goto loc_827F4AB0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4AB0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,10236
	ctx.r4.s64 = ctx.r10.s64 + 10236;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4b40
	if (!cr0.eq) goto loc_827F4B40;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4B40:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-14656
	ctx.r4.s64 = ctx.r10.s64 + -14656;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4bd0
	if (!cr0.eq) goto loc_827F4BD0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4BD0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14520
	ctx.r4.s64 = r11.s64 + 14520;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4c60
	if (!cr0.eq) goto loc_827F4C60;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4C60:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14496
	ctx.r4.s64 = r11.s64 + 14496;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4cf0
	if (!cr0.eq) goto loc_827F4CF0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4CF0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14440
	ctx.r4.s64 = r11.s64 + 14440;
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4d80
	if (!cr0.eq) goto loc_827F4D80;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4D80:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r28.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,15176
	ctx.r4.s64 = r11.s64 + 15176;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4e10
	if (!cr0.eq) goto loc_827F4E10;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4E10:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3892
	ctx.r4.s64 = r11.s64 + -3892;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4ea0
	if (!cr0.eq) goto loc_827F4EA0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4EA0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14548
	ctx.r4.s64 = r11.s64 + 14548;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4f30
	if (!cr0.eq) goto loc_827F4F30;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4F30:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14476
	ctx.r4.s64 = r11.s64 + 14476;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f4fc0
	if (!cr0.eq) goto loc_827F4FC0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F4FC0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14464
	ctx.r4.s64 = r11.s64 + 14464;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,90
	ctx.r7.s64 = ctx.r1.s64 + 90;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f5050
	if (!cr0.eq) goto loc_827F5050;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F5050:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14504
	ctx.r4.s64 = r11.s64 + 14504;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,91
	ctx.r7.s64 = ctx.r1.s64 + 91;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f50e0
	if (!cr0.eq) goto loc_827F50E0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F50E0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// blt cr6,0x827f5170
	if (cr6.lt) goto loc_827F5170;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r28.u8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14488
	ctx.r4.s64 = r11.s64 + 14488;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f5170
	if (!cr0.eq) goto loc_827F5170;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F5170:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827f518c
	if (cr6.eq) goto loc_827F518C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F518C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827F5190"))) PPC_WEAK_FUNC(sub_827F5190);
PPC_FUNC_IMPL(__imp__sub_827F5190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F5194"))) PPC_WEAK_FUNC(sub_827F5194);
PPC_FUNC_IMPL(__imp__sub_827F5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5198"))) PPC_WEAK_FUNC(sub_827F5198);
PPC_FUNC_IMPL(__imp__sub_827F5198) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f51e4
	if (cr6.eq) goto loc_827F51E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827f3298
	sub_827F3298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F51E4:
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

__attribute__((alias("__imp__sub_827F51F8"))) PPC_WEAK_FUNC(sub_827F51F8);
PPC_FUNC_IMPL(__imp__sub_827F51F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F51FC"))) PPC_WEAK_FUNC(sub_827F51FC);
PPC_FUNC_IMPL(__imp__sub_827F51FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5200"))) PPC_WEAK_FUNC(sub_827F5200);
PPC_FUNC_IMPL(__imp__sub_827F5200) {
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
	// bl 0x827f5ae0
	sub_827F5AE0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,15012
	ctx.r8.s64 = r11.s64 + 15012;
	// addi r7,r10,14924
	ctx.r7.s64 = ctx.r10.s64 + 14924;
	// addi r6,r9,14916
	ctx.r6.s64 = ctx.r9.s64 + 14916;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r6.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,14384
	ctx.r6.s64 = r11.s64 + 14384;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8278fb78
	sub_8278FB78(ctx, base);
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

__attribute__((alias("__imp__sub_827F5280"))) PPC_WEAK_FUNC(sub_827F5280);
PPC_FUNC_IMPL(__imp__sub_827F5280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5284"))) PPC_WEAK_FUNC(sub_827F5284);
PPC_FUNC_IMPL(__imp__sub_827F5284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5288"))) PPC_WEAK_FUNC(sub_827F5288);
PPC_FUNC_IMPL(__imp__sub_827F5288) {
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
	// lis r11,-32129
	r11.s64 = -2105606144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,18760
	ctx.r5.s64 = r11.s64 + 18760;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,15140
	ctx.r8.s64 = ctx.r10.s64 + 15140;
	// addi r7,r9,15052
	ctx.r7.s64 = ctx.r9.s64 + 15052;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_827F52D4"))) PPC_WEAK_FUNC(sub_827F52D4);
PPC_FUNC_IMPL(__imp__sub_827F52D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F52D8"))) PPC_WEAK_FUNC(sub_827F52D8);
PPC_FUNC_IMPL(__imp__sub_827F52D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	r11.s64 = 8;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f5348
	if (cr6.eq) goto loc_827F5348;
	// lis r11,-32129
	r11.s64 = -2105606144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,18760
	ctx.r5.s64 = r11.s64 + 18760;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,15140
	ctx.r8.s64 = ctx.r10.s64 + 15140;
	// addi r7,r9,15052
	ctx.r7.s64 = ctx.r9.s64 + 15052;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// b 0x827f534c
	goto loc_827F534C;
loc_827F5348:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_827F534C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r28.u8);
	// li r4,148
	ctx.r4.s64 = 148;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f543c
	if (cr6.eq) goto loc_827F543C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827f5200
	sub_827F5200(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f53b0
	if (cr6.eq) goto loc_827F53B0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827F53B0:
	// li r11,32
	r11.s64 = 32;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f53dc
	if (cr6.eq) goto loc_827F53DC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F53DC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r11,16
	r28.s64 = r11.s64 + 16;
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f5430
	if (cr6.eq) goto loc_827F5430;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F5430:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9464
	return;
loc_827F543C:
	// mr r30,r28
	r30.u64 = r28.u64;
}

__attribute__((alias("__imp__sub_827F5440"))) PPC_WEAK_FUNC(sub_827F5440);
PPC_FUNC_IMPL(__imp__sub_827F5440) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f53b0
	// ERROR 827F53B0
	return;
}

__attribute__((alias("__imp__sub_827F5444"))) PPC_WEAK_FUNC(sub_827F5444);
PPC_FUNC_IMPL(__imp__sub_827F5444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5448"))) PPC_WEAK_FUNC(sub_827F5448);
PPC_FUNC_IMPL(__imp__sub_827F5448) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,14660
	ctx.r8.s64 = r11.s64 + 14660;
	// addi r7,r10,14572
	ctx.r7.s64 = ctx.r10.s64 + 14572;
	// addi r6,r9,14560
	ctx.r6.s64 = ctx.r9.s64 + 14560;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// stw r6,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r6.u32);
	// bl 0x82792000
	sub_82792000(ctx, base);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// addi r4,r5,12292
	ctx.r4.s64 = ctx.r5.s64 + 12292;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
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

__attribute__((alias("__imp__sub_827F54D0"))) PPC_WEAK_FUNC(sub_827F54D0);
PPC_FUNC_IMPL(__imp__sub_827F54D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F54D4"))) PPC_WEAK_FUNC(sub_827F54D4);
PPC_FUNC_IMPL(__imp__sub_827F54D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F54D8"))) PPC_WEAK_FUNC(sub_827F54D8);
PPC_FUNC_IMPL(__imp__sub_827F54D8) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82790fe8
	sub_82790FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F5534"))) PPC_WEAK_FUNC(sub_827F5534);
PPC_FUNC_IMPL(__imp__sub_827F5534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5538"))) PPC_WEAK_FUNC(sub_827F5538);
PPC_FUNC_IMPL(__imp__sub_827F5538) {
	PPC_FUNC_PROLOGUE();
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5540"))) PPC_WEAK_FUNC(sub_827F5540);
PPC_FUNC_IMPL(__imp__sub_827F5540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f55d4
	if (!cr6.eq) goto loc_827F55D4;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,312
	ctx.r3.s64 = r11.s64 + 312;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f55d4
	if (!cr6.eq) goto loc_827F55D4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82790510
	sub_82790510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F55D4:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// addi r3,r29,100
	ctx.r3.s64 = r29.s64 + 100;
	// bl 0x82791338
	sub_82791338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F55F4"))) PPC_WEAK_FUNC(sub_827F55F4);
PPC_FUNC_IMPL(__imp__sub_827F55F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F55F8"))) PPC_WEAK_FUNC(sub_827F55F8);
PPC_FUNC_IMPL(__imp__sub_827F55F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x827920e8
	sub_827920E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5600"))) PPC_WEAK_FUNC(sub_827F5600);
PPC_FUNC_IMPL(__imp__sub_827F5600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x827f5610
	if (!cr6.eq) goto loc_827F5610;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827F5610:
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8278fe00
	sub_8278FE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5618"))) PPC_WEAK_FUNC(sub_827F5618);
PPC_FUNC_IMPL(__imp__sub_827F5618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-116
	ctx.r3.s64 = ctx.r3.s64 + -116;
}

__attribute__((alias("__imp__sub_827F561C"))) PPC_WEAK_FUNC(sub_827F561C);
PPC_FUNC_IMPL(__imp__sub_827F561C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f5918
	sub_827F5918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5620"))) PPC_WEAK_FUNC(sub_827F5620);
PPC_FUNC_IMPL(__imp__sub_827F5620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F5624"))) PPC_WEAK_FUNC(sub_827F5624);
PPC_FUNC_IMPL(__imp__sub_827F5624) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f5918
	sub_827F5918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5628"))) PPC_WEAK_FUNC(sub_827F5628);
PPC_FUNC_IMPL(__imp__sub_827F5628) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5658
	if (cr6.eq) goto loc_827F5658;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F5658:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82790fe8
	sub_82790FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F56A0"))) PPC_WEAK_FUNC(sub_827F56A0);
PPC_FUNC_IMPL(__imp__sub_827F56A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F56A4"))) PPC_WEAK_FUNC(sub_827F56A4);
PPC_FUNC_IMPL(__imp__sub_827F56A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F56A8"))) PPC_WEAK_FUNC(sub_827F56A8);
PPC_FUNC_IMPL(__imp__sub_827F56A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792b60
	sub_82792B60(ctx, base);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5748
	if (cr6.eq) goto loc_827F5748;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5748
	if (cr6.eq) goto loc_827F5748;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r28,4096
	r28.s64 = 268435456;
	// li r27,1
	r27.s64 = 1;
loc_827F56F4:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f573c
	if (cr6.eq) goto loc_827F573C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x827f573c
	if (cr6.eq) goto loc_827F573C;
	// rlwimi r11,r27,28,1,3
	r11.u64 = (__builtin_rotateleft32(r27.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F573C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f56f4
	if (!cr0.eq) goto loc_827F56F4;
loc_827F5748:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F574C"))) PPC_WEAK_FUNC(sub_827F574C);
PPC_FUNC_IMPL(__imp__sub_827F574C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F5750"))) PPC_WEAK_FUNC(sub_827F5750);
PPC_FUNC_IMPL(__imp__sub_827F5750) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792d08
	sub_82792D08(ctx, base);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f57e8
	if (cr6.eq) goto loc_827F57E8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f57e8
	if (cr6.eq) goto loc_827F57E8;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F5794:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f57dc
	if (cr6.eq) goto loc_827F57DC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f57dc
	if (cr6.eq) goto loc_827F57DC;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F57DC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f5794
	if (!cr0.eq) goto loc_827F5794;
loc_827F57E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F57EC"))) PPC_WEAK_FUNC(sub_827F57EC);
PPC_FUNC_IMPL(__imp__sub_827F57EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F57F0"))) PPC_WEAK_FUNC(sub_827F57F0);
PPC_FUNC_IMPL(__imp__sub_827F57F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792ea8
	sub_82792EA8(ctx, base);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f58a0
	if (cr6.eq) goto loc_827F58A0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f58a0
	if (cr6.eq) goto loc_827F58A0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r27,4096
	r27.s64 = 268435456;
	// li r28,1
	r28.s64 = 1;
loc_827F583C:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f5894
	if (cr6.eq) goto loc_827F5894;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827f5894
	if (!cr6.eq) goto loc_827F5894;
	// clrlwi r10,r11,4
	ctx.r10.u64 = r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x827f5884
	if (cr6.eq) goto loc_827F5884;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827f588c
	goto loc_827F588C;
loc_827F5884:
	// rlwimi r11,r28,29,1,3
	r11.u64 = (__builtin_rotateleft32(r28.u32, 29) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
loc_827F588C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F5894:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f583c
	if (!cr0.eq) goto loc_827F583C;
loc_827F58A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F58A4"))) PPC_WEAK_FUNC(sub_827F58A4);
PPC_FUNC_IMPL(__imp__sub_827F58A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F58A8"))) PPC_WEAK_FUNC(sub_827F58A8);
PPC_FUNC_IMPL(__imp__sub_827F58A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82793468
	sub_82793468(ctx, base);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5910
	if (cr6.eq) goto loc_827F5910;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5910
	if (cr6.eq) goto loc_827F5910;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F58EC:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f5904
	if (cr6.eq) goto loc_827F5904;
	// bl 0x82759098
	sub_82759098(ctx, base);
loc_827F5904:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f58ec
	if (!cr0.eq) goto loc_827F58EC;
loc_827F5910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F5914"))) PPC_WEAK_FUNC(sub_827F5914);
PPC_FUNC_IMPL(__imp__sub_827F5914) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F5918"))) PPC_WEAK_FUNC(sub_827F5918);
PPC_FUNC_IMPL(__imp__sub_827F5918) {
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
	// bl 0x827f5448
	sub_827F5448(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5950
	if (cr6.eq) goto loc_827F5950;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F5950:
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

__attribute__((alias("__imp__sub_827F5964"))) PPC_WEAK_FUNC(sub_827F5964);
PPC_FUNC_IMPL(__imp__sub_827F5964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5968"))) PPC_WEAK_FUNC(sub_827F5968);
PPC_FUNC_IMPL(__imp__sub_827F5968) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827932f8
	sub_827932F8(ctx, base);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f59d0
	if (cr6.eq) goto loc_827F59D0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f59d0
	if (cr6.eq) goto loc_827F59D0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F59AC:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f59c4
	if (cr6.eq) goto loc_827F59C4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F59C4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f59ac
	if (!cr0.eq) goto loc_827F59AC;
loc_827F59D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F59D4"))) PPC_WEAK_FUNC(sub_827F59D4);
PPC_FUNC_IMPL(__imp__sub_827F59D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F59D8"))) PPC_WEAK_FUNC(sub_827F59D8);
PPC_FUNC_IMPL(__imp__sub_827F59D8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x827909e8
	sub_827909E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,14788
	ctx.r9.s64 = r11.s64 + 14788;
	// addi r8,r10,14700
	ctx.r8.s64 = ctx.r10.s64 + 14700;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,648(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 648);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r6,12292
	ctx.r5.s64 = ctx.r6.s64 + 12292;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,104(r31)
	PPC_STORE_U16(r31.u32 + 104, r11.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,106(r31)
	PPC_STORE_U16(r31.u32 + 106, r11.u16);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r11.u16);
	// sth r11,112(r31)
	PPC_STORE_U16(r31.u32 + 112, r11.u16);
	// sth r11,114(r31)
	PPC_STORE_U16(r31.u32 + 114, r11.u16);
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F5A6C"))) PPC_WEAK_FUNC(sub_827F5A6C);
PPC_FUNC_IMPL(__imp__sub_827F5A6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F5A70"))) PPC_WEAK_FUNC(sub_827F5A70);
PPC_FUNC_IMPL(__imp__sub_827F5A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x827f5a78
	sub_827F5A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5A78"))) PPC_WEAK_FUNC(sub_827F5A78);
PPC_FUNC_IMPL(__imp__sub_827F5A78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r3,92
	r30.s64 = ctx.r3.s64 + 92;
	// addi r10,r11,12292
	ctx.r10.s64 = r11.s64 + 12292;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827f5ad4
	if (cr6.eq) goto loc_827F5AD4;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F5AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F5AD8"))) PPC_WEAK_FUNC(sub_827F5AD8);
PPC_FUNC_IMPL(__imp__sub_827F5AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F5ADC"))) PPC_WEAK_FUNC(sub_827F5ADC);
PPC_FUNC_IMPL(__imp__sub_827F5ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5AE0"))) PPC_WEAK_FUNC(sub_827F5AE0);
PPC_FUNC_IMPL(__imp__sub_827F5AE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x827f59d8
	sub_827F59D8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-22540
	ctx.r9.s64 = ctx.r10.s64 + -22540;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r9,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r5,r8,14660
	ctx.r5.s64 = ctx.r8.s64 + 14660;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r9,r6,14560
	ctx.r9.s64 = ctx.r6.s64 + 14560;
	// addi r10,r7,14572
	ctx.r10.s64 = ctx.r7.s64 + 14572;
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// bl 0x827908b0
	sub_827908B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F5B68"))) PPC_WEAK_FUNC(sub_827F5B68);
PPC_FUNC_IMPL(__imp__sub_827F5B68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F5B6C"))) PPC_WEAK_FUNC(sub_827F5B6C);
PPC_FUNC_IMPL(__imp__sub_827F5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5B70"))) PPC_WEAK_FUNC(sub_827F5B70);
PPC_FUNC_IMPL(__imp__sub_827F5B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827f5b94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5B94;
	// bdzf 4*cr6+eq,0x827f5b98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5B98;
	// bdzf 4*cr6+eq,0x827f5b9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5B9C;
	// bne cr6,0x827f5ba0
	if (!cr6.eq) goto loc_827F5BA0;
	// b 0x827f5968
	sub_827F5968(ctx, base);
	return;
loc_827F5B94:
	// b 0x827f56a8
	sub_827F56A8(ctx, base);
	return;
loc_827F5B98:
	// b 0x827f5750
	sub_827F5750(ctx, base);
	return;
loc_827F5B9C:
	// b 0x827f58a8
	sub_827F58A8(ctx, base);
	return;
loc_827F5BA0:
	// b 0x827f57f0
	sub_827F57F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5BA4"))) PPC_WEAK_FUNC(sub_827F5BA4);
PPC_FUNC_IMPL(__imp__sub_827F5BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5BA8"))) PPC_WEAK_FUNC(sub_827F5BA8);
PPC_FUNC_IMPL(__imp__sub_827F5BA8) {
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
	// bl 0x82792d08
	sub_82792D08(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f5c00
	if (cr6.eq) goto loc_827F5C00;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f5c00
	if (cr6.eq) goto loc_827F5C00;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F5C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F5C10"))) PPC_WEAK_FUNC(sub_827F5C10);
PPC_FUNC_IMPL(__imp__sub_827F5C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5C14"))) PPC_WEAK_FUNC(sub_827F5C14);
PPC_FUNC_IMPL(__imp__sub_827F5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5C18"))) PPC_WEAK_FUNC(sub_827F5C18);
PPC_FUNC_IMPL(__imp__sub_827F5C18) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827f5cb0
	if (cr6.eq) goto loc_827F5CB0;
	// lwz r30,128(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x827f5c4c
	if (!cr6.eq) goto loc_827F5C4C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827F5C4C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f5c60
	if (cr6.eq) goto loc_827F5C60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_827F5C60:
	// lwz r31,52(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f5c8c
	if (cr6.eq) goto loc_827F5C8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827f5c8c
	if (cr0.gt) goto loc_827F5C8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F5C8C:
	// stw r30,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827F5CB0:
	// li r30,0
	r30.s64 = 0;
	// stw r30,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r30.u32);
	// lwz r31,52(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f5ce4
	if (cr6.eq) goto loc_827F5CE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827f5ce4
	if (cr0.gt) goto loc_827F5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F5CE4:
	// stw r30,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F5CEC"))) PPC_WEAK_FUNC(sub_827F5CEC);
PPC_FUNC_IMPL(__imp__sub_827F5CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F5CF0"))) PPC_WEAK_FUNC(sub_827F5CF0);
PPC_FUNC_IMPL(__imp__sub_827F5CF0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// lwz r31,52(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f5d3c
	if (cr6.eq) goto loc_827F5D3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827f5d3c
	if (cr0.gt) goto loc_827F5D3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F5D3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82790fe8
	sub_82790FE8(ctx, base);
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

__attribute__((alias("__imp__sub_827F5D58"))) PPC_WEAK_FUNC(sub_827F5D58);
PPC_FUNC_IMPL(__imp__sub_827F5D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5D5C"))) PPC_WEAK_FUNC(sub_827F5D5C);
PPC_FUNC_IMPL(__imp__sub_827F5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5D60"))) PPC_WEAK_FUNC(sub_827F5D60);
PPC_FUNC_IMPL(__imp__sub_827F5D60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,15308
	ctx.r8.s64 = ctx.r10.s64 + 15308;
	// addi r7,r9,15220
	ctx.r7.s64 = ctx.r9.s64 + 15220;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x827f5c18
	sub_827F5C18(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,72
	ctx.r5.s64 = r11.s64 + 72;
	// lwz r4,652(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 652);
	// bl 0x82780d30
	sub_82780D30(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f5e08
	if (cr6.eq) goto loc_827F5E08;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F5E08:
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F5E14"))) PPC_WEAK_FUNC(sub_827F5E14);
PPC_FUNC_IMPL(__imp__sub_827F5E14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F5E18"))) PPC_WEAK_FUNC(sub_827F5E18);
PPC_FUNC_IMPL(__imp__sub_827F5E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x827f5ee4
	if (cr6.gt) goto loc_827F5EE4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827f5e78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5E78;
	// bdzf 4*cr6+eq,0x827f5e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5E94;
	// bdzf 4*cr6+eq,0x827f5eb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F5EB0;
	// bne cr6,0x827f5edc
	if (!cr6.eq) goto loc_827F5EDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827932f8
	sub_827932F8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f5ee4
	if (cr6.eq) goto loc_827F5EE4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F5E78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f6998
	sub_827F6998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F5E94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5ba8
	sub_827F5BA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F5EB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793468
	sub_82793468(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f5ee4
	if (cr6.eq) goto loc_827F5EE4;
	// bl 0x82759098
	sub_82759098(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F5EDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f6a10
	sub_827F6A10(ctx, base);
loc_827F5EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F5EF4"))) PPC_WEAK_FUNC(sub_827F5EF4);
PPC_FUNC_IMPL(__imp__sub_827F5EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5EF8"))) PPC_WEAK_FUNC(sub_827F5EF8);
PPC_FUNC_IMPL(__imp__sub_827F5EF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,15408
	ctx.r10.s64 = r11.s64 + 15408;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
loc_827F5F30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f5f54
	if (cr6.eq) goto loc_827F5F54;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f5f30
	if (cr6.eq) goto loc_827F5F30;
loc_827F5F54:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f5f80
	if (!cr6.eq) goto loc_827F5F80;
loc_827F5F5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_827F5F80:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15392
	ctx.r10.s64 = ctx.r10.s64 + 15392;
loc_827F5F8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f5fb0
	if (cr6.eq) goto loc_827F5FB0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f5f8c
	if (cr6.eq) goto loc_827F5F8C;
loc_827F5FB0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f6074
	if (!cr6.eq) goto loc_827F6074;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827f6040
	if (cr6.eq) goto loc_827F6040;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6040
	if (cr6.eq) goto loc_827F6040;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827F5FF8:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827f5ff8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827F5FF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,44
	ctx.r10.s64 = r11.s64 + 44;
	// addi r11,r8,-4
	r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827F601C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827f601c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827F601C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// b 0x827f6044
	goto loc_827F6044;
loc_827F6040:
	// li r30,0
	r30.s64 = 0;
loc_827F6044:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827f6060
	if (!cr6.eq) goto loc_827F6060;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_827F6060:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_827F6074:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,4760
	ctx.r10.s64 = ctx.r10.s64 + 4760;
loc_827F6080:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f60a4
	if (cr6.eq) goto loc_827F60A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f6080
	if (cr6.eq) goto loc_827F6080;
loc_827F60A4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f5f5c
	if (cr6.eq) goto loc_827F5F5C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15364
	ctx.r10.s64 = ctx.r10.s64 + 15364;
loc_827F60B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x827f60dc
	if (cr6.eq) goto loc_827F60DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f60b8
	if (cr6.eq) goto loc_827F60B8;
loc_827F60DC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f61c4
	if (!cr6.eq) goto loc_827F61C4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827f613c
	if (cr6.eq) goto loc_827F613C;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f613c
	if (cr6.eq) goto loc_827F613C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_827F611C:
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a13d8
	sub_827A13D8(ctx, base);
	// lwz r30,32(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827f611c
	if (!cr6.eq) goto loc_827F611C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827F613C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6168
	if (cr6.eq) goto loc_827F6168;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x827f80f8
	sub_827F80F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827f616c
	goto loc_827F616C;
loc_827F6168:
	// li r31,0
	r31.s64 = 0;
loc_827F616C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827F617C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827f617c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827F617C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_827F61C4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15344
	ctx.r10.s64 = ctx.r10.s64 + 15344;
loc_827F61D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f61f4
	if (cr6.eq) goto loc_827F61F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f61d0
	if (cr6.eq) goto loc_827F61D0;
loc_827F61F4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f5f5c
	if (cr6.eq) goto loc_827F5F5C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278f308
	sub_8278F308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827F6220"))) PPC_WEAK_FUNC(sub_827F6220);
PPC_FUNC_IMPL(__imp__sub_827F6220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6224"))) PPC_WEAK_FUNC(sub_827F6224);
PPC_FUNC_IMPL(__imp__sub_827F6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6228"))) PPC_WEAK_FUNC(sub_827F6228);
PPC_FUNC_IMPL(__imp__sub_827F6228) {
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
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r11,15408
	ctx.r10.s64 = r11.s64 + 15408;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F6250:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f6274
	if (cr6.eq) goto loc_827F6274;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f6250
	if (cr6.eq) goto loc_827F6250;
loc_827F6274:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f637c
	if (cr6.eq) goto loc_827F637C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15392
	ctx.r10.s64 = ctx.r10.s64 + 15392;
loc_827F6288:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f62ac
	if (cr6.eq) goto loc_827F62AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f6288
	if (cr6.eq) goto loc_827F6288;
loc_827F62AC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f6388
	if (!cr6.eq) goto loc_827F6388;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827f637c
	if (cr6.eq) goto loc_827F637C;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x8276aab0
	sub_8276AAB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f637c
	if (cr6.eq) goto loc_827F637C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6374
	if (cr6.eq) goto loc_827F6374;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// bne cr6,0x827f636c
	if (!cr6.eq) goto loc_827F636C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827F6334:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827f6334
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827F6334;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F636C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F6374:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_827F637C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827F6388:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,4760
	ctx.r10.s64 = ctx.r10.s64 + 4760;
loc_827F6394:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f63b8
	if (cr6.eq) goto loc_827F63B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f6394
	if (cr6.eq) goto loc_827F6394;
loc_827F63B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f63cc
	if (!cr6.eq) goto loc_827F63CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827F63CC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F63DC"))) PPC_WEAK_FUNC(sub_827F63DC);
PPC_FUNC_IMPL(__imp__sub_827F63DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F63E0"))) PPC_WEAK_FUNC(sub_827F63E0);
PPC_FUNC_IMPL(__imp__sub_827F63E0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x827f6514
	if (cr6.lt) goto loc_827F6514;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827f6438
	if (!cr6.eq) goto loc_827F6438;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827F6438:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f64b4
	if (cr6.eq) goto loc_827F64B4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bne cr6,0x827f64b4
	if (!cr6.eq) goto loc_827F64B4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827f64b4
	if (!cr6.eq) goto loc_827F64B4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f64ac
	if (cr6.eq) goto loc_827F64AC;
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f64ec
	if (cr6.eq) goto loc_827F64EC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x827f64ec
	goto loc_827F64EC;
loc_827F64AC:
	// li r31,0
	r31.s64 = 0;
	// b 0x827f64ec
	goto loc_827F64EC;
loc_827F64B4:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f64e4
	if (cr6.eq) goto loc_827F64E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x827f5d60
	sub_827F5D60(ctx, base);
	// b 0x827f64e8
	goto loc_827F64E8;
loc_827F64E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F64E8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_827F64EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5c18
	sub_827F5C18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f6514
	if (cr6.eq) goto loc_827F6514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F6514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F6518"))) PPC_WEAK_FUNC(sub_827F6518);
PPC_FUNC_IMPL(__imp__sub_827F6518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F651C"))) PPC_WEAK_FUNC(sub_827F651C);
PPC_FUNC_IMPL(__imp__sub_827F651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6520"))) PPC_WEAK_FUNC(sub_827F6520);
PPC_FUNC_IMPL(__imp__sub_827F6520) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6570
	if (cr6.eq) goto loc_827F6570;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827f5d60
	sub_827F5D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F6570:
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

__attribute__((alias("__imp__sub_827F6584"))) PPC_WEAK_FUNC(sub_827F6584);
PPC_FUNC_IMPL(__imp__sub_827F6584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6588"))) PPC_WEAK_FUNC(sub_827F6588);
PPC_FUNC_IMPL(__imp__sub_827F6588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827f6b28
	sub_827F6B28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r7,r10,15732
	ctx.r7.s64 = ctx.r10.s64 + 15732;
	// addi r6,r9,15724
	ctx.r6.s64 = ctx.r9.s64 + 15724;
	// addi r8,r11,15820
	ctx.r8.s64 = r11.s64 + 15820;
	// stw r7,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r7.u32);
	// li r28,6
	r28.s64 = 6;
	// stw r6,60(r29)
	PPC_STORE_U32(r29.u32 + 60, ctx.r6.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r29,60
	ctx.r3.s64 = r29.s64 + 60;
	// addi r6,r4,15208
	ctx.r6.s64 = ctx.r4.s64 + 15208;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// bl 0x8278fb78
	sub_8278FB78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r27,2
	r27.s64 = 2;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,4760
	ctx.r4.s64 = ctx.r10.s64 + 4760;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f6664
	if (!cr0.eq) goto loc_827F6664;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F6664:
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,15344
	ctx.r4.s64 = ctx.r10.s64 + 15344;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f66d0
	if (!cr0.eq) goto loc_827F66D0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F66D0:
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r27.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,15392
	ctx.r4.s64 = ctx.r10.s64 + 15392;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f673c
	if (!cr0.eq) goto loc_827F673C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F673C:
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,15364
	ctx.r4.s64 = ctx.r10.s64 + 15364;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f67a8
	if (!cr0.eq) goto loc_827F67A8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F67A8:
	// stb r27,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r27.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,15408
	ctx.r4.s64 = ctx.r10.s64 + 15408;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f6814
	if (!cr0.eq) goto loc_827F6814;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F6814:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827F6824"))) PPC_WEAK_FUNC(sub_827F6824);
PPC_FUNC_IMPL(__imp__sub_827F6824) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6828"))) PPC_WEAK_FUNC(sub_827F6828);
PPC_FUNC_IMPL(__imp__sub_827F6828) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	r11.s64 = 8;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6898
	if (cr6.eq) goto loc_827F6898;
	// lis r11,-32129
	r11.s64 = -2105606144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,25568
	ctx.r5.s64 = r11.s64 + 25568;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,15652
	ctx.r8.s64 = ctx.r10.s64 + 15652;
	// addi r7,r9,15564
	ctx.r7.s64 = ctx.r9.s64 + 15564;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// b 0x827f689c
	goto loc_827F689C;
loc_827F6898:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_827F689C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r28.u8);
	// li r4,92
	ctx.r4.s64 = 92;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f698c
	if (cr6.eq) goto loc_827F698C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827f6588
	sub_827F6588(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6900
	if (cr6.eq) goto loc_827F6900;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827F6900:
	// li r11,12
	r11.s64 = 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f692c
	if (cr6.eq) goto loc_827F692C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F692C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,56
	ctx.r5.s64 = r31.s64 + 56;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f6980
	if (cr6.eq) goto loc_827F6980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F6980:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9468
	return;
loc_827F698C:
	// mr r30,r28
	r30.u64 = r28.u64;
}

__attribute__((alias("__imp__sub_827F6990"))) PPC_WEAK_FUNC(sub_827F6990);
PPC_FUNC_IMPL(__imp__sub_827F6990) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f6900
	// ERROR 827F6900
	return;
}

__attribute__((alias("__imp__sub_827F6994"))) PPC_WEAK_FUNC(sub_827F6994);
PPC_FUNC_IMPL(__imp__sub_827F6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6998"))) PPC_WEAK_FUNC(sub_827F6998);
PPC_FUNC_IMPL(__imp__sub_827F6998) {
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
	// bl 0x82792b60
	sub_82792B60(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f69f8
	if (cr6.eq) goto loc_827F69F8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r9,r11,0,1,3
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x827f69f8
	if (cr6.eq) goto loc_827F69F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r11,r9,28,1,3
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F69F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F6A08"))) PPC_WEAK_FUNC(sub_827F6A08);
PPC_FUNC_IMPL(__imp__sub_827F6A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6A0C"))) PPC_WEAK_FUNC(sub_827F6A0C);
PPC_FUNC_IMPL(__imp__sub_827F6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6A10"))) PPC_WEAK_FUNC(sub_827F6A10);
PPC_FUNC_IMPL(__imp__sub_827F6A10) {
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
	// bl 0x82792ea8
	sub_82792EA8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6a88
	if (cr6.eq) goto loc_827F6A88;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r9,r11,0,1,3
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x827f6a88
	if (!cr6.eq) goto loc_827F6A88;
	// clrlwi r10,r11,4
	ctx.r10.u64 = r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x827f6a6c
	if (cr6.eq) goto loc_827F6A6C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x827f6a80
	goto loc_827F6A80;
loc_827F6A6C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r9,29,1,3
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_827F6A80:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F6A88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F6A98"))) PPC_WEAK_FUNC(sub_827F6A98);
PPC_FUNC_IMPL(__imp__sub_827F6A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6A9C"))) PPC_WEAK_FUNC(sub_827F6A9C);
PPC_FUNC_IMPL(__imp__sub_827F6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6AA0"))) PPC_WEAK_FUNC(sub_827F6AA0);
PPC_FUNC_IMPL(__imp__sub_827F6AA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6AA8"))) PPC_WEAK_FUNC(sub_827F6AA8);
PPC_FUNC_IMPL(__imp__sub_827F6AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F6AAC"))) PPC_WEAK_FUNC(sub_827F6AAC);
PPC_FUNC_IMPL(__imp__sub_827F6AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f7120
	sub_827F7120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6AB0"))) PPC_WEAK_FUNC(sub_827F6AB0);
PPC_FUNC_IMPL(__imp__sub_827F6AB0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f6ad8
	if (cr6.eq) goto loc_827F6AD8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F6AD8:
	// lwz r31,52(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f6b04
	if (cr6.eq) goto loc_827F6B04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827f6b04
	if (cr0.gt) goto loc_827F6B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F6B04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
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

__attribute__((alias("__imp__sub_827F6B20"))) PPC_WEAK_FUNC(sub_827F6B20);
PPC_FUNC_IMPL(__imp__sub_827F6B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6B24"))) PPC_WEAK_FUNC(sub_827F6B24);
PPC_FUNC_IMPL(__imp__sub_827F6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6B28"))) PPC_WEAK_FUNC(sub_827F6B28);
PPC_FUNC_IMPL(__imp__sub_827F6B28) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x827909e8
	sub_827909E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,15308
	ctx.r9.s64 = r11.s64 + 15308;
	// addi r8,r10,15220
	ctx.r8.s64 = ctx.r10.s64 + 15220;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// addi r5,r7,-22540
	ctx.r5.s64 = ctx.r7.s64 + -22540;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r5,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// addi r11,r6,15524
	r11.s64 = ctx.r6.s64 + 15524;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// addi r10,r4,15436
	ctx.r10.s64 = ctx.r4.s64 + 15436;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// addi r9,r3,15424
	ctx.r9.s64 = ctx.r3.s64 + 15424;
	// stb r30,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r30.u8);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// bl 0x827908b0
	sub_827908B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F6BE8"))) PPC_WEAK_FUNC(sub_827F6BE8);
PPC_FUNC_IMPL(__imp__sub_827F6BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6BEC"))) PPC_WEAK_FUNC(sub_827F6BEC);
PPC_FUNC_IMPL(__imp__sub_827F6BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6BF0"))) PPC_WEAK_FUNC(sub_827F6BF0);
PPC_FUNC_IMPL(__imp__sub_827F6BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f6c84
	if (!cr6.eq) goto loc_827F6C84;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,312
	ctx.r3.s64 = r11.s64 + 312;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f6c84
	if (!cr6.eq) goto loc_827F6C84;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82790510
	sub_82790510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F6C84:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// addi r3,r29,44
	ctx.r3.s64 = r29.s64 + 44;
	// bl 0x82791338
	sub_82791338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F6CA4"))) PPC_WEAK_FUNC(sub_827F6CA4);
PPC_FUNC_IMPL(__imp__sub_827F6CA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6CA8"))) PPC_WEAK_FUNC(sub_827F6CA8);
PPC_FUNC_IMPL(__imp__sub_827F6CA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x827920e8
	sub_827920E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6CB0"))) PPC_WEAK_FUNC(sub_827F6CB0);
PPC_FUNC_IMPL(__imp__sub_827F6CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x827f6cc0
	if (!cr6.eq) goto loc_827F6CC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827F6CC0:
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x8278fe00
	sub_8278FE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6CC8"))) PPC_WEAK_FUNC(sub_827F6CC8);
PPC_FUNC_IMPL(__imp__sub_827F6CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F6CCC"))) PPC_WEAK_FUNC(sub_827F6CCC);
PPC_FUNC_IMPL(__imp__sub_827F6CCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f70a0
	sub_827F70A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6CD0"))) PPC_WEAK_FUNC(sub_827F6CD0);
PPC_FUNC_IMPL(__imp__sub_827F6CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
}

__attribute__((alias("__imp__sub_827F6CD4"))) PPC_WEAK_FUNC(sub_827F6CD4);
PPC_FUNC_IMPL(__imp__sub_827F6CD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f70a0
	sub_827F70A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6CD8"))) PPC_WEAK_FUNC(sub_827F6CD8);
PPC_FUNC_IMPL(__imp__sub_827F6CD8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82792d08
	sub_82792D08(ctx, base);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6d2c
	if (cr6.eq) goto loc_827F6D2C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f6d2c
	if (cr6.eq) goto loc_827F6D2C;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F6D2C:
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// addi r3,r29,76
	ctx.r3.s64 = r29.s64 + 76;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// lwz r11,88(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6db0
	if (cr6.eq) goto loc_827F6DB0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6db0
	if (cr6.eq) goto loc_827F6DB0;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_827F6D5C:
	// lwz r11,88(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6da4
	if (cr6.eq) goto loc_827F6DA4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f6da4
	if (cr6.eq) goto loc_827F6DA4;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F6DA4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f6d5c
	if (!cr0.eq) goto loc_827F6D5C;
loc_827F6DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F6DB4"))) PPC_WEAK_FUNC(sub_827F6DB4);
PPC_FUNC_IMPL(__imp__sub_827F6DB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F6DB8"))) PPC_WEAK_FUNC(sub_827F6DB8);
PPC_FUNC_IMPL(__imp__sub_827F6DB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827f6998
	sub_827F6998(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6e58
	if (cr6.eq) goto loc_827F6E58;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6e58
	if (cr6.eq) goto loc_827F6E58;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r28,4096
	r28.s64 = 268435456;
	// li r27,1
	r27.s64 = 1;
loc_827F6E04:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6e4c
	if (cr6.eq) goto loc_827F6E4C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x827f6e4c
	if (cr6.eq) goto loc_827F6E4C;
	// rlwimi r11,r27,28,1,3
	r11.u64 = (__builtin_rotateleft32(r27.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F6E4C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f6e04
	if (!cr0.eq) goto loc_827F6E04;
loc_827F6E58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F6E5C"))) PPC_WEAK_FUNC(sub_827F6E5C);
PPC_FUNC_IMPL(__imp__sub_827F6E5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6E60"))) PPC_WEAK_FUNC(sub_827F6E60);
PPC_FUNC_IMPL(__imp__sub_827F6E60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827f6a10
	sub_827F6A10(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6f10
	if (cr6.eq) goto loc_827F6F10;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6f10
	if (cr6.eq) goto loc_827F6F10;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r27,4096
	r27.s64 = 268435456;
	// li r28,1
	r28.s64 = 1;
loc_827F6EAC:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6f04
	if (cr6.eq) goto loc_827F6F04;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827f6f04
	if (!cr6.eq) goto loc_827F6F04;
	// clrlwi r10,r11,4
	ctx.r10.u64 = r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x827f6ef4
	if (cr6.eq) goto loc_827F6EF4;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827f6efc
	goto loc_827F6EFC;
loc_827F6EF4:
	// rlwimi r11,r28,29,1,3
	r11.u64 = (__builtin_rotateleft32(r28.u32, 29) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
loc_827F6EFC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F6F04:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f6eac
	if (!cr0.eq) goto loc_827F6EAC;
loc_827F6F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F6F14"))) PPC_WEAK_FUNC(sub_827F6F14);
PPC_FUNC_IMPL(__imp__sub_827F6F14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F6F18"))) PPC_WEAK_FUNC(sub_827F6F18);
PPC_FUNC_IMPL(__imp__sub_827F6F18) {
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
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f6f4c
	if (cr6.eq) goto loc_827F6F4C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F6F4C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r31,52(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f6f80
	if (cr6.eq) goto loc_827F6F80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x827f6f80
	if (cr0.gt) goto loc_827F6F80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F6F80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82790fe8
	sub_82790FE8(ctx, base);
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

__attribute__((alias("__imp__sub_827F6F9C"))) PPC_WEAK_FUNC(sub_827F6F9C);
PPC_FUNC_IMPL(__imp__sub_827F6F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6FA0"))) PPC_WEAK_FUNC(sub_827F6FA0);
PPC_FUNC_IMPL(__imp__sub_827F6FA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827932f8
	sub_827932F8(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f6fc4
	if (cr6.eq) goto loc_827F6FC4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F6FC4:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f7018
	if (cr6.eq) goto loc_827F7018;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f7018
	if (cr6.eq) goto loc_827F7018;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F6FF4:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f700c
	if (cr6.eq) goto loc_827F700C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F700C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f6ff4
	if (!cr0.eq) goto loc_827F6FF4;
loc_827F7018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F701C"))) PPC_WEAK_FUNC(sub_827F701C);
PPC_FUNC_IMPL(__imp__sub_827F701C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F7020"))) PPC_WEAK_FUNC(sub_827F7020);
PPC_FUNC_IMPL(__imp__sub_827F7020) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82793468
	sub_82793468(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f7044
	if (cr6.eq) goto loc_827F7044;
	// bl 0x82759098
	sub_82759098(ctx, base);
loc_827F7044:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f7098
	if (cr6.eq) goto loc_827F7098;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f7098
	if (cr6.eq) goto loc_827F7098;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F7074:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f708c
	if (cr6.eq) goto loc_827F708C;
	// bl 0x82759098
	sub_82759098(ctx, base);
loc_827F708C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f7074
	if (!cr0.eq) goto loc_827F7074;
loc_827F7098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F709C"))) PPC_WEAK_FUNC(sub_827F709C);
PPC_FUNC_IMPL(__imp__sub_827F709C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F70A0"))) PPC_WEAK_FUNC(sub_827F70A0);
PPC_FUNC_IMPL(__imp__sub_827F70A0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,15524
	ctx.r8.s64 = r11.s64 + 15524;
	// addi r7,r10,15436
	ctx.r7.s64 = ctx.r10.s64 + 15436;
	// addi r6,r9,15424
	ctx.r6.s64 = ctx.r9.s64 + 15424;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82792000
	sub_82792000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f6ab0
	sub_827F6AB0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827f7108
	if (cr6.eq) goto loc_827F7108;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F7108:
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

__attribute__((alias("__imp__sub_827F711C"))) PPC_WEAK_FUNC(sub_827F711C);
PPC_FUNC_IMPL(__imp__sub_827F711C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7120"))) PPC_WEAK_FUNC(sub_827F7120);
PPC_FUNC_IMPL(__imp__sub_827F7120) {
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
	// bl 0x827f6ab0
	sub_827F6AB0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f7158
	if (cr6.eq) goto loc_827F7158;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F7158:
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

__attribute__((alias("__imp__sub_827F716C"))) PPC_WEAK_FUNC(sub_827F716C);
PPC_FUNC_IMPL(__imp__sub_827F716C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7170"))) PPC_WEAK_FUNC(sub_827F7170);
PPC_FUNC_IMPL(__imp__sub_827F7170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827f7194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F7194;
	// bdzf 4*cr6+eq,0x827f7198
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F7198;
	// bdzf 4*cr6+eq,0x827f719c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F719C;
	// bne cr6,0x827f71a0
	if (!cr6.eq) goto loc_827F71A0;
	// b 0x827f6fa0
	sub_827F6FA0(ctx, base);
	return;
loc_827F7194:
	// b 0x827f6db8
	sub_827F6DB8(ctx, base);
	return;
loc_827F7198:
	// b 0x827f6cd8
	sub_827F6CD8(ctx, base);
	return;
loc_827F719C:
	// b 0x827f7020
	sub_827F7020(ctx, base);
	return;
loc_827F71A0:
	// b 0x827f6e60
	sub_827F6E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F71A4"))) PPC_WEAK_FUNC(sub_827F71A4);
PPC_FUNC_IMPL(__imp__sub_827F71A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F71A8"))) PPC_WEAK_FUNC(sub_827F71A8);
PPC_FUNC_IMPL(__imp__sub_827F71A8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r11,15980
	ctx.r10.s64 = r11.s64 + 15980;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F71D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f71f4
	if (cr6.eq) goto loc_827F71F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f71d0
	if (cr6.eq) goto loc_827F71D0;
loc_827F71F4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7230
	if (!cr6.eq) goto loc_827F7230;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F7230:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15964
	ctx.r10.s64 = ctx.r10.s64 + 15964;
loc_827F723C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7260
	if (cr6.eq) goto loc_827F7260;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f723c
	if (cr6.eq) goto loc_827F723C;
loc_827F7260:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f729c
	if (!cr6.eq) goto loc_827F729C;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,40(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f0.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F729C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15948
	ctx.r10.s64 = ctx.r10.s64 + 15948;
loc_827F72A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f72cc
	if (cr6.eq) goto loc_827F72CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f72a8
	if (cr6.eq) goto loc_827F72A8;
loc_827F72CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7308
	if (!cr6.eq) goto loc_827F7308;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F7308:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15932
	ctx.r10.s64 = ctx.r10.s64 + 15932;
loc_827F7314:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7338
	if (cr6.eq) goto loc_827F7338;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7314
	if (cr6.eq) goto loc_827F7314;
loc_827F7338:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7374
	if (!cr6.eq) goto loc_827F7374;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,56(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F7374:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15920
	ctx.r10.s64 = ctx.r10.s64 + 15920;
loc_827F7380:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f73a4
	if (cr6.eq) goto loc_827F73A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7380
	if (cr6.eq) goto loc_827F7380;
loc_827F73A4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f73e0
	if (!cr6.eq) goto loc_827F73E0;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, f0.u64);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F73E0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15908
	ctx.r10.s64 = ctx.r10.s64 + 15908;
loc_827F73EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7410
	if (cr6.eq) goto loc_827F7410;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f73ec
	if (cr6.eq) goto loc_827F73EC;
loc_827F7410:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f744c
	if (!cr6.eq) goto loc_827F744C;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,44(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F744C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15896
	ctx.r10.s64 = ctx.r10.s64 + 15896;
loc_827F7458:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f747c
	if (cr6.eq) goto loc_827F747C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7458
	if (cr6.eq) goto loc_827F7458;
loc_827F747C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f74b8
	if (!cr6.eq) goto loc_827F74B8;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,52(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F74B8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15884
	ctx.r10.s64 = ctx.r10.s64 + 15884;
loc_827F74C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f74e8
	if (cr6.eq) goto loc_827F74E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f74c4
	if (cr6.eq) goto loc_827F74C4;
loc_827F74E8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7524
	if (!cr6.eq) goto loc_827F7524;
	// li r11,3
	r11.s64 = 3;
	// lfs f0,60(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F7524:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15880
	ctx.r10.s64 = ctx.r10.s64 + 15880;
loc_827F7530:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f7554
	if (cr6.eq) goto loc_827F7554;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7530
	if (cr6.eq) goto loc_827F7530;
loc_827F7554:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7604
	if (!cr6.eq) goto loc_827F7604;
	// lfs f0,44(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fctidz f13,f0
	ctx.f13.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lfs f12,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lfs f10,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stb r11,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r11.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r11,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r11.u8);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stb r11,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r11.u8);
	// stb r5,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r5.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfd f7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f7.u64);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827F7604:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8278f308
	sub_8278F308(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827F761C"))) PPC_WEAK_FUNC(sub_827F761C);
PPC_FUNC_IMPL(__imp__sub_827F761C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7620"))) PPC_WEAK_FUNC(sub_827F7620);
PPC_FUNC_IMPL(__imp__sub_827F7620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,15980
	ctx.r10.s64 = r11.s64 + 15980;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_827F764C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7670
	if (cr6.eq) goto loc_827F7670;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f764c
	if (cr6.eq) goto loc_827F764C;
loc_827F7670:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7698
	if (!cr6.eq) goto loc_827F7698;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,32(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F7698:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15964
	ctx.r10.s64 = ctx.r10.s64 + 15964;
loc_827F76A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f76c8
	if (cr6.eq) goto loc_827F76C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f76a4
	if (cr6.eq) goto loc_827F76A4;
loc_827F76C8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f76f0
	if (!cr6.eq) goto loc_827F76F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 40, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F76F0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15948
	ctx.r10.s64 = ctx.r10.s64 + 15948;
loc_827F76FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7720
	if (cr6.eq) goto loc_827F7720;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f76fc
	if (cr6.eq) goto loc_827F76FC;
loc_827F7720:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7748
	if (!cr6.eq) goto loc_827F7748;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,48(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 48, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F7748:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15932
	ctx.r10.s64 = ctx.r10.s64 + 15932;
loc_827F7754:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7778
	if (cr6.eq) goto loc_827F7778;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7754
	if (cr6.eq) goto loc_827F7754;
loc_827F7778:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f77a0
	if (!cr6.eq) goto loc_827F77A0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,56(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 56, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F77A0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15920
	ctx.r10.s64 = ctx.r10.s64 + 15920;
loc_827F77AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f77d0
	if (cr6.eq) goto loc_827F77D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f77ac
	if (cr6.eq) goto loc_827F77AC;
loc_827F77D0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f77f8
	if (!cr6.eq) goto loc_827F77F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,36(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 36, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F77F8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15908
	ctx.r10.s64 = ctx.r10.s64 + 15908;
loc_827F7804:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7828
	if (cr6.eq) goto loc_827F7828;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f7804
	if (cr6.eq) goto loc_827F7804;
loc_827F7828:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7850
	if (!cr6.eq) goto loc_827F7850;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 44, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F7850:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15896
	ctx.r10.s64 = ctx.r10.s64 + 15896;
loc_827F785C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f7880
	if (cr6.eq) goto loc_827F7880;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f785c
	if (cr6.eq) goto loc_827F785C;
loc_827F7880:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f78a8
	if (!cr6.eq) goto loc_827F78A8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,52(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 52, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F78A8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15884
	ctx.r10.s64 = ctx.r10.s64 + 15884;
loc_827F78B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827f78d8
	if (cr6.eq) goto loc_827F78D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f78b4
	if (cr6.eq) goto loc_827F78B4;
loc_827F78D8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827f7900
	if (!cr6.eq) goto loc_827F7900;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 60, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F7900:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,15880
	ctx.r10.s64 = ctx.r10.s64 + 15880;
loc_827F790C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827f7930
	if (cr6.eq) goto loc_827F7930;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827f790c
	if (cr6.eq) goto loc_827F790C;
loc_827F7930:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne cr6,0x827f7a20
	if (!cr6.eq) goto loc_827F7A20;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 32, temp.u32);
	// stfs f0,40(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 40, temp.u32);
	// stfs f0,48(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 48, temp.u32);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r10,52,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r8,r11,r12
	ctx.r8.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// bne cr6,0x827f7998
	if (!cr6.eq) goto loc_827F7998;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827f799c
	if (!cr6.eq) goto loc_827F799C;
loc_827F7998:
	// li r11,0
	r11.s64 = 0;
loc_827F799C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827f79cc
	if (!cr6.eq) goto loc_827F79CC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r11,16,24,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// rlwinm r30,r11,24,24,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
loc_827F79CC:
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f8,52(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r28.u32 + 52, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,36(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r28.u32 + 36, temp.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f7,44(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r28.u32 + 44, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F7A20:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827F7A30"))) PPC_WEAK_FUNC(sub_827F7A30);
PPC_FUNC_IMPL(__imp__sub_827F7A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F7A34"))) PPC_WEAK_FUNC(sub_827F7A34);
PPC_FUNC_IMPL(__imp__sub_827F7A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7A38"))) PPC_WEAK_FUNC(sub_827F7A38);
PPC_FUNC_IMPL(__imp__sub_827F7A38) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x82766408
	sub_82766408(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827f7a90
	if (!cr6.eq) goto loc_827F7A90;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-17496
	ctx.r4.s64 = r11.s64 + -17496;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766460
	sub_82766460(ctx, base);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x828e946c
	return;
loc_827F7A90:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x827f7aa4
	if (!cr6.eq) goto loc_827F7AA4;
	// li r30,0
	r30.s64 = 0;
loc_827F7AA4:
	// li r29,3
	r29.s64 = 3;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfd f0,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r29.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f13,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfd f13,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f13.u64);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f12,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfd f12,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f12.u64);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f11,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfd f11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f11.u64);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f10,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfd f10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f10.u64);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f9,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfd f9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f9.u64);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lfs f8,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// stfd f8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f7,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r29.u8);
	// stfd f7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f7.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16120
	ctx.r4.s64 = ctx.r10.s64 + 16120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,16100
	ctx.r4.s64 = ctx.r8.s64 + 16100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16080
	ctx.r4.s64 = ctx.r6.s64 + 16080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16060
	ctx.r4.s64 = ctx.r3.s64 + 16060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16044
	ctx.r4.s64 = ctx.r10.s64 + 16044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,16028
	ctx.r4.s64 = ctx.r8.s64 + 16028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16012
	ctx.r4.s64 = ctx.r6.s64 + 16012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,15996
	ctx.r4.s64 = ctx.r3.s64 + 15996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,268(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19268
	ctx.r4.s64 = ctx.r10.s64 + 19268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827f7d80
	if (!cr6.eq) goto loc_827F7D80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
loc_827F7D80:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// blt cr6,0x827f7dbc
	if (cr6.lt) goto loc_827F7DBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
loc_827F7DBC:
	// li r11,5
	r11.s64 = 5;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x827f7dec
	if (!cr0.eq) goto loc_827F7DEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F7DEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
	// addi r31,r1,272
	r31.s64 = ctx.r1.s64 + 272;
	// li r30,7
	r30.s64 = 7;
loc_827F7DFC:
	// lwzu r3,-4(r31)
	ea = -4 + r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827f7e14
	if (!cr0.eq) goto loc_827F7E14;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F7E14:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x827f7dfc
	if (!cr0.lt) goto loc_827F7DFC;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_827F7E28"))) PPC_WEAK_FUNC(sub_827F7E28);
PPC_FUNC_IMPL(__imp__sub_827F7E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F7E2C"))) PPC_WEAK_FUNC(sub_827F7E2C);
PPC_FUNC_IMPL(__imp__sub_827F7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7E30"))) PPC_WEAK_FUNC(sub_827F7E30);
PPC_FUNC_IMPL(__imp__sub_827F7E30) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,15980
	ctx.r5.s64 = r11.s64 + 15980;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,15964
	ctx.r5.s64 = ctx.r10.s64 + 15964;
	// addi r6,r29,16
	ctx.r6.s64 = r29.s64 + 16;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r9,15948
	ctx.r5.s64 = ctx.r9.s64 + 15948;
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r8,15932
	ctx.r5.s64 = ctx.r8.s64 + 15932;
	// addi r6,r29,48
	ctx.r6.s64 = r29.s64 + 48;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r7,15920
	ctx.r5.s64 = ctx.r7.s64 + 15920;
	// addi r6,r29,64
	ctx.r6.s64 = r29.s64 + 64;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r6,15908
	ctx.r5.s64 = ctx.r6.s64 + 15908;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r29,80
	ctx.r6.s64 = r29.s64 + 80;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r5,15896
	ctx.r5.s64 = ctx.r5.s64 + 15896;
	// addi r6,r29,96
	ctx.r6.s64 = r29.s64 + 96;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r6,r29,112
	ctx.r6.s64 = r29.s64 + 112;
	// addi r5,r4,15884
	ctx.r5.s64 = ctx.r4.s64 + 15884;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82758e00
	sub_82758E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F7F0C"))) PPC_WEAK_FUNC(sub_827F7F0C);
PPC_FUNC_IMPL(__imp__sub_827F7F0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F7F10"))) PPC_WEAK_FUNC(sub_827F7F10);
PPC_FUNC_IMPL(__imp__sub_827F7F10) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// ble cr6,0x827f80e8
	if (!cr6.gt) goto loc_827F80E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f80e8
	if (cr6.eq) goto loc_827F80E8;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766408
	sub_82766408(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827f7f98
	if (!cr6.eq) goto loc_827F7F98;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-17496
	ctx.r4.s64 = r11.s64 + -17496;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766460
	sub_82766460(ctx, base);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9468
	return;
loc_827F7F98:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// bne cr6,0x827f7fb0
	if (!cr6.eq) goto loc_827F7FB0;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_827F7FB0:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// bne cr6,0x827f7fe8
	if (!cr6.eq) goto loc_827F7FE8;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// addi r3,r29,48
	ctx.r3.s64 = r29.s64 + 48;
	// bl 0x827a13d8
	sub_827A13D8(ctx, base);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9468
	return;
loc_827F7FE8:
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r30.u8);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r30.u8);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r30.u8);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r30.u8);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r30.u8);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r30.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827f7e30
	sub_827F7E30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,48
	ctx.r3.s64 = r29.s64 + 48;
	// bl 0x827a13d8
	sub_827A13D8(ctx, base);
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
	// li r30,7
	r30.s64 = 7;
loc_827F80D4:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x827f80d4
	if (!cr0.lt) goto loc_827F80D4;
loc_827F80E8:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_827F80F4"))) PPC_WEAK_FUNC(sub_827F80F4);
PPC_FUNC_IMPL(__imp__sub_827F80F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F80F8"))) PPC_WEAK_FUNC(sub_827F80F8);
PPC_FUNC_IMPL(__imp__sub_827F80F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,16364
	ctx.r9.s64 = r11.s64 + 16364;
	// addi r8,r10,16276
	ctx.r8.s64 = ctx.r10.s64 + 16276;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r30,r30,120
	r30.s64 = r30.s64 + 120;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F815C"))) PPC_WEAK_FUNC(sub_827F815C);
PPC_FUNC_IMPL(__imp__sub_827F815C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F8160"))) PPC_WEAK_FUNC(sub_827F8160);
PPC_FUNC_IMPL(__imp__sub_827F8160) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f82e8
	if (cr6.eq) goto loc_827F82E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// bne cr6,0x827f82e8
	if (!cr6.eq) goto loc_827F82E8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f82f0
	if (cr6.eq) goto loc_827F82F0;
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f81c0
	if (cr6.eq) goto loc_827F81C0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_827F81C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// ble cr6,0x827f82d8
	if (!cr6.gt) goto loc_827F82D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,72(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,52(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,60(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,68(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,76(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
loc_827F82D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f82e8
	if (cr6.eq) goto loc_827F82E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F82E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827F82F0:
	// li r30,0
	r30.s64 = 0;
}

__attribute__((alias("__imp__sub_827F82F4"))) PPC_WEAK_FUNC(sub_827F82F4);
PPC_FUNC_IMPL(__imp__sub_827F82F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f81c0
	// ERROR 827F81C0
	return;
}

__attribute__((alias("__imp__sub_827F82F8"))) PPC_WEAK_FUNC(sub_827F82F8);
PPC_FUNC_IMPL(__imp__sub_827F82F8) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f8344
	if (cr6.eq) goto loc_827F8344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827f80f8
	sub_827F80F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827F8344:
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

__attribute__((alias("__imp__sub_827F8358"))) PPC_WEAK_FUNC(sub_827F8358);
PPC_FUNC_IMPL(__imp__sub_827F8358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F835C"))) PPC_WEAK_FUNC(sub_827F835C);
PPC_FUNC_IMPL(__imp__sub_827F835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8360"))) PPC_WEAK_FUNC(sub_827F8360);
PPC_FUNC_IMPL(__imp__sub_827F8360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827f8ea0
	sub_827F8EA0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r7,r10,16572
	ctx.r7.s64 = ctx.r10.s64 + 16572;
	// addi r6,r9,16564
	ctx.r6.s64 = ctx.r9.s64 + 16564;
	// addi r8,r11,16660
	ctx.r8.s64 = r11.s64 + 16660;
	// stw r7,16(r26)
	PPC_STORE_U32(r26.u32 + 16, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r6,80(r26)
	PPC_STORE_U32(r26.u32 + 80, ctx.r6.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// addi r3,r26,80
	ctx.r3.s64 = r26.s64 + 80;
	// addi r6,r4,15856
	ctx.r6.s64 = ctx.r4.s64 + 15856;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// bl 0x8278fb78
	sub_8278FB78(ctx, base);
	// li r27,2
	r27.s64 = 2;
	// li r28,4
	r28.s64 = 4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r4,r3,15980
	ctx.r4.s64 = ctx.r3.s64 + 15980;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f8444
	if (!cr0.eq) goto loc_827F8444;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F8444:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r27.u8);
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15964
	ctx.r4.s64 = ctx.r10.s64 + 15964;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f84c0
	if (!cr0.eq) goto loc_827F84C0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F84C0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r27.u8);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15948
	ctx.r4.s64 = ctx.r10.s64 + 15948;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f853c
	if (!cr0.eq) goto loc_827F853C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F853C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15932
	ctx.r4.s64 = ctx.r10.s64 + 15932;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f85b8
	if (!cr0.eq) goto loc_827F85B8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F85B8:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15920
	ctx.r4.s64 = ctx.r10.s64 + 15920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f8634
	if (!cr0.eq) goto loc_827F8634;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F8634:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r27.u8);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15908
	ctx.r4.s64 = ctx.r10.s64 + 15908;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f86b0
	if (!cr0.eq) goto loc_827F86B0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F86B0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r27.u8);
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15896
	ctx.r4.s64 = ctx.r10.s64 + 15896;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f872c
	if (!cr0.eq) goto loc_827F872C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F872C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r27.u8);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15884
	ctx.r4.s64 = ctx.r10.s64 + 15884;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f87a8
	if (!cr0.eq) goto loc_827F87A8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F87A8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r27,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r27.u8);
	// stb r28,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r28.u8);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,15880
	ctx.r4.s64 = ctx.r10.s64 + 15880;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f8824
	if (!cr0.eq) goto loc_827F8824;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F8824:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_827F8834"))) PPC_WEAK_FUNC(sub_827F8834);
PPC_FUNC_IMPL(__imp__sub_827F8834) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F8838"))) PPC_WEAK_FUNC(sub_827F8838);
PPC_FUNC_IMPL(__imp__sub_827F8838) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	r11.s64 = 8;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f88a8
	if (cr6.eq) goto loc_827F88A8;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-32416
	ctx.r5.s64 = r11.s64 + -32416;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,16492
	ctx.r8.s64 = ctx.r10.s64 + 16492;
	// addi r7,r9,16404
	ctx.r7.s64 = ctx.r9.s64 + 16404;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// b 0x827f88ac
	goto loc_827F88AC;
loc_827F88A8:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_827F88AC:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r28.u8);
	// li r4,112
	ctx.r4.s64 = 112;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f899c
	if (cr6.eq) goto loc_827F899C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827f8360
	sub_827F8360(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f8910
	if (cr6.eq) goto loc_827F8910;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827F8910:
	// li r11,16
	r11.s64 = 16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f893c
	if (cr6.eq) goto loc_827F893C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F893C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r11,652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f8990
	if (cr6.eq) goto loc_827F8990;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F8990:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9468
	return;
loc_827F899C:
	// mr r30,r28
	r30.u64 = r28.u64;
}

__attribute__((alias("__imp__sub_827F89A0"))) PPC_WEAK_FUNC(sub_827F89A0);
PPC_FUNC_IMPL(__imp__sub_827F89A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f8910
	// ERROR 827F8910
	return;
}

__attribute__((alias("__imp__sub_827F89A4"))) PPC_WEAK_FUNC(sub_827F89A4);
PPC_FUNC_IMPL(__imp__sub_827F89A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F89A8"))) PPC_WEAK_FUNC(sub_827F89A8);
PPC_FUNC_IMPL(__imp__sub_827F89A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F89B0"))) PPC_WEAK_FUNC(sub_827F89B0);
PPC_FUNC_IMPL(__imp__sub_827F89B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f8a44
	if (!cr6.eq) goto loc_827F8A44;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,312
	ctx.r3.s64 = r11.s64 + 312;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827f8a44
	if (!cr6.eq) goto loc_827F8A44;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82790510
	sub_82790510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827F8A44:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x82791338
	sub_82791338(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F8A64"))) PPC_WEAK_FUNC(sub_827F8A64);
PPC_FUNC_IMPL(__imp__sub_827F8A64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F8A68"))) PPC_WEAK_FUNC(sub_827F8A68);
PPC_FUNC_IMPL(__imp__sub_827F8A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x827920e8
	sub_827920E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8A70"))) PPC_WEAK_FUNC(sub_827F8A70);
PPC_FUNC_IMPL(__imp__sub_827F8A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x827f8a80
	if (!cr6.eq) goto loc_827F8A80;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827F8A80:
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x8278fe00
	sub_8278FE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8A88"))) PPC_WEAK_FUNC(sub_827F8A88);
PPC_FUNC_IMPL(__imp__sub_827F8A88) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,16236
	ctx.r8.s64 = r11.s64 + 16236;
	// addi r7,r10,16148
	ctx.r7.s64 = ctx.r10.s64 + 16148;
	// addi r6,r9,16140
	ctx.r6.s64 = ctx.r9.s64 + 16140;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82792000
	sub_82792000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827f8af0
	if (cr6.eq) goto loc_827F8AF0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F8AF0:
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

__attribute__((alias("__imp__sub_827F8B04"))) PPC_WEAK_FUNC(sub_827F8B04);
PPC_FUNC_IMPL(__imp__sub_827F8B04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8B08"))) PPC_WEAK_FUNC(sub_827F8B08);
PPC_FUNC_IMPL(__imp__sub_827F8B08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F8B0C"))) PPC_WEAK_FUNC(sub_827F8B0C);
PPC_FUNC_IMPL(__imp__sub_827F8B0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f8a88
	sub_827F8A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8B10"))) PPC_WEAK_FUNC(sub_827F8B10);
PPC_FUNC_IMPL(__imp__sub_827F8B10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
}

__attribute__((alias("__imp__sub_827F8B14"))) PPC_WEAK_FUNC(sub_827F8B14);
PPC_FUNC_IMPL(__imp__sub_827F8B14) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f8a88
	sub_827F8A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8B18"))) PPC_WEAK_FUNC(sub_827F8B18);
PPC_FUNC_IMPL(__imp__sub_827F8B18) {
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
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8b48
	if (cr6.eq) goto loc_827F8B48;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F8B48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82790fe8
	sub_82790FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827F8B60"))) PPC_WEAK_FUNC(sub_827F8B60);
PPC_FUNC_IMPL(__imp__sub_827F8B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8B64"))) PPC_WEAK_FUNC(sub_827F8B64);
PPC_FUNC_IMPL(__imp__sub_827F8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8B68"))) PPC_WEAK_FUNC(sub_827F8B68);
PPC_FUNC_IMPL(__imp__sub_827F8B68) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792b60
	sub_82792B60(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8c08
	if (cr6.eq) goto loc_827F8C08;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8c08
	if (cr6.eq) goto loc_827F8C08;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r28,4096
	r28.s64 = 268435456;
	// li r27,1
	r27.s64 = 1;
loc_827F8BB4:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f8bfc
	if (cr6.eq) goto loc_827F8BFC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x827f8bfc
	if (cr6.eq) goto loc_827F8BFC;
	// rlwimi r11,r27,28,1,3
	r11.u64 = (__builtin_rotateleft32(r27.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F8BFC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f8bb4
	if (!cr0.eq) goto loc_827F8BB4;
loc_827F8C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F8C0C"))) PPC_WEAK_FUNC(sub_827F8C0C);
PPC_FUNC_IMPL(__imp__sub_827F8C0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F8C10"))) PPC_WEAK_FUNC(sub_827F8C10);
PPC_FUNC_IMPL(__imp__sub_827F8C10) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792d08
	sub_82792D08(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8ca8
	if (cr6.eq) goto loc_827F8CA8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8ca8
	if (cr6.eq) goto loc_827F8CA8;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F8C54:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f8c9c
	if (cr6.eq) goto loc_827F8C9C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f8c9c
	if (cr6.eq) goto loc_827F8C9C;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F8C9C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f8c54
	if (!cr0.eq) goto loc_827F8C54;
loc_827F8CA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F8CAC"))) PPC_WEAK_FUNC(sub_827F8CAC);
PPC_FUNC_IMPL(__imp__sub_827F8CAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F8CB0"))) PPC_WEAK_FUNC(sub_827F8CB0);
PPC_FUNC_IMPL(__imp__sub_827F8CB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792ea8
	sub_82792EA8(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8d60
	if (cr6.eq) goto loc_827F8D60;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8d60
	if (cr6.eq) goto loc_827F8D60;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r27,4096
	r27.s64 = 268435456;
	// li r28,1
	r28.s64 = 1;
loc_827F8CFC:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f8d54
	if (cr6.eq) goto loc_827F8D54;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827f8d54
	if (!cr6.eq) goto loc_827F8D54;
	// clrlwi r10,r11,4
	ctx.r10.u64 = r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x827f8d44
	if (cr6.eq) goto loc_827F8D44;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827f8d4c
	goto loc_827F8D4C;
loc_827F8D44:
	// rlwimi r11,r28,29,1,3
	r11.u64 = (__builtin_rotateleft32(r28.u32, 29) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
loc_827F8D4C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F8D54:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f8cfc
	if (!cr0.eq) goto loc_827F8CFC;
loc_827F8D60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F8D64"))) PPC_WEAK_FUNC(sub_827F8D64);
PPC_FUNC_IMPL(__imp__sub_827F8D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F8D68"))) PPC_WEAK_FUNC(sub_827F8D68);
PPC_FUNC_IMPL(__imp__sub_827F8D68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82793468
	sub_82793468(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8dd0
	if (cr6.eq) goto loc_827F8DD0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8dd0
	if (cr6.eq) goto loc_827F8DD0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F8DAC:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f8dc4
	if (cr6.eq) goto loc_827F8DC4;
	// bl 0x82759098
	sub_82759098(ctx, base);
loc_827F8DC4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f8dac
	if (!cr0.eq) goto loc_827F8DAC;
loc_827F8DD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F8DD4"))) PPC_WEAK_FUNC(sub_827F8DD4);
PPC_FUNC_IMPL(__imp__sub_827F8DD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F8DD8"))) PPC_WEAK_FUNC(sub_827F8DD8);
PPC_FUNC_IMPL(__imp__sub_827F8DD8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827932f8
	sub_827932F8(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8e40
	if (cr6.eq) goto loc_827F8E40;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8e40
	if (cr6.eq) goto loc_827F8E40;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F8E1C:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f8e34
	if (cr6.eq) goto loc_827F8E34;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F8E34:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f8e1c
	if (!cr0.eq) goto loc_827F8E1C;
loc_827F8E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F8E44"))) PPC_WEAK_FUNC(sub_827F8E44);
PPC_FUNC_IMPL(__imp__sub_827F8E44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F8E48"))) PPC_WEAK_FUNC(sub_827F8E48);
PPC_FUNC_IMPL(__imp__sub_827F8E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F8E4C"))) PPC_WEAK_FUNC(sub_827F8E4C);
PPC_FUNC_IMPL(__imp__sub_827F8E4C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x827f8e50
	goto loc_827F8E50;
loc_827F8E50:
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
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8e88
	if (cr6.eq) goto loc_827F8E88;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F8E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8E50"))) PPC_WEAK_FUNC(sub_827F8E50);
PPC_FUNC_IMPL(__imp__sub_827F8E50) {
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
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f8e88
	if (cr6.eq) goto loc_827F8E88;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F8E88:
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

__attribute__((alias("__imp__sub_827F8EA0"))) PPC_WEAK_FUNC(sub_827F8EA0);
PPC_FUNC_IMPL(__imp__sub_827F8EA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x827909e8
	sub_827909E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,16364
	ctx.r9.s64 = r11.s64 + 16364;
	// addi r8,r10,16276
	ctx.r8.s64 = ctx.r10.s64 + 16276;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// bl 0x827a15b8
	sub_827A15B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r7,-22540
	ctx.r6.s64 = ctx.r7.s64 + -22540;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r6,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r6.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r10,r5,16236
	ctx.r10.s64 = ctx.r5.s64 + 16236;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r9,r4,16148
	ctx.r9.s64 = ctx.r4.s64 + 16148;
	// addi r8,r3,16140
	ctx.r8.s64 = ctx.r3.s64 + 16140;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// bl 0x827908b0
	sub_827908B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F8F60"))) PPC_WEAK_FUNC(sub_827F8F60);
PPC_FUNC_IMPL(__imp__sub_827F8F60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F8F64"))) PPC_WEAK_FUNC(sub_827F8F64);
PPC_FUNC_IMPL(__imp__sub_827F8F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8F68"))) PPC_WEAK_FUNC(sub_827F8F68);
PPC_FUNC_IMPL(__imp__sub_827F8F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827f8f8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F8F8C;
	// bdzf 4*cr6+eq,0x827f8f90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F8F90;
	// bdzf 4*cr6+eq,0x827f8f94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F8F94;
	// bne cr6,0x827f8f98
	if (!cr6.eq) goto loc_827F8F98;
	// b 0x827f8dd8
	sub_827F8DD8(ctx, base);
	return;
loc_827F8F8C:
	// b 0x827f8b68
	sub_827F8B68(ctx, base);
	return;
loc_827F8F90:
	// b 0x827f8c10
	sub_827F8C10(ctx, base);
	return;
loc_827F8F94:
	// b 0x827f8d68
	sub_827F8D68(ctx, base);
	return;
loc_827F8F98:
	// b 0x827f8cb0
	sub_827F8CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8F9C"))) PPC_WEAK_FUNC(sub_827F8F9C);
PPC_FUNC_IMPL(__imp__sub_827F8F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8FA0"))) PPC_WEAK_FUNC(sub_827F8FA0);
PPC_FUNC_IMPL(__imp__sub_827F8FA0) {
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
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

