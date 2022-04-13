#include "functions.h"
#include "npc.h"

extern void (*const gUnk_08111C48[])(Entity*);

void sub_080697A4(Entity* this);
void sub_08069838(Entity* this);

extern SpriteLoadData gUnk_08111C3C;

extern u8 gUnk_08111C9C[];

extern u8 gUnk_08111CA8[];

extern u8 gUnk_08111CB4[];

extern u8 gUnk_08111CB8[];

void sub_08069888(Entity* this);

extern u16 gUnk_08111C50[];

extern const s16 gUnk_08111C5C[];
extern const u8 gUnk_08111C74[];

extern const s16 gUnk_08111C84[];
extern const u8 gUnk_08111C8C[];

void Gorman(Entity* this) {
    if ((this->flags & ENT_SCRIPTED) != 0) {
        sub_08069838(this);
    } else {
        sub_080697A4(this);
    }
}

void sub_080697A4(Entity* this) {
    gUnk_08111C48[this->action](this);
    sub_0806ED78(this);
}

void sub_080697C4(Entity* this) {
    if (LoadExtraSpriteData(this, &gUnk_08111C3C) != 0) {
        this->action = 1;
        InitializeAnimation(this, 2);
        sub_08078778(this);
    }
}

void sub_080697EC(Entity* this) {
    s32 tmp;

    tmp = GetAnimationStateInRectRadius(this, 0x20, 0x20);
    if (tmp >= 0) {
        if (this->subtimer == 0) {
            this->subtimer = 0x10;
            if (this->animIndex != tmp) {
                InitializeAnimation(this, tmp);
            }
        } else {
            this->subtimer -= 1;
        }
    }
    if (this->interactType != 0) {
        this->interactType = 0;
        sub_08069888(this);
    }
}

void sub_08069838(Entity* this) {
    if (this->action == 0) {
        if (LoadExtraSpriteData(this, &gUnk_08111C3C) == 0) {
            return;
        }
        this->action += 1;
        this->field_0x68.HALF.LO = 0;
        this->field_0x68.HALF.HI = 0;
        sub_0807DD64(this);
    }
    sub_0807DD94(this, NULL);
    if (this->interactType != 0) {
        this->interactType = 0;
        sub_08069888(this);
    }
}

void sub_08069888(Entity* this) {
    s32 index;
    if (CheckGlobalFlag(0x47) == 0) {
        index = 0;
        SetGlobalFlag(0x47);
    } else if (((CheckGlobalFlag(0x2b) == 0) && (CheckGlobalFlag(0x2c) == 0)) && (CheckGlobalFlag(0x2d) == 0)) {
        index = 1;
    } else if (CheckGlobalFlag(0x18) == 0) {
        index = 2;
    } else if (CheckGlobalFlag(0x48) == 0) {
        index = 3;
        SetGlobalFlag(0x48);
    } else if ((CheckGlobalFlag(0x2e) == 0) && (CheckGlobalFlag(0x2f) == 0)) {
        index = CheckGlobalFlag(0x30) ? 5 : 4;
    } else {
        index = 5;
    }
    MessageNoOverlap(gUnk_08111C50[index], this);
}

void sub_0806991C(Entity* this, ScriptExecutionContext* context) {
    u32 tmp;
    const s16* ptr;
    this->field_0x68.HALF.LO = (Random() & 0x1f) + 0x3c;
    ptr = &gUnk_08111C5C[*(s8*)&this->field_0x68.HALF.HI * 2];
    context->x.HALF.HI = gRoomControls.origin_x + ptr[0];
    context->y.HALF.HI = gRoomControls.origin_y + ptr[1];
    context->unk_19 = 8;
    context->postScriptActions |= 2;
    context->condition = 0;
    tmp = sub_080045DA(context->x.HALF.HI - this->x.HALF.HI, context->y.HALF.HI - this->y.HALF.HI);
    this->direction = tmp;
    this->animationState = (this->animationState & 0x80) | gUnk_08111C74[(tmp << 0x18) >> 0x1c];
    gActiveScriptInfo.flags |= 1;
}

void sub_080699AC(Entity* this, ScriptExecutionContext* context) {
    u32 tmp;
    const s16* ptr;
    this->field_0x68.HALF.LO = (Random() & 0x1f) + 0x3c;
    ptr = &gUnk_08111C84[*(s8*)&this->field_0x68.HALF.HI * 2];
    context->x.HALF.HI = gRoomControls.origin_x + ptr[0];
    context->y.HALF.HI = gRoomControls.origin_y + ptr[1];
    context->unk_19 = 8;
    context->postScriptActions |= 2;
    context->condition = 0;
    tmp = sub_080045DA(context->x.HALF.HI - this->x.HALF.HI, context->y.HALF.HI - this->y.HALF.HI);
    this->direction = tmp;
    this->animationState = (this->animationState & 0x80) | gUnk_08111C8C[(tmp << 0x18) >> 0x1c];
    gActiveScriptInfo.flags |= 1;
}

void sub_08069A3C(Entity* this) {
    this->field_0x68.HALF.HI = gUnk_08111C9C[(Random() & 1) + (s8)this->field_0x68.HALF.HI * 2];
}

void sub_08069A60(Entity* this) {
    this->field_0x68.HALF.HI = gUnk_08111CA8[(Random() & 1) + (s8)this->field_0x68.HALF.HI * 2];
}

void sub_08069A84(Entity* this) {
    this->field_0x68.HALF.HI = gUnk_08111CB4[(Random() & 1) + (s8)this->field_0x68.HALF.HI * 2];
}

void sub_08069AA8(Entity* this) {
    this->field_0x68.HALF.HI = gUnk_08111CB8[(Random() & 1) + (s8)this->field_0x68.HALF.HI * 2];
}

void sub_08069ACC(Entity* this, ScriptExecutionContext* context) {
    if (--this->field_0x68.HALF.LO * 0x1000000 < 1) {
        context->condition = 1;
    } else {
        context->condition = 0;
    }
}

void Gorman_Head(Entity* this) {
    SetExtraSpriteFrame(this, 0, (this->frame & 7) + 0xf);
    SetExtraSpriteFrame(this, 1, this->frameIndex);
    SetSpriteSubEntryOffsetData1(this, 1, 0);
    sub_0807000C(this);
}
