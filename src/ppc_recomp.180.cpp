#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82619920"))) PPC_WEAK_FUNC(sub_82619920);
PPC_FUNC_IMPL(__imp__sub_82619920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619924"))) PPC_WEAK_FUNC(sub_82619924);
PPC_FUNC_IMPL(__imp__sub_82619924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619928"))) PPC_WEAK_FUNC(sub_82619928);
PPC_FUNC_IMPL(__imp__sub_82619928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826199cc
	if (cr0.eq) goto loc_826199CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826199cc
	if (cr0.eq) goto loc_826199CC;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826190a0
	sub_826190A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826199d0
	goto loc_826199D0;
loc_826199CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826199D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_826199D4"))) PPC_WEAK_FUNC(sub_826199D4);
PPC_FUNC_IMPL(__imp__sub_826199D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826199D8"))) PPC_WEAK_FUNC(sub_826199D8);
PPC_FUNC_IMPL(__imp__sub_826199D8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619aec
	if (cr0.eq) goto loc_82619AEC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619aec
	if (cr0.eq) goto loc_82619AEC;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82619298
	sub_82619298(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82619ab4
	if (!cr6.eq) goto loc_82619AB4;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,10
	ctx.r6.s64 = r31.s64 + 10;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// b 0x82619ae4
	goto loc_82619AE4;
loc_82619AB4:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r29,64
	r29.s64 = 64;
	// li r31,4
	r31.s64 = 4;
loc_82619AC0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// bne 0x82619ac0
	if (!cr0.eq) goto loc_82619AC0;
loc_82619AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619af0
	goto loc_82619AF0;
loc_82619AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619AF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82619AF4"))) PPC_WEAK_FUNC(sub_82619AF4);
PPC_FUNC_IMPL(__imp__sub_82619AF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82619AF8"))) PPC_WEAK_FUNC(sub_82619AF8);
PPC_FUNC_IMPL(__imp__sub_82619AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619bb0
	if (cr0.eq) goto loc_82619BB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619bb0
	if (cr0.eq) goto loc_82619BB0;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82619340
	sub_82619340(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619bb4
	goto loc_82619BB4;
loc_82619BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619BB4:
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

__attribute__((alias("__imp__sub_82619BC8"))) PPC_WEAK_FUNC(sub_82619BC8);
PPC_FUNC_IMPL(__imp__sub_82619BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619BCC"))) PPC_WEAK_FUNC(sub_82619BCC);
PPC_FUNC_IMPL(__imp__sub_82619BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619BD0"))) PPC_WEAK_FUNC(sub_82619BD0);
PPC_FUNC_IMPL(__imp__sub_82619BD0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82619C24"))) PPC_WEAK_FUNC(sub_82619C24);
PPC_FUNC_IMPL(__imp__sub_82619C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619C28"))) PPC_WEAK_FUNC(sub_82619C28);
PPC_FUNC_IMPL(__imp__sub_82619C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619ce0
	if (cr0.eq) goto loc_82619CE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619ce0
	if (cr0.eq) goto loc_82619CE0;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826191f0
	sub_826191F0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619ce4
	goto loc_82619CE4;
loc_82619CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619CE4:
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

__attribute__((alias("__imp__sub_82619CF8"))) PPC_WEAK_FUNC(sub_82619CF8);
PPC_FUNC_IMPL(__imp__sub_82619CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619CFC"))) PPC_WEAK_FUNC(sub_82619CFC);
PPC_FUNC_IMPL(__imp__sub_82619CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619D00"))) PPC_WEAK_FUNC(sub_82619D00);
PPC_FUNC_IMPL(__imp__sub_82619D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r22,r11
	r22.u64 = r11.u64;
	// bne cr6,0x82619d30
	if (!cr6.eq) goto loc_82619D30;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
loc_82619D30:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r25,r5,4
	r25.s64 = ctx.r5.s64 + 4;
	// lhz r27,4(r5)
	r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r10,r10,71
	ctx.r10.s64 = ctx.r10.s64 + 71;
	// srawi r23,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r23.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x82619d9c
	if (!cr6.lt) goto loc_82619D9C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619d90
	if (cr0.eq) goto loc_82619D90;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82619d94
	if (!cr0.eq) goto loc_82619D94;
loc_82619D90:
	// li r11,0
	r11.s64 = 0;
loc_82619D94:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x82619f78
	goto loc_82619F78;
loc_82619D9C:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82619da8
	if (!cr6.gt) goto loc_82619DA8;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82619DA8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619f74
	if (cr0.eq) goto loc_82619F74;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619f74
	if (cr0.eq) goto loc_82619F74;
	// mullw r11,r27,r30
	r11.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// li r31,0
	r31.s64 = 0;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
	// cmpwi cr6,r29,512
	cr6.compare<int32_t>(r29.s32, 512, xer);
	// blt cr6,0x82619e00
	if (cr6.lt) goto loc_82619E00;
	// li r29,512
	r29.s64 = 512;
loc_82619E00:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619f74
	if (cr0.eq) goto loc_82619F74;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82619E3C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82619f28
	if (cr6.eq) goto loc_82619F28;
	// subfic r30,r27,4096
	xer.ca = r27.u32 <= 4096;
	r30.s64 = 4096 - r27.s64;
loc_82619E48:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bgt cr6,0x82619e78
	if (cr6.gt) goto loc_82619E78;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82619740
	sub_82619740(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r24,r24,r21
	r24.u64 = r24.u64 + r21.u64;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82619e48
	if (!cr0.eq) goto loc_82619E48;
loc_82619E78:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82619f28
	if (cr6.eq) goto loc_82619F28;
	// srawi r9,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r9.s64 = r31.s32 >> 3;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// subfic r30,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r30.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82619eb8
	if (cr0.lt) goto loc_82619EB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82619EA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82619ea8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619EA8;
loc_82619EB8:
	// clrlwi r31,r31,29
	r31.u64 = r31.u32 & 0x7;
	// mullw r11,r28,r27
	r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x82619ed8
	if (cr6.gt) goto loc_82619ED8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82619ED8:
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82619ee8
	if (cr6.lt) goto loc_82619EE8;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_82619EE8:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619f74
	if (cr0.eq) goto loc_82619F74;
	// add r5,r30,r29
	ctx.r5.u64 = r30.u64 + r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// b 0x82619e3c
	goto loc_82619E3C;
loc_82619F28:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// bge cr6,0x82619f6c
	if (!cr6.lt) goto loc_82619F6C;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r23
	ctx.r4.s64 = r23.s64 - ctx.r3.s64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82619F6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619f78
	goto loc_82619F78;
loc_82619F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619F78:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
}

__attribute__((alias("__imp__sub_82619F7C"))) PPC_WEAK_FUNC(sub_82619F7C);
PPC_FUNC_IMPL(__imp__sub_82619F7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82619F80"))) PPC_WEAK_FUNC(sub_82619F80);
PPC_FUNC_IMPL(__imp__sub_82619F80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82619FF4"))) PPC_WEAK_FUNC(sub_82619FF4);
PPC_FUNC_IMPL(__imp__sub_82619FF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82619FF8"))) PPC_WEAK_FUNC(sub_82619FF8);
PPC_FUNC_IMPL(__imp__sub_82619FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r22,r11
	r22.u64 = r11.u64;
	// bne cr6,0x8261a028
	if (!cr6.eq) goto loc_8261A028;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
loc_8261A028:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r25,r5,4
	r25.s64 = ctx.r5.s64 + 4;
	// lwz r27,4(r5)
	r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r10,r10,103
	ctx.r10.s64 = ctx.r10.s64 + 103;
	// srawi r23,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r23.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261a094
	if (!cr6.lt) goto loc_8261A094;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a088
	if (cr0.eq) goto loc_8261A088;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261a08c
	if (!cr0.eq) goto loc_8261A08C;
loc_8261A088:
	// li r11,0
	r11.s64 = 0;
loc_8261A08C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261a270
	goto loc_8261A270;
loc_8261A094:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261a0a0
	if (!cr6.gt) goto loc_8261A0A0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261A0A0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a26c
	if (cr0.eq) goto loc_8261A26C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a26c
	if (cr0.eq) goto loc_8261A26C;
	// mullw r11,r27,r30
	r11.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// li r31,0
	r31.s64 = 0;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
	// cmpwi cr6,r29,512
	cr6.compare<int32_t>(r29.s32, 512, xer);
	// blt cr6,0x8261a0f8
	if (cr6.lt) goto loc_8261A0F8;
	// li r29,512
	r29.s64 = 512;
loc_8261A0F8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a26c
	if (cr0.eq) goto loc_8261A26C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8261A134:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8261a220
	if (cr6.eq) goto loc_8261A220;
	// subfic r30,r27,4096
	xer.ca = r27.u32 <= 4096;
	r30.s64 = 4096 - r27.s64;
loc_8261A140:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bgt cr6,0x8261a170
	if (cr6.gt) goto loc_8261A170;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r24,r24,r21
	r24.u64 = r24.u64 + r21.u64;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x8261a140
	if (!cr0.eq) goto loc_8261A140;
loc_8261A170:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8261a220
	if (cr6.eq) goto loc_8261A220;
	// srawi r9,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r9.s64 = r31.s32 >> 3;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// subfic r30,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r30.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261a1b0
	if (cr0.lt) goto loc_8261A1B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261A1A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261a1a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261A1A0;
loc_8261A1B0:
	// clrlwi r31,r31,29
	r31.u64 = r31.u32 & 0x7;
	// mullw r11,r28,r27
	r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x8261a1d0
	if (cr6.gt) goto loc_8261A1D0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8261A1D0:
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261a1e0
	if (cr6.lt) goto loc_8261A1E0;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_8261A1E0:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a26c
	if (cr0.eq) goto loc_8261A26C;
	// add r5,r30,r29
	ctx.r5.u64 = r30.u64 + r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// b 0x8261a134
	goto loc_8261A134;
loc_8261A220:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// bge cr6,0x8261a264
	if (!cr6.lt) goto loc_8261A264;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r23
	ctx.r4.s64 = r23.s64 - ctx.r3.s64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261A264:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a270
	goto loc_8261A270;
loc_8261A26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A270:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
}

__attribute__((alias("__imp__sub_8261A274"))) PPC_WEAK_FUNC(sub_8261A274);
PPC_FUNC_IMPL(__imp__sub_8261A274) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261A278"))) PPC_WEAK_FUNC(sub_8261A278);
PPC_FUNC_IMPL(__imp__sub_8261A278) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r29.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r29,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r29.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r29.u16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82619c28
	sub_82619C28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a2e0
	if (cr0.eq) goto loc_8261A2E0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82619d00
	sub_82619D00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a2e0
	if (cr0.eq) goto loc_8261A2E0;
	// li r29,1
	r29.s64 = 1;
loc_8261A2E0:
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261A2E8"))) PPC_WEAK_FUNC(sub_8261A2E8);
PPC_FUNC_IMPL(__imp__sub_8261A2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261A2EC"))) PPC_WEAK_FUNC(sub_8261A2EC);
PPC_FUNC_IMPL(__imp__sub_8261A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A2F0"))) PPC_WEAK_FUNC(sub_8261A2F0);
PPC_FUNC_IMPL(__imp__sub_8261A2F0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82619798
	sub_82619798(ctx, base);
	// addi r29,r31,146
	r29.s64 = r31.s64 + 146;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r6,r28,4
	ctx.r6.s64 = r28.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,210
	ctx.r6.s64 = r31.s64 + 210;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x82619f80
	sub_82619F80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261A358"))) PPC_WEAK_FUNC(sub_8261A358);
PPC_FUNC_IMPL(__imp__sub_8261A358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261A35C"))) PPC_WEAK_FUNC(sub_8261A35C);
PPC_FUNC_IMPL(__imp__sub_8261A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A360"))) PPC_WEAK_FUNC(sub_8261A360);
PPC_FUNC_IMPL(__imp__sub_8261A360) {
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
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619af8
	sub_82619AF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a4a0
	if (cr0.eq) goto loc_8261A4A0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r28,r11,-17616
	r28.s64 = r11.s64 + -17616;
loc_8261A3B0:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,400
	ctx.r7.s64 = 400;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619ff8
	sub_82619FF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a4a0
	if (cr0.eq) goto loc_8261A4A0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261a4ac
	if (!cr0.eq) goto loc_8261A4AC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8261a478
	if (!cr6.gt) goto loc_8261A478;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_8261A3FC:
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// add r11,r5,r8
	r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r6,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r8,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r8.u8);
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// stb r8,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r8.u8);
	// lbz r8,19(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// stb r8,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r8.u8);
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// stb r8,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r8.u8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// stb r8,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r8.u8);
	// lbz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 22);
	// stb r8,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r8.u8);
	// lbz r11,23(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// stb r11,23(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23, r11.u8);
	// blt cr6,0x8261a3fc
	if (cr6.lt) goto loc_8261A3FC;
loc_8261A478:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619af8
	sub_82619AF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261a3b0
	if (!cr0.eq) goto loc_8261A3B0;
loc_8261A4A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x828e9468
	return;
loc_8261A4AC:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8261A4B0"))) PPC_WEAK_FUNC(sub_8261A4B0);
PPC_FUNC_IMPL(__imp__sub_8261A4B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8261a4a4
	// ERROR 8261A4A4
	return;
}

__attribute__((alias("__imp__sub_8261A4B4"))) PPC_WEAK_FUNC(sub_8261A4B4);
PPC_FUNC_IMPL(__imp__sub_8261A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A4B8"))) PPC_WEAK_FUNC(sub_8261A4B8);
PPC_FUNC_IMPL(__imp__sub_8261A4B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r30,2
	ctx.r6.s64 = r30.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8261A510"))) PPC_WEAK_FUNC(sub_8261A510);
PPC_FUNC_IMPL(__imp__sub_8261A510) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8261A514"))) PPC_WEAK_FUNC(sub_8261A514);
PPC_FUNC_IMPL(__imp__sub_8261A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A518"))) PPC_WEAK_FUNC(sub_8261A518);
PPC_FUNC_IMPL(__imp__sub_8261A518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8261a54c
	if (!cr6.eq) goto loc_8261A54C;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
loc_8261A54C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a600
	if (cr0.eq) goto loc_8261A600;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a600
	if (cr0.eq) goto loc_8261A600;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a604
	goto loc_8261A604;
loc_8261A600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A604:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8261A608"))) PPC_WEAK_FUNC(sub_8261A608);
PPC_FUNC_IMPL(__imp__sub_8261A608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261A60C"))) PPC_WEAK_FUNC(sub_8261A60C);
PPC_FUNC_IMPL(__imp__sub_8261A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A610"))) PPC_WEAK_FUNC(sub_8261A610);
PPC_FUNC_IMPL(__imp__sub_8261A610) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// addi r26,r4,52
	r26.s64 = ctx.r4.s64 + 52;
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// add r6,r29,r28
	ctx.r6.u64 = r29.u64 + r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// addi r7,r30,12
	ctx.r7.s64 = r30.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// add r11,r25,r29
	r11.u64 = r25.u64 + r29.u64;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r7,r30,16
	ctx.r7.s64 = r30.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r31,64(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// addi r7,r30,20
	ctx.r7.s64 = r30.s64 + 20;
	// add r6,r31,r28
	ctx.r6.u64 = r31.u64 + r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r3,r27,1
	ctx.r3.s64 = r27.s64 + 1;
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261A6B0"))) PPC_WEAK_FUNC(sub_8261A6B0);
PPC_FUNC_IMPL(__imp__sub_8261A6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261A6B4"))) PPC_WEAK_FUNC(sub_8261A6B4);
PPC_FUNC_IMPL(__imp__sub_8261A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A6B8"))) PPC_WEAK_FUNC(sub_8261A6B8);
PPC_FUNC_IMPL(__imp__sub_8261A6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x8261a6fc
	if (!cr6.eq) goto loc_8261A6FC;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_8261A6FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a7b0
	if (cr0.eq) goto loc_8261A7B0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a7b0
	if (cr0.eq) goto loc_8261A7B0;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a7b4
	goto loc_8261A7B4;
loc_8261A7B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A7B4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8261A7B8"))) PPC_WEAK_FUNC(sub_8261A7B8);
PPC_FUNC_IMPL(__imp__sub_8261A7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261A7BC"))) PPC_WEAK_FUNC(sub_8261A7BC);
PPC_FUNC_IMPL(__imp__sub_8261A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A7C0"))) PPC_WEAK_FUNC(sub_8261A7C0);
PPC_FUNC_IMPL(__imp__sub_8261A7C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// add r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x8261a610
	sub_8261A610(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// add r6,r11,r29
	ctx.r6.u64 = r11.u64 + r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x8261a4b8
	sub_8261A4B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261A82C"))) PPC_WEAK_FUNC(sub_8261A82C);
PPC_FUNC_IMPL(__imp__sub_8261A82C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8261A830"))) PPC_WEAK_FUNC(sub_8261A830);
PPC_FUNC_IMPL(__imp__sub_8261A830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r11.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bne cr6,0x8261a894
	if (!cr6.eq) goto loc_8261A894;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
loc_8261A894:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a948
	if (cr0.eq) goto loc_8261A948;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261a948
	if (cr0.eq) goto loc_8261A948;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a94c
	goto loc_8261A94C;
loc_8261A948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A94C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8261A950"))) PPC_WEAK_FUNC(sub_8261A950);
PPC_FUNC_IMPL(__imp__sub_8261A950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261A954"))) PPC_WEAK_FUNC(sub_8261A954);
PPC_FUNC_IMPL(__imp__sub_8261A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A958"))) PPC_WEAK_FUNC(sub_8261A958);
PPC_FUNC_IMPL(__imp__sub_8261A958) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261a7c0
	sub_8261A7C0(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,32
	r30.s64 = r11.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261A9E0"))) PPC_WEAK_FUNC(sub_8261A9E0);
PPC_FUNC_IMPL(__imp__sub_8261A9E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261A9E4"))) PPC_WEAK_FUNC(sub_8261A9E4);
PPC_FUNC_IMPL(__imp__sub_8261A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261A9E8"))) PPC_WEAK_FUNC(sub_8261A9E8);
PPC_FUNC_IMPL(__imp__sub_8261A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r22,r11
	r22.u64 = r11.u64;
	// bne cr6,0x8261aa24
	if (!cr6.eq) goto loc_8261AA24;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
loc_8261AA24:
	// lwz r9,92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r9,68(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,32
	r26.s64 = ctx.r10.s64 + 32;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261aac4
	if (!cr6.lt) goto loc_8261AAC4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261aab8
	if (cr0.eq) goto loc_8261AAB8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261aabc
	if (!cr0.eq) goto loc_8261AABC;
loc_8261AAB8:
	// li r11,0
	r11.s64 = 0;
loc_8261AABC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261ac90
	goto loc_8261AC90;
loc_8261AAC4:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261aad0
	if (!cr6.gt) goto loc_8261AAD0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261AAD0:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ac8c
	if (cr0.eq) goto loc_8261AC8C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ac8c
	if (cr0.eq) goto loc_8261AC8C;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r29,2
	r29.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261ab28
	if (cr6.lt) goto loc_8261AB28;
	// li r28,512
	r28.s64 = 512;
loc_8261AB28:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ac8c
	if (cr0.eq) goto loc_8261AC8C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261AB54:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261ac40
	if (cr6.eq) goto loc_8261AC40;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261AB6C:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x8261ab9c
	if (cr6.gt) goto loc_8261AB9C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8261a7c0
	sub_8261A7C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8261ab6c
	if (!cr0.eq) goto loc_8261AB6C;
loc_8261AB9C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261ac40
	if (cr6.eq) goto loc_8261AC40;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261abdc
	if (cr0.lt) goto loc_8261ABDC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261ABCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261abcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261ABCC;
loc_8261ABDC:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261abfc
	if (cr6.gt) goto loc_8261ABFC;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261ABFC:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261ac0c
	if (cr6.lt) goto loc_8261AC0C;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261AC0C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ac8c
	if (cr0.eq) goto loc_8261AC8C;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261ab54
	goto loc_8261AB54;
loc_8261AC40:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261ac84
	if (!cr6.lt) goto loc_8261AC84;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261AC84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ac90
	goto loc_8261AC90;
loc_8261AC8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261AC90:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
}

__attribute__((alias("__imp__sub_8261AC94"))) PPC_WEAK_FUNC(sub_8261AC94);
PPC_FUNC_IMPL(__imp__sub_8261AC94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261AC98"))) PPC_WEAK_FUNC(sub_8261AC98);
PPC_FUNC_IMPL(__imp__sub_8261AC98) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
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
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
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

__attribute__((alias("__imp__sub_8261AD14"))) PPC_WEAK_FUNC(sub_8261AD14);
PPC_FUNC_IMPL(__imp__sub_8261AD14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261AD18"))) PPC_WEAK_FUNC(sub_8261AD18);
PPC_FUNC_IMPL(__imp__sub_8261AD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, r11.u16);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r30,1(r8)
	r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stb r30,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, r30.u8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stb r3,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r3.u8);
	// stb r8,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r8.u8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8261adcc
	if (!cr6.eq) goto loc_8261ADCC;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
loc_8261ADCC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ae80
	if (cr0.eq) goto loc_8261AE80;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ae80
	if (cr0.eq) goto loc_8261AE80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ae84
	goto loc_8261AE84;
loc_8261AE80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261AE84:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8261AE88"))) PPC_WEAK_FUNC(sub_8261AE88);
PPC_FUNC_IMPL(__imp__sub_8261AE88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261AE8C"))) PPC_WEAK_FUNC(sub_8261AE8C);
PPC_FUNC_IMPL(__imp__sub_8261AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261AE90"))) PPC_WEAK_FUNC(sub_8261AE90);
PPC_FUNC_IMPL(__imp__sub_8261AE90) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261a958
	sub_8261A958(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,64
	r30.s64 = r11.s64 + 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261AF18"))) PPC_WEAK_FUNC(sub_8261AF18);
PPC_FUNC_IMPL(__imp__sub_8261AF18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261AF1C"))) PPC_WEAK_FUNC(sub_8261AF1C);
PPC_FUNC_IMPL(__imp__sub_8261AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261AF20"))) PPC_WEAK_FUNC(sub_8261AF20);
PPC_FUNC_IMPL(__imp__sub_8261AF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r22,r11
	r22.u64 = r11.u64;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8261af6c
	if (!cr6.eq) goto loc_8261AF6C;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
loc_8261AF6C:
	// lwz r9,92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r9,68(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,64
	r26.s64 = ctx.r10.s64 + 64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261b00c
	if (!cr6.lt) goto loc_8261B00C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b000
	if (cr0.eq) goto loc_8261B000;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261b004
	if (!cr0.eq) goto loc_8261B004;
loc_8261B000:
	// li r11,0
	r11.s64 = 0;
loc_8261B004:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261b1d8
	goto loc_8261B1D8;
loc_8261B00C:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261b018
	if (!cr6.gt) goto loc_8261B018;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261B018:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b1d4
	if (cr0.eq) goto loc_8261B1D4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b1d4
	if (cr0.eq) goto loc_8261B1D4;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r29,2
	r29.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261b070
	if (cr6.lt) goto loc_8261B070;
	// li r28,512
	r28.s64 = 512;
loc_8261B070:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b1d4
	if (cr0.eq) goto loc_8261B1D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261B09C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261b188
	if (cr6.eq) goto loc_8261B188;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261B0B4:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x8261b0e4
	if (cr6.gt) goto loc_8261B0E4;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8261a958
	sub_8261A958(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8261b0b4
	if (!cr0.eq) goto loc_8261B0B4;
loc_8261B0E4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261b188
	if (cr6.eq) goto loc_8261B188;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261b124
	if (cr0.lt) goto loc_8261B124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261B114:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261b114
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261B114;
loc_8261B124:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261b144
	if (cr6.gt) goto loc_8261B144;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261B144:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261b154
	if (cr6.lt) goto loc_8261B154;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261B154:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b1d4
	if (cr0.eq) goto loc_8261B1D4;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261b09c
	goto loc_8261B09C;
loc_8261B188:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261b1cc
	if (!cr6.lt) goto loc_8261B1CC;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261B1CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b1d8
	goto loc_8261B1D8;
loc_8261B1D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261B1D8:
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
}

__attribute__((alias("__imp__sub_8261B1DC"))) PPC_WEAK_FUNC(sub_8261B1DC);
PPC_FUNC_IMPL(__imp__sub_8261B1DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261B1E0"))) PPC_WEAK_FUNC(sub_8261B1E0);
PPC_FUNC_IMPL(__imp__sub_8261B1E0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261a518
	sub_8261A518(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b248
	if (cr0.eq) goto loc_8261B248;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261a9e8
	sub_8261A9E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261b24c
	if (!cr0.eq) goto loc_8261B24C;
loc_8261B248:
	// li r11,0
	r11.s64 = 0;
loc_8261B24C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8261B254"))) PPC_WEAK_FUNC(sub_8261B254);
PPC_FUNC_IMPL(__imp__sub_8261B254) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261B258"))) PPC_WEAK_FUNC(sub_8261B258);
PPC_FUNC_IMPL(__imp__sub_8261B258) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r28,128(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r27,120(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r26,124(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lhz r30,80(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// sth r30,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r30.u16);
loc_8261B310:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261b310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261B310;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// bne cr6,0x8261b338
	if (!cr6.eq) goto loc_8261B338;
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
loc_8261B338:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b3ec
	if (cr0.eq) goto loc_8261B3EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b3ec
	if (cr0.eq) goto loc_8261B3EC;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b3f0
	goto loc_8261B3F0;
loc_8261B3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261B3F0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8261B3F4"))) PPC_WEAK_FUNC(sub_8261B3F4);
PPC_FUNC_IMPL(__imp__sub_8261B3F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261B3F8"))) PPC_WEAK_FUNC(sub_8261B3F8);
PPC_FUNC_IMPL(__imp__sub_8261B3F8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261ae90
	sub_8261AE90(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,96
	r30.s64 = r11.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261B480"))) PPC_WEAK_FUNC(sub_8261B480);
PPC_FUNC_IMPL(__imp__sub_8261B480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261B484"))) PPC_WEAK_FUNC(sub_8261B484);
PPC_FUNC_IMPL(__imp__sub_8261B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261B488"))) PPC_WEAK_FUNC(sub_8261B488);
PPC_FUNC_IMPL(__imp__sub_8261B488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r11.u16);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// mr r22,r11
	r22.u64 = r11.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bne cr6,0x8261b4f4
	if (!cr6.eq) goto loc_8261B4F4;
	// addi r22,r1,112
	r22.s64 = ctx.r1.s64 + 112;
loc_8261B4F4:
	// lwz r9,92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r9,68(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,96
	r26.s64 = ctx.r10.s64 + 96;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261b594
	if (!cr6.lt) goto loc_8261B594;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b588
	if (cr0.eq) goto loc_8261B588;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261b58c
	if (!cr0.eq) goto loc_8261B58C;
loc_8261B588:
	// li r11,0
	r11.s64 = 0;
loc_8261B58C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261b760
	goto loc_8261B760;
loc_8261B594:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261b5a0
	if (!cr6.gt) goto loc_8261B5A0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261B5A0:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b75c
	if (cr0.eq) goto loc_8261B75C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b75c
	if (cr0.eq) goto loc_8261B75C;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r29,2
	r29.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261b5f8
	if (cr6.lt) goto loc_8261B5F8;
	// li r28,512
	r28.s64 = 512;
loc_8261B5F8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b75c
	if (cr0.eq) goto loc_8261B75C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261B624:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261b710
	if (cr6.eq) goto loc_8261B710;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261B63C:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x8261b66c
	if (cr6.gt) goto loc_8261B66C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8261ae90
	sub_8261AE90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8261b63c
	if (!cr0.eq) goto loc_8261B63C;
loc_8261B66C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261b710
	if (cr6.eq) goto loc_8261B710;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261b6ac
	if (cr0.lt) goto loc_8261B6AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261B69C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261b69c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261B69C;
loc_8261B6AC:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261b6cc
	if (cr6.gt) goto loc_8261B6CC;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261B6CC:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261b6dc
	if (cr6.lt) goto loc_8261B6DC;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261B6DC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b75c
	if (cr0.eq) goto loc_8261B75C;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261b624
	goto loc_8261B624;
loc_8261B710:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261b754
	if (!cr6.lt) goto loc_8261B754;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261B754:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b760
	goto loc_8261B760;
loc_8261B75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261B760:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
}

__attribute__((alias("__imp__sub_8261B764"))) PPC_WEAK_FUNC(sub_8261B764);
PPC_FUNC_IMPL(__imp__sub_8261B764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261B768"))) PPC_WEAK_FUNC(sub_8261B768);
PPC_FUNC_IMPL(__imp__sub_8261B768) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261a6b8
	sub_8261A6B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b7d0
	if (cr0.eq) goto loc_8261B7D0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261af20
	sub_8261AF20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261b7d4
	if (!cr0.eq) goto loc_8261B7D4;
loc_8261B7D0:
	// li r11,0
	r11.s64 = 0;
loc_8261B7D4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8261B7DC"))) PPC_WEAK_FUNC(sub_8261B7DC);
PPC_FUNC_IMPL(__imp__sub_8261B7DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261B7E0"))) PPC_WEAK_FUNC(sub_8261B7E0);
PPC_FUNC_IMPL(__imp__sub_8261B7E0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r10.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,152(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r26,156(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
loc_8261B89C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261b89c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261B89C;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,196(r1)
	PPC_STORE_U16(ctx.r1.u32 + 196, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// bne cr6,0x8261b8dc
	if (!cr6.eq) goto loc_8261B8DC;
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
loc_8261B8DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b990
	if (cr0.eq) goto loc_8261B990;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261b990
	if (cr0.eq) goto loc_8261B990;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b994
	goto loc_8261B994;
loc_8261B990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261B994:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8261B998"))) PPC_WEAK_FUNC(sub_8261B998);
PPC_FUNC_IMPL(__imp__sub_8261B998) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261B99C"))) PPC_WEAK_FUNC(sub_8261B99C);
PPC_FUNC_IMPL(__imp__sub_8261B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261B9A0"))) PPC_WEAK_FUNC(sub_8261B9A0);
PPC_FUNC_IMPL(__imp__sub_8261B9A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261b3f8
	sub_8261B3F8(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,128
	r30.s64 = r11.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261BA28"))) PPC_WEAK_FUNC(sub_8261BA28);
PPC_FUNC_IMPL(__imp__sub_8261BA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261BA2C"))) PPC_WEAK_FUNC(sub_8261BA2C);
PPC_FUNC_IMPL(__imp__sub_8261BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261BA30"))) PPC_WEAK_FUNC(sub_8261BA30);
PPC_FUNC_IMPL(__imp__sub_8261BA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r31,0(r8)
	r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lbz r29,1(r8)
	r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r22,r11
	r22.u64 = r11.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stb r29,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, r29.u8);
	// stb r8,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r8.u8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x8261baec
	if (!cr6.eq) goto loc_8261BAEC;
	// addi r22,r1,112
	r22.s64 = ctx.r1.s64 + 112;
loc_8261BAEC:
	// lwz r9,92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,48(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r6,44(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r9,68(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,128
	r26.s64 = ctx.r10.s64 + 128;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261bb8c
	if (!cr6.lt) goto loc_8261BB8C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bb80
	if (cr0.eq) goto loc_8261BB80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261bb84
	if (!cr0.eq) goto loc_8261BB84;
loc_8261BB80:
	// li r11,0
	r11.s64 = 0;
loc_8261BB84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261bd58
	goto loc_8261BD58;
loc_8261BB8C:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261bb98
	if (!cr6.gt) goto loc_8261BB98;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261BB98:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bd54
	if (cr0.eq) goto loc_8261BD54;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bd54
	if (cr0.eq) goto loc_8261BD54;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r29,2
	r29.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261bbf0
	if (cr6.lt) goto loc_8261BBF0;
	// li r28,512
	r28.s64 = 512;
loc_8261BBF0:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bd54
	if (cr0.eq) goto loc_8261BD54;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261BC1C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261bd08
	if (cr6.eq) goto loc_8261BD08;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261BC34:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x8261bc64
	if (cr6.gt) goto loc_8261BC64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8261b3f8
	sub_8261B3F8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8261bc34
	if (!cr0.eq) goto loc_8261BC34;
loc_8261BC64:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261bd08
	if (cr6.eq) goto loc_8261BD08;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261bca4
	if (cr0.lt) goto loc_8261BCA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261BC94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261bc94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261BC94;
loc_8261BCA4:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261bcc4
	if (cr6.gt) goto loc_8261BCC4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261BCC4:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261bcd4
	if (cr6.lt) goto loc_8261BCD4;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261BCD4:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bd54
	if (cr0.eq) goto loc_8261BD54;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261bc1c
	goto loc_8261BC1C;
loc_8261BD08:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261bd4c
	if (!cr6.lt) goto loc_8261BD4C;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261BD4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261bd58
	goto loc_8261BD58;
loc_8261BD54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261BD58:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
}

__attribute__((alias("__imp__sub_8261BD5C"))) PPC_WEAK_FUNC(sub_8261BD5C);
PPC_FUNC_IMPL(__imp__sub_8261BD5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261BD60"))) PPC_WEAK_FUNC(sub_8261BD60);
PPC_FUNC_IMPL(__imp__sub_8261BD60) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261a830
	sub_8261A830(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261bdc8
	if (cr0.eq) goto loc_8261BDC8;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261b488
	sub_8261B488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261bdcc
	if (!cr0.eq) goto loc_8261BDCC;
loc_8261BDC8:
	// li r11,0
	r11.s64 = 0;
loc_8261BDCC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8261BDD4"))) PPC_WEAK_FUNC(sub_8261BDD4);
PPC_FUNC_IMPL(__imp__sub_8261BDD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261BDD8"))) PPC_WEAK_FUNC(sub_8261BDD8);
PPC_FUNC_IMPL(__imp__sub_8261BDD8) {
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
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bne cr6,0x8261be10
	if (!cr6.eq) goto loc_8261BE10;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b768
	sub_8261B768(ctx, base);
	// b 0x8261be40
	goto loc_8261BE40;
loc_8261BE10:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8261be3c
	if (!cr6.eq) goto loc_8261BE3C;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b1e0
	sub_8261B1E0(ctx, base);
	// b 0x8261be40
	goto loc_8261BE40;
loc_8261BE3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261BE40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8261BE4C"))) PPC_WEAK_FUNC(sub_8261BE4C);
PPC_FUNC_IMPL(__imp__sub_8261BE4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BE50"))) PPC_WEAK_FUNC(sub_8261BE50);
PPC_FUNC_IMPL(__imp__sub_8261BE50) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r10.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,152(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r26,156(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
loc_8261BF0C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261bf0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261BF0C;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,196(r1)
	PPC_STORE_U16(ctx.r1.u32 + 196, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,28
	ctx.r5.s64 = 28;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// bne cr6,0x8261bf64
	if (!cr6.eq) goto loc_8261BF64;
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
loc_8261BF64:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c018
	if (cr0.eq) goto loc_8261C018;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c018
	if (cr0.eq) goto loc_8261C018;
	// li r5,55
	ctx.r5.s64 = 55;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826193e8
	sub_826193E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261a2f0
	sub_8261A2F0(ctx, base);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r4,370
	ctx.r4.s64 = 370;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,402
	ctx.r4.s64 = 402;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261c01c
	goto loc_8261C01C;
loc_8261C018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261C01C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8261C020"))) PPC_WEAK_FUNC(sub_8261C020);
PPC_FUNC_IMPL(__imp__sub_8261C020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261C024"))) PPC_WEAK_FUNC(sub_8261C024);
PPC_FUNC_IMPL(__imp__sub_8261C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C028"))) PPC_WEAK_FUNC(sub_8261C028);
PPC_FUNC_IMPL(__imp__sub_8261C028) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261b9a0
	sub_8261B9A0(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,160
	r30.s64 = r11.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261C0B0"))) PPC_WEAK_FUNC(sub_8261C0B0);
PPC_FUNC_IMPL(__imp__sub_8261C0B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261C0B4"))) PPC_WEAK_FUNC(sub_8261C0B4);
PPC_FUNC_IMPL(__imp__sub_8261C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C0B8"))) PPC_WEAK_FUNC(sub_8261C0B8);
PPC_FUNC_IMPL(__imp__sub_8261C0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r28,128(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r27,120(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r26,124(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lhz r29,80(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r29,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r29.u16);
loc_8261C178:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261c178
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261C178;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r21,r11
	r21.u64 = r11.u64;
	// bne cr6,0x8261c1a0
	if (!cr6.eq) goto loc_8261C1A0;
	// addi r21,r1,144
	r21.s64 = ctx.r1.s64 + 144;
loc_8261C1A0:
	// lwz r9,92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r9,68(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,160
	r26.s64 = ctx.r10.s64 + 160;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261c240
	if (!cr6.lt) goto loc_8261C240;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c234
	if (cr0.eq) goto loc_8261C234;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261c238
	if (!cr0.eq) goto loc_8261C238;
loc_8261C234:
	// li r11,0
	r11.s64 = 0;
loc_8261C238:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261c40c
	goto loc_8261C40C;
loc_8261C240:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8261c24c
	if (!cr6.gt) goto loc_8261C24C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261C24C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c408
	if (cr0.eq) goto loc_8261C408;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c408
	if (cr0.eq) goto loc_8261C408;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r29,2
	r29.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261c2a4
	if (cr6.lt) goto loc_8261C2A4;
	// li r28,512
	r28.s64 = 512;
loc_8261C2A4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c408
	if (cr0.eq) goto loc_8261C408;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261C2D0:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261c3bc
	if (cr6.eq) goto loc_8261C3BC;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261C2E8:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x8261c318
	if (cr6.gt) goto loc_8261C318;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8261b9a0
	sub_8261B9A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r22
	r23.u64 = r23.u64 + r22.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8261c2e8
	if (!cr0.eq) goto loc_8261C2E8;
loc_8261C318:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8261c3bc
	if (cr6.eq) goto loc_8261C3BC;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261c358
	if (cr0.lt) goto loc_8261C358;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261C348:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261c348
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261C348;
loc_8261C358:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261c378
	if (cr6.gt) goto loc_8261C378;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261C378:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261c388
	if (cr6.lt) goto loc_8261C388;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261C388:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c408
	if (cr0.eq) goto loc_8261C408;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261c2d0
	goto loc_8261C2D0;
loc_8261C3BC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261c400
	if (!cr6.lt) goto loc_8261C400;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261C400:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261c40c
	goto loc_8261C40C;
loc_8261C408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261C40C:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
}

__attribute__((alias("__imp__sub_8261C410"))) PPC_WEAK_FUNC(sub_8261C410);
PPC_FUNC_IMPL(__imp__sub_8261C410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261C414"))) PPC_WEAK_FUNC(sub_8261C414);
PPC_FUNC_IMPL(__imp__sub_8261C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C418"))) PPC_WEAK_FUNC(sub_8261C418);
PPC_FUNC_IMPL(__imp__sub_8261C418) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ad18
	sub_8261AD18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c480
	if (cr0.eq) goto loc_8261C480;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ba30
	sub_8261BA30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261c484
	if (!cr0.eq) goto loc_8261C484;
loc_8261C480:
	// li r11,0
	r11.s64 = 0;
loc_8261C484:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8261C48C"))) PPC_WEAK_FUNC(sub_8261C48C);
PPC_FUNC_IMPL(__imp__sub_8261C48C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261C490"))) PPC_WEAK_FUNC(sub_8261C490);
PPC_FUNC_IMPL(__imp__sub_8261C490) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r25,52(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r27,64(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r26,76(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// lwz r28,88(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8261c028
	sub_8261C028(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r31,r31,52
	r31.s64 = r31.s64 + 52;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,192
	r30.s64 = r11.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82619490
	sub_82619490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261C518"))) PPC_WEAK_FUNC(sub_8261C518);
PPC_FUNC_IMPL(__imp__sub_8261C518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261C51C"))) PPC_WEAK_FUNC(sub_8261C51C);
PPC_FUNC_IMPL(__imp__sub_8261C51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C520"))) PPC_WEAK_FUNC(sub_8261C520);
PPC_FUNC_IMPL(__imp__sub_8261C520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r10.u16);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r28,136(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r27,128(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r26,132(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
loc_8261C5E8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261c5e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261C5E8;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r21,r11
	r21.u64 = r11.u64;
	// bne cr6,0x8261c628
	if (!cr6.eq) goto loc_8261C628;
	// addi r21,r1,144
	r21.s64 = ctx.r1.s64 + 144;
loc_8261C628:
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,192
	r26.s64 = ctx.r10.s64 + 192;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261c6c8
	if (!cr6.lt) goto loc_8261C6C8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c6bc
	if (cr0.eq) goto loc_8261C6BC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261c6c0
	if (!cr0.eq) goto loc_8261C6C0;
loc_8261C6BC:
	// li r11,0
	r11.s64 = 0;
loc_8261C6C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261c894
	goto loc_8261C894;
loc_8261C6C8:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8261c6d4
	if (!cr6.gt) goto loc_8261C6D4;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_8261C6D4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c890
	if (cr0.eq) goto loc_8261C890;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c890
	if (cr0.eq) goto loc_8261C890;
	// mullw r11,r26,r29
	r11.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r30,2
	r30.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261c72c
	if (cr6.lt) goto loc_8261C72C;
	// li r28,512
	r28.s64 = 512;
loc_8261C72C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c890
	if (cr0.eq) goto loc_8261C890;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261C758:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261c844
	if (cr6.eq) goto loc_8261C844;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261C770:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bgt cr6,0x8261c7a0
	if (cr6.gt) goto loc_8261C7A0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8261c028
	sub_8261C028(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r23,r23,r22
	r23.u64 = r23.u64 + r22.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x8261c770
	if (!cr0.eq) goto loc_8261C770;
loc_8261C7A0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261c844
	if (cr6.eq) goto loc_8261C844;
	// srawi r9,r30,3
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r9.s64 = r30.s32 >> 3;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261c7e0
	if (cr0.lt) goto loc_8261C7E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261C7D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261c7d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261C7D0;
loc_8261C7E0:
	// clrlwi r30,r30,29
	r30.u64 = r30.u32 & 0x7;
	// mullw r11,r29,r26
	r11.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261c800
	if (cr6.gt) goto loc_8261C800;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261C800:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261c810
	if (cr6.lt) goto loc_8261C810;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261C810:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c890
	if (cr0.eq) goto loc_8261C890;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261c758
	goto loc_8261C758;
loc_8261C844:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261c888
	if (!cr6.lt) goto loc_8261C888;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261C888:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261c894
	goto loc_8261C894;
loc_8261C890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261C894:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
}

__attribute__((alias("__imp__sub_8261C898"))) PPC_WEAK_FUNC(sub_8261C898);
PPC_FUNC_IMPL(__imp__sub_8261C898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261C89C"))) PPC_WEAK_FUNC(sub_8261C89C);
PPC_FUNC_IMPL(__imp__sub_8261C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C8A0"))) PPC_WEAK_FUNC(sub_8261C8A0);
PPC_FUNC_IMPL(__imp__sub_8261C8A0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261b258
	sub_8261B258(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261c908
	if (cr0.eq) goto loc_8261C908;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261c0b8
	sub_8261C0B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261c90c
	if (!cr0.eq) goto loc_8261C90C;
loc_8261C908:
	// li r11,0
	r11.s64 = 0;
loc_8261C90C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8261C914"))) PPC_WEAK_FUNC(sub_8261C914);
PPC_FUNC_IMPL(__imp__sub_8261C914) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261C918"))) PPC_WEAK_FUNC(sub_8261C918);
PPC_FUNC_IMPL(__imp__sub_8261C918) {
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
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bne cr6,0x8261c950
	if (!cr6.eq) goto loc_8261C950;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,44
	ctx.r7.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261c418
	sub_8261C418(ctx, base);
	// b 0x8261c980
	goto loc_8261C980;
loc_8261C950:
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bne cr6,0x8261c97c
	if (!cr6.eq) goto loc_8261C97C;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261bd60
	sub_8261BD60(ctx, base);
	// b 0x8261c980
	goto loc_8261C980;
loc_8261C97C:
	// bl 0x8261bdd8
	sub_8261BDD8(ctx, base);
loc_8261C980:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8261C98C"))) PPC_WEAK_FUNC(sub_8261C98C);
PPC_FUNC_IMPL(__imp__sub_8261C98C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C990"))) PPC_WEAK_FUNC(sub_8261C990);
PPC_FUNC_IMPL(__imp__sub_8261C990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r10.u16);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r9,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r9.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r28,136(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r27,128(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r26,132(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
loc_8261CA58:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8261ca58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261CA58;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,28
	ctx.r5.s64 = 28;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r11.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r21,r11
	r21.u64 = r11.u64;
	// bne cr6,0x8261cab0
	if (!cr6.eq) goto loc_8261CAB0;
	// addi r21,r1,144
	r21.s64 = ctx.r1.s64 + 144;
loc_8261CAB0:
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,224
	r26.s64 = ctx.r10.s64 + 224;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,441
	ctx.r10.s64 = ctx.r10.s64 + 441;
	// srawi r25,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r25.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261cb50
	if (!cr6.lt) goto loc_8261CB50;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cb44
	if (cr0.eq) goto loc_8261CB44;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261cb48
	if (!cr0.eq) goto loc_8261CB48;
loc_8261CB44:
	// li r11,0
	r11.s64 = 0;
loc_8261CB48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261cd1c
	goto loc_8261CD1C;
loc_8261CB50:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8261cb5c
	if (!cr6.gt) goto loc_8261CB5C;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_8261CB5C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cd18
	if (cr0.eq) goto loc_8261CD18;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cd18
	if (cr0.eq) goto loc_8261CD18;
	// mullw r11,r26,r29
	r11.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// li r30,2
	r30.s64 = 2;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261cbb4
	if (cr6.lt) goto loc_8261CBB4;
	// li r28,512
	r28.s64 = 512;
loc_8261CBB4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cd18
	if (cr0.eq) goto loc_8261CD18;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261CBE0:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261cccc
	if (cr6.eq) goto loc_8261CCCC;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261CBF8:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bgt cr6,0x8261cc28
	if (cr6.gt) goto loc_8261CC28;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8261c490
	sub_8261C490(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r23,r23,r22
	r23.u64 = r23.u64 + r22.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x8261cbf8
	if (!cr0.eq) goto loc_8261CBF8;
loc_8261CC28:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261cccc
	if (cr6.eq) goto loc_8261CCCC;
	// srawi r9,r30,3
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r9.s64 = r30.s32 >> 3;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261cc68
	if (cr0.lt) goto loc_8261CC68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261CC58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261cc58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261CC58;
loc_8261CC68:
	// clrlwi r30,r30,29
	r30.u64 = r30.u32 & 0x7;
	// mullw r11,r29,r26
	r11.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261cc88
	if (cr6.gt) goto loc_8261CC88;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261CC88:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261cc98
	if (cr6.lt) goto loc_8261CC98;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261CC98:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cd18
	if (cr0.eq) goto loc_8261CD18;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261cbe0
	goto loc_8261CBE0;
loc_8261CCCC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bge cr6,0x8261cd10
	if (!cr6.lt) goto loc_8261CD10;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r25
	ctx.r4.s64 = r25.s64 - ctx.r3.s64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261CD10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261cd1c
	goto loc_8261CD1C;
loc_8261CD18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261CD1C:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
}

__attribute__((alias("__imp__sub_8261CD20"))) PPC_WEAK_FUNC(sub_8261CD20);
PPC_FUNC_IMPL(__imp__sub_8261CD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261CD24"))) PPC_WEAK_FUNC(sub_8261CD24);
PPC_FUNC_IMPL(__imp__sub_8261CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CD28"))) PPC_WEAK_FUNC(sub_8261CD28);
PPC_FUNC_IMPL(__imp__sub_8261CD28) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261b7e0
	sub_8261B7E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261cd90
	if (cr0.eq) goto loc_8261CD90;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261c520
	sub_8261C520(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261cd94
	if (!cr0.eq) goto loc_8261CD94;
loc_8261CD90:
	// li r11,0
	r11.s64 = 0;
loc_8261CD94:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8261CD9C"))) PPC_WEAK_FUNC(sub_8261CD9C);
PPC_FUNC_IMPL(__imp__sub_8261CD9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261CDA0"))) PPC_WEAK_FUNC(sub_8261CDA0);
PPC_FUNC_IMPL(__imp__sub_8261CDA0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8261ac98
	sub_8261AC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261be50
	sub_8261BE50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ce08
	if (cr0.eq) goto loc_8261CE08;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261c990
	sub_8261C990(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261ce0c
	if (!cr0.eq) goto loc_8261CE0C;
loc_8261CE08:
	// li r11,0
	r11.s64 = 0;
loc_8261CE0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8261CE14"))) PPC_WEAK_FUNC(sub_8261CE14);
PPC_FUNC_IMPL(__imp__sub_8261CE14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261CE18"))) PPC_WEAK_FUNC(sub_8261CE18);
PPC_FUNC_IMPL(__imp__sub_8261CE18) {
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
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// bne cr6,0x8261ce50
	if (!cr6.eq) goto loc_8261CE50;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261cd28
	sub_8261CD28(ctx, base);
	// b 0x8261ce80
	goto loc_8261CE80;
loc_8261CE50:
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// bne cr6,0x8261ce7c
	if (!cr6.eq) goto loc_8261CE7C;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261c8a0
	sub_8261C8A0(ctx, base);
	// b 0x8261ce80
	goto loc_8261CE80;
loc_8261CE7C:
	// bl 0x8261c918
	sub_8261C918(ctx, base);
loc_8261CE80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8261CE8C"))) PPC_WEAK_FUNC(sub_8261CE8C);
PPC_FUNC_IMPL(__imp__sub_8261CE8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CE90"))) PPC_WEAK_FUNC(sub_8261CE90);
PPC_FUNC_IMPL(__imp__sub_8261CE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d138
	if (cr0.eq) goto loc_8261D138;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d138
	if (cr0.eq) goto loc_8261D138;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826188b8
	sub_826188B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r24,r31,484
	r24.s64 = r31.s64 + 484;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r27,r31,488
	r27.s64 = r31.s64 + 488;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r29,r31,492
	r29.s64 = r31.s64 + 492;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r25,r31,496
	r25.s64 = r31.s64 + 496;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,133
	ctx.r4.s64 = 133;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,500
	ctx.r6.s64 = r31.s64 + 500;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,165
	ctx.r4.s64 = 165;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,197
	ctx.r4.s64 = 197;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,229
	ctx.r4.s64 = 229;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,480
	ctx.r5.s64 = 480;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r26,88(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r23,r11,-17616
	r23.s64 = r11.s64 + -17616;
	// beq cr6,0x8261d04c
	if (cr6.eq) goto loc_8261D04C;
loc_8261D008:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826199d8
	sub_826199D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d138
	if (cr0.eq) goto loc_8261D138;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x8261d008
	if (cr6.lt) goto loc_8261D008;
loc_8261D04C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// cmplwi cr6,r6,7
	cr6.compare<uint32_t>(ctx.r6.u32, 7, xer);
	// bne cr6,0x8261d08c
	if (!cr6.eq) goto loc_8261D08C;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8261cda0
	sub_8261CDA0(ctx, base);
	// b 0x8261d094
	goto loc_8261D094;
loc_8261D08C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261ce18
	sub_8261CE18(ctx, base);
loc_8261D094:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d138
	if (cr0.eq) goto loc_8261D138;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28648);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8261d0f8
	if (cr6.eq) goto loc_8261D0F8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261d0f8
	if (cr0.lt) goto loc_8261D0F8;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261D0C0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r8,r9,10,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// rlwimi r9,r8,22,0,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0xFFC00000) | (ctx.r9.u64 & 0xFFFFFFFF003FFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// bdnz 0x8261d0c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261D0C0;
loc_8261D0F8:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mulli r6,r11,3
	ctx.r6.s64 = r11.s64 * 3;
	// bl 0x8261a278
	sub_8261A278(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8261d13c
	goto loc_8261D13C;
loc_8261D138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261D13C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8261D140"))) PPC_WEAK_FUNC(sub_8261D140);
PPC_FUNC_IMPL(__imp__sub_8261D140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261D144"))) PPC_WEAK_FUNC(sub_8261D144);
PPC_FUNC_IMPL(__imp__sub_8261D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D148"))) PPC_WEAK_FUNC(sub_8261D148);
PPC_FUNC_IMPL(__imp__sub_8261D148) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8261d4bc
	if (cr6.eq) goto loc_8261D4BC;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8261d4bc
	if (cr6.eq) goto loc_8261D4BC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d4bc
	if (cr0.eq) goto loc_8261D4BC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d4bc
	if (cr0.eq) goto loc_8261D4BC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826190a0
	sub_826190A0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// cmplw cr6,r25,r6
	cr6.compare<uint32_t>(r25.u32, ctx.r6.u32, xer);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// blt cr6,0x8261d4bc
	if (cr6.lt) goto loc_8261D4BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8261d4ac
	if (cr6.gt) goto loc_8261D4AC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8261d4ac
	if (cr6.gt) goto loc_8261D4AC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r11,-17616
	r26.s64 = r11.s64 + -17616;
	// ble cr6,0x8261d3b0
	if (!cr6.gt) goto loc_8261D3B0;
	// li r28,0
	r28.s64 = 0;
loc_8261D35C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, r11.u32);
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8261ce90
	sub_8261CE90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d4bc
	if (cr0.eq) goto loc_8261D4BC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r5,512
	ctx.r5.s64 = 512;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// addi r28,r28,512
	r28.s64 = r28.s64 + 512;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8261d35c
	if (cr6.lt) goto loc_8261D35C;
loc_8261D3B0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8261d490
	if (!cr6.gt) goto loc_8261D490;
	// li r30,0
	r30.s64 = 0;
loc_8261D3C4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d4bc
	if (cr0.eq) goto loc_8261D4BC;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826191f0
	sub_826191F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82618680
	sub_82618680(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8261f428
	sub_8261F428(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82618c78
	sub_82618C78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d4bc
	if (cr0.eq) goto loc_8261D4BC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,44
	ctx.r5.s64 = 44;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r26.u32);
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8261d3c4
	if (cr6.lt) goto loc_8261D3C4;
loc_8261D490:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261a360
	sub_8261A360(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8261d4c0
	goto loc_8261D4C0;
loc_8261D4AC:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8261D4BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261D4C0:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
}

__attribute__((alias("__imp__sub_8261D4C4"))) PPC_WEAK_FUNC(sub_8261D4C4);
PPC_FUNC_IMPL(__imp__sub_8261D4C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8261D4C8"))) PPC_WEAK_FUNC(sub_8261D4C8);
PPC_FUNC_IMPL(__imp__sub_8261D4C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,5192
	r11.s64 = r11.s64 + 5192;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8261d4f8
	if (cr6.eq) goto loc_8261D4F8;
	// bl 0x8314d77c
	__imp__LDIDestroyDecompression(ctx, base);
loc_8261D4F8:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-17616
	r11.s64 = r11.s64 + -17616;
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

__attribute__((alias("__imp__sub_8261D514"))) PPC_WEAK_FUNC(sub_8261D514);
PPC_FUNC_IMPL(__imp__sub_8261D514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D518"))) PPC_WEAK_FUNC(sub_8261D518);
PPC_FUNC_IMPL(__imp__sub_8261D518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D52C"))) PPC_WEAK_FUNC(sub_8261D52C);
PPC_FUNC_IMPL(__imp__sub_8261D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D530"))) PPC_WEAK_FUNC(sub_8261D530);
PPC_FUNC_IMPL(__imp__sub_8261D530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D548"))) PPC_WEAK_FUNC(sub_8261D548);
PPC_FUNC_IMPL(__imp__sub_8261D548) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r6,15
	ctx.r10.s64 = ctx.r6.s64 + 15;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,5192
	r11.s64 = r11.s64 + 5192;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// ori r9,r9,51727
	ctx.r9.u64 = ctx.r9.u64 | 51727;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// blt cr6,0x8261d610
	if (cr6.lt) goto loc_8261D610;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,0
	r11.s64 = 0;
	// ori r8,r9,38912
	ctx.r8.u64 = ctx.r9.u64 | 38912;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r7,r7,6144
	ctx.r7.s64 = ctx.r7.s64 + 6144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d78c
	__imp__LDICreateDecompression(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8261d60c
	if (!cr0.eq) goto loc_8261D60C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,38912
	cr6.compare<uint32_t>(r11.u32, 38912, xer);
	// blt cr6,0x8261d604
	if (cr6.lt) goto loc_8261D604;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bge cr6,0x8261d610
	if (!cr6.lt) goto loc_8261D610;
loc_8261D604:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8314d77c
	__imp__LDIDestroyDecompression(ctx, base);
loc_8261D60C:
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
loc_8261D610:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8261D62C"))) PPC_WEAK_FUNC(sub_8261D62C);
PPC_FUNC_IMPL(__imp__sub_8261D62C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261D630"))) PPC_WEAK_FUNC(sub_8261D630);
PPC_FUNC_IMPL(__imp__sub_8261D630) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8261d4c8
	sub_8261D4C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d660
	if (cr0.eq) goto loc_8261D660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8261D660:
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

__attribute__((alias("__imp__sub_8261D678"))) PPC_WEAK_FUNC(sub_8261D678);
PPC_FUNC_IMPL(__imp__sub_8261D678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D67C"))) PPC_WEAK_FUNC(sub_8261D67C);
PPC_FUNC_IMPL(__imp__sub_8261D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D680"))) PPC_WEAK_FUNC(sub_8261D680);
PPC_FUNC_IMPL(__imp__sub_8261D680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261d6c4
	if (!cr0.eq) goto loc_8261D6C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261d714
	goto loc_8261D714;
loc_8261D6C4:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82619340
	sub_82619340(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8261D714:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261D718"))) PPC_WEAK_FUNC(sub_8261D718);
PPC_FUNC_IMPL(__imp__sub_8261D718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261D71C"))) PPC_WEAK_FUNC(sub_8261D71C);
PPC_FUNC_IMPL(__imp__sub_8261D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D720"))) PPC_WEAK_FUNC(sub_8261D720);
PPC_FUNC_IMPL(__imp__sub_8261D720) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,28
	r28.s64 = ctx.r3.s64 + 28;
	// ori r27,r10,32768
	r27.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8261d76c
	if (!cr6.gt) goto loc_8261D76C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8261d76c
	if (cr6.lt) goto loc_8261D76C;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8261d76c
	if (!cr6.lt) goto loc_8261D76C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261d818
	goto loc_8261D818;
loc_8261D76C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8261d7ac
	if (!cr6.lt) goto loc_8261D7AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d814
	if (cr0.eq) goto loc_8261D814;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8261D7AC:
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// b 0x8261d7f8
	goto loc_8261D7F8;
loc_8261D7B4:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r5,38912
	cr6.compare<uint32_t>(ctx.r5.u32, 38912, xer);
	// bgt cr6,0x8261d814
	if (cr6.gt) goto loc_8261D814;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bgt cr6,0x8261d814
	if (cr6.gt) goto loc_8261D814;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8261d820
	if (!cr6.lt) goto loc_8261D820;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261D7F8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8261d680
	sub_8261D680(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261d7b4
	if (!cr0.eq) goto loc_8261D7B4;
loc_8261D814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261D818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8261D820:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d814
	if (cr0.eq) goto loc_8261D814;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8314d7ac
	__imp__LDIDecompress(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8261d814
	if (!cr0.eq) goto loc_8261D814;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8314d79c
	__imp__LDIResetDecompression(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_8261D880"))) PPC_WEAK_FUNC(sub_8261D880);
PPC_FUNC_IMPL(__imp__sub_8261D880) {
	PPC_FUNC_PROLOGUE();
	// b 0x8261d818
	// ERROR 8261D818
	return;
}

__attribute__((alias("__imp__sub_8261D884"))) PPC_WEAK_FUNC(sub_8261D884);
PPC_FUNC_IMPL(__imp__sub_8261D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D888"))) PPC_WEAK_FUNC(sub_8261D888);
PPC_FUNC_IMPL(__imp__sub_8261D888) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8261d8c0
	if (!cr6.eq) goto loc_8261D8C0;
loc_8261D8B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261d948
	goto loc_8261D948;
loc_8261D8C0:
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8261d938
	if (cr6.eq) goto loc_8261D938;
loc_8261D8CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261d720
	sub_8261D720(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261d8b8
	if (cr0.eq) goto loc_8261D8B8;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x8261d8fc
	if (!cr6.lt) goto loc_8261D8FC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8261D8FC:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf. r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne 0x8261d8cc
	if (!cr0.eq) goto loc_8261D8CC;
loc_8261D938:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8261D948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261D94C"))) PPC_WEAK_FUNC(sub_8261D94C);
PPC_FUNC_IMPL(__imp__sub_8261D94C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261D950"))) PPC_WEAK_FUNC(sub_8261D950);
PPC_FUNC_IMPL(__imp__sub_8261D950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// subfc r11,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subfze r3,r10
	temp.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	ctx.r3.u64 = temp.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D96C"))) PPC_WEAK_FUNC(sub_8261D96C);
PPC_FUNC_IMPL(__imp__sub_8261D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261D970"))) PPC_WEAK_FUNC(sub_8261D970);
PPC_FUNC_IMPL(__imp__sub_8261D970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x8261d988
	if (cr6.gt) goto loc_8261D988;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8261D988:
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261D9A0"))) PPC_WEAK_FUNC(sub_8261D9A0);
PPC_FUNC_IMPL(__imp__sub_8261D9A0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(r29.u32, ctx.r5.u32, xer);
	// bgt cr6,0x8261d9d0
	if (cr6.gt) goto loc_8261D9D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8261D9D0:
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261DA14"))) PPC_WEAK_FUNC(sub_8261DA14);
PPC_FUNC_IMPL(__imp__sub_8261DA14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261DA18"))) PPC_WEAK_FUNC(sub_8261DA18);
PPC_FUNC_IMPL(__imp__sub_8261DA18) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(r29.u32, ctx.r5.u32, xer);
	// bgt cr6,0x8261da48
	if (cr6.gt) goto loc_8261DA48;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8261DA48:
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261DA88"))) PPC_WEAK_FUNC(sub_8261DA88);
PPC_FUNC_IMPL(__imp__sub_8261DA88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261DA8C"))) PPC_WEAK_FUNC(sub_8261DA8C);
PPC_FUNC_IMPL(__imp__sub_8261DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261DA90"))) PPC_WEAK_FUNC(sub_8261DA90);
PPC_FUNC_IMPL(__imp__sub_8261DA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r11,r11,5212
	r11.s64 = r11.s64 + 5212;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8261DAB4"))) PPC_WEAK_FUNC(sub_8261DAB4);
PPC_FUNC_IMPL(__imp__sub_8261DAB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DAB8"))) PPC_WEAK_FUNC(sub_8261DAB8);
PPC_FUNC_IMPL(__imp__sub_8261DAB8) {
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
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,10
	r11.u64 = r11.u64 | 10;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8261daf8
	if (!cr6.eq) goto loc_8261DAF8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8261daf8
	if (cr6.eq) goto loc_8261DAF8;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8261DAF8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261DB0C"))) PPC_WEAK_FUNC(sub_8261DB0C);
PPC_FUNC_IMPL(__imp__sub_8261DB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DB10"))) PPC_WEAK_FUNC(sub_8261DB10);
PPC_FUNC_IMPL(__imp__sub_8261DB10) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8261db54
	if (!cr6.eq) goto loc_8261DB54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8261dbb0
	goto loc_8261DBB0;
loc_8261DB54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// blt 0x8261dbac
	if (cr0.lt) goto loc_8261DBAC;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r26,276(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x82623bd0
	sub_82623BD0(ctx, base);
loc_8261DBAC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8261DBB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8261DBB8"))) PPC_WEAK_FUNC(sub_8261DBB8);
PPC_FUNC_IMPL(__imp__sub_8261DBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261DBBC"))) PPC_WEAK_FUNC(sub_8261DBBC);
PPC_FUNC_IMPL(__imp__sub_8261DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261DBC0"))) PPC_WEAK_FUNC(sub_8261DBC0);
PPC_FUNC_IMPL(__imp__sub_8261DBC0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,5272
	r11.s64 = r11.s64 + 5272;
	// addi r9,r9,5240
	ctx.r9.s64 = ctx.r9.s64 + 5240;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bne cr6,0x8261dc00
	if (!cr6.eq) goto loc_8261DC00;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
loc_8261DC00:
	// lwz r3,22972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22972);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261dc1c
	if (cr6.eq) goto loc_8261DC1C;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,22972(r31)
	PPC_STORE_U32(r31.u32 + 22972, r11.u32);
loc_8261DC1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-4168
	r11.s64 = r11.s64 + -4168;
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

__attribute__((alias("__imp__sub_8261DC38"))) PPC_WEAK_FUNC(sub_8261DC38);
PPC_FUNC_IMPL(__imp__sub_8261DC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DC3C"))) PPC_WEAK_FUNC(sub_8261DC3C);
PPC_FUNC_IMPL(__imp__sub_8261DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261DC40"))) PPC_WEAK_FUNC(sub_8261DC40);
PPC_FUNC_IMPL(__imp__sub_8261DC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
loc_8261DC44:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8261dc44
	if (!cr0.eq) goto loc_8261DC44;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DC68"))) PPC_WEAK_FUNC(sub_8261DC68);
PPC_FUNC_IMPL(__imp__sub_8261DC68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_8261DC6C"))) PPC_WEAK_FUNC(sub_8261DC6C);
PPC_FUNC_IMPL(__imp__sub_8261DC6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82618610
	sub_82618610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261DC70"))) PPC_WEAK_FUNC(sub_8261DC70);
PPC_FUNC_IMPL(__imp__sub_8261DC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8261dc84
	if (!cr6.eq) goto loc_8261DC84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8261DC84:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f1,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, r11.u32);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, r11.u32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,28(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DCB8"))) PPC_WEAK_FUNC(sub_8261DCB8);
PPC_FUNC_IMPL(__imp__sub_8261DCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8261dd10
	if (cr0.lt) goto loc_8261DD10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261f4e8
	sub_8261F4E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8261DD10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8261DD1C"))) PPC_WEAK_FUNC(sub_8261DD1C);
PPC_FUNC_IMPL(__imp__sub_8261DD1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261DD20"))) PPC_WEAK_FUNC(sub_8261DD20);
PPC_FUNC_IMPL(__imp__sub_8261DD20) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8261dd98
	if (cr6.eq) goto loc_8261DD98;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261dd8c
	if (cr6.lt) goto loc_8261DD8C;
	// lwz r11,22920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22920);
	// lfs f0,22924(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 22924);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x8261dd94
	goto loc_8261DD94;
loc_8261DD8C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_8261DD94:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_8261DD98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8261ddb8
	if (cr6.eq) goto loc_8261DDB8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261ddb0
	if (cr6.lt) goto loc_8261DDB0;
	// lwz r11,22928(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22928);
	// b 0x8261ddb4
	goto loc_8261DDB4;
loc_8261DDB0:
	// li r11,0
	r11.s64 = 0;
loc_8261DDB4:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8261DDB8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8261ddd8
	if (cr6.eq) goto loc_8261DDD8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261ddd0
	if (cr6.lt) goto loc_8261DDD0;
	// lwz r11,22932(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22932);
	// b 0x8261ddd4
	goto loc_8261DDD4;
loc_8261DDD0:
	// li r11,0
	r11.s64 = 0;
loc_8261DDD4:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8261DDD8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8261ddf8
	if (cr6.eq) goto loc_8261DDF8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261ddf0
	if (cr6.lt) goto loc_8261DDF0;
	// lwz r11,22936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22936);
	// b 0x8261ddf4
	goto loc_8261DDF4;
loc_8261DDF0:
	// li r11,0
	r11.s64 = 0;
loc_8261DDF4:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8261DDF8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8261de18
	if (cr6.eq) goto loc_8261DE18;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261de10
	if (cr6.lt) goto loc_8261DE10;
	// lwz r11,22940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22940);
	// b 0x8261de14
	goto loc_8261DE14;
loc_8261DE10:
	// li r11,0
	r11.s64 = 0;
loc_8261DE14:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_8261DE18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261DE1C"))) PPC_WEAK_FUNC(sub_8261DE1C);
PPC_FUNC_IMPL(__imp__sub_8261DE1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261DE20"))) PPC_WEAK_FUNC(sub_8261DE20);
PPC_FUNC_IMPL(__imp__sub_8261DE20) {
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
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8261dea0
	if (cr6.eq) goto loc_8261DEA0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8261dea0
	if (cr6.eq) goto loc_8261DEA0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8261de84
	if (cr0.lt) goto loc_8261DE84;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x82622ca0
	sub_82622CA0(ctx, base);
	// b 0x8261de98
	goto loc_8261DE98;
loc_8261DE84:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,3776
	r11.s64 = r11.s64 + 3776;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8261DE98:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8261dea8
	goto loc_8261DEA8;
loc_8261DEA0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8261DEA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261DEAC"))) PPC_WEAK_FUNC(sub_8261DEAC);
PPC_FUNC_IMPL(__imp__sub_8261DEAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261DEB0"))) PPC_WEAK_FUNC(sub_8261DEB0);
PPC_FUNC_IMPL(__imp__sub_8261DEB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8261dbc0
	sub_8261DBC0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261dee4
	if (cr0.eq) goto loc_8261DEE4;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_8261DEE4:
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

__attribute__((alias("__imp__sub_8261DEFC"))) PPC_WEAK_FUNC(sub_8261DEFC);
PPC_FUNC_IMPL(__imp__sub_8261DEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261DF00"))) PPC_WEAK_FUNC(sub_8261DF00);
PPC_FUNC_IMPL(__imp__sub_8261DF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r29,2
	r29.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8261DF24:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,104
	r30.s64 = r30.s64 + 104;
	// bge 0x8261df24
	if (!cr0.lt) goto loc_8261DF24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261DF58"))) PPC_WEAK_FUNC(sub_8261DF58);
PPC_FUNC_IMPL(__imp__sub_8261DF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261DF5C"))) PPC_WEAK_FUNC(sub_8261DF5C);
PPC_FUNC_IMPL(__imp__sub_8261DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261DF60"))) PPC_WEAK_FUNC(sub_8261DF60);
PPC_FUNC_IMPL(__imp__sub_8261DF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r29,71
	r29.s64 = 71;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8261DF84:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,156
	r30.s64 = r30.s64 + 156;
	// bge 0x8261df84
	if (!cr0.lt) goto loc_8261DF84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261DFC8"))) PPC_WEAK_FUNC(sub_8261DFC8);
PPC_FUNC_IMPL(__imp__sub_8261DFC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261DFCC"))) PPC_WEAK_FUNC(sub_8261DFCC);
PPC_FUNC_IMPL(__imp__sub_8261DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261DFD0"))) PPC_WEAK_FUNC(sub_8261DFD0);
PPC_FUNC_IMPL(__imp__sub_8261DFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r30,1
	r30.s64 = 1;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
loc_8261DFF0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261df60
	sub_8261DF60(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,11244
	r29.s64 = r29.s64 + 11244;
	// bge 0x8261dff0
	if (!cr0.lt) goto loc_8261DFF0;
	// addi r3,r31,22492
	ctx.r3.s64 = r31.s64 + 22492;
	// bl 0x8261df00
	sub_8261DF00(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,22816
	ctx.r10.s64 = r31.s64 + 22816;
	// stw r11,22816(r31)
	PPC_STORE_U32(r31.u32 + 22816, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,22820(r31)
	PPC_STORE_U32(r31.u32 + 22820, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8261E028:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stwu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261e028
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E028;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r28,22920(r31)
	PPC_STORE_U32(r31.u32 + 22920, r28.u32);
	// li r5,11244
	ctx.r5.s64 = 11244;
	// stw r27,22924(r31)
	PPC_STORE_U32(r31.u32 + 22924, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,22884(r31)
	PPC_STORE_U32(r31.u32 + 22884, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,22900(r31)
	PPC_STORE_U32(r31.u32 + 22900, r11.u32);
	// stw r11,22904(r31)
	PPC_STORE_U32(r31.u32 + 22904, r11.u32);
	// lfs f0,-912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -912);
	f0.f64 = double(temp.f32);
	// stw r11,22908(r31)
	PPC_STORE_U32(r31.u32 + 22908, r11.u32);
	// stfs f0,22888(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 22888, temp.u32);
	// stw r11,22912(r31)
	PPC_STORE_U32(r31.u32 + 22912, r11.u32);
	// stw r11,22916(r31)
	PPC_STORE_U32(r31.u32 + 22916, r11.u32);
	// stw r11,22896(r31)
	PPC_STORE_U32(r31.u32 + 22896, r11.u32);
	// stw r11,22892(r31)
	PPC_STORE_U32(r31.u32 + 22892, r11.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,11244
	ctx.r5.s64 = 11244;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11244
	ctx.r3.s64 = r31.s64 + 11244;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,324
	ctx.r5.s64 = 324;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22488
	ctx.r3.s64 = r31.s64 + 22488;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22812
	ctx.r3.s64 = r31.s64 + 22812;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8261E0B4"))) PPC_WEAK_FUNC(sub_8261E0B4);
PPC_FUNC_IMPL(__imp__sub_8261E0B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261E0B8"))) PPC_WEAK_FUNC(sub_8261E0B8);
PPC_FUNC_IMPL(__imp__sub_8261E0B8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,5272
	r11.s64 = r11.s64 + 5272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r10,r10,5240
	ctx.r10.s64 = ctx.r10.s64 + 5240;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r9,10
	r11.u64 = ctx.r9.u64 | 10;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8261dfd0
	sub_8261DFD0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,22972(r31)
	PPC_STORE_U32(r31.u32 + 22972, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
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

__attribute__((alias("__imp__sub_8261E134"))) PPC_WEAK_FUNC(sub_8261E134);
PPC_FUNC_IMPL(__imp__sub_8261E134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E138"))) PPC_WEAK_FUNC(sub_8261E138);
PPC_FUNC_IMPL(__imp__sub_8261E138) {
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
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r26.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8261e17c
	if (!cr0.eq) goto loc_8261E17C;
loc_8261E170:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8261e1cc
	goto loc_8261E1CC;
loc_8261E17C:
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// li r3,22976
	ctx.r3.s64 = 22976;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8261e1a0
	if (cr0.eq) goto loc_8261E1A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8261e0b8
	sub_8261E0B8(ctx, base);
	// b 0x8261e1a4
	goto loc_8261E1A4;
loc_8261E1A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8261E1A4:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261e170
	if (cr6.eq) goto loc_8261E170;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// addi r5,r3,44
	ctx.r5.s64 = ctx.r3.s64 + 44;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d87c
	__imp__XamAvatarLoadAnimation(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8261e208
	if (!cr0.lt) goto loc_8261E208;
loc_8261E1CC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8261e1f4
	if (cr6.eq) goto loc_8261E1F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// b 0x8261e208
	goto loc_8261E208;
loc_8261E1F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8261e208
	if (cr6.eq) goto loc_8261E208;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_8261E208:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261E210"))) PPC_WEAK_FUNC(sub_8261E210);
PPC_FUNC_IMPL(__imp__sub_8261E210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8261E214"))) PPC_WEAK_FUNC(sub_8261E214);
PPC_FUNC_IMPL(__imp__sub_8261E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261E218"))) PPC_WEAK_FUNC(sub_8261E218);
PPC_FUNC_IMPL(__imp__sub_8261E218) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8261e2a4
	if (cr6.eq) goto loc_8261E2A4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261e29c
	if (cr6.eq) goto loc_8261E29C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261e29c
	if (cr6.eq) goto loc_8261E29C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r31,0
	r31.s64 = 0;
	// lbz r11,-13076(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13076);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8261e26c
	if (!cr0.eq) goto loc_8261E26C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8261E264:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x8261e2ac
	goto loc_8261E2AC;
loc_8261E26C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8261e138
	sub_8261E138(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261e264
	if (cr0.lt) goto loc_8261E264;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x8261e294
	if (!cr6.eq) goto loc_8261E294;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8261E294:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8261e2ac
	goto loc_8261E2AC;
loc_8261E29C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8261E2A4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8261E2AC:
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

__attribute__((alias("__imp__sub_8261E2C0"))) PPC_WEAK_FUNC(sub_8261E2C0);
PPC_FUNC_IMPL(__imp__sub_8261E2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E2C4"))) PPC_WEAK_FUNC(sub_8261E2C4);
PPC_FUNC_IMPL(__imp__sub_8261E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261E2C8"))) PPC_WEAK_FUNC(sub_8261E2C8);
PPC_FUNC_IMPL(__imp__sub_8261E2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// mulli r6,r10,96
	ctx.r6.s64 = ctx.r10.s64 * 96;
	// li r5,255
	ctx.r5.s64 = 255;
loc_8261E2DC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8261e33c
	if (!cr6.gt) goto loc_8261E33C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r9,r11,96
	ctx.r9.s64 = r11.s64 * 96;
loc_8261E310:
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x8261e330
	if (cr6.eq) goto loc_8261E330;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r9,-96
	ctx.r9.s64 = ctx.r9.s64 + -96;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8261e310
	if (cr6.gt) goto loc_8261E310;
	// b 0x8261e33c
	goto loc_8261E33C;
loc_8261E330:
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_8261E33C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8261e380
	if (!cr6.gt) goto loc_8261E380;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// mulli r7,r7,96
	ctx.r7.s64 = ctx.r7.s64 * 96;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mulli r9,r11,96
	ctx.r9.s64 = r11.s64 * 96;
loc_8261E358:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8261e374
	if (!cr6.eq) goto loc_8261E374;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
loc_8261E374:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r9,-96
	ctx.r9.s64 = ctx.r9.s64 + -96;
	// bdnz 0x8261e358
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E358;
loc_8261E380:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r6,r6,-96
	ctx.r6.s64 = ctx.r6.s64 + -96;
	// bge 0x8261e2dc
	if (!cr0.lt) goto loc_8261E2DC;
}

__attribute__((alias("__imp__sub_8261E38C"))) PPC_WEAK_FUNC(sub_8261E38C);
PPC_FUNC_IMPL(__imp__sub_8261E38C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E390"))) PPC_WEAK_FUNC(sub_8261E390);
PPC_FUNC_IMPL(__imp__sub_8261E390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// ble cr6,0x8261e3a0
	if (!cr6.gt) goto loc_8261E3A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8261e3d0
	goto loc_8261E3D0;
loc_8261E3A0:
	// bge cr6,0x8261e3d0
	if (!cr6.lt) goto loc_8261E3D0;
	// subfic r11,r5,3
	xer.ca = ctx.r5.u32 <= 3;
	r11.s64 = 3 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8261e3d0
	if (cr6.lt) goto loc_8261E3D0;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8261e3d0
	if (cr0.eq) goto loc_8261E3D0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E3C8:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8261e3c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E3C8;
loc_8261E3D0:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x8261e3f8
	if (cr0.lt) goto loc_8261E3F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E3E8:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8261e3e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E3E8;
loc_8261E3F8:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E414:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261e414
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E414;
}

__attribute__((alias("__imp__sub_8261E430"))) PPC_WEAK_FUNC(sub_8261E430);
PPC_FUNC_IMPL(__imp__sub_8261E430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E434"))) PPC_WEAK_FUNC(sub_8261E434);
PPC_FUNC_IMPL(__imp__sub_8261E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261E438"))) PPC_WEAK_FUNC(sub_8261E438);
PPC_FUNC_IMPL(__imp__sub_8261E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,44
	cr6.compare<uint32_t>(ctx.r5.u32, 44, xer);
	// ble cr6,0x8261e448
	if (!cr6.gt) goto loc_8261E448;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x8261e478
	goto loc_8261E478;
loc_8261E448:
	// bge cr6,0x8261e478
	if (!cr6.lt) goto loc_8261E478;
	// subfic r11,r5,43
	xer.ca = ctx.r5.u32 <= 43;
	r11.s64 = 43 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8261e478
	if (cr6.lt) goto loc_8261E478;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8261e478
	if (cr0.eq) goto loc_8261E478;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E470:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8261e470
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E470;
loc_8261E478:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x8261e4a0
	if (cr0.lt) goto loc_8261E4A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E490:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8261e490
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E490;
loc_8261E4A0:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261E4BC:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261e4bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E4BC;
}

__attribute__((alias("__imp__sub_8261E4D8"))) PPC_WEAK_FUNC(sub_8261E4D8);
PPC_FUNC_IMPL(__imp__sub_8261E4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E4DC"))) PPC_WEAK_FUNC(sub_8261E4DC);
PPC_FUNC_IMPL(__imp__sub_8261E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261E4E0"))) PPC_WEAK_FUNC(sub_8261E4E0);
PPC_FUNC_IMPL(__imp__sub_8261E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f0,f12,f13
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261e54c
	if (cr0.eq) goto loc_8261E54C;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5284);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_8261E54C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5288);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
}

__attribute__((alias("__imp__sub_8261E59C"))) PPC_WEAK_FUNC(sub_8261E59C);
PPC_FUNC_IMPL(__imp__sub_8261E59C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E5A0"))) PPC_WEAK_FUNC(sub_8261E5A0);
PPC_FUNC_IMPL(__imp__sub_8261E5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
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
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
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
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r31,48
	r31.s64 = 48;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r30,r10,15808
	r30.s64 = ctx.r10.s64 + 15808;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8261eab8
	if (cr6.lt) goto loc_8261EAB8;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v55,r0,r30
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v57,-1
	_mm_store_si128((__m128i*)v57.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// mulli r10,r11,96
	ctx.r10.s64 = r11.s64 * 96;
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)v61.u32, _mm_set1_epi32(int(0x1)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// vspltisw128 v56,-9
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// vupkd3d128 v63,v62,4
	temp.f32 = 3.0f;
	temp.s32 += v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v63 = vTemp;
	// vcsxwfp128 v60,v57,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v57.u32)));
	// vcsxwfp128 v22,v61,1
	_mm_store_ps(v22.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v21,v63,3
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
loc_8261E600:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// vpermwi128 v58,v63,254
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x1));
	// vpermwi128 v59,v63,254
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x1));
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lvx128 v54,r11,r7
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mulli r6,r6,96
	ctx.r6.s64 = ctx.r6.s64 * 96;
	// vaddfp128 v53,v54,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v53.f32, _mm_add_ps(_mm_load_ps(v54.f32), _mm_load_ps(v54.f32)));
	// lvx128 v52,r11,r8
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v50,v54,3
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x0));
	// vpermwi128 v51,v54,7
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xF8));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lvx128 v49,r9,r7
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v54,v54,v53
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v53.f32)));
	// vaddfp128 v48,v49,v49
	_mm_store_ps(v48.f32, _mm_add_ps(_mm_load_ps(v49.f32), _mm_load_ps(v49.f32)));
	// vpermwi128 v47,v53,155
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x64));
	// vpermwi128 v53,v53,99
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x9C));
	// lvx128 v45,r9,r8
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v46,v49,7
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xF8));
	// vspltw128 v44,v49,3
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x0));
	// vmulfp128 v51,v51,v47
	_mm_store_ps(v51.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v47.f32)));
	// vmulfp128 v53,v50,v53
	_mm_store_ps(v53.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v53.f32)));
	// vpermwi128 v50,v54,64
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xBF));
	// vmulfp128 v49,v49,v48
	_mm_store_ps(v49.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v48.f32)));
	// vpermwi128 v47,v48,155
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x64));
	// vpermwi128 v48,v48,99
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x9C));
	// vpermwi128 v54,v54,164
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x5B));
	// vsubfp128 v58,v58,v50
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(v50.f32)));
	// vmulfp128 v50,v46,v47
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v47.f32)));
	// vaddfp128 v47,v51,v53
	_mm_store_ps(v47.f32, _mm_add_ps(_mm_load_ps(v51.f32), _mm_load_ps(v53.f32)));
	// vmulfp128 v48,v44,v48
	_mm_store_ps(v48.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(v48.f32)));
	// vsubfp128 v53,v51,v53
	_mm_store_ps(v53.f32, _mm_sub_ps(_mm_load_ps(v51.f32), _mm_load_ps(v53.f32)));
	// vpermwi128 v51,v49,64
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xBF));
	// vpermwi128 v49,v49,164
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x5B));
	// vsubfp128 v58,v58,v54
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(v54.f32)));
	// vsubfp128 v59,v59,v51
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v51.f32)));
	// vaddfp128 v54,v50,v48
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_load_ps(v50.f32), _mm_load_ps(v48.f32)));
	// vsubfp128 v51,v50,v48
	_mm_store_ps(v51.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v48.f32)));
	// vpermwi128 v50,v47,66
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xBD));
	// vsldoi128 v48,v53,v47,8
	_mm_store_si128((__m128i*)v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v47.u8), 8));
	// vrlimi128 v50,v53,6,3
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 57), 6));
	// vpermwi128 v53,v48,136
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x77));
	// vrlimi128 v58,v63,1,3
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 1));
	// vsubfp128 v59,v59,v49
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v49.f32)));
	// vpermwi128 v49,v54,66
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xBD));
	// vsldoi128 v54,v51,v54,8
	_mm_store_si128((__m128i*)v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v54.u8), 8));
	// vrlimi128 v53,v58,3,0
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 228), 3));
	// vpermwi128 v48,v58,7
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xF8));
	// vrlimi128 v49,v51,6,3
	_mm_store_ps(v49.f32, _mm_blend_ps(_mm_load_ps(v49.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 57), 6));
	// vor128 v51,v58,v58
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)v58.u8));
	// vpermwi128 v54,v54,136
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x77));
	// vmrglw128 v58,v50,v48
	_mm_store_si128((__m128i*)v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vrlimi128 v51,v50,6,3
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v50.f32), 57), 6));
	// vrlimi128 v59,v63,1,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 1));
	// vor128 v50,v59,v59
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)v59.u8));
	// vpermwi128 v48,v59,7
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xF8));
	// vrlimi128 v54,v59,3,0
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 228), 3));
	// vrlimi128 v50,v49,6,3
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v49.f32), 57), 6));
	// vmrglw128 v59,v49,v48
	_mm_store_si128((__m128i*)v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v49.u32)));
	// vmrglw128 v48,v50,v54
	_mm_store_si128((__m128i*)v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vmrglw128 v49,v59,v45
	_mm_store_si128((__m128i*)v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vmrghw128 v59,v59,v45
	_mm_store_si128((__m128i*)v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vmrghw128 v54,v50,v54
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vor128 v46,v48,v48
	_mm_store_si128((__m128i*)v46.u8, _mm_load_si128((__m128i*)v48.u8));
	// vmrghw128 v47,v48,v49
	_mm_store_si128((__m128i*)v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v49.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vor128 v0,v49,v49
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v49.u8));
	// vmrglw128 v45,v48,v49
	_mm_store_si128((__m128i*)v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v49.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vor128 v50,v59,v59
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v13,v54,v54
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v54.u8));
	// vmrglw128 v44,v54,v59
	_mm_store_si128((__m128i*)v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v54.u32)));
	// vrlimi128 v46,v54,3,2
	_mm_store_ps(v46.f32, _mm_blend_ps(_mm_load_ps(v46.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 78), 3));
	// vpermwi128 v43,v47,5
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xFA));
	// vrlimi128 v0,v59,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 78), 3));
	// vpermwi128 v42,v45,187
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x44));
	// vrlimi128 v50,v49,12,2
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v49.f32), 78), 12));
	// vmrghw128 v59,v54,v59
	_mm_store_si128((__m128i*)v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v54.u32)));
	// vrlimi128 v13,v48,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v48.f32), 78), 12));
	// vpermwi128 v12,v47,187
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x44));
	// vpermwi128 v11,v45,5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0xFA));
	// vmulfp128 v5,v43,v42
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v42.f32)));
	// vpermwi128 v54,v44,187
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v44.u32), 0x44));
	// vmulfp128 v4,v46,v50
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v50.f32)));
	// vpermwi128 v46,v59,5
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFA));
	// vnmsubfp v2,v12,v11,v5
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v9,v44,5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v44.u32), 0xFA));
	// vpermwi128 v10,v59,187
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x44));
	// vor128 v49,v57,v57
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)v57.u8));
	// vpermwi128 v50,v44,97
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v44.u32), 0x9E));
	// vcsxwfp128 v48,v61,0
	_mm_store_ps(v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v61.u32)));
	// vmulfp128 v3,v46,v54
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v54.f32)));
	// vpermwi128 v8,v44,182
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v44.u32), 0x49));
	// vpermwi128 v54,v45,97
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x9E));
	// li r9,0
	ctx.r9.s64 = 0;
	// vslw128 v49,v49,v49
	v49.u32[0] = v49.u32[0] << (v49.u8[0] & 0x1F);
	v49.u32[1] = v49.u32[1] << (v49.u8[4] & 0x1F);
	v49.u32[2] = v49.u32[2] << (v49.u8[8] & 0x1F);
	v49.u32[3] = v49.u32[3] << (v49.u8[12] & 0x1F);
	// vpermwi128 v46,v47,132
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x7B));
	// vpermwi128 v43,v59,132
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x7B));
	// li r6,12
	ctx.r6.s64 = 12;
	// vpermwi128 v44,v44,204
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v44.u32), 0x33));
	// vpermwi128 v5,v47,237
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x12));
	// vmrghw128 v42,v62,v49
	_mm_store_si128((__m128i*)v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v49.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vpermwi128 v6,v45,182
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x49));
	// vnmsubfp v12,v0,v13,v4
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v7,v59,237
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x12));
	// vor128 v40,v2,v2
	_mm_store_si128((__m128i*)v40.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vmrghw128 v49,v49,v62
	_mm_store_si128((__m128i*)v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v49.u32)));
	// vxor128 v1,v44,v42
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v42.u8)));
	// vpermwi128 v47,v47,114
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x8D));
	// vpermwi128 v44,v59,114
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x8D));
	// vnmsubfp v0,v10,v9,v3
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v45,v45,204
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x33));
	// vpermwi128 v13,v40,156
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x63));
	// vpermwi128 v38,v40,198
	_mm_store_si128((__m128i*)v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x39));
	// vspltw128 v41,v51,0
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xFF));
	// vspltw128 v31,v51,1
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xAA));
	// vor128 v37,v13,v13
	_mm_store_si128((__m128i*)v37.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v29,v51,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x55));
	// vor128 v36,v38,v38
	_mm_store_si128((__m128i*)v36.u8, _mm_load_si128((__m128i*)v38.u8));
	// vspltw128 v30,v58,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vspltw128 v28,v53,1
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xAA));
	// vor128 v39,v12,v12
	_mm_store_si128((__m128i*)v39.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v37,v39,8,1
	_mm_store_ps(v37.f32, _mm_blend_ps(_mm_load_ps(v37.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 147), 8));
	// vsldoi128 v35,v40,v39,8
	_mm_store_si128((__m128i*)v35.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)v39.u8), 8));
	// vor128 v34,v0,v0
	_mm_store_si128((__m128i*)v34.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v0,v38,v38
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v38.u8));
	// vrlimi128 v36,v39,4,0
	_mm_store_ps(v36.f32, _mm_blend_ps(_mm_load_ps(v36.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 228), 4));
	// vmulfp128 v10,v50,v37
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v37.f32)));
	// vpermwi128 v2,v35,56
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0xC7));
	// vpermwi128 v11,v34,156
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v34.u32), 0x63));
	// vrlimi128 v13,v39,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 78), 2));
	// vpermwi128 v12,v34,198
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v34.u32), 0x39));
	// vrlimi128 v0,v39,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 147), 1));
	// vmulfp128 v9,v43,v36
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v36.f32)));
	// vmrglw128 v38,v34,v39
	_mm_store_si128((__m128i*)v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v39.u32), _mm_load_si128((__m128i*)v34.u32)));
	// vor128 v35,v11,v11
	_mm_store_si128((__m128i*)v35.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v50,v12,v12
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v12,v39,1,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 57), 1));
	// vrlimi128 v11,v39,2,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 228), 2));
	// vrlimi128 v35,v39,8,3
	_mm_store_ps(v35.f32, _mm_blend_ps(_mm_load_ps(v35.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 57), 8));
	// vrlimi128 v50,v39,4,2
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 78), 4));
	// vnmsubfp v10,v8,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v4,v54,v35
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v35.f32)));
	// vmulfp128 v3,v46,v50
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v50.f32)));
	// vspltw128 v50,v58,0
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vmaddfp v0,v1,v2,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v10,v40,78
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0xB1));
	// vnmsubfp v1,v7,v13,v9
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v9,v34,78
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v34.u32), 0xB1));
	// vnmsubfp v4,v6,v12,v4
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v6,v47,v49
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vnmsubfp v3,v5,v11,v3
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v2,v44,v49
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vrlimi128 v10,v39,9,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 147), 9));
	// vpermwi128 v5,v38,52
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v38.u32), 0xCB));
	// vrlimi128 v9,v39,9,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 57), 9));
	// vspltw128 v49,v53,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xFF));
	// vxor128 v7,v45,v42
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)v42.u8)));
	// vslw128 v47,v61,v56
	v47.u32[0] = v61.u32[0] << (v56.u8[0] & 0x1F);
	v47.u32[1] = v61.u32[1] << (v56.u8[4] & 0x1F);
	v47.u32[2] = v61.u32[2] << (v56.u8[8] & 0x1F);
	v47.u32[3] = v61.u32[3] << (v56.u8[12] & 0x1F);
	// vor128 v54,v0,v0
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v2,v2,v10,v1
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v7,v7,v5,v4
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v6,v6,v9,v3
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmsum4fp128 v8,v54,v59
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(v59.f32), 0xFF));
	// vrefp v12,v8
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v8.f32)));
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v46,v0,v0
	_mm_store_si128((__m128i*)v46.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvsl v0,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltw128 v19,v51,3
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x0));
	// vor128 v51,v0,v0
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v42,v52,0
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xFF));
	// vor128 v59,v0,v0
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v20,v58,2
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// vcsxwfp128 v43,v61,1
	_mm_store_ps(v43.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v18,v53,2
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x55));
	// vor128 v25,v60,v60
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)v60.u8));
	// vrlimi128 v51,v46,8,1
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v46.f32), 147), 8));
	// vspltw128 v17,v52,1
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xAA));
	// vspltw128 v16,v58,3
	_mm_store_si128((__m128i*)v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vrlimi128 v59,v46,8,2
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v46.f32), 78), 8));
	// vspltw128 v15,v53,3
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x0));
	// addi r10,r10,-96
	ctx.r10.s64 = ctx.r10.s64 + -96;
	// vspltw128 v14,v52,2
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x55));
	// stvx128 v55,r11,r5
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v1,v51,75
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xB4));
	// vsldoi128 v13,v60,v48,8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v48.u8), 8));
	// vnmsubfp v5,v8,v12,v21
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v21.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vpermwi128 v53,v59,225
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x1E));
	// vspltw128 v59,v52,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x0));
	// vpermwi128 v52,v13,195
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x3C));
	// vpermwi128 v58,v13,51
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xCC));
	// vpermwi128 v23,v0,180
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x4B));
	// vrlimi128 v0,v46,8,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v46.f32), 228), 8));
	// vsldoi128 v45,v60,v48,12
	_mm_store_si128((__m128i*)v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v48.u8), 4));
	// vspltw128 v44,v46,2
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x55));
	// vspltw128 v4,v46,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xAA));
	// vpermwi128 v27,v13,207
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x30));
	// vspltw128 v26,v46,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xFF));
	// vspltw128 v24,v46,3
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x0));
	// vmaddfp v12,v12,v5,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v0,v0,30
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE1));
	// vnmsubfp v10,v8,v12,v21
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v21.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v5,v12,v12
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v12,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v11,v9,v12,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vor128 v5,v44,v44
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v44.u8));
	// vor128 v51,v11,v11
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v54,v54,v51
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v51.f32)));
	// vmulfp128 v12,v2,v51
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v51.f32)));
	// vor128 v2,v53,v53
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v53.u8));
	// vmulfp128 v11,v7,v51
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v51.f32)));
	// vmulfp128 v10,v6,v51
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v51.f32)));
	// vmulfp128 v9,v41,v54
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v41.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v8,v50,v54
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v7,v49,v54
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v54.f32)));
	// vmaddfp v9,v31,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vor128 v31,v45,v45
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)v45.u8));
	// vmaddfp v6,v30,v12,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vor128 v8,v45,v45
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v45.u8));
	// vmaddfp v3,v28,v12,v7
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vpermwi128 v7,v13,243
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xC));
	// vor128 v30,v44,v44
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v44.u8));
	// vmaddfp v9,v29,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v29,v42,v54
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v42.f32), _mm_load_ps(v54.f32)));
	// vmaddfp v6,v20,v11,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v3,v18,v11,v3
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v9,v19,v10,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v17,v12,v29
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v29.f32)));
	// vmaddfp v6,v16,v10,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v6.f32)));
	// vor128 v54,v9,v9
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmaddfp v9,v15,v10,v3
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v12,v14,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xFF));
	// vpermwi128 v50,v54,67
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xBC));
	// vmulfp128 v11,v52,v51
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v51.f32)));
	// vpermwi128 v51,v6,32
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xDF));
	// vor128 v52,v9,v9
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmaddfp128 v12,v59,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw v10,v6,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xAA));
	// vrlimi128 v51,v52,3,2
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 78), 3));
	// vspltw128 v9,v52,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x55));
	// vmaddfp128 v11,v58,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v58,v51,48
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xCF));
	// vrlimi128 v50,v51,6,0
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 228), 6));
	// vmaddfp v13,v13,v9,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v12,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v58,v54,3,0
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 228), 3));
	// vor128 v54,v50,v50
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)v50.u8));
	// vaddfp128 v52,v13,v48
	_mm_store_ps(v52.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v48.f32)));
	// vpermwi128 v59,v13,107
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x94));
	// vpermwi128 v51,v13,7
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xF8));
	// vrlimi128 v59,v47,1,0
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v47.f32), 228), 1));
	// vcmpgefp128 v59,v51,v59
	_mm_store_ps(v59.f32, _mm_cmpge_ps(_mm_load_ps(v51.f32), _mm_load_ps(v59.f32)));
	// vrsqrtefp128 v13,v52
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v52.f32))));
	// vmulfp128 v29,v52,v22
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v22.f32)));
	// vspltw128 v11,v59,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vspltw128 v12,v59,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vspltw128 v10,v59,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vspltw128 v9,v59,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vmulfp128 v28,v13,v13
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v6,v8,v7,v11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v3,v5,v4,v11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vcmpeqfp128 v51,v13,v13
	_mm_store_ps(v51.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v2,v1,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v5,v6,v31,v12
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vsel v4,v3,v30,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v30.u8))));
	// vor128 v59,v5,v5
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vor128 v50,v4,v4
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vnmsubfp v5,v29,v28,v22
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v28.f32)), _mm_load_ps(v22.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v4,v59,v59
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v8,v59,v59
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v6,v50,v50
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v50.u8));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v49,v5,v5
	_mm_store_ps(v49.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)));
	// vor128 v5,v53,v53
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v53.u8));
	// vor128 v53,v13,v13
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v13,v4,v27,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v27.u8))));
	// vor128 v4,v50,v50
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v50.u8));
	// vmulfp128 v59,v53,v43
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v43.f32)));
	// vsel v7,v8,v13,v12
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v3,v52,v53
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v53.f32)));
	// vsel v13,v6,v26,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v26.u8))));
	// vsel v8,v7,v25,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v25.u8))));
	// vsel v7,v11,v5,v12
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vsel v11,v4,v13,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v13,v52,v52
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v52.u8));
	// vmaddfp128 v54,v8,v58,v54
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v58.f32)), _mm_load_ps(v54.f32)));
	// vxor128 v5,v49,v51
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vor128 v58,v7,v7
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vsel v7,v11,v24,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v24.u8))));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v58.u8));
	// vperm128 v59,v59,v59,v7
	_mm_store_si128((__m128i*)v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsel v7,v3,v13,v5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v8,v58,v58
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v58.u8));
	// vsel v13,v11,v0,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v58,v7,v43
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v43.f32)));
	// vor128 v6,v54,v54
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v54.u8));
	// vsel v0,v8,v13,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v59,v6,v59
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v59.f32)));
	// vsel v7,v0,v23,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v23.u8))));
	// vperm128 v59,v58,v59,v7
	_mm_store_si128((__m128i*)v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v59,r11,r4
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x8261e600
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261E600;
loc_8261EAB8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r11,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r7
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r4
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r5
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8261EADC"))) PPC_WEAK_FUNC(sub_8261EADC);
PPC_FUNC_IMPL(__imp__sub_8261EADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261EAE0"))) PPC_WEAK_FUNC(sub_8261EAE0);
PPC_FUNC_IMPL(__imp__sub_8261EAE0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,20
	ctx.r6.s64 = r31.s64 + 20;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,44
	ctx.r6.s64 = r31.s64 + 44;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,134
	ctx.r4.s64 = r30.s64 + 134;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,140
	ctx.r4.s64 = r30.s64 + 140;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,28708
	ctx.r10.s64 = r11.s64 + 28708;
	// lfs f0,28708(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28708);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261EBB8"))) PPC_WEAK_FUNC(sub_8261EBB8);
PPC_FUNC_IMPL(__imp__sub_8261EBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261EBBC"))) PPC_WEAK_FUNC(sub_8261EBBC);
PPC_FUNC_IMPL(__imp__sub_8261EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261EBC0"))) PPC_WEAK_FUNC(sub_8261EBC0);
PPC_FUNC_IMPL(__imp__sub_8261EBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ec44
	if (cr0.eq) goto loc_8261EC44;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ec44
	if (cr0.eq) goto loc_8261EC44;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8261e390
	sub_8261E390(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8261ec48
	goto loc_8261EC48;
loc_8261EC44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261EC48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261EC58"))) PPC_WEAK_FUNC(sub_8261EC58);
PPC_FUNC_IMPL(__imp__sub_8261EC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261EC5C"))) PPC_WEAK_FUNC(sub_8261EC5C);
PPC_FUNC_IMPL(__imp__sub_8261EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261EC60"))) PPC_WEAK_FUNC(sub_8261EC60);
PPC_FUNC_IMPL(__imp__sub_8261EC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8261eca8
	if (!cr6.eq) goto loc_8261ECA8;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
loc_8261ECA8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ed48
	if (cr0.eq) goto loc_8261ED48;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ed48
	if (cr0.eq) goto loc_8261ED48;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8261e438
	sub_8261E438(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261eae0
	sub_8261EAE0(ctx, base);
	// li r6,178
	ctx.r6.s64 = 178;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8261eae0
	sub_8261EAE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ed4c
	goto loc_8261ED4C;
loc_8261ED48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261ED4C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8261ED50"))) PPC_WEAK_FUNC(sub_8261ED50);
PPC_FUNC_IMPL(__imp__sub_8261ED50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261ED54"))) PPC_WEAK_FUNC(sub_8261ED54);
PPC_FUNC_IMPL(__imp__sub_8261ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261ED58"))) PPC_WEAK_FUNC(sub_8261ED58);
PPC_FUNC_IMPL(__imp__sub_8261ED58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// mr r22,r11
	r22.u64 = r11.u64;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8261eda8
	if (!cr6.eq) goto loc_8261EDA8;
	// addi r22,r1,88
	r22.s64 = ctx.r1.s64 + 88;
loc_8261EDA8:
	// lwz r9,56(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// addi r31,r5,8
	r31.s64 = ctx.r5.s64 + 8;
	// lwz r10,52(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// lwz r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,108(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// lwz r8,104(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r9,100(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,8
	r26.s64 = ctx.r10.s64 + 8;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,331
	ctx.r10.s64 = ctx.r10.s64 + 331;
	// srawi r24,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r24.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x8261ee40
	if (!cr6.lt) goto loc_8261EE40;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261ee34
	if (cr0.eq) goto loc_8261EE34;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261ee38
	if (!cr0.eq) goto loc_8261EE38;
loc_8261EE34:
	// li r11,0
	r11.s64 = 0;
loc_8261EE38:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8261f020
	goto loc_8261F020;
loc_8261EE40:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8261ee4c
	if (!cr6.gt) goto loc_8261EE4C;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_8261EE4C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f01c
	if (cr0.eq) goto loc_8261F01C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f01c
	if (cr0.eq) goto loc_8261F01C;
	// mullw r11,r26,r29
	r11.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// li r30,4
	r30.s64 = 4;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x8261eea4
	if (cr6.lt) goto loc_8261EEA4;
	// li r28,512
	r28.s64 = 512;
loc_8261EEA4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f01c
	if (cr0.eq) goto loc_8261F01C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8261EED0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261efd0
	if (cr6.eq) goto loc_8261EFD0;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8261EEE8:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bgt cr6,0x8261ef2c
	if (cr6.gt) goto loc_8261EF2C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r7,r23,16
	ctx.r7.s64 = r23.s64 + 16;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r22,4
	ctx.r3.s64 = r22.s64 + 4;
	// bl 0x82621188
	sub_82621188(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x8261eee8
	if (!cr0.eq) goto loc_8261EEE8;
loc_8261EF2C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261efd0
	if (cr6.eq) goto loc_8261EFD0;
	// srawi r9,r30,3
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r9.s64 = r30.s32 >> 3;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8261ef6c
	if (cr0.lt) goto loc_8261EF6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8261EF5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8261ef5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261EF5C;
loc_8261EF6C:
	// clrlwi r30,r30,29
	r30.u64 = r30.u32 & 0x7;
	// mullw r11,r29,r26
	r11.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8261ef8c
	if (cr6.gt) goto loc_8261EF8C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8261EF8C:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8261ef9c
	if (cr6.lt) goto loc_8261EF9C;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8261EF9C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f01c
	if (cr0.eq) goto loc_8261F01C;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x8261eed0
	goto loc_8261EED0;
loc_8261EFD0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// bge cr6,0x8261f014
	if (!cr6.lt) goto loc_8261F014;
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r24
	ctx.r4.s64 = r24.s64 - ctx.r3.s64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261F014:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261f020
	goto loc_8261F020;
loc_8261F01C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261F020:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
}

__attribute__((alias("__imp__sub_8261F024"))) PPC_WEAK_FUNC(sub_8261F024);
PPC_FUNC_IMPL(__imp__sub_8261F024) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8261F028"))) PPC_WEAK_FUNC(sub_8261F028);
PPC_FUNC_IMPL(__imp__sub_8261F028) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ec60
	sub_8261EC60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f0a8
	if (cr0.eq) goto loc_8261F0A8;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ed58
	sub_8261ED58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261f0ac
	if (!cr0.eq) goto loc_8261F0AC;
loc_8261F0A8:
	// li r11,0
	r11.s64 = 0;
loc_8261F0AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8261F0B4"))) PPC_WEAK_FUNC(sub_8261F0B4);
PPC_FUNC_IMPL(__imp__sub_8261F0B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261F0B8"))) PPC_WEAK_FUNC(sub_8261F0B8);
PPC_FUNC_IMPL(__imp__sub_8261F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8261ebc0
	sub_8261EBC0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,72
	cr6.compare<uint32_t>(ctx.r3.u32, 72, xer);
	// bgt cr6,0x8261f1e4
	if (cr6.gt) goto loc_8261F1E4;
	// li r7,96
	ctx.r7.s64 = 96;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261f028
	sub_8261F028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f1e4
	if (cr0.eq) goto loc_8261F1E4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28648);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8261f1d0
	if (cr6.eq) goto loc_8261F1D0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8261f1d0
	if (cr0.lt) goto loc_8261F1D0;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mulli r4,r11,96
	ctx.r4.s64 = r11.s64 * 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r10,-12944
	ctx.r8.s64 = ctx.r10.s64 + -12944;
	// addi r7,r11,-12976
	ctx.r7.s64 = r11.s64 + -12976;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r10,5296
	ctx.r3.s64 = ctx.r10.s64 + 5296;
	// lvx128 v62,r0,r7
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r9,-12928(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12928);
	// addi r31,r11,3760
	r31.s64 = r11.s64 + 3760;
	// lwz r10,-12960(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12960);
loc_8261F168:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi. r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x8261f184
	if (!cr0.eq) goto loc_8261F184;
	// lvx128 v62,r0,r31
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_8261F184:
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// clrlwi. r30,r9,31
	r30.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne 0x8261f1ac
	if (!cr0.eq) goto loc_8261F1AC;
	// lvx128 v63,r0,r3
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_8261F1AC:
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,-96
	ctx.r4.s64 = ctx.r4.s64 + -96;
	// vmulfp128 v61,v61,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x8261f168
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F168;
	// stw r9,-12928(r5)
	PPC_STORE_U32(ctx.r5.u32 + -12928, ctx.r9.u32);
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-12960(r6)
	PPC_STORE_U32(ctx.r6.u32 + -12960, ctx.r10.u32);
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8261F1D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261e2c8
	sub_8261E2C8(ctx, base);
	// bl 0x8261e5a0
	sub_8261E5A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261f1ec
	goto loc_8261F1EC;
loc_8261F1E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
loc_8261F1EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8261F1F0"))) PPC_WEAK_FUNC(sub_8261F1F0);
PPC_FUNC_IMPL(__imp__sub_8261F1F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261F1F4"))) PPC_WEAK_FUNC(sub_8261F1F4);
PPC_FUNC_IMPL(__imp__sub_8261F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F1F8"))) PPC_WEAK_FUNC(sub_8261F1F8);
PPC_FUNC_IMPL(__imp__sub_8261F1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r11,-13076(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13076);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8261f214
	if (!cr0.eq) goto loc_8261F214;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_8261F214:
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f238
	if (cr0.eq) goto loc_8261F238;
	// rlwinm. r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261f238
	if (!cr0.eq) goto loc_8261F238;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8261f238
	if (cr6.eq) goto loc_8261F238;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261f238
	if (cr6.eq) goto loc_8261F238;
	// b 0x8314d88c
	__imp__XamAvatarGetAssetsResultSize(ctx, base);
	return;
loc_8261F238:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
}

__attribute__((alias("__imp__sub_8261F240"))) PPC_WEAK_FUNC(sub_8261F240);
PPC_FUNC_IMPL(__imp__sub_8261F240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F244"))) PPC_WEAK_FUNC(sub_8261F244);
PPC_FUNC_IMPL(__imp__sub_8261F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F248"))) PPC_WEAK_FUNC(sub_8261F248);
PPC_FUNC_IMPL(__imp__sub_8261F248) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lbz r11,-13076(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13076);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8261f29c
	if (!cr0.eq) goto loc_8261F29C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8261F28C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8261f330
	if (cr6.eq) goto loc_8261F330;
	// stw r3,24(r27)
	PPC_STORE_U32(r27.u32 + 24, ctx.r3.u32);
	// b 0x8261f334
	goto loc_8261F334;
loc_8261F29C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261f1f8
	sub_8261F1F8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8261f30c
	if (cr6.eq) goto loc_8261F30C;
	// clrlwi. r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f30c
	if (cr0.eq) goto loc_8261F30C;
	// rlwinm. r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261f30c
	if (!cr0.eq) goto loc_8261F30C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8261f30c
	if (cr6.lt) goto loc_8261F30C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8261f30c
	if (cr6.eq) goto loc_8261F30C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x8261f30c
	if (cr6.lt) goto loc_8261F30C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8261f30c
	if (cr6.eq) goto loc_8261F30C;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d86c
	__imp__XamAvatarGetAssets(ctx, base);
	// b 0x8261f314
	goto loc_8261F314;
loc_8261F30C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8261F314:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261f28c
	if (cr6.lt) goto loc_8261F28C;
	// subfic r11,r27,0
	xer.ca = r27.u32 <= 0;
	r11.s64 = 0 - r27.s64;
	// li r10,997
	ctx.r10.s64 = 997;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x8261f338
	goto loc_8261F338;
loc_8261F330:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
loc_8261F334:
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_8261F338:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8261F33C"))) PPC_WEAK_FUNC(sub_8261F33C);
PPC_FUNC_IMPL(__imp__sub_8261F33C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8261F340"))) PPC_WEAK_FUNC(sub_8261F340);
PPC_FUNC_IMPL(__imp__sub_8261F340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261f394
	if (cr0.eq) goto loc_8261F394;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8261f398
	if (!cr0.eq) goto loc_8261F398;
loc_8261F394:
	// li r11,0
	r11.s64 = 0;
loc_8261F398:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261F3AC"))) PPC_WEAK_FUNC(sub_8261F3AC);
PPC_FUNC_IMPL(__imp__sub_8261F3AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F3B0"))) PPC_WEAK_FUNC(sub_8261F3B0);
PPC_FUNC_IMPL(__imp__sub_8261F3B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261F3F0"))) PPC_WEAK_FUNC(sub_8261F3F0);
PPC_FUNC_IMPL(__imp__sub_8261F3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F3F4"))) PPC_WEAK_FUNC(sub_8261F3F4);
PPC_FUNC_IMPL(__imp__sub_8261F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F3F8"))) PPC_WEAK_FUNC(sub_8261F3F8);
PPC_FUNC_IMPL(__imp__sub_8261F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8261F40C"))) PPC_WEAK_FUNC(sub_8261F40C);
PPC_FUNC_IMPL(__imp__sub_8261F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F410"))) PPC_WEAK_FUNC(sub_8261F410);
PPC_FUNC_IMPL(__imp__sub_8261F410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8261F424"))) PPC_WEAK_FUNC(sub_8261F424);
PPC_FUNC_IMPL(__imp__sub_8261F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F428"))) PPC_WEAK_FUNC(sub_8261F428);
PPC_FUNC_IMPL(__imp__sub_8261F428) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5312
	r11.s64 = r11.s64 + 5312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8261F478"))) PPC_WEAK_FUNC(sub_8261F478);
PPC_FUNC_IMPL(__imp__sub_8261F478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F47C"))) PPC_WEAK_FUNC(sub_8261F47C);
PPC_FUNC_IMPL(__imp__sub_8261F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F480"))) PPC_WEAK_FUNC(sub_8261F480);
PPC_FUNC_IMPL(__imp__sub_8261F480) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r29,r11,-12912
	r29.s64 = r11.s64 + -12912;
	// addi r10,r10,-24824
	ctx.r10.s64 = ctx.r10.s64 + -24824;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beq cr6,0x8261f4dc
	if (cr6.eq) goto loc_8261F4DC;
	// lis r30,-31965
	r30.s64 = -2094858240;
	// lwz r3,28720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28720);
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261f4cc
	if (!cr0.eq) goto loc_8261F4CC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8261F4CC:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,28720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28720);
	// bl 0x8314d08c
	__imp__KeTlsSetValue(ctx, base);
loc_8261F4DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8261F4E4"))) PPC_WEAK_FUNC(sub_8261F4E4);
PPC_FUNC_IMPL(__imp__sub_8261F4E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261F4E8"))) PPC_WEAK_FUNC(sub_8261F4E8);
PPC_FUNC_IMPL(__imp__sub_8261F4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e941c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22884(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22884);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f29,f0,f1
	f29.f64 = double(float(f0.f64 * ctx.f1.f64));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lfs f30,22888(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22888);
	f30.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f31,f0,f30
	f31.f64 = double(float(f0.f64 / f30.f64));
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// fadds f0,f13,f29
	f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stfs f29,28(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// bne cr6,0x8261f5c0
	if (!cr6.eq) goto loc_8261F5C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f13.f64 = double(temp.f32);
loc_8261F578:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8261f58c
	if (cr6.lt) goto loc_8261F58C;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8261f5ac
	if (!cr6.gt) goto loc_8261F5AC;
loc_8261F58C:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f31,f13,f0
	ctx.f9.f64 = double(float(f31.f64 * ctx.f13.f64 - f0.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fsel f0,f0,f9,f11
	f0.f64 = f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x8261f578
	goto loc_8261F578;
loc_8261F5AC:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8261f698
	goto loc_8261F698;
loc_8261F5C0:
	// lfs f13,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8261f628
	if (!cr6.lt) goto loc_8261F628;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8261f5e0
	if (!cr6.eq) goto loc_8261F5E0;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8261f6a8
	goto loc_8261F6A8;
loc_8261F5E0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8261f6a8
	if (!cr6.eq) goto loc_8261F6A8;
loc_8261F5E8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8261f5e8
	if (cr6.lt) goto loc_8261F5E8;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8261f6a4
	if (cr6.lt) goto loc_8261F6A4;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8261f6a4
	goto loc_8261F6A4;
loc_8261F628:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x8261f688
	if (cr6.lt) goto loc_8261F688;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8261f640
	if (!cr6.eq) goto loc_8261F640;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x8261f6a4
	goto loc_8261F6A4;
loc_8261F640:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8261f6a8
	if (!cr6.eq) goto loc_8261F6A8;
loc_8261F648:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8261f648
	if (!cr6.lt) goto loc_8261F648;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8261f6a4
	if (cr6.lt) goto loc_8261F6A4;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8261f6a4
	goto loc_8261F6A4;
loc_8261F688:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8261F698:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8261f6a4
	if (cr6.lt) goto loc_8261F6A4;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8261F6A4:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_8261F6A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8261F6BC"))) PPC_WEAK_FUNC(sub_8261F6BC);
PPC_FUNC_IMPL(__imp__sub_8261F6BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261F6C0"))) PPC_WEAK_FUNC(sub_8261F6C0);
PPC_FUNC_IMPL(__imp__sub_8261F6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,2592
	cr6.compare<uint32_t>(ctx.r5.u32, 2592, xer);
	// ble cr6,0x8261f6d0
	if (!cr6.gt) goto loc_8261F6D0;
	// li r5,2592
	ctx.r5.s64 = 2592;
	// b 0x8261f700
	goto loc_8261F700;
loc_8261F6D0:
	// bge cr6,0x8261f700
	if (!cr6.lt) goto loc_8261F700;
	// subfic r11,r5,2591
	xer.ca = ctx.r5.u32 <= 2591;
	r11.s64 = 2591 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8261f700
	if (cr6.lt) goto loc_8261F700;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8261f700
	if (cr0.eq) goto loc_8261F700;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F6F8:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f6f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F6F8;
loc_8261F700:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x8261f728
	if (cr0.lt) goto loc_8261F728;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F718:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8261f718
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F718;
loc_8261F728:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F744:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f744
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F744;
}

__attribute__((alias("__imp__sub_8261F760"))) PPC_WEAK_FUNC(sub_8261F760);
PPC_FUNC_IMPL(__imp__sub_8261F760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F764"))) PPC_WEAK_FUNC(sub_8261F764);
PPC_FUNC_IMPL(__imp__sub_8261F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F768"))) PPC_WEAK_FUNC(sub_8261F768);
PPC_FUNC_IMPL(__imp__sub_8261F768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,72
	cr6.compare<uint32_t>(ctx.r5.u32, 72, xer);
	// ble cr6,0x8261f778
	if (!cr6.gt) goto loc_8261F778;
	// li r5,72
	ctx.r5.s64 = 72;
	// b 0x8261f7a8
	goto loc_8261F7A8;
loc_8261F778:
	// bge cr6,0x8261f7a8
	if (!cr6.lt) goto loc_8261F7A8;
	// subfic r11,r5,71
	xer.ca = ctx.r5.u32 <= 71;
	r11.s64 = 71 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8261f7a8
	if (cr6.lt) goto loc_8261F7A8;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8261f7a8
	if (cr0.eq) goto loc_8261F7A8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F7A0:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f7a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F7A0;
loc_8261F7A8:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x8261f7d0
	if (cr0.lt) goto loc_8261F7D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F7C0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8261f7c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F7C0;
loc_8261F7D0:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F7EC:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f7ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F7EC;
}

__attribute__((alias("__imp__sub_8261F808"))) PPC_WEAK_FUNC(sub_8261F808);
PPC_FUNC_IMPL(__imp__sub_8261F808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F80C"))) PPC_WEAK_FUNC(sub_8261F80C);
PPC_FUNC_IMPL(__imp__sub_8261F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F810"))) PPC_WEAK_FUNC(sub_8261F810);
PPC_FUNC_IMPL(__imp__sub_8261F810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// ble cr6,0x8261f820
	if (!cr6.gt) goto loc_8261F820;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x8261f850
	goto loc_8261F850;
loc_8261F820:
	// bge cr6,0x8261f850
	if (!cr6.lt) goto loc_8261F850;
	// subfic r11,r5,19
	xer.ca = ctx.r5.u32 <= 19;
	r11.s64 = 19 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8261f850
	if (cr6.lt) goto loc_8261F850;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8261f850
	if (cr0.eq) goto loc_8261F850;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F848:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F848;
loc_8261F850:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x8261f878
	if (cr0.lt) goto loc_8261F878;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F868:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8261f868
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F868;
loc_8261F878:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261F894:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f894
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261F894;
}

__attribute__((alias("__imp__sub_8261F8B0"))) PPC_WEAK_FUNC(sub_8261F8B0);
PPC_FUNC_IMPL(__imp__sub_8261F8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261F8B4"))) PPC_WEAK_FUNC(sub_8261F8B4);
PPC_FUNC_IMPL(__imp__sub_8261F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261F8B8"))) PPC_WEAK_FUNC(sub_8261F8B8);
PPC_FUNC_IMPL(__imp__sub_8261F8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
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
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// li r11,16
	r11.s64 = 16;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lvx128 v62,r0,r5
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-25600
	ctx.r10.s64 = ctx.r10.s64 + -25600;
	// vupkd3d128 v61,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v61 = vTemp;
	// lvx128 v60,r3,r11
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r4,r11
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v58,v60,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v58.f32, _mm_add_ps(_mm_load_ps(v60.f32), _mm_load_ps(v60.f32)));
	// vaddfp128 v57,v59,v59
	_mm_store_ps(v57.f32, _mm_add_ps(_mm_load_ps(v59.f32), _mm_load_ps(v59.f32)));
	// lvx128 v56,r5,r11
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v55,v56,v56
	_mm_store_ps(v55.f32, _mm_add_ps(_mm_load_ps(v56.f32), _mm_load_ps(v56.f32)));
	// vspltw128 v51,v60,3
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vpermwi128 v50,v59,7
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xF8));
	// vspltw128 v49,v59,3
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vpermwi128 v54,v60,7
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xF8));
	// vpermwi128 v47,v56,7
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xF8));
	// vspltw128 v46,v56,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x0));
	// vpermwi128 v53,v61,254
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1));
	// vpermwi128 v52,v61,254
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1));
	// vpermwi128 v48,v61,254
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1));
	// vmulfp128 v60,v60,v58
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v58.f32)));
	// vpermwi128 v45,v58,155
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x64));
	// vmulfp128 v59,v59,v57
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v57.f32)));
	// vpermwi128 v58,v58,99
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x9C));
	// vpermwi128 v44,v57,155
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x64));
	// vmulfp128 v56,v56,v55
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v55.f32)));
	// vpermwi128 v57,v57,99
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x9C));
	// vmulfp128 v54,v54,v45
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v45.f32)));
	// vpermwi128 v45,v55,155
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x64));
	// vmulfp128 v58,v51,v58
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v58.f32)));
	// vpermwi128 v55,v55,99
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x9C));
	// vmulfp128 v51,v50,v44
	_mm_store_ps(v51.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v44.f32)));
	// vmulfp128 v57,v49,v57
	_mm_store_ps(v57.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v50,v47,v45
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v47.f32), _mm_load_ps(v45.f32)));
	// vmulfp128 v55,v46,v55
	_mm_store_ps(v55.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v55.f32)));
	// vpermwi128 v49,v60,64
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xBF));
	// vpermwi128 v47,v59,64
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xBF));
	// vpermwi128 v60,v60,164
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x5B));
	// vpermwi128 v59,v59,164
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x5B));
	// vsubfp128 v53,v53,v49
	_mm_store_ps(v53.f32, _mm_sub_ps(_mm_load_ps(v53.f32), _mm_load_ps(v49.f32)));
	// vpermwi128 v49,v56,64
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xBF));
	// vsubfp128 v52,v52,v47
	_mm_store_ps(v52.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(v47.f32)));
	// vpermwi128 v56,v56,164
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x5B));
	// vaddfp128 v47,v54,v58
	_mm_store_ps(v47.f32, _mm_add_ps(_mm_load_ps(v54.f32), _mm_load_ps(v58.f32)));
	// vsubfp128 v58,v54,v58
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v54.f32), _mm_load_ps(v58.f32)));
	// vsubfp128 v54,v48,v49
	_mm_store_ps(v54.f32, _mm_sub_ps(_mm_load_ps(v48.f32), _mm_load_ps(v49.f32)));
	// vaddfp128 v46,v51,v57
	_mm_store_ps(v46.f32, _mm_add_ps(_mm_load_ps(v51.f32), _mm_load_ps(v57.f32)));
	// vsubfp128 v57,v51,v57
	_mm_store_ps(v57.f32, _mm_sub_ps(_mm_load_ps(v51.f32), _mm_load_ps(v57.f32)));
	// vsubfp128 v60,v53,v60
	_mm_store_ps(v60.f32, _mm_sub_ps(_mm_load_ps(v53.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v59,v52,v59
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(v59.f32)));
	// vpermwi128 v53,v47,66
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xBD));
	// vsldoi128 v51,v58,v47,8
	_mm_store_si128((__m128i*)v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v47.u8), 8));
	// vpermwi128 v52,v46,66
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xBD));
	// vrlimi128 v53,v58,6,3
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 57), 6));
	// vsubfp128 v58,v54,v56
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v54.f32), _mm_load_ps(v56.f32)));
	// vsldoi128 v49,v57,v46,8
	_mm_store_si128((__m128i*)v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v46.u8), 8));
	// vrlimi128 v52,v57,6,3
	_mm_store_ps(v52.f32, _mm_blend_ps(_mm_load_ps(v52.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 6));
	// vpermwi128 v57,v51,136
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x77));
	// vpermwi128 v56,v49,136
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x77));
	// vrlimi128 v60,v61,1,3
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 1));
	// vrlimi128 v59,v61,1,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 1));
	// vor128 v54,v60,v60
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)v60.u8));
	// vpermwi128 v51,v60,7
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xF8));
	// vor128 v49,v59,v59
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)v59.u8));
	// vpermwi128 v48,v59,7
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xF8));
	// vrlimi128 v58,v61,1,3
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 1));
	// vrlimi128 v57,v60,3,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 3));
	// vrlimi128 v56,v59,3,0
	_mm_store_ps(v56.f32, _mm_blend_ps(_mm_load_ps(v56.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 228), 3));
	// vmrglw128 v60,v53,v51
	_mm_store_si128((__m128i*)v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v51.u32), _mm_load_si128((__m128i*)v53.u32)));
	// vmrglw128 v59,v52,v48
	_mm_store_si128((__m128i*)v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v52.u32)));
	// vrlimi128 v54,v53,6,3
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 57), 6));
	// vrlimi128 v49,v52,6,3
	_mm_store_ps(v49.f32, _mm_blend_ps(_mm_load_ps(v49.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 57), 6));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v53,v50,v55
	_mm_store_ps(v53.f32, _mm_add_ps(_mm_load_ps(v50.f32), _mm_load_ps(v55.f32)));
	// vrlimi128 v62,v52,1,1
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 147), 1));
	// vsubfp128 v55,v50,v55
	_mm_store_ps(v55.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v55.f32)));
	// lvx128 v50,r0,r3
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v51,-1
	_mm_store_si128((__m128i*)v51.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vor128 v48,v58,v58
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v58.u8));
	// vpermwi128 v47,v58,7
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xF8));
	// vpermwi128 v44,v53,66
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xBD));
	// vor128 v45,v51,v51
	_mm_store_si128((__m128i*)v45.u8, _mm_load_si128((__m128i*)v51.u8));
	// vsldoi128 v53,v55,v53,8
	_mm_store_si128((__m128i*)v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v53.u8), 8));
	// lvx128 v46,r0,r4
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v50,v52,1,1
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 147), 1));
	// vrlimi128 v46,v52,1,1
	_mm_store_ps(v46.f32, _mm_blend_ps(_mm_load_ps(v46.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 147), 1));
	// vrlimi128 v44,v55,6,3
	_mm_store_ps(v44.f32, _mm_blend_ps(_mm_load_ps(v44.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 57), 6));
	// vpermwi128 v55,v53,136
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x77));
	// vslw128 v45,v45,v45
	v45.u32[0] = v45.u32[0] << (v45.u8[0] & 0x1F);
	v45.u32[1] = v45.u32[1] << (v45.u8[4] & 0x1F);
	v45.u32[2] = v45.u32[2] << (v45.u8[8] & 0x1F);
	v45.u32[3] = v45.u32[3] << (v45.u8[12] & 0x1F);
	// vrlimi128 v48,v44,6,3
	_mm_store_ps(v48.f32, _mm_blend_ps(_mm_load_ps(v48.f32), _mm_permute_ps(_mm_load_ps(v44.f32), 57), 6));
	// vrlimi128 v55,v58,3,0
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 228), 3));
	// vmrglw128 v58,v44,v47
	_mm_store_si128((__m128i*)v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v47.u32), _mm_load_si128((__m128i*)v44.u32)));
	// vmrghw128 v43,v63,v45
	_mm_store_si128((__m128i*)v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrghw128 v63,v45,v63
	_mm_store_si128((__m128i*)v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v45.u32)));
	// vmrghw128 v53,v58,v62
	_mm_store_si128((__m128i*)v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrglw128 v62,v58,v62
	_mm_store_si128((__m128i*)v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrghw128 v58,v48,v55
	_mm_store_si128((__m128i*)v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v55.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vmrglw128 v55,v48,v55
	_mm_store_si128((__m128i*)v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v55.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vor128 v47,v53,v53
	_mm_store_si128((__m128i*)v47.u8, _mm_load_si128((__m128i*)v53.u8));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vmrglw128 v48,v58,v53
	_mm_store_si128((__m128i*)v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vor128 v13,v58,v58
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmrghw128 v45,v58,v53
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vor128 v44,v55,v55
	_mm_store_si128((__m128i*)v44.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmrglw128 v42,v55,v62
	_mm_store_si128((__m128i*)v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vrlimi128 v47,v62,12,2
	_mm_store_ps(v47.f32, _mm_blend_ps(_mm_load_ps(v47.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 78), 12));
	// vmrghw128 v62,v55,v62
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vrlimi128 v0,v53,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 78), 3));
	// vpermwi128 v53,v48,187
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x44));
	// vrlimi128 v13,v55,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 78), 12));
	// vpermwi128 v41,v45,5
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0xFA));
	// vrlimi128 v44,v58,3,2
	_mm_store_ps(v44.f32, _mm_blend_ps(_mm_load_ps(v44.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 78), 3));
	// vpermwi128 v58,v42,187
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x44));
	// vpermwi128 v55,v62,5
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFA));
	// vpermwi128 v11,v48,5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0xFA));
	// vmulfp128 v7,v41,v53
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v41.f32), _mm_load_ps(v53.f32)));
	// vpermwi128 v12,v45,187
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x44));
	// vmulfp128 v8,v44,v47
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(v47.f32)));
	// vpermwi128 v10,v62,187
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x44));
	// vmulfp128 v6,v55,v58
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v58.f32)));
	// vpermwi128 v9,v42,5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0xFA));
	// vpermwi128 v55,v48,97
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x9E));
	// vpermwi128 v44,v48,204
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x33));
	// vpermwi128 v58,v45,132
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x7B));
	// vpermwi128 v53,v42,97
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x9E));
	// vpermwi128 v47,v62,132
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x7B));
	// vpermwi128 v5,v62,237
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x12));
	// vnmsubfp v7,v12,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v12,v0,v13,v8
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v8,v48,182
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x49));
	// vnmsubfp v0,v10,v9,v6
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v6,v42,182
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x49));
	// vor128 v48,v7,v7
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vpermwi128 v7,v45,237
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x12));
	// vor128 v41,v12,v12
	_mm_store_si128((__m128i*)v41.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v40,v0,v0
	_mm_store_si128((__m128i*)v40.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v11,v48,156
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x63));
	// vpermwi128 v12,v48,198
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0x39));
	// vpermwi128 v0,v40,198
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x39));
	// vpermwi128 v13,v40,156
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x63));
	// vor128 v39,v11,v11
	_mm_store_si128((__m128i*)v39.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vsldoi128 v36,v40,v41,8
	_mm_store_si128((__m128i*)v36.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)v41.u8), 8));
	// vor128 v35,v12,v12
	_mm_store_si128((__m128i*)v35.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vpermwi128 v10,v40,78
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0xB1));
	// vor128 v38,v0,v0
	_mm_store_si128((__m128i*)v38.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v40,v45,114
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x8D));
	// vor128 v37,v13,v13
	_mm_store_si128((__m128i*)v37.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vpermwi128 v9,v48,78
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v48.u32), 0xB1));
	// vrlimi128 v39,v41,8,3
	_mm_store_ps(v39.f32, _mm_blend_ps(_mm_load_ps(v39.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 57), 8));
	// vpermwi128 v30,v36,56
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v36.u32), 0xC7));
	// vrlimi128 v0,v41,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 147), 1));
	// vrlimi128 v38,v41,4,0
	_mm_store_ps(v38.f32, _mm_blend_ps(_mm_load_ps(v38.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 228), 4));
	// vrlimi128 v37,v41,8,1
	_mm_store_ps(v37.f32, _mm_blend_ps(_mm_load_ps(v37.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 147), 8));
	// vrlimi128 v35,v41,4,2
	_mm_store_ps(v35.f32, _mm_blend_ps(_mm_load_ps(v35.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 78), 4));
	// vmulfp128 v1,v53,v39
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v39.f32)));
	// vrlimi128 v13,v41,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 78), 2));
	// vmulfp128 v3,v58,v38
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v38.f32)));
	// vmrglw128 v58,v48,v41
	_mm_store_si128((__m128i*)v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v41.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vmulfp128 v2,v55,v37
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v37.f32)));
	// vpermwi128 v55,v42,204
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x33));
	// vrlimi128 v12,v41,1,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 57), 1));
	// vmulfp128 v31,v47,v35
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v47.f32), _mm_load_ps(v35.f32)));
	// li r10,0
	ctx.r10.s64 = 0;
	// vnmsubfp v2,v8,v0,v2
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v11,v41,2,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 228), 2));
	// vnmsubfp v0,v7,v13,v3
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v29,v44,v43
	_mm_store_si128((__m128i*)v29.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v43.u8)));
	// vnmsubfp v13,v6,v12,v1
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v26,v55,v43
	_mm_store_si128((__m128i*)v26.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v43.u8)));
	// vcsxwfp128 v55,v51,0
	_mm_store_ps(v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v51.u32)));
	// vxor128 v28,v40,v63
	_mm_store_si128((__m128i*)v28.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)v63.u8)));
	// lvsl v12,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v10,v41,9,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 147), 9));
	// vor128 v51,v12,v12
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vspltw128 v44,v56,0
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xFF));
	// vspltw128 v22,v56,1
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xAA));
	// vrlimi128 v9,v41,9,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(v41.f32), 57), 9));
	// vspltw128 v1,v56,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x55));
	// li r9,12
	ctx.r9.s64 = 12;
	// vspltw128 v15,v56,3
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x0));
	// vpermwi128 v27,v58,52
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xCB));
	// vspltw128 v4,v61,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vnmsubfp v12,v5,v11,v31
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v62,v62,114
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x8D));
	// vmaddfp v11,v29,v30,v2
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v2.f32)));
	// vspltisw128 v58,1
	_mm_store_si128((__m128i*)v58.u32, _mm_set1_epi32(int(0x1)));
	// vmaddfp v8,v28,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmaddfp v7,v26,v27,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v48,v59,0
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vxor128 v25,v62,v63
	_mm_store_si128((__m128i*)v25.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// vspltw128 v42,v46,0
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xFF));
	// vor128 v62,v0,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vcsxwfp128 v43,v58,0
	_mm_store_ps(v43.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v58.u32)));
	// vspltw128 v24,v59,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vcsxwfp128 v21,v58,1
	_mm_store_ps(v21.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v20,v46,1
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xAA));
	// vcsxwfp128 v47,v58,1
	_mm_store_ps(v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v3,v59,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vrlimi128 v62,v51,8,2
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 78), 8));
	// vspltw128 v18,v46,2
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x55));
	// vspltw128 v17,v59,3
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vspltw128 v14,v46,3
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x0));
	// vmaddfp v6,v25,v9,v12
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v59,v54,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xFF));
	// vor128 v56,v11,v11
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vpermwi128 v39,v62,225
	_mm_store_si128((__m128i*)v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x1E));
	// vspltw128 v2,v54,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xAA));
	// vspltw128 v29,v54,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x55));
	// vspltw128 v28,v54,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x0));
	// vor128 v54,v0,v0
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmsum4fp128 v10,v56,v45
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(v56.f32), _mm_load_ps(v45.f32), 0xFF));
	// vspltw128 v46,v57,0
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xFF));
	// vspltw128 v30,v57,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xAA));
	// vspltw128 v26,v57,2
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x55));
	// vspltw128 v62,v57,3
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vrlimi128 v54,v51,8,1
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 147), 8));
	// vspltw128 v40,v51,2
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x55));
	// vspltisw128 v57,-9
	_mm_store_si128((__m128i*)v57.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// vspltw128 v53,v49,0
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xFF));
	// vspltw128 v23,v49,1
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xAA));
	// vspltw128 v19,v49,2
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x55));
	// vspltw128 v16,v49,3
	_mm_store_si128((__m128i*)v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x0));
	// vslw128 v58,v58,v57
	v58.u32[0] = v58.u32[0] << (v57.u8[0] & 0x1F);
	v58.u32[1] = v58.u32[1] << (v57.u8[4] & 0x1F);
	v58.u32[2] = v58.u32[2] << (v57.u8[8] & 0x1F);
	v58.u32[3] = v58.u32[3] << (v57.u8[12] & 0x1F);
	// vspltw128 v49,v60,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v31,v60,1
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vspltw128 v27,v60,2
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vspltw128 v63,v60,3
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vspltw128 v45,v50,0
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xFF));
	// vspltw128 v25,v50,1
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xAA));
	// vrefp v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v10.f32)));
	// vsldoi128 v41,v55,v43,12
	_mm_store_si128((__m128i*)v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v43.u8), 4));
	// vspltw128 v61,v50,2
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x55));
	// vspltw128 v60,v50,3
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x0));
	// vnmsubfp v5,v10,v13,v4
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v11,v10,v13,v4
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v4,v40,v40
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v40.u8));
	// vcmpeqfp v5,v13,v13
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v9,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v57,v12,v12
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmulfp128 v56,v56,v57
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v13,v8,v57
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v12,v7,v57
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v11,v6,v57
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v9,v53,v56
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v10,v48,v56
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v8,v44,v56
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v7,v42,v56
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v42.f32), _mm_load_ps(v56.f32)));
	// vmaddfp v9,v23,v13,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vspltw128 v23,v51,3
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x0));
	// vmaddfp v10,v24,v13,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vor128 v24,v55,v55
	_mm_store_si128((__m128i*)v24.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmaddfp v8,v22,v13,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v22,v0,180
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x4B));
	// vmaddfp v13,v20,v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// vrlimi128 v0,v51,8,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 228), 8));
	// vmaddfp v9,v19,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v3,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vspltw128 v3,v51,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xAA));
	// vmaddfp v8,v1,v12,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v1,v54,75
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xB4));
	// vmaddfp v13,v18,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v16,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v17,v11,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v15,v11,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v11,v14,v11,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v57,v9,v9
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmulfp128 v13,v59,v57
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v8,v46,v57
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v9,v49,v57
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v7,v45,v57
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v45.f32), _mm_load_ps(v57.f32)));
	// vmaddfp v13,v2,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v2,v39,v39
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v39.u8));
	// vmaddfp v8,v30,v12,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vor128 v30,v40,v40
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v40.u8));
	// vmaddfp v9,v31,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vor128 v31,v41,v41
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)v41.u8));
	// vmaddfp v12,v25,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vor128 v7,v41,v41
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v41.u8));
	// vor128 v25,v39,v39
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)v39.u8));
	// vmaddfp v13,v29,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v8,v26,v10,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)));
	// vspltw128 v26,v51,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xFF));
	// vmaddfp v9,v27,v10,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v12,v61,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v28,v11,v13
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsldoi128 v13,v55,v43,8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v43.u8), 8));
	// vmaddfp128 v8,v62,v11,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp128 v9,v63,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vpermwi128 v63,v13,195
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x3C));
	// vpermwi128 v29,v13,51
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xCC));
	// vpermwi128 v6,v13,243
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xC));
	// vpermwi128 v27,v13,207
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x30));
	// vspltw128 v62,v5,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vor128 v61,v8,v8
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vpermwi128 v59,v5,67
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xBC));
	// vor v8,v11,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v10,v63,v62
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v62.f32)));
	// vpermwi128 v63,v9,32
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xDF));
	// vspltw128 v11,v61,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vmaddcfp128 v8,v60,v8,v12
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw v12,v9,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xAA));
	// vrlimi128 v63,v61,3,2
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 78), 3));
	// vrlimi128 v59,v63,6,0
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 228), 6));
	// vpermwi128 v62,v63,48
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xCF));
	// vmaddfp v12,v29,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vor128 v61,v59,v59
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v59.u8));
	// vrlimi128 v62,v5,3,0
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 228), 3));
	// vrlimi128 v8,v52,1,1
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 147), 1));
	// stvx128 v8,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v63,v13,107
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x94));
	// vaddfp128 v60,v13,v43
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v43.f32)));
	// vpermwi128 v59,v13,7
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xF8));
	// vrlimi128 v63,v58,1,0
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 228), 1));
	// vcmpgefp128 v63,v59,v63
	_mm_store_ps(v63.f32, _mm_cmpge_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vrsqrtefp128 v13,v60
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v60.f32))));
	// vmulfp128 v29,v60,v21
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v21.f32)));
	// vspltw128 v11,v63,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vmulfp128 v28,v13,v13
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v5,v7,v6,v11
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v7,v4,v3,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vcmpeqfp128 v59,v13,v13
	_mm_store_ps(v59.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v10,v63,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vsel v11,v2,v1,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vspltw128 v9,v63,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vsel v6,v5,v31,v12
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vsel v5,v7,v30,v12
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v30.u8))));
	// vor128 v63,v6,v6
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vor128 v58,v5,v5
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vnmsubfp v7,v29,v28,v21
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v28.f32)), _mm_load_ps(v21.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v4,v63,v63
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v63.u8));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v57,v7,v7
	_mm_store_ps(v57.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vsel v7,v5,v26,v10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v26.u8))));
	// vor128 v58,v13,v13
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v13,v6,v27,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v27.u8))));
	// vmulfp128 v63,v58,v47
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v47.f32)));
	// vsel v6,v4,v13,v12
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v3,v60,v58
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v58.f32)));
	// vsel v4,v11,v25,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v25.u8))));
	// vsel v13,v5,v7,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v11,v6,v24,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v24.u8))));
	// vor128 v58,v4,v4
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vsel v5,v13,v23,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v23.u8))));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v60.u8));
	// vmaddfp128 v61,v11,v62,v61
	_mm_store_ps(v61.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v62.f32)), _mm_load_ps(v61.f32)));
	// vxor128 v4,v57,v59
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v59.u8)));
	// vpermwi128 v11,v0,30
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE1));
	// vor128 v0,v58,v58
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v58.u8));
	// vor128 v7,v58,v58
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v58.u8));
	// vperm128 v63,v63,v63,v5
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsel v5,v3,v13,v4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v0,v11,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmulfp128 v62,v5,v47
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v47.f32)));
	// vsel v0,v7,v13,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v63,v61,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// vsel v7,v0,v22,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v22.u8))));
	// vperm128 v63,v62,v63,v7
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v63,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8261FE6C"))) PPC_WEAK_FUNC(sub_8261FE6C);
PPC_FUNC_IMPL(__imp__sub_8261FE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261FE70"))) PPC_WEAK_FUNC(sub_8261FE70);
PPC_FUNC_IMPL(__imp__sub_8261FE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
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
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
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
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r0,r6
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v60,v62,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(v62.f32), _mm_load_ps(v62.f32)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltw128 v55,v62,3
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// lvx128 v59,r0,r7
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v58,v62,7
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xF8));
	// lvx128 v57,r0,r5
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r7,r10
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vupkd3d128 v61,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v61 = vTemp;
	// vaddfp128 v54,v56,v56
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_load_ps(v56.f32), _mm_load_ps(v56.f32)));
	// vpermwi128 v53,v56,7
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xF8));
	// vspltw128 v51,v56,3
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x0));
	// vpermwi128 v50,v61,254
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1));
	// vpermwi128 v52,v61,254
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1));
	// vmulfp128 v62,v62,v60
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v49,v60,155
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x64));
	// vpermwi128 v60,v60,99
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x9C));
	// vmulfp128 v58,v58,v49
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v49.f32)));
	// vmulfp128 v56,v56,v54
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v54.f32)));
	// vpermwi128 v48,v54,155
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x64));
	// vmulfp128 v60,v55,v60
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v54,v54,99
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x9C));
	// vmulfp128 v55,v53,v48
	_mm_store_ps(v55.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v48.f32)));
	// vmulfp128 v54,v51,v54
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v54.f32)));
	// vpermwi128 v53,v62,64
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xBF));
	// vpermwi128 v62,v62,164
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x5B));
	// vsubfp128 v53,v50,v53
	_mm_store_ps(v53.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v53.f32)));
	// vpermwi128 v51,v56,64
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xBF));
	// vaddfp128 v50,v58,v60
	_mm_store_ps(v50.f32, _mm_add_ps(_mm_load_ps(v58.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v56,v56,164
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x5B));
	// vsubfp128 v60,v58,v60
	_mm_store_ps(v60.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v58,v52,v51
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(v51.f32)));
	// vaddfp128 v52,v55,v54
	_mm_store_ps(v52.f32, _mm_add_ps(_mm_load_ps(v55.f32), _mm_load_ps(v54.f32)));
	// vsubfp128 v55,v55,v54
	_mm_store_ps(v55.f32, _mm_sub_ps(_mm_load_ps(v55.f32), _mm_load_ps(v54.f32)));
	// vsubfp128 v62,v53,v62
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v53.f32), _mm_load_ps(v62.f32)));
	// vpermwi128 v54,v50,66
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xBD));
	// vsldoi128 v53,v60,v50,8
	_mm_store_si128((__m128i*)v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v50.u8), 8));
	// vsubfp128 v58,v58,v56
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(v56.f32)));
	// vpermwi128 v56,v52,66
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xBD));
	// vrlimi128 v54,v60,6,3
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 6));
	// vsldoi128 v52,v55,v52,8
	_mm_store_si128((__m128i*)v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v52.u8), 8));
	// vpermwi128 v60,v53,136
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x77));
	// vrlimi128 v56,v55,6,3
	_mm_store_ps(v56.f32, _mm_blend_ps(_mm_load_ps(v56.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 57), 6));
	// vpermwi128 v55,v52,136
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x77));
	// vrlimi128 v62,v61,1,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 1));
	// vpermwi128 v52,v62,7
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xF8));
	// vor128 v53,v62,v62
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrlimi128 v58,v61,1,3
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 1));
	// vrlimi128 v60,v62,3,0
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 228), 3));
	// vrlimi128 v53,v54,6,3
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 57), 6));
	// vor128 v62,v58,v58
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v58.u8));
	// vpermwi128 v51,v58,7
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xF8));
	// vrlimi128 v55,v58,3,0
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 228), 3));
	// vmrglw128 v58,v54,v52
	_mm_store_si128((__m128i*)v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v52.u32), _mm_load_si128((__m128i*)v54.u32)));
	// vrlimi128 v62,v56,6,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v56.f32), 57), 6));
	// vmrglw128 v56,v56,v51
	_mm_store_si128((__m128i*)v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v51.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmrglw128 v54,v56,v59
	_mm_store_si128((__m128i*)v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmrghw128 v59,v56,v59
	_mm_store_si128((__m128i*)v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmrglw128 v56,v62,v55
	_mm_store_si128((__m128i*)v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v55.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vmrghw128 v62,v62,v55
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v55.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vor128 v0,v54,v54
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v54.u8));
	// vor128 v55,v59,v59
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)v59.u8));
	// vmrghw128 v52,v56,v54
	_mm_store_si128((__m128i*)v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmrglw128 v51,v56,v54
	_mm_store_si128((__m128i*)v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmrghw128 v50,v62,v59
	_mm_store_si128((__m128i*)v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vrlimi128 v0,v59,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 78), 3));
	// vmrglw128 v49,v62,v59
	_mm_store_si128((__m128i*)v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vrlimi128 v55,v54,12,2
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 78), 12));
	// vpermwi128 v48,v52,5
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xFA));
	// vpermwi128 v47,v51,187
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x44));
	// vpermwi128 v13,v52,187
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x44));
	// vpermwi128 v12,v51,5
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xFA));
	// vpermwi128 v46,v50,5
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xFA));
	// vmulfp128 v11,v48,v47
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v47.f32)));
	// vor128 v48,v56,v56
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v56.u8));
	// vpermwi128 v47,v49,187
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x44));
	// vnmsubfp v7,v13,v12,v11
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v11,v49,5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xFA));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vpermwi128 v12,v50,187
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x44));
	// vmulfp128 v10,v46,v47
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v47.f32)));
	// vrlimi128 v48,v62,3,2
	_mm_store_ps(v48.f32, _mm_blend_ps(_mm_load_ps(v48.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 78), 3));
	// vrlimi128 v13,v56,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v56.f32), 78), 12));
	// vpermwi128 v59,v49,97
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x9E));
	// vor128 v47,v7,v7
	_mm_store_si128((__m128i*)v47.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vpermwi128 v56,v50,132
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x7B));
	// vspltisw128 v62,-1
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vmulfp128 v5,v48,v55
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v55.f32)));
	// vpermwi128 v55,v52,132
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x7B));
	// vpermwi128 v54,v51,97
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x9E));
	// vpermwi128 v44,v47,156
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x63));
	// vpermwi128 v43,v47,198
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x39));
	// vor128 v48,v62,v62
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v62.u8));
	// vpermwi128 v9,v49,182
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x49));
	// vpermwi128 v7,v52,237
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x12));
	// vor128 v41,v44,v44
	_mm_store_si128((__m128i*)v41.u8, _mm_load_si128((__m128i*)v44.u8));
	// vpermwi128 v8,v50,237
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x12));
	// vor128 v40,v43,v43
	_mm_store_si128((__m128i*)v40.u8, _mm_load_si128((__m128i*)v43.u8));
	// vmrghw128 v39,v58,v57
	_mm_store_si128((__m128i*)v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vnmsubfp v3,v12,v11,v10
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vslw128 v48,v48,v48
	v48.u32[0] = v48.u32[0] << (v48.u8[0] & 0x1F);
	v48.u32[1] = v48.u32[1] << (v48.u8[4] & 0x1F);
	v48.u32[2] = v48.u32[2] << (v48.u8[8] & 0x1F);
	v48.u32[3] = v48.u32[3] << (v48.u8[12] & 0x1F);
	// vpermwi128 v10,v47,78
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xB1));
	// vpermwi128 v52,v52,114
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x8D));
	// vpermwi128 v49,v49,204
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x33));
	// vnmsubfp v12,v0,v13,v5
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v0,v43,v43
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v43.u8));
	// vor128 v13,v44,v44
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v44.u8));
	// vmrghw128 v42,v63,v48
	_mm_store_si128((__m128i*)v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrglw128 v44,v53,v60
	_mm_store_si128((__m128i*)v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v53.u32)));
	// vmrghw128 v48,v48,v63
	_mm_store_si128((__m128i*)v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vpermwi128 v46,v50,114
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x8D));
	// vpermwi128 v6,v51,182
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x49));
	// vmrghw128 v45,v53,v60
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v53.u32)));
	// vmrglw128 v43,v58,v57
	_mm_store_si128((__m128i*)v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vor128 v38,v3,v3
	_mm_store_si128((__m128i*)v38.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vpermwi128 v51,v51,204
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x33));
	// vspltw128 v4,v61,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vmrglw128 v37,v45,v39
	_mm_store_si128((__m128i*)v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v39.u32), _mm_load_si128((__m128i*)v45.u32)));
	// vpermwi128 v11,v38,198
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v38.u32), 0x39));
	// vor128 v36,v12,v12
	_mm_store_si128((__m128i*)v36.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vpermwi128 v12,v38,156
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v38.u32), 0x63));
	// vor128 v35,v11,v11
	_mm_store_si128((__m128i*)v35.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vsldoi128 v47,v47,v36,8
	_mm_store_si128((__m128i*)v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v36.u8), 8));
	// vrlimi128 v41,v36,8,1
	_mm_store_ps(v41.f32, _mm_blend_ps(_mm_load_ps(v41.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 147), 8));
	// vmrglw128 v34,v38,v36
	_mm_store_si128((__m128i*)v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v36.u32), _mm_load_si128((__m128i*)v38.u32)));
	// vrlimi128 v40,v36,4,0
	_mm_store_ps(v40.f32, _mm_blend_ps(_mm_load_ps(v40.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 228), 4));
	// vor128 v33,v12,v12
	_mm_store_si128((__m128i*)v33.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v35,v36,4,2
	_mm_store_ps(v35.f32, _mm_blend_ps(_mm_load_ps(v35.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 78), 4));
	// vmulfp128 v5,v59,v41
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v41.f32)));
	// vrlimi128 v13,v36,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 78), 2));
	// vmulfp128 v3,v56,v40
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v40.f32)));
	// vrlimi128 v12,v36,2,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 228), 2));
	// vrlimi128 v33,v36,8,3
	_mm_store_ps(v33.f32, _mm_blend_ps(_mm_load_ps(v33.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 57), 8));
	// vmulfp128 v1,v55,v35
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v35.f32)));
	// vrlimi128 v0,v36,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 147), 1));
	// vrlimi128 v11,v36,1,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 57), 1));
	// vmrghw128 v55,v45,v39
	_mm_store_si128((__m128i*)v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v39.u32), _mm_load_si128((__m128i*)v45.u32)));
	// vrlimi128 v10,v36,9,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 147), 9));
	// vmulfp128 v2,v54,v33
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v33.f32)));
	// vor128 v59,v39,v39
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)v39.u8));
	// vor128 v56,v44,v44
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)v44.u8));
	// vmrghw128 v54,v44,v43
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v43.u32), _mm_load_si128((__m128i*)v44.u32)));
	// vrlimi128 v59,v43,12,2
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v43.f32), 78), 12));
	// vrlimi128 v56,v45,3,2
	_mm_store_ps(v56.f32, _mm_blend_ps(_mm_load_ps(v56.f32), _mm_permute_ps(_mm_load_ps(v45.f32), 78), 3));
	// vnmsubfp v31,v9,v0,v5
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v9,v38,78
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v38.u32), 0xB1));
	// vnmsubfp v30,v8,v13,v3
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v3,v52,v48
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vxor128 v5,v49,v42
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v42.u8)));
	// vpermwi128 v8,v47,56
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xC7));
	// vnmsubfp v29,v7,v12,v1
	_mm_store_ps(v29.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v12,v46,v48
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vrlimi128 v9,v36,9,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(v36.f32), 57), 9));
	// vmrglw128 v52,v44,v43
	_mm_store_si128((__m128i*)v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v43.u32), _mm_load_si128((__m128i*)v44.u32)));
	// vor128 v13,v45,v45
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v45.u8));
	// vnmsubfp v28,v6,v11,v2
	_mm_store_ps(v28.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v11,v51,v42
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v42.u8)));
	// vpermwi128 v2,v34,52
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v34.u32), 0xCB));
	// vmaddfp v27,v5,v8,v31
	_mm_store_ps(v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v30,v12,v10,v30
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v30.f32)));
	// vmaddfp v3,v3,v9,v29
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v29.f32)));
	// vor128 v48,v27,v27
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v27.u8));
	// vmaddfp v9,v11,v2,v28
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(v28.f32)));
	// vmulfp128 v8,v56,v59
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v59.f32)));
	// vor128 v0,v43,v43
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v43.u8));
	// vrlimi128 v13,v44,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v44.f32), 78), 12));
	// vpermwi128 v51,v37,187
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v37.u32), 0x44));
	// vpermwi128 v49,v55,5
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xFA));
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// vmsum4fp128 v11,v48,v50
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v48.f32), _mm_load_ps(v50.f32), 0xFF));
	// vpermwi128 v59,v54,5
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xFA));
	// vrlimi128 v0,v39,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v39.f32), 78), 3));
	// vpermwi128 v56,v52,187
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x44));
	// vpermwi128 v6,v37,5
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v37.u32), 0xFA));
	// vmulfp128 v1,v49,v51
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v51.f32)));
	// vor128 v51,v62,v62
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)v62.u8));
	// vpermwi128 v7,v55,187
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x44));
	// vmulfp128 v31,v59,v56
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v56.f32)));
	// vpermwi128 v56,v55,114
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x8D));
	// vpermwi128 v5,v54,187
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x44));
	// vslw128 v51,v51,v51
	v51.u32[0] = v51.u32[0] << (v51.u8[0] & 0x1F);
	v51.u32[1] = v51.u32[1] << (v51.u8[4] & 0x1F);
	v51.u32[2] = v51.u32[2] << (v51.u8[8] & 0x1F);
	v51.u32[3] = v51.u32[3] << (v51.u8[12] & 0x1F);
	// vpermwi128 v59,v37,204
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v37.u32), 0x33));
	// vpermwi128 v49,v54,114
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x8D));
	// vnmsubfp v2,v0,v13,v8
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v46,v54,132
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x7B));
	// vpermwi128 v50,v52,204
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x33));
	// vmrghw128 v45,v63,v51
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v51.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrghw128 v51,v51,v63
	_mm_store_si128((__m128i*)v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v51.u32)));
	// vpermwi128 v47,v52,97
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x9E));
	// vpermwi128 v44,v37,97
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v37.u32), 0x9E));
	// vxor128 v27,v59,v45
	_mm_store_si128((__m128i*)v27.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vpermwi128 v43,v55,132
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x7B));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vxor128 v26,v56,v51
	_mm_store_si128((__m128i*)v26.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vxor128 v24,v49,v51
	_mm_store_si128((__m128i*)v24.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vspltw128 v42,v58,0
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vxor128 v25,v50,v45
	_mm_store_si128((__m128i*)v25.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vspltw128 v45,v53,0
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xFF));
	// vspltw128 v41,v60,0
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v21,v60,3
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vor128 v59,v2,v2
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vpermwi128 v2,v54,237
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x12));
	// vnmsubfp v8,v11,v0,v4
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v11,v0,v4
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v4,v37,182
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v37.u32), 0x49));
	// vcmpeqfp v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v10,v0,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vpermwi128 v0,v52,5
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xFA));
	// vor128 v56,v13,v13
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vnmsubfp v13,v7,v6,v1
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v12,v5,v0,v31
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v5,v52,182
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0x49));
	// vspltw128 v1,v61,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vmulfp128 v8,v3,v56
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v56.f32)));
	// vpermwi128 v3,v55,237
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x12));
	// vmulfp128 v54,v48,v56
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v10,v30,v56
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v9,v9,v56
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v56.f32)));
	// vpermwi128 v11,v13,156
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x63));
	// vpermwi128 v0,v13,198
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x39));
	// vmrglw128 v56,v13,v59
	_mm_store_si128((__m128i*)v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vpermwi128 v6,v13,78
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xB1));
	// vsldoi128 v49,v12,v59,8
	_mm_store_si128((__m128i*)v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v59.u8), 8));
	// vor128 v51,v11,v11
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vpermwi128 v13,v12,198
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x39));
	// vor128 v48,v0,v0
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v52,v12,156
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x63));
	// vrlimi128 v0,v59,1,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 57), 1));
	// vpermwi128 v22,v56,52
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xCB));
	// vpermwi128 v23,v49,56
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xC7));
	// vrlimi128 v51,v59,8,3
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 57), 8));
	// vor128 v49,v13,v13
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v56,v57,0
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xFF));
	// vor128 v50,v52,v52
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)v52.u8));
	// vpermwi128 v7,v12,78
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xB1));
	// vrlimi128 v13,v59,1,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 147), 1));
	// vmulfp128 v31,v47,v51
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v47.f32), _mm_load_ps(v51.f32)));
	// vrlimi128 v49,v59,4,0
	_mm_store_ps(v49.f32, _mm_blend_ps(_mm_load_ps(v49.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 228), 4));
	// vrlimi128 v50,v59,8,1
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 147), 8));
	// vmulfp128 v29,v44,v50
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(v50.f32)));
	// vrlimi128 v48,v59,4,2
	_mm_store_ps(v48.f32, _mm_blend_ps(_mm_load_ps(v48.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 78), 4));
	// vnmsubfp v31,v5,v0,v31
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v12,v52,v52
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v52.u8));
	// vmulfp128 v28,v43,v49
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v49.f32)));
	// vrlimi128 v11,v59,2,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 228), 2));
	// vrlimi128 v6,v59,9,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 57), 9));
	// vspltw128 v20,v57,3
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vmulfp128 v30,v46,v48
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(v48.f32)));
	// vrlimi128 v7,v59,9,1
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 147), 9));
	// vrlimi128 v12,v59,2,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 78), 2));
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// li r11,6
	r11.s64 = 6;
	// addi r8,r4,-8
	ctx.r8.s64 = ctx.r4.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// vnmsubfp v0,v4,v13,v29
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v29,v57,1
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xAA));
	// vmaddfp v5,v25,v22,v31
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v22.f32)), _mm_load_ps(v31.f32)));
	// vspltw128 v31,v60,1
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vspltw128 v25,v60,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vnmsubfp v13,v3,v12,v28
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v28.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v4,v45,v54
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v45.f32), _mm_load_ps(v54.f32)));
	// vspltw128 v3,v58,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vnmsubfp v12,v2,v11,v30
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v30.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v22,v58,3
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vmulfp128 v2,v42,v54
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v42.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v30,v41,v54
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(v41.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v28,v56,v54
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v54.f32)));
	// vmaddfp v0,v27,v23,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v23.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v27,v53,2
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x55));
	// vspltw128 v23,v53,3
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x0));
	// vmaddfp v7,v26,v7,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v26,v58,2
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// vmaddfp v6,v24,v6,v12
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v12,v53,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xAA));
	// vmaddfp v3,v3,v10,v2
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v2.f32)));
	// vspltw128 v24,v57,2
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x55));
	// vmaddfp v2,v31,v10,v30
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v30.f32)));
	// vmaddfp v31,v29,v10,v28
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v28.f32)));
	// vmaddfp v4,v12,v10,v4
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v4.f32)));
	// vor128 v60,v0,v0
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmsum4fp128 v11,v60,v55
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v55.f32), 0xFF));
	// vmaddfp v3,v26,v9,v3
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v2,v25,v9,v2
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v24,v9,v31
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v4,v27,v9,v4
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v9,v22,v8,v3
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v13,v20,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v23,v8,v4
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v4,v21,v8,v2
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v2.f32)));
	// vor128 v58,v9,v9
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor128 v53,v13,v13
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vnmsubfp v30,v11,v0,v1
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v59,v12,v12
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vspltw128 v55,v58,0
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vor128 v57,v4,v4
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vspltw128 v4,v58,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vspltw128 v31,v58,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// vspltw128 v52,v53,0
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xFF));
	// vspltw128 v56,v59,0
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vspltw128 v8,v59,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vspltw128 v28,v59,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vspltw128 v54,v57,0
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xFF));
	// vspltw128 v3,v57,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xAA));
	// vspltw128 v2,v53,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xAA));
	// vspltw128 v29,v53,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x55));
	// vmaddfp v0,v0,v30,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v30,v57,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x55));
	// vnmsubfp v12,v11,v0,v1
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v1,v59,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v10,v0,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v59,v13,v13
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmulfp128 v13,v5,v59
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v59.f32)));
	// vspltw128 v5,v57,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vmulfp128 v60,v60,v59
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v59.f32)));
	// vmulfp128 v0,v7,v59
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v59.f32)));
	// vmulfp128 v12,v6,v59
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v59.f32)));
	// vmulfp128 v11,v56,v60
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v60.f32)));
	// vspltw128 v6,v58,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vmulfp128 v10,v55,v60
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v60.f32)));
	// vmulfp128 v9,v54,v60
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v60.f32)));
	// vmulfp128 v7,v52,v60
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v60.f32)));
	// vmaddfp v11,v8,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v4,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vspltw128 v4,v53,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x0));
	// vmaddfp v9,v3,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v2,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v11,v1,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v8,v31,v13,v10
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v30,v13,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v29,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v28,v12,v11
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v8,v6,v12,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v7,v5,v12,v9
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v4,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
loc_826203C8:
	// ldu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r11,8(r7)
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x826203c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826203C8;
	// vspltisw128 v59,1
	_mm_store_si128((__m128i*)v59.u32, _mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v56,v62,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v62.u32)));
	// lvx128 v58,r0,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw128 v57,v10,0
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vor128 v60,v10,v10
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vspltw v26,v8,1
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xAA));
	// vspltw128 v13,v58,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// li r11,0
	r11.s64 = 0;
	// vcsxwfp128 v55,v59,0
	_mm_store_ps(v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v59.u32)));
	// vspltw128 v12,v58,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vspltw128 v6,v58,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// li r8,12
	ctx.r8.s64 = 12;
	// vspltw v25,v7,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x55));
	// vcsxwfp128 v11,v59,1
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vmaddfp v13,v7,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltisw128 v58,-9
	_mm_store_si128((__m128i*)v58.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// lvsl v0,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vcsxwfp128 v54,v59,1
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vor128 v53,v0,v0
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v52,v8,32
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xDF));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// vor128 v51,v0,v0
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v46,v10,67
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xBC));
	// vslw128 v58,v59,v58
	v58.u32[0] = v59.u32[0] << (v58.u8[0] & 0x1F);
	v58.u32[1] = v59.u32[1] << (v58.u8[4] & 0x1F);
	v58.u32[2] = v59.u32[2] << (v58.u8[8] & 0x1F);
	v58.u32[3] = v59.u32[3] << (v58.u8[12] & 0x1F);
	// vor128 v50,v0,v0
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v29,v53,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x55));
	// vspltw128 v4,v53,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xAA));
	// vrlimi128 v52,v7,3,2
	_mm_store_ps(v52.f32, _mm_blend_ps(_mm_load_ps(v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v51,v53,8,2
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 78), 8));
	// vsldoi128 v9,v56,v55,8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v55.u8), 8));
	// vsldoi128 v27,v56,v55,12
	_mm_store_si128((__m128i*)v27.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v55.u8), 4));
	// vrlimi128 v50,v53,8,1
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 147), 8));
	// vmaddfp v13,v12,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v28,v51,225
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x1E));
	// vpermwi128 v49,v9,195
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x3C));
	// vpermwi128 v12,v9,51
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xCC));
	// vpermwi128 v1,v50,75
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xB4));
	// vpermwi128 v30,v9,243
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xC));
	// vmulfp128 v3,v49,v57
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v57.f32)));
	// vmaddcfp128 v60,v6,v60,v13
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v60.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v26,v3
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v26.f32)), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v9,v25,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v25.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v57,v13,v55
	_mm_store_ps(v57.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v55.f32)));
	// vpermwi128 v55,v13,107
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x94));
	// vpermwi128 v51,v13,7
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xF8));
	// vrlimi128 v55,v58,1,0
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 228), 1));
	// vcmpgefp128 v55,v51,v55
	_mm_store_ps(v55.f32, _mm_cmpge_ps(_mm_load_ps(v51.f32), _mm_load_ps(v55.f32)));
	// vrsqrtefp128 v13,v57
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v57.f32))));
	// vmulfp128 v26,v57,v11
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw128 v6,v55,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x55));
	// vspltw128 v12,v55,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xFF));
	// vmulfp128 v25,v13,v13
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v3,v29,v4,v6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v29.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsel v5,v28,v1,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v28.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vcmpeqfp128 v51,v13,v13
	_mm_store_ps(v51.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v6,v27,v30,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v27.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v30.u8))));
	// vpermwi128 v30,v0,180
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x4B));
	// vspltw128 v1,v53,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0x0));
	// vsel v4,v3,v29,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v29.u8))));
	// vsel v3,v5,v28,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v28.u8))));
	// vsel v2,v6,v27,v12
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v27.u8))));
	// vspltw128 v6,v53,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v53.u32), 0xFF));
	// vor128 v50,v4,v4
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vpermwi128 v4,v9,207
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x30));
	// vor128 v49,v3,v3
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vspltw128 v9,v55,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x0));
	// vor v3,v2,v2
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vnmsubfp v5,v26,v25,v11
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v25.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v8,v50,v50
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v50.u8));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v47,v5,v5
	_mm_store_ps(v47.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)));
	// vor v5,v2,v2
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor128 v2,v56,v56
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v56.u8));
	// vor128 v48,v13,v13
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v13,v55,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xAA));
	// vsel v7,v8,v6,v13
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vmulfp128 v58,v48,v54
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v31,v57,v48
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(v48.f32)));
	// vsel v8,v5,v4,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vor128 v5,v50,v50
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v50.u8));
	// vpermwi128 v50,v52,48
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xCF));
	// vsel v6,v3,v8,v12
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// lvx128 v55,r4,r10
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v46,v52,6,0
	_mm_store_ps(v46.f32, _mm_blend_ps(_mm_load_ps(v46.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 228), 6));
	// lis r11,-32229
	r11.s64 = -2112159744;
	// vrlimi128 v0,v53,8,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 228), 8));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vrlimi128 v50,v10,3,0
	_mm_store_ps(v50.f32, _mm_blend_ps(_mm_load_ps(v50.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 228), 3));
	// vsel v10,v6,v2,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vor128 v53,v46,v46
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)v46.u8));
	// vsel v8,v5,v7,v12
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// vxor128 v5,v47,v51
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v51.u8)));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// vmaddfp128 v53,v10,v50,v53
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v53.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v50.f32)), _mm_load_ps(v53.f32)));
	// vor128 v10,v49,v49
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v49.u8));
	// vsel v7,v8,v1,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vpermwi128 v8,v0,30
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE1));
	// vor128 v0,v57,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v57.u8));
	// vor128 v57,v62,v62
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v62.u8));
	// vperm128 v58,v58,v58,v7
	_mm_store_si128((__m128i*)v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v7,v49,v49
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v49.u8));
	// vsel v5,v31,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vslw128 v57,v57,v57
	v57.u32[0] = v57.u32[0] << (v57.u8[0] & 0x1F);
	v57.u32[1] = v57.u32[1] << (v57.u8[4] & 0x1F);
	v57.u32[2] = v57.u32[2] << (v57.u8[8] & 0x1F);
	v57.u32[3] = v57.u32[3] << (v57.u8[12] & 0x1F);
	// vsel v0,v10,v8,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vmulfp128 v54,v5,v54
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v54.f32)));
	// vxor128 v57,v55,v57
	_mm_store_si128((__m128i*)v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v6,v53,v53
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v53.u8));
	// vsel v13,v7,v0,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v53,v57,v57
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)v57.u8));
	// vmulfp128 v58,v6,v58
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v58.f32)));
	// vor128 v52,v57,v57
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)v57.u8));
	// vsel v0,v13,v30,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v30.u8))));
	// vor128 v51,v57,v57
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)v57.u8));
	// vrlimi128 v53,v55,1,0
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 1));
	// vrlimi128 v57,v55,11,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 11));
	// vrlimi128 v52,v55,13,0
	_mm_store_ps(v52.f32, _mm_blend_ps(_mm_load_ps(v52.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 13));
	// vrlimi128 v51,v55,7,0
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 7));
	// vperm128 v58,v54,v58,v0
	_mm_store_si128((__m128i*)v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmsum4fp128 v54,v53,v58
	_mm_store_ps(v54.f32, _mm_dp_ps(_mm_load_ps(v53.f32), _mm_load_ps(v58.f32), 0xFF));
	// vpermwi128 v55,v58,177
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x4E));
	// vpermwi128 v53,v58,78
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xB1));
	// vpermwi128 v58,v58,228
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x1B));
	// vmsum4fp128 v55,v52,v55
	_mm_store_ps(v55.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(v55.f32), 0xFF));
	// vmsum4fp128 v53,v51,v53
	_mm_store_ps(v53.f32, _mm_dp_ps(_mm_load_ps(v51.f32), _mm_load_ps(v53.f32), 0xFF));
	// vmsum4fp128 v58,v57,v58
	_mm_store_ps(v58.f32, _mm_dp_ps(_mm_load_ps(v57.f32), _mm_load_ps(v58.f32), 0xFF));
	// vmrghw128 v57,v55,v54
	_mm_store_si128((__m128i*)v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vmrghw128 v58,v58,v53
	_mm_store_si128((__m128i*)v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrghw128 v1,v58,v57
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v58.u32)));
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x82620608
	if (cr6.lt) goto loc_82620608;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,-56
	ctx.r10.s64 = ctx.r1.s64 + -56;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826205F8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x826205f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826205F8;
	// blr 
	return;
