	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.syntax unified

	.text

gUnk_08016984:: @ 08016984
	.incbin "baserom.gba", 0x016984, 0x0000002

	.text

	non_word_aligned_thumb_func_start GetNextScriptCommandHalfword
GetNextScriptCommandHalfword: @ 0x08016986
	ldrh r0, [r0]
	bx lr

	non_word_aligned_thumb_func_start GetNextScriptCommandHalfwordAfterCommandMetadata
GetNextScriptCommandHalfwordAfterCommandMetadata: @ 0x0801698A
	ldrh r0, [r0, #2]
	bx lr

	non_word_aligned_thumb_func_start GetNextScriptCommandWord
GetNextScriptCommandWord: @ 0x0801698E
	ldrh r1, [r0]
	ldrh r0, [r0, #2]
	lsls r0, r0, #0x10
	orrs r0, r1
	bx lr

	thumb_func_start GetNextScriptCommandWordAfterCommandMetadata
GetNextScriptCommandWordAfterCommandMetadata: @ 0x08016998
	ldrh r1, [r0, #2]
	ldrh r0, [r0, #4]
	lsls r0, r0, #0x10
	orrs r0, r1
	bx lr
	.align 2, 0

gUnk_080169A4::
	.byte 0x01, 0xFF, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00
	.byte 0xFF, 0x01, 0x00, 0x00, 0x02, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x02
	.byte 0x00, 0x00, 0x01, 0x01, 0x02, 0xFF, 0x02, 0xFE, 0xFE, 0x02, 0xFF, 0x03, 0xFD, 0xFF, 0xFE, 0x01
	.byte 0x01, 0xFD, 0xFF, 0xFF, 0x03, 0xFE, 0x02, 0x00, 0x00, 0xFF, 0xFE, 0x03, 0xFD, 0x02, 0xFF, 0x00
	.byte 0x00, 0xFD, 0x02, 0x00, 0x00, 0xFF, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02
	.byte 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00
	.byte 0x00, 0x00, 0x01, 0x00

	thumb_func_start UpdateSpriteForCollisionLayer
UpdateSpriteForCollisionLayer: @ 0x08016A04
	movs r1, #0x38
	ldrb r1, [r0, r1]
	lsls r1, r1, #1
	add r3, pc, #0x1C
	adds r1, r1, r3
	movs r3, #0xc0
	ldrb r2, [r0, #0x19]
	bics r2, r3
	ldrb r3, [r1]
	orrs r2, r3
	strb r2, [r0, #0x19]
	movs r3, #0xc0
	ldrb r2, [r0, #0x1b]
	bics r2, r3
	ldrb r3, [r1, #1]
	orrs r2, r3
	strb r2, [r0, #0x1b]
	bx lr
_08016A28:
	.byte 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40

	thumb_func_start sub_08016A30
sub_08016A30: @ 0x08016A30
	push {r4, r5, lr}
	adds r4, r0, #0
	movs r5, #0x38
	ldrb r0, [r4, r5]
	cmp r0, #0
	bne _08016A64
	ldrh r0, [r4, #0x2e]
	ldrh r1, [r4, #0x32]
	movs r2, #2
	bl GetTileTypeByPos
	movs r3, #1
	cmp r0, #0
	beq _08016A62
	bl sub_080002E4
	movs r3, #2
	add r1, pc, #0x40
_08016A54:
	adds r1, #4
	ldrh r2, [r1]
	cmp r2, #0
	beq _08016A62
	cmp r0, r2
	bne _08016A54
	ldrb r3, [r1, #3]
_08016A62:
	strb r3, [r4, r5]
_08016A64:
	adds r0, r4, #0
	bl UpdateSpriteForCollisionLayer
	pop {r4, r5, pc}

	thumb_func_start sub_08016A6C
sub_08016A6C: @ 0x08016A6C
	push {r4, r5, lr}
	adds r4, r0, #0
	bl sub_080002B8
	add r1, pc, #0x38
_08016A76:
	adds r1, #4
	ldrh r2, [r1]
	cmp r2, #0
	beq _08016A90
	cmp r2, r0
	bne _08016A76
	movs r2, #0x38
	ldrb r3, [r4, r2]
	ldrb r5, [r1, #2]
	cmp r3, r5
	beq _08016A90
	ldrb r5, [r1, #3]
	strb r5, [r4, r2]
_08016A90:
	pop {r4, r5, pc}
	.align 2, 0
_08016A94:
	.byte 0x2A, 0x00, 0x03, 0x03, 0x2D, 0x00, 0x03, 0x03, 0x2B, 0x00, 0x03, 0x03
	.byte 0x2C, 0x00, 0x03, 0x03, 0x4C, 0x00, 0x03, 0x03, 0x4E, 0x00, 0x03, 0x03, 0x4D, 0x00, 0x03, 0x03
	.byte 0x4F, 0x00, 0x03, 0x03, 0x0A, 0x00, 0x02, 0x01, 0x09, 0x00, 0x02, 0x01, 0x0C, 0x00, 0x01, 0x02
	.byte 0x0B, 0x00, 0x01, 0x02, 0x52, 0x00, 0x03, 0x03, 0x27, 0x00, 0x03, 0x03, 0x26, 0x00, 0x03, 0x03
	.byte 0x00, 0x00

	non_word_aligned_thumb_func_start sub_08016AD2
sub_08016AD2: @ 0x08016AD2
	push {r4, lr}
	adds r4, r0, #0
	bl sub_08016A6C
	push {r0}
	adds r0, r4, #0
	bl UpdateSpriteForCollisionLayer
	pop {r0, r4, pc}
