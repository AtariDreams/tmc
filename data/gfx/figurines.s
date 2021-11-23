	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

.macro figurine pal:req, gfx:req, size:req
	.4byte \pal, \gfx, \size, 0
.endm

gFigurines::
	figurine pal=gFigurinePal1, gfx=gFigurineGfx1, size=0x580
	figurine pal=gFigurinePal1, gfx=gFigurineGfx1, size=0x580
	figurine pal=gFigurinePal2, gfx=gFigurineGfx2, size=0x5e0
	figurine pal=gFigurinePal3, gfx=gFigurineGfx3, size=0x480
	figurine pal=gFigurinePal4, gfx=gFigurineGfx4, size=0x4c0
	figurine pal=gFigurinePal5, gfx=gFigurineGfx5, size=0x500
	figurine pal=gFigurinePal6, gfx=gFigurineGfx6, size=0x380
	figurine pal=gFigurinePal7, gfx=gFigurineGfx7, size=0x2c0
	figurine pal=gFigurinePal8, gfx=gFigurineGfx8, size=0x4e0
	figurine pal=gFigurinePal9, gfx=gFigurineGfx9, size=0x320
	figurine pal=gFigurinePal10, gfx=gFigurineGfx10, size=0xda0
	figurine pal=gFigurinePal11, gfx=gFigurineGfx11, size=0xe60
	figurine pal=gFigurinePal12, gfx=gFigurineGfx12, size=0xee0
	figurine pal=gFigurinePal13, gfx=gFigurineGfx13, size=0xde0
	figurine pal=gFigurinePal14, gfx=gFigurineGfx14, size=0x1a00
	figurine pal=gFigurinePal15, gfx=gFigurineGfx15, size=0x19c0
	figurine pal=gFigurinePal16, gfx=gFigurineGfx16, size=0x10c0
	figurine pal=gFigurinePal17, gfx=gFigurineGfx17, size=0x3e0
	figurine pal=gFigurinePal18, gfx=gFigurineGfx18, size=0x3a0
	figurine pal=gFigurinePal19, gfx=gFigurineGfx19, size=0x360
	figurine pal=gFigurinePal20, gfx=gFigurineGfx20, size=0xb80
	figurine pal=gFigurinePal21, gfx=gFigurineGfx21, size=0xb00
	figurine pal=gFigurinePal22, gfx=gFigurineGfx22, size=0xae0
	figurine pal=gFigurinePal23, gfx=gFigurineGfx23, size=0x480
	figurine pal=gFigurinePal24, gfx=gFigurineGfx24, size=0x320
	figurine pal=gFigurinePal25, gfx=gFigurineGfx25, size=0x360
	figurine pal=gFigurinePal26, gfx=gFigurineGfx26, size=0x3a0
	figurine pal=gFigurinePal27, gfx=gFigurineGfx27, size=0x400
	figurine pal=gFigurinePal28, gfx=gFigurineGfx28, size=0x7e0
	figurine pal=gFigurinePal29, gfx=gFigurineGfx29, size=0x2a00
	figurine pal=gFigurinePal30, gfx=gFigurineGfx30, size=0x2a00
	figurine pal=gFigurinePal31, gfx=gFigurineGfx31, size=0x2a00
	figurine pal=gFigurinePal32, gfx=gFigurineGfx32, size=0x3c0
	figurine pal=gFigurinePal33, gfx=gFigurineGfx33, size=0x380
	figurine pal=gFigurinePal34, gfx=gFigurineGfx34, size=0x380
	figurine pal=gFigurinePal35, gfx=gFigurineGfx35, size=0x380
	figurine pal=gFigurinePal36, gfx=gFigurineGfx36, size=0x560
	figurine pal=gFigurinePal37, gfx=gFigurineGfx37, size=0x480
	figurine pal=gFigurinePal38, gfx=gFigurineGfx38, size=0x480
	figurine pal=gFigurinePal39, gfx=gFigurineGfx39, size=0x500
	figurine pal=gFigurinePal40, gfx=gFigurineGfx40, size=0x14c0
	figurine pal=gFigurinePal41, gfx=gFigurineGfx41, size=0x660
	figurine pal=gFigurinePal42, gfx=gFigurineGfx42, size=0x1080
	figurine pal=gFigurinePal43, gfx=gFigurineGfx43, size=0x800
	figurine pal=gFigurinePal44, gfx=gFigurineGfx44, size=0x800
	figurine pal=gFigurinePal45, gfx=gFigurineGfx45, size=0x500
	figurine pal=gFigurinePal46, gfx=gFigurineGfx46, size=0x500
	figurine pal=gFigurinePal47, gfx=gFigurineGfx47, size=0x3080
	figurine pal=gFigurinePal48, gfx=gFigurineGfx48, size=0x29e0
	figurine pal=gFigurinePal49, gfx=gFigurineGfx49, size=0x3a00
	figurine pal=gFigurinePal50, gfx=gFigurineGfx50, size=0x29c0
	figurine pal=gFigurinePal51, gfx=gFigurineGfx51, size=0x34e0
	figurine pal=gFigurinePal52, gfx=gFigurineGfx52, size=0x3900
	figurine pal=gFigurinePal53, gfx=gFigurineGfx53, size=0x30e0
	figurine pal=gFigurinePal54, gfx=gFigurineGfx54, size=0x2c80
	figurine pal=gFigurinePal55, gfx=gFigurineGfx55, size=0x3500
	figurine pal=gFigurinePal56, gfx=gFigurineGfx56, size=0x2780
	figurine pal=gFigurinePal57, gfx=gFigurineGfx57, size=0x2ea0
	figurine pal=gFigurinePal58, gfx=gFigurineGfx58, size=0x3320
	figurine pal=gFigurinePal59, gfx=gFigurineGfx59, size=0x2ae0
	figurine pal=gFigurinePal60, gfx=gFigurineGfx60, size=0x1f00
	figurine pal=gFigurinePal61, gfx=gFigurineGfx61, size=0x4000
	figurine pal=gFigurinePal62, gfx=gFigurineGfx62, size=0x3f80
	figurine pal=gFigurinePal63, gfx=gFigurineGfx63, size=0x1c40
	figurine pal=gFigurinePal64, gfx=gFigurineGfx64, size=0x1660
	figurine pal=gFigurinePal65, gfx=gFigurineGfx65, size=0x1c80
	figurine pal=gFigurinePal66, gfx=gFigurineGfx66, size=0x2300
	figurine pal=gFigurinePal67, gfx=gFigurineGfx67, size=0x2480
	figurine pal=gFigurinePal68, gfx=gFigurineGfx68, size=0x440
	figurine pal=gFigurinePal69, gfx=gFigurineGfx69, size=0x8c0
	figurine pal=gFigurinePal70, gfx=gFigurineGfx70, size=0xe00
	figurine pal=gFigurinePal71, gfx=gFigurineGfx71, size=0x380
	figurine pal=gFigurinePal72, gfx=gFigurineGfx72, size=0x920
	figurine pal=gFigurinePal73, gfx=gFigurineGfx73, size=0x2e0
	figurine pal=gFigurinePal74, gfx=gFigurineGfx74, size=0x7a0
	figurine pal=gFigurinePal75, gfx=gFigurineGfx75, size=0x300
	figurine pal=gFigurinePal76, gfx=gFigurineGfx76, size=0xf00
	figurine pal=gFigurinePal77, gfx=gFigurineGfx77, size=0x360
	figurine pal=gFigurinePal78, gfx=gFigurineGfx78, size=0x780
	figurine pal=gFigurinePal79, gfx=gFigurineGfx79, size=0x400
	figurine pal=gFigurinePal80, gfx=gFigurineGfx80, size=0x380
	figurine pal=gFigurinePal81, gfx=gFigurineGfx81, size=0xa00
	figurine pal=gFigurinePal82, gfx=gFigurineGfx82, size=0xa00
	figurine pal=gFigurinePal83, gfx=gFigurineGfx83, size=0x300
	figurine pal=gFigurinePal84, gfx=gFigurineGfx84, size=0x4c0
	figurine pal=gFigurinePal85, gfx=gFigurineGfx85, size=0x7c0
	figurine pal=gFigurinePal86, gfx=gFigurineGfx86, size=0xb20
	figurine pal=gFigurinePal87, gfx=gFigurineGfx87, size=0x7e0
	figurine pal=gFigurinePal88, gfx=gFigurineGfx88, size=0x360
	figurine pal=gFigurinePal89, gfx=gFigurineGfx89, size=0x8c0
	figurine pal=gFigurinePal90, gfx=gFigurineGfx90, size=0x7c0
	figurine pal=gFigurinePal91, gfx=gFigurineGfx91, size=0xdc0
	figurine pal=gFigurinePal92, gfx=gFigurineGfx92, size=0x300
	figurine pal=gFigurinePal93, gfx=gFigurineGfx93, size=0x2e0
	figurine pal=gFigurinePal94, gfx=gFigurineGfx94, size=0x500
	figurine pal=gFigurinePal95, gfx=gFigurineGfx95, size=0x7c0
	figurine pal=gFigurinePal96, gfx=gFigurineGfx96, size=0x300
	figurine pal=gFigurinePal97, gfx=gFigurineGfx97, size=0x7a0
	figurine pal=gFigurinePal98, gfx=gFigurineGfx98, size=0x500
	figurine pal=gFigurinePal99, gfx=gFigurineGfx99, size=0x3c0
	figurine pal=gFigurinePal100, gfx=gFigurineGfx100, size=0x9a0
	figurine pal=gFigurinePal101, gfx=gFigurineGfx101, size=0xdc0
	figurine pal=gFigurinePal102, gfx=gFigurineGfx102, size=0x3a0
	figurine pal=gFigurinePal103, gfx=gFigurineGfx103, size=0x980
	figurine pal=gFigurinePal104, gfx=gFigurineGfx104, size=0x7c0
	figurine pal=gFigurinePal105, gfx=gFigurineGfx105, size=0x820
	figurine pal=gFigurinePal106, gfx=gFigurineGfx106, size=0x340
	figurine pal=gFigurinePal107, gfx=gFigurineGfx107, size=0x500
	figurine pal=gFigurinePal108, gfx=gFigurineGfx108, size=0x500
	figurine pal=gFigurinePal109, gfx=gFigurineGfx109, size=0x7c0
	figurine pal=gFigurinePal110, gfx=gFigurineGfx110, size=0x660
	figurine pal=gFigurinePal111, gfx=gFigurineGfx111, size=0x3c0
	figurine pal=gFigurinePal112, gfx=gFigurineGfx112, size=0x460
	figurine pal=gFigurinePal113, gfx=gFigurineGfx113, size=0x380
	figurine pal=gFigurinePal114, gfx=gFigurineGfx114, size=0x820
	figurine pal=gFigurinePal115, gfx=gFigurineGfx115, size=0x6a0
	figurine pal=gFigurinePal116, gfx=gFigurineGfx116, size=0x980
	figurine pal=gFigurinePal117, gfx=gFigurineGfx117, size=0x5e0
	figurine pal=gFigurinePal118, gfx=gFigurineGfx118, size=0x8a0
	figurine pal=gFigurinePal119, gfx=gFigurineGfx119, size=0x8c0
	figurine pal=gFigurinePal120, gfx=gFigurineGfx120, size=0x5a0
	figurine pal=gFigurinePal121, gfx=gFigurineGfx121, size=0x620
	figurine pal=gFigurinePal122, gfx=gFigurineGfx122, size=0xf00
	figurine pal=gFigurinePal123, gfx=gFigurineGfx123, size=0x640
	figurine pal=gFigurinePal124, gfx=gFigurineGfx124, size=0x2580
	figurine pal=gFigurinePal125, gfx=gFigurineGfx125, size=0x17a0
	figurine pal=gFigurinePal126, gfx=gFigurineGfx126, size=0x19a0
	figurine pal=gFigurinePal127, gfx=gFigurineGfx127, size=0x1300
	figurine pal=gFigurinePal128, gfx=gFigurineGfx128, size=0x1ea0
	figurine pal=gFigurinePal129, gfx=gFigurineGfx129, size=0x1640
	figurine pal=gFigurinePal130, gfx=gFigurineGfx130, size=0x17c0
	figurine pal=gFigurinePal131, gfx=gFigurineGfx131, size=0xe00
	figurine pal=gFigurinePal132, gfx=gFigurineGfx132, size=0x580
	figurine pal=gFigurinePal133, gfx=gFigurineGfx133, size=0xc40
	figurine pal=gFigurinePal134, gfx=gFigurineGfx134, size=0x1100
	figurine pal=gFigurinePal135, gfx=gFigurineGfx135, size=0x2580
	figurine pal=gFigurinePal136, gfx=gFigurineGfx136, size=0x18e0