loc_82620608:
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// vsubfp128 v9,v60,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v12.f32)));
	// stfs f1,-52(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f1,-56(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// vslw128 v60,v62,v62
	v60.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v60.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v60.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v60.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// stfs f1,-60(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// stfs f1,-64(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vcsxwfp128 v58,v59,16
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// stfs f1,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v60.u8));
	// stfs f1,-60(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// vsldoi128 v54,v60,v63,12
	_mm_store_si128((__m128i*)v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v63.u8), 4));
	// stfs f1,-56(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// vpermwi128 v53,v61,234
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x15));
	// stfs f1,-52(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// vspltw128 v10,v61,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// lvx128 v55,r0,r11
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vslw128 v57,v62,v62
	v57.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v57.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v57.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v57.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// vspltw128 v5,v61,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vspltisw128 v50,-8
	_mm_store_si128((__m128i*)v50.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// vmaddfp v12,v9,v8,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v58,v10,v58
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v58.f32)));
	// vmsum4fp128 v51,v52,v1
	_mm_store_ps(v51.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v1.f32), 0xFF));
	// addi r8,r8,30160
	ctx.r8.s64 = ctx.r8.s64 + 30160;
	// vslw128 v50,v62,v50
	v50.u32[0] = v62.u32[0] << (v50.u8[0] & 0x1F);
	v50.u32[1] = v62.u32[1] << (v50.u8[4] & 0x1F);
	v50.u32[2] = v62.u32[2] << (v50.u8[8] & 0x1F);
	v50.u32[3] = v62.u32[3] << (v50.u8[12] & 0x1F);
	// vsldoi128 v55,v55,v63,8
	_mm_store_si128((__m128i*)v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v63.u8), 8));
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor128 v55,v55,v54
	_mm_store_si128((__m128i*)v55.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v54.u8)));
	// vspltw128 v49,v60,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v48,v60,1
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vspltw128 v47,v60,2
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vspltw128 v60,v60,3
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vaddfp128 v55,v53,v55
	_mm_store_ps(v55.f32, _mm_add_ps(_mm_load_ps(v53.f32), _mm_load_ps(v55.f32)));
	// vcmpgtfp128 v12,v63,v51
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v51.f32)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v54,v12,v12
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vxor128 v53,v51,v54
	_mm_store_si128((__m128i*)v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v54.u8)));
	// vor128 v13,v53,v53
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v53.u8));
	// vcmpgtfp128 v31,v58,v53
	_mm_store_ps(v31.f32, _mm_cmpgt_ps(_mm_load_ps(v58.f32), _mm_load_ps(v53.f32)));
	// vor128 v0,v53,v53
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v53.u8));
	// vrefp128 v12,v53
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v53.f32)));
	// vand128 v58,v53,v57
	_mm_store_si128((__m128i*)v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vcmpeqfp128 v3,v53,v63
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(v53.f32), _mm_load_ps(v63.f32)));
	// vor128 v9,v53,v53
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v53.u8));
	// vslw128 v51,v53,v59
	v51.u32[0] = v53.u32[0] << (v59.u8[0] & 0x1F);
	v51.u32[1] = v53.u32[1] << (v59.u8[4] & 0x1F);
	v51.u32[2] = v53.u32[2] << (v59.u8[8] & 0x1F);
	v51.u32[3] = v53.u32[3] << (v59.u8[12] & 0x1F);
	// vnmsubfp v8,v0,v13,v10
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw128 v10,v58,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v58.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vnmsubfp v13,v9,v12,v5
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v58,v8,v8
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vrsqrtefp128 v0,v58
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v58.f32))));
	// vor128 v7,v58,v58
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmulfp128 v9,v58,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v12,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v46,v0,v0
	_mm_store_ps(v46.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v27,v13,v13
	_mm_store_ps(v27.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v11,v9,v8,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v45,v11,v11
	_mm_store_ps(v45.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v58,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v11,v45,v46
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)v46.u8)));
	// vsel v11,v0,v7,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vor128 v0,v53,v53
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v53.u8));
	// vor128 v53,v11,v11
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vnmsubfp v4,v0,v13,v5
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vand128 v58,v53,v57
	_mm_store_si128((__m128i*)v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vcmpeqfp128 v30,v53,v63
	_mm_store_ps(v30.f32, _mm_cmpeq_ps(_mm_load_ps(v53.f32), _mm_load_ps(v63.f32)));
	// vslw128 v59,v53,v59
	v59.u32[0] = v53.u32[0] << (v59.u8[0] & 0x1F);
	v59.u32[1] = v53.u32[1] << (v59.u8[4] & 0x1F);
	v59.u32[2] = v53.u32[2] << (v59.u8[8] & 0x1F);
	v59.u32[3] = v53.u32[3] << (v59.u8[12] & 0x1F);
	// vor128 v49,v49,v58
	_mm_store_si128((__m128i*)v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vor128 v9,v58,v58
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v58.u8));
	// vor128 v57,v48,v58
	_mm_store_si128((__m128i*)v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vor128 v11,v49,v49
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v49.u8));
	// vsel v8,v11,v9,v10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vor128 v9,v47,v58
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vor128 v11,v60,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vmaddfp v13,v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v6,v57,v57
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v57.u8));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vor128 v7,v62,v62
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v62.u8));
	// vspltw128 v0,v61,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vor128 v58,v8,v8
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r11,r11,30144
	r11.s64 = r11.s64 + 30144;
	// vsel v8,v11,v9,v10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vcmpequw128 v5,v51,v50
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v51.u32), _mm_load_si128((__m128i*)v50.u32)));
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// vsel v11,v7,v6,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// addi r8,r8,30128
	ctx.r8.s64 = ctx.r8.s64 + 30128;
	// vor128 v9,v57,v57
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v57.u8));
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// vor128 v6,v58,v58
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v58.u8));
	// lvx128 v60,r0,r11
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vcmpequw128 v2,v59,v50
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v50.u32)));
	// addi r11,r7,30112
	r11.s64 = ctx.r7.s64 + 30112;
	// vor128 v50,v62,v62
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)v62.u8));
	// vspltw128 v51,v60,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vsel v7,v9,v8,v5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw128 v3,v60,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vsel v9,v11,v6,v30
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v4,v60,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v58.u8));
	// addi r7,r6,30096
	ctx.r7.s64 = ctx.r6.s64 + 30096;
	// vslw128 v50,v50,v50
	v50.u32[0] = v50.u32[0] << (v50.u8[0] & 0x1F);
	v50.u32[1] = v50.u32[1] << (v50.u8[4] & 0x1F);
	v50.u32[2] = v50.u32[2] << (v50.u8[8] & 0x1F);
	v50.u32[3] = v50.u32[3] << (v50.u8[12] & 0x1F);
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v6,v51,v51
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v51.u8));
	// vspltw128 v60,v60,3
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vsel v8,v9,v7,v2
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v48,v59,2
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vsel v9,v12,v13,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v47,v59,0
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vor128 v7,v63,v63
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v63.u8));
	// vspltw128 v25,v59,1
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// lvx128 v58,r0,r11
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vsel v12,v11,v8,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// lvx128 v57,r0,r7
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v46,v53,v9
	_mm_store_ps(v46.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw128 v30,v58,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vspltw128 v29,v58,1
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vspltw128 v28,v58,2
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// vor v18,v10,v10
	_mm_store_si128((__m128i*)v18.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsel v13,v8,v12,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw128 v27,v57,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xFF));
	// vspltw128 v26,v57,1
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xAA));
	// addi r11,r11,2608
	r11.s64 = r11.s64 + 2608;
	// vspltw128 v2,v57,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x55));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vspltw128 v58,v58,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vor128 v45,v13,v13
	_mm_store_si128((__m128i*)v45.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v59,v59,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vandc128 v44,v46,v50
	_mm_store_si128((__m128i*)v44.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v46.u8)));
	// vcmpgtfp128 v21,v63,v46
	_mm_store_ps(v21.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v46.f32)));
	// vcmpgtfp128 v11,v44,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(v44.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v12,v44,v44
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v44.u8));
	// vrefp128 v13,v44
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v44.f32)));
	// vor128 v5,v44,v44
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v44.u8));
	// vor128 v9,v44,v44
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v44.u8));
	// vsel v8,v7,v6,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vnmsubfp v7,v12,v13,v0
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v13,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v12,v4,v3,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v4,v57,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vxor128 v57,v60,v50
	_mm_store_si128((__m128i*)v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v24,v5,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v3,v13,v13
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v7,v6,v13,v3
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v9,v7,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vaddfp128 v7,v13,v47
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v47.f32)));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v3,v13,v25,v13
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v25.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v5,v13,v48
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v48.f32)));
	// vrefp v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v7.f32)));
	// vsel v17,v8,v12,v5
	_mm_store_si128((__m128i*)v17.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vcmpgtfp128 v22,v46,v60
	_mm_store_ps(v22.f32, _mm_cmpgt_ps(_mm_load_ps(v46.f32), _mm_load_ps(v60.f32)));
	// addi r8,r8,2512
	ctx.r8.s64 = ctx.r8.s64 + 2512;
	// vaddfp128 v60,v3,v56
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v56.f32)));
	// addi r7,r7,2528
	ctx.r7.s64 = ctx.r7.s64 + 2528;
	// addi r6,r6,2544
	ctx.r6.s64 = ctx.r6.s64 + 2544;
	// vcmpequw128 v24,v45,v62
	_mm_store_si128((__m128i*)v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v62.u32)));
	// stfs f1,-52(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// vcmpgtfp128 v23,v57,v46
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v23.f32, _mm_cmpgt_ps(_mm_load_ps(v57.f32), _mm_load_ps(v46.f32)));
	// stfs f1,-56(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v62,r0,r6
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v3,v7,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v3,v7,v13,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v6,v13,v13
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v8,v12,v13,v6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v60,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v8.f32)));
	// vsel v12,v9,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v60,v12,v50
	_mm_store_si128((__m128i*)v60.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vor v6,v12,v12
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vcmpgtfp128 v20,v59,v60
	_mm_store_ps(v20.f32, _mm_cmpgt_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// vaddfp128 v9,v13,v58
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v58.f32)));
	// vmaddfp v8,v13,v4,v2
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v2.f32)));
	// vspltw128 v2,v61,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vspltw128 v25,v61,1
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vmaddfp v9,v13,v9,v28
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v28.f32)));
	// vmaddfp v8,v13,v8,v26
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v26.f32)));
	// vspltw128 v26,v61,2
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vmaddfp v9,v13,v9,v29
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v29.f32)));
	// vmaddfp v8,v13,v8,v27
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v27.f32)));
	// vspltw128 v27,v61,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vmaddfp v9,v13,v9,v30
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v30.f32)));
	// vmulfp128 v60,v8,v13
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v8,v49,v49
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v49.u8));
	// vsel128 v18,v8,v63,v18
	_mm_store_si128((__m128i*)v18.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)v63.u8))));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor128 v8,v53,v53
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v53.u8));
	// li r11,32
	r11.s64 = 32;
	// vspltw128 v59,v63,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vrefp v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v9.f32)));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vnmsubfp v4,v5,v13,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v4,v53,v53
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v53.u8));
	// vnmsubfp v0,v7,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v7,v51,v51
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v51.u8));
	// vcmpeqfp v5,v13,v13
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v9,v0,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vrefp128 v0,v53
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v53.f32)));
	// vxor128 v9,v51,v50
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vmulfp128 v5,v60,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v13,v45,v45
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v45.u8));
	// vnmsubfp v19,v4,v0,v2
	_mm_store_ps(v19.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v4,v62,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vmaddfp v3,v12,v5,v12
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v12,v63,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stfs f1,-60(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// vspltw128 v28,v63,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// stfs f1,-64(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vspltw128 v29,v63,1
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vspltw128 v30,v63,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vmaddfp v0,v0,v19,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v19.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v5,v3,v6,v20
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v3,v63,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor128 v6,v5,v50
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vsel v11,v5,v6,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vcmpeqfp v5,v0,v0
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v11,v17
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v17.f32)));
	// vnmsubfp v2,v8,v0,v2
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v8,v6,v50
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vsel v11,v6,v8,v21
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v8,v11,v7,v22
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vmaddfp v11,v0,v2,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v0,v8,v9,v23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw128 v8,v62,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v9,v62,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vaddfp v0,v0,v18
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v18.f32)));
	// vsel v6,v10,v11,v5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw128 v10,v62,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vsel v11,v13,v0,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v55,v11
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v0,v59
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v59.f32)));
	// vrfin128 v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(v62.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v62,v0,v0
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v62,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v13,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v25,v13,v0
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v13,v55,v55
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmulfp128 v0,v12,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v26,v12,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v12,v0,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v27,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v12,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v28,v12,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v12,v0,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v29,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v12,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v30,v12,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v12,v0,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v3,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v12,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v7,v4,v12,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v12,v0,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v8,v8,v0,v7
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v12,v62
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v12,v9,v12,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v10,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)));
	// vsel v12,v13,v0,v31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v62,v12,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v61,v12,1
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v52,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v62.f32)));
	// vxor128 v0,v61,v54
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v54.u8)));
	// vmaddfp v0,v1,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v13,v63,v0
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82620AA8"))) PPC_WEAK_FUNC(sub_82620AA8);
PPC_FUNC_IMPL(__imp__sub_82620AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620AAC"))) PPC_WEAK_FUNC(sub_82620AAC);
PPC_FUNC_IMPL(__imp__sub_82620AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82620AB0"))) PPC_WEAK_FUNC(sub_82620AB0);
PPC_FUNC_IMPL(__imp__sub_82620AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw128 v52,0
	_mm_store_si128((__m128i*)v52.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,2608
	ctx.r10.s64 = ctx.r10.s64 + 2608;
	// vspltisw128 v59,-6
	_mm_store_si128((__m128i*)v59.u32, _mm_set1_epi32(int(0xFFFFFFFA)));
	// vspltisw128 v58,13
	_mm_store_si128((__m128i*)v58.u32, _mm_set1_epi32(int(0xD)));
	// addi r9,r9,2560
	ctx.r9.s64 = ctx.r9.s64 + 2560;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v9,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vmsum3fp128 v57,v61,v61
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v61.f32), 0xEF));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vupkd3d128 v63,v52,4
	temp.f32 = 3.0f;
	temp.s32 += v52.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v52.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v63 = vTemp;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,2576
	r11.s64 = r11.s64 + 2576;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslw128 v51,v58,v59
	v51.u32[0] = v58.u32[0] << (v59.u8[0] & 0x1F);
	v51.u32[1] = v58.u32[1] << (v59.u8[4] & 0x1F);
	v51.u32[2] = v58.u32[2] << (v59.u8[8] & 0x1F);
	v51.u32[3] = v58.u32[3] << (v59.u8[12] & 0x1F);
	// lvx128 v60,r0,r9
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v55,v62,3
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v2,v63,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v7,v63,3
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// addi r10,r10,2592
	ctx.r10.s64 = ctx.r10.s64 + 2592;
	// vspltw128 v10,v62,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v1,v60,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vspltw128 v8,v60,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vspltw128 v6,v60,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r9,2512
	r11.s64 = ctx.r9.s64 + 2512;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v57
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v57.f32))));
	// vor128 v11,v57,v57
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v57.u8));
	// vmulfp128 v13,v57,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw128 v31,v63,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vcmpeqfp128 v5,v57,v52
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(v57.f32), _mm_load_ps(v52.f32)));
	// vspltw128 v30,v63,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vspltw128 v56,v63,2
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v59,v63,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vspltw128 v15,v62,0
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v18,v62,1
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v22,v62,2
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v26,v62,3
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,2528
	r11.s64 = ctx.r8.s64 + 2528;
	// vspltw128 v28,v62,1
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v13,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v57,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v0,v13,v11,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmulfp128 v63,v0,v55
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v55.f32)));
	// vrefp v4,v0
	_mm_store_ps(ctx.v4.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v11,v63
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v9,v0,v4,v2
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v3,v10,v11,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v5,v4,v9,v4
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v13,v3,v3
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v7,v1,v13,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v11,v13,v3
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v29,v8,v12,v7
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v9,v11,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vor128 v54,v11,v11
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v8,v12,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v16,v10,v10
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v29,v6,v9,v29
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v29.f32)));
	// vmulfp128 v1,v9,v9
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v60,v8,v8
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v6,v9,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v21,v8,v9
	_mm_store_ps(v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v25,v10,v8
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v27,v31,v10,v29
	_mm_store_ps(v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v29.f32)));
	// vmaddcfp128 v54,v28,v54,v3
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v54.f32)), _mm_load_ps(ctx.v3.f32)));
	// vspltw128 v55,v62,2
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v58,v62,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v29,v12,v10
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vor v10,v5,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vspltw128 v14,v63,0
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v17,v63,1
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v53,v2,v2
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vspltw128 v20,v63,2
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v24,v63,3
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vcmpeqfp128 v57,v5,v5
	_mm_store_ps(v57.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)));
	// addi r11,r10,2544
	r11.s64 = ctx.r10.s64 + 2544;
	// vmulfp128 v31,v7,v12
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp128 v53,v9,v10,v53
	_mm_store_ps(v53.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v53.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v10,v30,v7,v27
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(v27.f32)));
	// vmulfp128 v9,v1,v6
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v6,v7
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddcfp128 v13,v55,v13,v54
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v54.f32)));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v19,v12,v12
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// li r11,16
	r11.s64 = 16;
	// vspltw128 v28,v62,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vmulfp128 v23,v7,v7
	_mm_store_ps(v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw128 v30,v62,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vcmpbfp128 v63,v0,v51
	_mm_store_ps(v63.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v51.f32)));
	// vspltw128 v3,v62,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vmulfp128 v27,v6,v6
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32)));
	// vspltw128 v7,v62,3
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v61.u8));
	// vor128 v11,v53,v53
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v53.u8));
	// vmaddcfp128 v1,v56,v1,v10
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v13,v58,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v11,v5,v11,v5
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vor128 v5,v57,v57
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v57.u8));
	// vcmpequw128 v10,v63,v52
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v52.u32)));
	// vmaddfp v13,v14,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel128 v5,v4,v11,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vor128 v11,v60,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v60.u8));
	// vmaddcfp128 v11,v59,v11,v1
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v17,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v15,v16,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(v16.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v20,v21,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v18,v19,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v19.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v24,v25,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v22,v23,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v28,v29,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v26,v27,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v30,v31,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v3,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v7,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v63,v13,v5
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v13,v61,v63
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// vsel128 v10,v13,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vrlimi128 v10,v12,1,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 228), 1));
	// stvlx v10,0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r31,r11
	ea = r31.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82620D00"))) PPC_WEAK_FUNC(sub_82620D00);
PPC_FUNC_IMPL(__imp__sub_82620D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620D04"))) PPC_WEAK_FUNC(sub_82620D04);
PPC_FUNC_IMPL(__imp__sub_82620D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82620D08"))) PPC_WEAK_FUNC(sub_82620D08);
PPC_FUNC_IMPL(__imp__sub_82620D08) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261e4e0
	sub_8261E4E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82620D80"))) PPC_WEAK_FUNC(sub_82620D80);
PPC_FUNC_IMPL(__imp__sub_82620D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82620D84"))) PPC_WEAK_FUNC(sub_82620D84);
PPC_FUNC_IMPL(__imp__sub_82620D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82620D88"))) PPC_WEAK_FUNC(sub_82620D88);
PPC_FUNC_IMPL(__imp__sub_82620D88) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82620db4
	if (cr6.lt) goto loc_82620DB4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82620DB4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82620df8
	if (cr6.eq) goto loc_82620DF8;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82620DC8:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82619bd0
	sub_82619BD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// bne 0x82620dc8
	if (!cr0.eq) goto loc_82620DC8;
loc_82620DF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82620DFC"))) PPC_WEAK_FUNC(sub_82620DFC);
PPC_FUNC_IMPL(__imp__sub_82620DFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82620E00"))) PPC_WEAK_FUNC(sub_82620E00);
PPC_FUNC_IMPL(__imp__sub_82620E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x82620e48
	if (!cr6.eq) goto loc_82620E48;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_82620E48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82620ee4
	if (cr0.eq) goto loc_82620EE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82620ee4
	if (cr0.eq) goto loc_82620EE4;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8261e438
	sub_8261E438(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261eae0
	sub_8261EAE0(ctx, base);
	// li r6,178
	ctx.r6.s64 = 178;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8261eae0
	sub_8261EAE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82620ee8
	goto loc_82620EE8;
loc_82620EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82620EE8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82620EEC"))) PPC_WEAK_FUNC(sub_82620EEC);
PPC_FUNC_IMPL(__imp__sub_82620EEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

