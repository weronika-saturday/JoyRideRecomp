#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824FF8D0"))) PPC_WEAK_FUNC(sub_824FF8D0);
PPC_FUNC_IMPL(__imp__sub_824FF8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF8D4"))) PPC_WEAK_FUNC(sub_824FF8D4);
PPC_FUNC_IMPL(__imp__sub_824FF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF8D8"))) PPC_WEAK_FUNC(sub_824FF8D8);
PPC_FUNC_IMPL(__imp__sub_824FF8D8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff910
	if (cr6.eq) goto loc_824FF910;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd538
	sub_824FD538(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF910:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29976
	ctx.r10.s64 = r11.s64 + 29976;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF928"))) PPC_WEAK_FUNC(sub_824FF928);
PPC_FUNC_IMPL(__imp__sub_824FF928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF92C"))) PPC_WEAK_FUNC(sub_824FF92C);
PPC_FUNC_IMPL(__imp__sub_824FF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF930"))) PPC_WEAK_FUNC(sub_824FF930);
PPC_FUNC_IMPL(__imp__sub_824FF930) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff968
	if (cr6.eq) goto loc_824FF968;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd5b8
	sub_824FD5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF968:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30096
	ctx.r10.s64 = r11.s64 + 30096;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF980"))) PPC_WEAK_FUNC(sub_824FF980);
PPC_FUNC_IMPL(__imp__sub_824FF980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF984"))) PPC_WEAK_FUNC(sub_824FF984);
PPC_FUNC_IMPL(__imp__sub_824FF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF988"))) PPC_WEAK_FUNC(sub_824FF988);
PPC_FUNC_IMPL(__imp__sub_824FF988) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff9c0
	if (cr6.eq) goto loc_824FF9C0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd638
	sub_824FD638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF9C0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30216
	ctx.r10.s64 = r11.s64 + 30216;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF9D8"))) PPC_WEAK_FUNC(sub_824FF9D8);
PPC_FUNC_IMPL(__imp__sub_824FF9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF9DC"))) PPC_WEAK_FUNC(sub_824FF9DC);
PPC_FUNC_IMPL(__imp__sub_824FF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF9E0"))) PPC_WEAK_FUNC(sub_824FF9E0);
PPC_FUNC_IMPL(__imp__sub_824FF9E0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffa18
	if (cr6.eq) goto loc_824FFA18;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd6b8
	sub_824FD6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFA18:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30344
	ctx.r10.s64 = r11.s64 + 30344;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFA30"))) PPC_WEAK_FUNC(sub_824FFA30);
PPC_FUNC_IMPL(__imp__sub_824FFA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFA34"))) PPC_WEAK_FUNC(sub_824FFA34);
PPC_FUNC_IMPL(__imp__sub_824FFA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFA38"))) PPC_WEAK_FUNC(sub_824FFA38);
PPC_FUNC_IMPL(__imp__sub_824FFA38) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffa70
	if (cr6.eq) goto loc_824FFA70;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd738
	sub_824FD738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFA70:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30472
	ctx.r10.s64 = r11.s64 + 30472;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFA88"))) PPC_WEAK_FUNC(sub_824FFA88);
PPC_FUNC_IMPL(__imp__sub_824FFA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFA8C"))) PPC_WEAK_FUNC(sub_824FFA8C);
PPC_FUNC_IMPL(__imp__sub_824FFA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFA90"))) PPC_WEAK_FUNC(sub_824FFA90);
PPC_FUNC_IMPL(__imp__sub_824FFA90) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffac8
	if (cr6.eq) goto loc_824FFAC8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd7b8
	sub_824FD7B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFAC8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30600
	ctx.r10.s64 = r11.s64 + 30600;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFAE0"))) PPC_WEAK_FUNC(sub_824FFAE0);
PPC_FUNC_IMPL(__imp__sub_824FFAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFAE4"))) PPC_WEAK_FUNC(sub_824FFAE4);
PPC_FUNC_IMPL(__imp__sub_824FFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFAE8"))) PPC_WEAK_FUNC(sub_824FFAE8);
PPC_FUNC_IMPL(__imp__sub_824FFAE8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffb20
	if (cr6.eq) goto loc_824FFB20;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd838
	sub_824FD838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFB20:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30720
	ctx.r10.s64 = r11.s64 + 30720;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFB38"))) PPC_WEAK_FUNC(sub_824FFB38);
PPC_FUNC_IMPL(__imp__sub_824FFB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFB3C"))) PPC_WEAK_FUNC(sub_824FFB3C);
PPC_FUNC_IMPL(__imp__sub_824FFB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFB40"))) PPC_WEAK_FUNC(sub_824FFB40);
PPC_FUNC_IMPL(__imp__sub_824FFB40) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffb78
	if (cr6.eq) goto loc_824FFB78;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd8b8
	sub_824FD8B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFB78:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30848
	ctx.r10.s64 = r11.s64 + 30848;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFB90"))) PPC_WEAK_FUNC(sub_824FFB90);
PPC_FUNC_IMPL(__imp__sub_824FFB90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFB94"))) PPC_WEAK_FUNC(sub_824FFB94);
PPC_FUNC_IMPL(__imp__sub_824FFB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFB98"))) PPC_WEAK_FUNC(sub_824FFB98);
PPC_FUNC_IMPL(__imp__sub_824FFB98) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffbd0
	if (cr6.eq) goto loc_824FFBD0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd938
	sub_824FD938(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFBD0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,30976
	ctx.r10.s64 = r11.s64 + 30976;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFBE8"))) PPC_WEAK_FUNC(sub_824FFBE8);
PPC_FUNC_IMPL(__imp__sub_824FFBE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFBEC"))) PPC_WEAK_FUNC(sub_824FFBEC);
PPC_FUNC_IMPL(__imp__sub_824FFBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFBF0"))) PPC_WEAK_FUNC(sub_824FFBF0);
PPC_FUNC_IMPL(__imp__sub_824FFBF0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffc28
	if (cr6.eq) goto loc_824FFC28;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd9b8
	sub_824FD9B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFC28:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31104
	ctx.r10.s64 = r11.s64 + 31104;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFC40"))) PPC_WEAK_FUNC(sub_824FFC40);
PPC_FUNC_IMPL(__imp__sub_824FFC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFC44"))) PPC_WEAK_FUNC(sub_824FFC44);
PPC_FUNC_IMPL(__imp__sub_824FFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFC48"))) PPC_WEAK_FUNC(sub_824FFC48);
PPC_FUNC_IMPL(__imp__sub_824FFC48) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffc80
	if (cr6.eq) goto loc_824FFC80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fda38
	sub_824FDA38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFC80:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31224
	ctx.r10.s64 = r11.s64 + 31224;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFC98"))) PPC_WEAK_FUNC(sub_824FFC98);
PPC_FUNC_IMPL(__imp__sub_824FFC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFC9C"))) PPC_WEAK_FUNC(sub_824FFC9C);
PPC_FUNC_IMPL(__imp__sub_824FFC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFCA0"))) PPC_WEAK_FUNC(sub_824FFCA0);
PPC_FUNC_IMPL(__imp__sub_824FFCA0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffcd8
	if (cr6.eq) goto loc_824FFCD8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdab8
	sub_824FDAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFCD8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31352
	ctx.r10.s64 = r11.s64 + 31352;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFCF0"))) PPC_WEAK_FUNC(sub_824FFCF0);
PPC_FUNC_IMPL(__imp__sub_824FFCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFCF4"))) PPC_WEAK_FUNC(sub_824FFCF4);
PPC_FUNC_IMPL(__imp__sub_824FFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFCF8"))) PPC_WEAK_FUNC(sub_824FFCF8);
PPC_FUNC_IMPL(__imp__sub_824FFCF8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffd30
	if (cr6.eq) goto loc_824FFD30;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdb38
	sub_824FDB38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFD30:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31472
	ctx.r10.s64 = r11.s64 + 31472;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFD48"))) PPC_WEAK_FUNC(sub_824FFD48);
PPC_FUNC_IMPL(__imp__sub_824FFD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFD4C"))) PPC_WEAK_FUNC(sub_824FFD4C);
PPC_FUNC_IMPL(__imp__sub_824FFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFD50"))) PPC_WEAK_FUNC(sub_824FFD50);
PPC_FUNC_IMPL(__imp__sub_824FFD50) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffd88
	if (cr6.eq) goto loc_824FFD88;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdbb8
	sub_824FDBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFD88:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31600
	ctx.r10.s64 = r11.s64 + 31600;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFDA0"))) PPC_WEAK_FUNC(sub_824FFDA0);
PPC_FUNC_IMPL(__imp__sub_824FFDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFDA4"))) PPC_WEAK_FUNC(sub_824FFDA4);
PPC_FUNC_IMPL(__imp__sub_824FFDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFDA8"))) PPC_WEAK_FUNC(sub_824FFDA8);
PPC_FUNC_IMPL(__imp__sub_824FFDA8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffde0
	if (cr6.eq) goto loc_824FFDE0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdc38
	sub_824FDC38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFDE0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31720
	ctx.r10.s64 = r11.s64 + 31720;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFDF8"))) PPC_WEAK_FUNC(sub_824FFDF8);
PPC_FUNC_IMPL(__imp__sub_824FFDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFDFC"))) PPC_WEAK_FUNC(sub_824FFDFC);
PPC_FUNC_IMPL(__imp__sub_824FFDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFE00"))) PPC_WEAK_FUNC(sub_824FFE00);
PPC_FUNC_IMPL(__imp__sub_824FFE00) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffe38
	if (cr6.eq) goto loc_824FFE38;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdcb8
	sub_824FDCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFE38:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31840
	ctx.r10.s64 = r11.s64 + 31840;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFE50"))) PPC_WEAK_FUNC(sub_824FFE50);
PPC_FUNC_IMPL(__imp__sub_824FFE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFE54"))) PPC_WEAK_FUNC(sub_824FFE54);
PPC_FUNC_IMPL(__imp__sub_824FFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFE58"))) PPC_WEAK_FUNC(sub_824FFE58);
PPC_FUNC_IMPL(__imp__sub_824FFE58) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffe90
	if (cr6.eq) goto loc_824FFE90;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdd38
	sub_824FDD38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFE90:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,31960
	ctx.r10.s64 = r11.s64 + 31960;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFEA8"))) PPC_WEAK_FUNC(sub_824FFEA8);
PPC_FUNC_IMPL(__imp__sub_824FFEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFEAC"))) PPC_WEAK_FUNC(sub_824FFEAC);
PPC_FUNC_IMPL(__imp__sub_824FFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFEB0"))) PPC_WEAK_FUNC(sub_824FFEB0);
PPC_FUNC_IMPL(__imp__sub_824FFEB0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffee8
	if (cr6.eq) goto loc_824FFEE8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fddb8
	sub_824FDDB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFEE8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32088
	ctx.r10.s64 = r11.s64 + 32088;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFF00"))) PPC_WEAK_FUNC(sub_824FFF00);
PPC_FUNC_IMPL(__imp__sub_824FFF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFF04"))) PPC_WEAK_FUNC(sub_824FFF04);
PPC_FUNC_IMPL(__imp__sub_824FFF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFF08"))) PPC_WEAK_FUNC(sub_824FFF08);
PPC_FUNC_IMPL(__imp__sub_824FFF08) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824fff40
	if (cr6.eq) goto loc_824FFF40;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fde38
	sub_824FDE38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFF40:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32216
	ctx.r10.s64 = r11.s64 + 32216;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFF58"))) PPC_WEAK_FUNC(sub_824FFF58);
PPC_FUNC_IMPL(__imp__sub_824FFF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFF5C"))) PPC_WEAK_FUNC(sub_824FFF5C);
PPC_FUNC_IMPL(__imp__sub_824FFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFF60"))) PPC_WEAK_FUNC(sub_824FFF60);
PPC_FUNC_IMPL(__imp__sub_824FFF60) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824fff98
	if (cr6.eq) goto loc_824FFF98;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdeb8
	sub_824FDEB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFF98:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32344
	ctx.r10.s64 = r11.s64 + 32344;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FFFB0"))) PPC_WEAK_FUNC(sub_824FFFB0);
PPC_FUNC_IMPL(__imp__sub_824FFFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FFFB4"))) PPC_WEAK_FUNC(sub_824FFFB4);
PPC_FUNC_IMPL(__imp__sub_824FFFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FFFB8"))) PPC_WEAK_FUNC(sub_824FFFB8);
PPC_FUNC_IMPL(__imp__sub_824FFFB8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ffff0
	if (cr6.eq) goto loc_824FFFF0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdf38
	sub_824FDF38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FFFF0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32464
	ctx.r10.s64 = r11.s64 + 32464;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500008"))) PPC_WEAK_FUNC(sub_82500008);
PPC_FUNC_IMPL(__imp__sub_82500008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250000C"))) PPC_WEAK_FUNC(sub_8250000C);
PPC_FUNC_IMPL(__imp__sub_8250000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500010"))) PPC_WEAK_FUNC(sub_82500010);
PPC_FUNC_IMPL(__imp__sub_82500010) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500048
	if (cr6.eq) goto loc_82500048;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fdfb8
	sub_824FDFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500048:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32592
	ctx.r10.s64 = r11.s64 + 32592;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500060"))) PPC_WEAK_FUNC(sub_82500060);
PPC_FUNC_IMPL(__imp__sub_82500060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500064"))) PPC_WEAK_FUNC(sub_82500064);
PPC_FUNC_IMPL(__imp__sub_82500064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500068"))) PPC_WEAK_FUNC(sub_82500068);
PPC_FUNC_IMPL(__imp__sub_82500068) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825000a0
	if (cr6.eq) goto loc_825000A0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe038
	sub_824FE038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825000A0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,32712
	ctx.r10.s64 = r11.s64 + 32712;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825000B8"))) PPC_WEAK_FUNC(sub_825000B8);
PPC_FUNC_IMPL(__imp__sub_825000B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825000BC"))) PPC_WEAK_FUNC(sub_825000BC);
PPC_FUNC_IMPL(__imp__sub_825000BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825000C0"))) PPC_WEAK_FUNC(sub_825000C0);
PPC_FUNC_IMPL(__imp__sub_825000C0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825000f8
	if (cr6.eq) goto loc_825000F8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe0b8
	sub_824FE0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825000F8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32704
	ctx.r10.s64 = r11.s64 + -32704;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500110"))) PPC_WEAK_FUNC(sub_82500110);
PPC_FUNC_IMPL(__imp__sub_82500110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500114"))) PPC_WEAK_FUNC(sub_82500114);
PPC_FUNC_IMPL(__imp__sub_82500114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500118"))) PPC_WEAK_FUNC(sub_82500118);
PPC_FUNC_IMPL(__imp__sub_82500118) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500150
	if (cr6.eq) goto loc_82500150;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe138
	sub_824FE138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500150:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32584
	ctx.r10.s64 = r11.s64 + -32584;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500168"))) PPC_WEAK_FUNC(sub_82500168);
PPC_FUNC_IMPL(__imp__sub_82500168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250016C"))) PPC_WEAK_FUNC(sub_8250016C);
PPC_FUNC_IMPL(__imp__sub_8250016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500170"))) PPC_WEAK_FUNC(sub_82500170);
PPC_FUNC_IMPL(__imp__sub_82500170) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825001a8
	if (cr6.eq) goto loc_825001A8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe1b8
	sub_824FE1B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825001A8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32464
	ctx.r10.s64 = r11.s64 + -32464;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825001C0"))) PPC_WEAK_FUNC(sub_825001C0);
PPC_FUNC_IMPL(__imp__sub_825001C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825001C4"))) PPC_WEAK_FUNC(sub_825001C4);
PPC_FUNC_IMPL(__imp__sub_825001C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825001C8"))) PPC_WEAK_FUNC(sub_825001C8);
PPC_FUNC_IMPL(__imp__sub_825001C8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500200
	if (cr6.eq) goto loc_82500200;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe238
	sub_824FE238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500200:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32344
	ctx.r10.s64 = r11.s64 + -32344;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500218"))) PPC_WEAK_FUNC(sub_82500218);
PPC_FUNC_IMPL(__imp__sub_82500218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250021C"))) PPC_WEAK_FUNC(sub_8250021C);
PPC_FUNC_IMPL(__imp__sub_8250021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500220"))) PPC_WEAK_FUNC(sub_82500220);
PPC_FUNC_IMPL(__imp__sub_82500220) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500258
	if (cr6.eq) goto loc_82500258;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe2b8
	sub_824FE2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500258:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32224
	ctx.r10.s64 = r11.s64 + -32224;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500270"))) PPC_WEAK_FUNC(sub_82500270);
PPC_FUNC_IMPL(__imp__sub_82500270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500274"))) PPC_WEAK_FUNC(sub_82500274);
PPC_FUNC_IMPL(__imp__sub_82500274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500278"))) PPC_WEAK_FUNC(sub_82500278);
PPC_FUNC_IMPL(__imp__sub_82500278) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825002b0
	if (cr6.eq) goto loc_825002B0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe338
	sub_824FE338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825002B0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-32104
	ctx.r10.s64 = r11.s64 + -32104;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825002C8"))) PPC_WEAK_FUNC(sub_825002C8);
PPC_FUNC_IMPL(__imp__sub_825002C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825002CC"))) PPC_WEAK_FUNC(sub_825002CC);
PPC_FUNC_IMPL(__imp__sub_825002CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825002D0"))) PPC_WEAK_FUNC(sub_825002D0);
PPC_FUNC_IMPL(__imp__sub_825002D0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500308
	if (cr6.eq) goto loc_82500308;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe3b8
	sub_824FE3B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500308:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31984
	ctx.r10.s64 = r11.s64 + -31984;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500320"))) PPC_WEAK_FUNC(sub_82500320);
PPC_FUNC_IMPL(__imp__sub_82500320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500324"))) PPC_WEAK_FUNC(sub_82500324);
PPC_FUNC_IMPL(__imp__sub_82500324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500328"))) PPC_WEAK_FUNC(sub_82500328);
PPC_FUNC_IMPL(__imp__sub_82500328) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500360
	if (cr6.eq) goto loc_82500360;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe438
	sub_824FE438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500360:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31856
	ctx.r10.s64 = r11.s64 + -31856;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500378"))) PPC_WEAK_FUNC(sub_82500378);
PPC_FUNC_IMPL(__imp__sub_82500378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250037C"))) PPC_WEAK_FUNC(sub_8250037C);
PPC_FUNC_IMPL(__imp__sub_8250037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500380"))) PPC_WEAK_FUNC(sub_82500380);
PPC_FUNC_IMPL(__imp__sub_82500380) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825003b8
	if (cr6.eq) goto loc_825003B8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe4b8
	sub_824FE4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825003B8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31728
	ctx.r10.s64 = r11.s64 + -31728;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825003D0"))) PPC_WEAK_FUNC(sub_825003D0);
PPC_FUNC_IMPL(__imp__sub_825003D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825003D4"))) PPC_WEAK_FUNC(sub_825003D4);
PPC_FUNC_IMPL(__imp__sub_825003D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825003D8"))) PPC_WEAK_FUNC(sub_825003D8);
PPC_FUNC_IMPL(__imp__sub_825003D8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500410
	if (cr6.eq) goto loc_82500410;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe538
	sub_824FE538(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500410:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31608
	ctx.r10.s64 = r11.s64 + -31608;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500428"))) PPC_WEAK_FUNC(sub_82500428);
PPC_FUNC_IMPL(__imp__sub_82500428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250042C"))) PPC_WEAK_FUNC(sub_8250042C);
PPC_FUNC_IMPL(__imp__sub_8250042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500430"))) PPC_WEAK_FUNC(sub_82500430);
PPC_FUNC_IMPL(__imp__sub_82500430) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500468
	if (cr6.eq) goto loc_82500468;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe5b8
	sub_824FE5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500468:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31488
	ctx.r10.s64 = r11.s64 + -31488;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500480"))) PPC_WEAK_FUNC(sub_82500480);
PPC_FUNC_IMPL(__imp__sub_82500480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500484"))) PPC_WEAK_FUNC(sub_82500484);
PPC_FUNC_IMPL(__imp__sub_82500484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500488"))) PPC_WEAK_FUNC(sub_82500488);
PPC_FUNC_IMPL(__imp__sub_82500488) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825004c0
	if (cr6.eq) goto loc_825004C0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe638
	sub_824FE638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825004C0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31368
	ctx.r10.s64 = r11.s64 + -31368;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825004D8"))) PPC_WEAK_FUNC(sub_825004D8);
PPC_FUNC_IMPL(__imp__sub_825004D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825004DC"))) PPC_WEAK_FUNC(sub_825004DC);
PPC_FUNC_IMPL(__imp__sub_825004DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825004E0"))) PPC_WEAK_FUNC(sub_825004E0);
PPC_FUNC_IMPL(__imp__sub_825004E0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500518
	if (cr6.eq) goto loc_82500518;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe6b8
	sub_824FE6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500518:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31240
	ctx.r10.s64 = r11.s64 + -31240;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500530"))) PPC_WEAK_FUNC(sub_82500530);
PPC_FUNC_IMPL(__imp__sub_82500530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500534"))) PPC_WEAK_FUNC(sub_82500534);
PPC_FUNC_IMPL(__imp__sub_82500534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500538"))) PPC_WEAK_FUNC(sub_82500538);
PPC_FUNC_IMPL(__imp__sub_82500538) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500570
	if (cr6.eq) goto loc_82500570;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe738
	sub_824FE738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500570:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-31120
	ctx.r10.s64 = r11.s64 + -31120;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500588"))) PPC_WEAK_FUNC(sub_82500588);
PPC_FUNC_IMPL(__imp__sub_82500588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250058C"))) PPC_WEAK_FUNC(sub_8250058C);
PPC_FUNC_IMPL(__imp__sub_8250058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500590"))) PPC_WEAK_FUNC(sub_82500590);
PPC_FUNC_IMPL(__imp__sub_82500590) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825005c8
	if (cr6.eq) goto loc_825005C8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe7b8
	sub_824FE7B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825005C8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30992
	ctx.r10.s64 = r11.s64 + -30992;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825005E0"))) PPC_WEAK_FUNC(sub_825005E0);
PPC_FUNC_IMPL(__imp__sub_825005E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825005E4"))) PPC_WEAK_FUNC(sub_825005E4);
PPC_FUNC_IMPL(__imp__sub_825005E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825005E8"))) PPC_WEAK_FUNC(sub_825005E8);
PPC_FUNC_IMPL(__imp__sub_825005E8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500620
	if (cr6.eq) goto loc_82500620;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe838
	sub_824FE838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500620:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30872
	ctx.r10.s64 = r11.s64 + -30872;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500638"))) PPC_WEAK_FUNC(sub_82500638);
PPC_FUNC_IMPL(__imp__sub_82500638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250063C"))) PPC_WEAK_FUNC(sub_8250063C);
PPC_FUNC_IMPL(__imp__sub_8250063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500640"))) PPC_WEAK_FUNC(sub_82500640);
PPC_FUNC_IMPL(__imp__sub_82500640) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500678
	if (cr6.eq) goto loc_82500678;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe8b8
	sub_824FE8B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500678:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30752
	ctx.r10.s64 = r11.s64 + -30752;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500690"))) PPC_WEAK_FUNC(sub_82500690);
PPC_FUNC_IMPL(__imp__sub_82500690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500694"))) PPC_WEAK_FUNC(sub_82500694);
PPC_FUNC_IMPL(__imp__sub_82500694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500698"))) PPC_WEAK_FUNC(sub_82500698);
PPC_FUNC_IMPL(__imp__sub_82500698) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825006d0
	if (cr6.eq) goto loc_825006D0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe938
	sub_824FE938(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825006D0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30632
	ctx.r10.s64 = r11.s64 + -30632;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825006E8"))) PPC_WEAK_FUNC(sub_825006E8);
PPC_FUNC_IMPL(__imp__sub_825006E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825006EC"))) PPC_WEAK_FUNC(sub_825006EC);
PPC_FUNC_IMPL(__imp__sub_825006EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825006F0"))) PPC_WEAK_FUNC(sub_825006F0);
PPC_FUNC_IMPL(__imp__sub_825006F0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500728
	if (cr6.eq) goto loc_82500728;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fe9b8
	sub_824FE9B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500728:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30512
	ctx.r10.s64 = r11.s64 + -30512;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500740"))) PPC_WEAK_FUNC(sub_82500740);
PPC_FUNC_IMPL(__imp__sub_82500740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82500744"))) PPC_WEAK_FUNC(sub_82500744);
PPC_FUNC_IMPL(__imp__sub_82500744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500748"))) PPC_WEAK_FUNC(sub_82500748);
PPC_FUNC_IMPL(__imp__sub_82500748) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500780
	if (cr6.eq) goto loc_82500780;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fea38
	sub_824FEA38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500780:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30392
	ctx.r10.s64 = r11.s64 + -30392;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500798"))) PPC_WEAK_FUNC(sub_82500798);
PPC_FUNC_IMPL(__imp__sub_82500798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250079C"))) PPC_WEAK_FUNC(sub_8250079C);
PPC_FUNC_IMPL(__imp__sub_8250079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825007A0"))) PPC_WEAK_FUNC(sub_825007A0);
PPC_FUNC_IMPL(__imp__sub_825007A0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825007d8
	if (cr6.eq) goto loc_825007D8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824feab8
	sub_824FEAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825007D8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30272
	ctx.r10.s64 = r11.s64 + -30272;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825007F0"))) PPC_WEAK_FUNC(sub_825007F0);
PPC_FUNC_IMPL(__imp__sub_825007F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825007F4"))) PPC_WEAK_FUNC(sub_825007F4);
PPC_FUNC_IMPL(__imp__sub_825007F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825007F8"))) PPC_WEAK_FUNC(sub_825007F8);
PPC_FUNC_IMPL(__imp__sub_825007F8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500830
	if (cr6.eq) goto loc_82500830;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824feb38
	sub_824FEB38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500830:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30152
	ctx.r10.s64 = r11.s64 + -30152;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82500848"))) PPC_WEAK_FUNC(sub_82500848);
PPC_FUNC_IMPL(__imp__sub_82500848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250084C"))) PPC_WEAK_FUNC(sub_8250084C);
PPC_FUNC_IMPL(__imp__sub_8250084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500850"))) PPC_WEAK_FUNC(sub_82500850);
PPC_FUNC_IMPL(__imp__sub_82500850) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82500888
	if (cr6.eq) goto loc_82500888;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824febb8
	sub_824FEBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82500888:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-30032
	ctx.r10.s64 = r11.s64 + -30032;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825008A0"))) PPC_WEAK_FUNC(sub_825008A0);
PPC_FUNC_IMPL(__imp__sub_825008A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825008A4"))) PPC_WEAK_FUNC(sub_825008A4);
PPC_FUNC_IMPL(__imp__sub_825008A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825008A8"))) PPC_WEAK_FUNC(sub_825008A8);
PPC_FUNC_IMPL(__imp__sub_825008A8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825008e0
	if (cr6.eq) goto loc_825008E0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fec38
	sub_824FEC38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825008E0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-29912
	ctx.r10.s64 = r11.s64 + -29912;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825008F8"))) PPC_WEAK_FUNC(sub_825008F8);
PPC_FUNC_IMPL(__imp__sub_825008F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825008FC"))) PPC_WEAK_FUNC(sub_825008FC);
PPC_FUNC_IMPL(__imp__sub_825008FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500900"))) PPC_WEAK_FUNC(sub_82500900);
PPC_FUNC_IMPL(__imp__sub_82500900) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500988
	if (cr6.eq) goto loc_82500988;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500988
	if (!cr6.eq) goto loc_82500988;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82500988:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825009b4
	if (cr6.eq) goto loc_825009B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825009B4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825009C4"))) PPC_WEAK_FUNC(sub_825009C4);
PPC_FUNC_IMPL(__imp__sub_825009C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825009C8"))) PPC_WEAK_FUNC(sub_825009C8);
PPC_FUNC_IMPL(__imp__sub_825009C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500a68
	if (cr6.eq) goto loc_82500A68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500a68
	if (!cr6.eq) goto loc_82500A68;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82500A68:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500a98
	if (cr6.eq) goto loc_82500A98;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500A98:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82500AA8"))) PPC_WEAK_FUNC(sub_82500AA8);
PPC_FUNC_IMPL(__imp__sub_82500AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82500AAC"))) PPC_WEAK_FUNC(sub_82500AAC);
PPC_FUNC_IMPL(__imp__sub_82500AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500AB0"))) PPC_WEAK_FUNC(sub_82500AB0);
PPC_FUNC_IMPL(__imp__sub_82500AB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500b68
	if (cr6.eq) goto loc_82500B68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500b68
	if (!cr6.eq) goto loc_82500B68;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82500B68:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500b9c
	if (cr6.eq) goto loc_82500B9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500B9C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82500BAC"))) PPC_WEAK_FUNC(sub_82500BAC);
PPC_FUNC_IMPL(__imp__sub_82500BAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82500BB0"))) PPC_WEAK_FUNC(sub_82500BB0);
PPC_FUNC_IMPL(__imp__sub_82500BB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500c68
	if (cr6.eq) goto loc_82500C68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500c68
	if (!cr6.eq) goto loc_82500C68;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82500C68:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500c9c
	if (cr6.eq) goto loc_82500C9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500C9C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82500CAC"))) PPC_WEAK_FUNC(sub_82500CAC);
PPC_FUNC_IMPL(__imp__sub_82500CAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82500CB0"))) PPC_WEAK_FUNC(sub_82500CB0);
PPC_FUNC_IMPL(__imp__sub_82500CB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500d50
	if (cr6.eq) goto loc_82500D50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500d50
	if (!cr6.eq) goto loc_82500D50;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82500D50:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500d80
	if (cr6.eq) goto loc_82500D80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500D80:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82500D90"))) PPC_WEAK_FUNC(sub_82500D90);
PPC_FUNC_IMPL(__imp__sub_82500D90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82500D94"))) PPC_WEAK_FUNC(sub_82500D94);
PPC_FUNC_IMPL(__imp__sub_82500D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500D98"))) PPC_WEAK_FUNC(sub_82500D98);
PPC_FUNC_IMPL(__imp__sub_82500D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500e20
	if (cr6.eq) goto loc_82500E20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500e20
	if (!cr6.eq) goto loc_82500E20;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82500E20:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500e68
	if (cr6.eq) goto loc_82500E68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500E68:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82500E78"))) PPC_WEAK_FUNC(sub_82500E78);
PPC_FUNC_IMPL(__imp__sub_82500E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82500E7C"))) PPC_WEAK_FUNC(sub_82500E7C);
PPC_FUNC_IMPL(__imp__sub_82500E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500E80"))) PPC_WEAK_FUNC(sub_82500E80);
PPC_FUNC_IMPL(__imp__sub_82500E80) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82500f20
	if (cr6.eq) goto loc_82500F20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82500f20
	if (!cr6.eq) goto loc_82500F20;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82500F20:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82500f60
	if (cr6.eq) goto loc_82500F60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82500F60:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82500F70"))) PPC_WEAK_FUNC(sub_82500F70);
PPC_FUNC_IMPL(__imp__sub_82500F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82500F74"))) PPC_WEAK_FUNC(sub_82500F74);
PPC_FUNC_IMPL(__imp__sub_82500F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82500F78"))) PPC_WEAK_FUNC(sub_82500F78);
PPC_FUNC_IMPL(__imp__sub_82500F78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501018
	if (cr6.eq) goto loc_82501018;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501018
	if (!cr6.eq) goto loc_82501018;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501018:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501064
	if (cr6.eq) goto loc_82501064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501064:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82501074"))) PPC_WEAK_FUNC(sub_82501074);
PPC_FUNC_IMPL(__imp__sub_82501074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501078"))) PPC_WEAK_FUNC(sub_82501078);
PPC_FUNC_IMPL(__imp__sub_82501078) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501118
	if (cr6.eq) goto loc_82501118;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501118
	if (!cr6.eq) goto loc_82501118;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501118:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8250113c
	if (cr6.eq) goto loc_8250113C;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x82501140
	goto loc_82501140;
loc_8250113C:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_82501140:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r28,r3
	r31.s64 = ctx.r3.s64 - r28.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501164
	if (cr6.eq) goto loc_82501164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501164:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82501174"))) PPC_WEAK_FUNC(sub_82501174);
PPC_FUNC_IMPL(__imp__sub_82501174) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501178"))) PPC_WEAK_FUNC(sub_82501178);
PPC_FUNC_IMPL(__imp__sub_82501178) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501218
	if (cr6.eq) goto loc_82501218;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501218
	if (!cr6.eq) goto loc_82501218;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501218:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501264
	if (cr6.eq) goto loc_82501264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501264:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82501274"))) PPC_WEAK_FUNC(sub_82501274);
PPC_FUNC_IMPL(__imp__sub_82501274) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501278"))) PPC_WEAK_FUNC(sub_82501278);
PPC_FUNC_IMPL(__imp__sub_82501278) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501330
	if (cr6.eq) goto loc_82501330;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501330
	if (!cr6.eq) goto loc_82501330;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501330:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501364
	if (cr6.eq) goto loc_82501364;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501364:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82501374"))) PPC_WEAK_FUNC(sub_82501374);
PPC_FUNC_IMPL(__imp__sub_82501374) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82501378"))) PPC_WEAK_FUNC(sub_82501378);
PPC_FUNC_IMPL(__imp__sub_82501378) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501400
	if (cr6.eq) goto loc_82501400;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29788
	ctx.r4.s64 = ctx.r10.s64 + -29788;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501400
	if (!cr6.eq) goto loc_82501400;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4936
	ctx.r10.s64 = r11.s64 + -4936;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501400:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250143c
	if (cr6.eq) goto loc_8250143C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250143C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8250144C"))) PPC_WEAK_FUNC(sub_8250144C);
PPC_FUNC_IMPL(__imp__sub_8250144C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82501450"))) PPC_WEAK_FUNC(sub_82501450);
PPC_FUNC_IMPL(__imp__sub_82501450) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825014d8
	if (cr6.eq) goto loc_825014D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29740
	ctx.r4.s64 = ctx.r10.s64 + -29740;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825014d8
	if (!cr6.eq) goto loc_825014D8;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4928
	ctx.r10.s64 = r11.s64 + -4928;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_825014D8:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501504
	if (cr6.eq) goto loc_82501504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501504:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82501514"))) PPC_WEAK_FUNC(sub_82501514);
PPC_FUNC_IMPL(__imp__sub_82501514) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82501518"))) PPC_WEAK_FUNC(sub_82501518);
PPC_FUNC_IMPL(__imp__sub_82501518) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825015a0
	if (cr6.eq) goto loc_825015A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29740
	ctx.r4.s64 = ctx.r10.s64 + -29740;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825015a0
	if (!cr6.eq) goto loc_825015A0;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4928
	ctx.r10.s64 = r11.s64 + -4928;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_825015A0:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825015dc
	if (cr6.eq) goto loc_825015DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825015DC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825015EC"))) PPC_WEAK_FUNC(sub_825015EC);
PPC_FUNC_IMPL(__imp__sub_825015EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825015F0"))) PPC_WEAK_FUNC(sub_825015F0);
PPC_FUNC_IMPL(__imp__sub_825015F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501678
	if (cr6.eq) goto loc_82501678;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29740
	ctx.r4.s64 = ctx.r10.s64 + -29740;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501678
	if (!cr6.eq) goto loc_82501678;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4928
	ctx.r10.s64 = r11.s64 + -4928;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501678:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82501698
	if (cr6.eq) goto loc_82501698;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8250169c
	goto loc_8250169C;
loc_82501698:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_8250169C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825016c0
	if (cr6.eq) goto loc_825016C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825016C0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825016D0"))) PPC_WEAK_FUNC(sub_825016D0);
PPC_FUNC_IMPL(__imp__sub_825016D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825016D4"))) PPC_WEAK_FUNC(sub_825016D4);
PPC_FUNC_IMPL(__imp__sub_825016D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825016D8"))) PPC_WEAK_FUNC(sub_825016D8);
PPC_FUNC_IMPL(__imp__sub_825016D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501778
	if (cr6.eq) goto loc_82501778;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29740
	ctx.r4.s64 = ctx.r10.s64 + -29740;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501778
	if (!cr6.eq) goto loc_82501778;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4928
	ctx.r10.s64 = r11.s64 + -4928;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501778:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825017b0
	if (cr6.eq) goto loc_825017B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825017B0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825017C0"))) PPC_WEAK_FUNC(sub_825017C0);
PPC_FUNC_IMPL(__imp__sub_825017C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825017C4"))) PPC_WEAK_FUNC(sub_825017C4);
PPC_FUNC_IMPL(__imp__sub_825017C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825017C8"))) PPC_WEAK_FUNC(sub_825017C8);
PPC_FUNC_IMPL(__imp__sub_825017C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501868
	if (cr6.eq) goto loc_82501868;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501868
	if (!cr6.eq) goto loc_82501868;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501868:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501898
	if (cr6.eq) goto loc_82501898;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501898:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825018A8"))) PPC_WEAK_FUNC(sub_825018A8);
PPC_FUNC_IMPL(__imp__sub_825018A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825018AC"))) PPC_WEAK_FUNC(sub_825018AC);
PPC_FUNC_IMPL(__imp__sub_825018AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825018B0"))) PPC_WEAK_FUNC(sub_825018B0);
PPC_FUNC_IMPL(__imp__sub_825018B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501950
	if (cr6.eq) goto loc_82501950;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501950
	if (!cr6.eq) goto loc_82501950;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501950:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501980
	if (cr6.eq) goto loc_82501980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501980:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82501990"))) PPC_WEAK_FUNC(sub_82501990);
PPC_FUNC_IMPL(__imp__sub_82501990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501994"))) PPC_WEAK_FUNC(sub_82501994);
PPC_FUNC_IMPL(__imp__sub_82501994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82501998"))) PPC_WEAK_FUNC(sub_82501998);
PPC_FUNC_IMPL(__imp__sub_82501998) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501a20
	if (cr6.eq) goto loc_82501A20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501a20
	if (!cr6.eq) goto loc_82501A20;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501A20:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501a4c
	if (cr6.eq) goto loc_82501A4C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501A4C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82501A5C"))) PPC_WEAK_FUNC(sub_82501A5C);
PPC_FUNC_IMPL(__imp__sub_82501A5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82501A60"))) PPC_WEAK_FUNC(sub_82501A60);
PPC_FUNC_IMPL(__imp__sub_82501A60) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac708
	sub_826AC708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501afc
	if (cr6.eq) goto loc_82501AFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501afc
	if (!cr6.eq) goto loc_82501AFC;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501AFC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501b2c
	if (cr6.eq) goto loc_82501B2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501B2C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82501B3C"))) PPC_WEAK_FUNC(sub_82501B3C);
PPC_FUNC_IMPL(__imp__sub_82501B3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501B40"))) PPC_WEAK_FUNC(sub_82501B40);
PPC_FUNC_IMPL(__imp__sub_82501B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-4912
	ctx.r10.s64 = ctx.r10.s64 + -4912;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-29496
	ctx.r6.s64 = ctx.r9.s64 + -29496;
	// addi r5,r8,-28600
	ctx.r5.s64 = ctx.r8.s64 + -28600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r4,r7,-29788
	ctx.r4.s64 = ctx.r7.s64 + -29788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826a94d0
	sub_826A94D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82501BB4"))) PPC_WEAK_FUNC(sub_82501BB4);
PPC_FUNC_IMPL(__imp__sub_82501BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82501BB8"))) PPC_WEAK_FUNC(sub_82501BB8);
PPC_FUNC_IMPL(__imp__sub_82501BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-4848
	ctx.r10.s64 = ctx.r10.s64 + -4848;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-29496
	ctx.r6.s64 = ctx.r9.s64 + -29496;
	// addi r5,r8,-28600
	ctx.r5.s64 = ctx.r8.s64 + -28600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r4,r7,-29740
	ctx.r4.s64 = ctx.r7.s64 + -29740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826a94d0
	sub_826A94D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82501C2C"))) PPC_WEAK_FUNC(sub_82501C2C);
PPC_FUNC_IMPL(__imp__sub_82501C2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82501C30"))) PPC_WEAK_FUNC(sub_82501C30);
PPC_FUNC_IMPL(__imp__sub_82501C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-4784
	ctx.r10.s64 = ctx.r10.s64 + -4784;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-29496
	ctx.r6.s64 = ctx.r9.s64 + -29496;
	// addi r5,r8,-28600
	ctx.r5.s64 = ctx.r8.s64 + -28600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r4,r7,-29692
	ctx.r4.s64 = ctx.r7.s64 + -29692;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826a94d0
	sub_826A94D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82501CA4"))) PPC_WEAK_FUNC(sub_82501CA4);
PPC_FUNC_IMPL(__imp__sub_82501CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82501CA8"))) PPC_WEAK_FUNC(sub_82501CA8);
PPC_FUNC_IMPL(__imp__sub_82501CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501d30
	if (cr6.eq) goto loc_82501D30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501d30
	if (!cr6.eq) goto loc_82501D30;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501D30:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501d78
	if (cr6.eq) goto loc_82501D78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501D78:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82501D88"))) PPC_WEAK_FUNC(sub_82501D88);
PPC_FUNC_IMPL(__imp__sub_82501D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82501D8C"))) PPC_WEAK_FUNC(sub_82501D8C);
PPC_FUNC_IMPL(__imp__sub_82501D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82501D90"))) PPC_WEAK_FUNC(sub_82501D90);
PPC_FUNC_IMPL(__imp__sub_82501D90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501e18
	if (cr6.eq) goto loc_82501E18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501e18
	if (!cr6.eq) goto loc_82501E18;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82501E18:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501e54
	if (cr6.eq) goto loc_82501E54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501E54:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82501E64"))) PPC_WEAK_FUNC(sub_82501E64);
PPC_FUNC_IMPL(__imp__sub_82501E64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82501E68"))) PPC_WEAK_FUNC(sub_82501E68);
PPC_FUNC_IMPL(__imp__sub_82501E68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501f08
	if (cr6.eq) goto loc_82501F08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501f08
	if (!cr6.eq) goto loc_82501F08;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501F08:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82501f38
	if (cr6.eq) goto loc_82501F38;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82501F38:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82501F48"))) PPC_WEAK_FUNC(sub_82501F48);
PPC_FUNC_IMPL(__imp__sub_82501F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82501F4C"))) PPC_WEAK_FUNC(sub_82501F4C);
PPC_FUNC_IMPL(__imp__sub_82501F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82501F50"))) PPC_WEAK_FUNC(sub_82501F50);
PPC_FUNC_IMPL(__imp__sub_82501F50) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82501ff0
	if (cr6.eq) goto loc_82501FF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82501ff0
	if (!cr6.eq) goto loc_82501FF0;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82501FF0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502030
	if (cr6.eq) goto loc_82502030;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502030:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82502040"))) PPC_WEAK_FUNC(sub_82502040);
PPC_FUNC_IMPL(__imp__sub_82502040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82502044"))) PPC_WEAK_FUNC(sub_82502044);
PPC_FUNC_IMPL(__imp__sub_82502044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502048"))) PPC_WEAK_FUNC(sub_82502048);
PPC_FUNC_IMPL(__imp__sub_82502048) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac708
	sub_826AC708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825020e4
	if (cr6.eq) goto loc_825020E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825020e4
	if (!cr6.eq) goto loc_825020E4;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_825020E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502124
	if (cr6.eq) goto loc_82502124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502124:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82502134"))) PPC_WEAK_FUNC(sub_82502134);
PPC_FUNC_IMPL(__imp__sub_82502134) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82502138"))) PPC_WEAK_FUNC(sub_82502138);
PPC_FUNC_IMPL(__imp__sub_82502138) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825021d8
	if (cr6.eq) goto loc_825021D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825021d8
	if (!cr6.eq) goto loc_825021D8;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_825021D8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502224
	if (cr6.eq) goto loc_82502224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502224:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82502234"))) PPC_WEAK_FUNC(sub_82502234);
PPC_FUNC_IMPL(__imp__sub_82502234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82502238"))) PPC_WEAK_FUNC(sub_82502238);
PPC_FUNC_IMPL(__imp__sub_82502238) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825022d8
	if (cr6.eq) goto loc_825022D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825022d8
	if (!cr6.eq) goto loc_825022D8;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_825022D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825022fc
	if (cr6.eq) goto loc_825022FC;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x82502300
	goto loc_82502300;
loc_825022FC:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_82502300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r28,r3
	r31.s64 = ctx.r3.s64 - r28.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502324
	if (cr6.eq) goto loc_82502324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502324:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82502334"))) PPC_WEAK_FUNC(sub_82502334);
PPC_FUNC_IMPL(__imp__sub_82502334) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82502338"))) PPC_WEAK_FUNC(sub_82502338);
PPC_FUNC_IMPL(__imp__sub_82502338) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825023f0
	if (cr6.eq) goto loc_825023F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825023f0
	if (!cr6.eq) goto loc_825023F0;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_825023F0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502434
	if (cr6.eq) goto loc_82502434;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502434:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82502444"))) PPC_WEAK_FUNC(sub_82502444);
PPC_FUNC_IMPL(__imp__sub_82502444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82502448"))) PPC_WEAK_FUNC(sub_82502448);
PPC_FUNC_IMPL(__imp__sub_82502448) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825024e8
	if (cr6.eq) goto loc_825024E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-29692
	ctx.r4.s64 = ctx.r10.s64 + -29692;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825024e8
	if (!cr6.eq) goto loc_825024E8;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r10,r11,-4920
	ctx.r10.s64 = r11.s64 + -4920;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_825024E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82502534
	if (cr6.eq) goto loc_82502534;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82502534:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82502544"))) PPC_WEAK_FUNC(sub_82502544);
PPC_FUNC_IMPL(__imp__sub_82502544) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82502548"))) PPC_WEAK_FUNC(sub_82502548);
PPC_FUNC_IMPL(__imp__sub_82502548) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82502590
	if (cr6.eq) goto loc_82502590;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ff030
	sub_824FF030(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8250259c
	if (!cr6.lt) goto loc_8250259C;
loc_82502590:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8250259C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82502590
	if (!cr6.eq) goto loc_82502590;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x825025d0
	if (!cr6.eq) goto loc_825025D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825025D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825025D4"))) PPC_WEAK_FUNC(sub_825025D4);
PPC_FUNC_IMPL(__imp__sub_825025D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825025D8"))) PPC_WEAK_FUNC(sub_825025D8);
PPC_FUNC_IMPL(__imp__sub_825025D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82502620
	if (cr6.eq) goto loc_82502620;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ff030
	sub_824FF030(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8250262c
	if (!cr6.lt) goto loc_8250262C;
loc_82502620:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8250262C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82502620
	if (!cr6.eq) goto loc_82502620;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82502660
	if (!cr6.eq) goto loc_82502660;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82502660:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82502664"))) PPC_WEAK_FUNC(sub_82502664);
PPC_FUNC_IMPL(__imp__sub_82502664) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82502668"))) PPC_WEAK_FUNC(sub_82502668);
PPC_FUNC_IMPL(__imp__sub_82502668) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825026b0
	if (cr6.eq) goto loc_825026B0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ff210
	sub_824FF210(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825026bc
	if (!cr6.lt) goto loc_825026BC;
loc_825026B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_825026BC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x825026ec
	if (cr6.eq) goto loc_825026EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x825026f0
	if (!cr6.eq) goto loc_825026F0;
loc_825026EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825026F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825026F4"))) PPC_WEAK_FUNC(sub_825026F4);
PPC_FUNC_IMPL(__imp__sub_825026F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825026F8"))) PPC_WEAK_FUNC(sub_825026F8);
PPC_FUNC_IMPL(__imp__sub_825026F8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r4,-24083(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -24083);
	// bl 0x824feee0
	sub_824FEEE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82502738
	if (!cr6.lt) goto loc_82502738;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82502768
	goto loc_82502768;
loc_82502738:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82502764
	if (cr6.eq) goto loc_82502764;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82502768
	if (!cr6.eq) goto loc_82502768;
loc_82502764:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82502768:
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

__attribute__((alias("__imp__sub_8250277C"))) PPC_WEAK_FUNC(sub_8250277C);
PPC_FUNC_IMPL(__imp__sub_8250277C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82502780"))) PPC_WEAK_FUNC(sub_82502780);
PPC_FUNC_IMPL(__imp__sub_82502780) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r4,-24083(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -24083);
	// bl 0x824feee0
	sub_824FEEE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825027c0
	if (!cr6.lt) goto loc_825027C0;
loc_825027B8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825027f0
	goto loc_825027F0;
loc_825027C0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825027b8
	if (!cr6.eq) goto loc_825027B8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x825027f0
	if (!cr6.eq) goto loc_825027F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825027F0:
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

__attribute__((alias("__imp__sub_82502804"))) PPC_WEAK_FUNC(sub_82502804);
PPC_FUNC_IMPL(__imp__sub_82502804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82502808"))) PPC_WEAK_FUNC(sub_82502808);
PPC_FUNC_IMPL(__imp__sub_82502808) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,16780
	ctx.r6.s64 = ctx.r7.s64 + 16780;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_825028A8"))) PPC_WEAK_FUNC(sub_825028A8);
PPC_FUNC_IMPL(__imp__sub_825028A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825028AC"))) PPC_WEAK_FUNC(sub_825028AC);
PPC_FUNC_IMPL(__imp__sub_825028AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825028B0"))) PPC_WEAK_FUNC(sub_825028B0);
PPC_FUNC_IMPL(__imp__sub_825028B0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82502938"))) PPC_WEAK_FUNC(sub_82502938);
PPC_FUNC_IMPL(__imp__sub_82502938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250293C"))) PPC_WEAK_FUNC(sub_8250293C);
PPC_FUNC_IMPL(__imp__sub_8250293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502940"))) PPC_WEAK_FUNC(sub_82502940);
PPC_FUNC_IMPL(__imp__sub_82502940) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,16768
	ctx.r7.s64 = ctx.r8.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_825029CC"))) PPC_WEAK_FUNC(sub_825029CC);
PPC_FUNC_IMPL(__imp__sub_825029CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825029D0"))) PPC_WEAK_FUNC(sub_825029D0);
PPC_FUNC_IMPL(__imp__sub_825029D0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,-4620
	ctx.r7.s64 = ctx.r8.s64 + -4620;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82502A5C"))) PPC_WEAK_FUNC(sub_82502A5C);
PPC_FUNC_IMPL(__imp__sub_82502A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82502A60"))) PPC_WEAK_FUNC(sub_82502A60);
PPC_FUNC_IMPL(__imp__sub_82502A60) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r8,16768
	ctx.r7.s64 = ctx.r8.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,16792
	ctx.r5.s64 = ctx.r6.s64 + 16792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82502B04"))) PPC_WEAK_FUNC(sub_82502B04);
PPC_FUNC_IMPL(__imp__sub_82502B04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82502B08"))) PPC_WEAK_FUNC(sub_82502B08);
PPC_FUNC_IMPL(__imp__sub_82502B08) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500900
	sub_82500900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B1C"))) PPC_WEAK_FUNC(sub_82502B1C);
PPC_FUNC_IMPL(__imp__sub_82502B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B20"))) PPC_WEAK_FUNC(sub_82502B20);
PPC_FUNC_IMPL(__imp__sub_82502B20) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825009c8
	sub_825009C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B34"))) PPC_WEAK_FUNC(sub_82502B34);
PPC_FUNC_IMPL(__imp__sub_82502B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B38"))) PPC_WEAK_FUNC(sub_82502B38);
PPC_FUNC_IMPL(__imp__sub_82502B38) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500ab0
	sub_82500AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B4C"))) PPC_WEAK_FUNC(sub_82502B4C);
PPC_FUNC_IMPL(__imp__sub_82502B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B50"))) PPC_WEAK_FUNC(sub_82502B50);
PPC_FUNC_IMPL(__imp__sub_82502B50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500bb0
	sub_82500BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B64"))) PPC_WEAK_FUNC(sub_82502B64);
PPC_FUNC_IMPL(__imp__sub_82502B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B68"))) PPC_WEAK_FUNC(sub_82502B68);
PPC_FUNC_IMPL(__imp__sub_82502B68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500cb0
	sub_82500CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B7C"))) PPC_WEAK_FUNC(sub_82502B7C);
PPC_FUNC_IMPL(__imp__sub_82502B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B80"))) PPC_WEAK_FUNC(sub_82502B80);
PPC_FUNC_IMPL(__imp__sub_82502B80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500d98
	sub_82500D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502B94"))) PPC_WEAK_FUNC(sub_82502B94);
PPC_FUNC_IMPL(__imp__sub_82502B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502B98"))) PPC_WEAK_FUNC(sub_82502B98);
PPC_FUNC_IMPL(__imp__sub_82502B98) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500e80
	sub_82500E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502BAC"))) PPC_WEAK_FUNC(sub_82502BAC);
PPC_FUNC_IMPL(__imp__sub_82502BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82502BB0"))) PPC_WEAK_FUNC(sub_82502BB0);
PPC_FUNC_IMPL(__imp__sub_82502BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82500f78
	sub_82500F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82502BC4"))) PPC_WEAK_FUNC(sub_82502BC4);
PPC_FUNC_IMPL(__imp__sub_82502BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

