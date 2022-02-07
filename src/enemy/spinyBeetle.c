#define NENT_DEPRECATED
#include "entity.h"
#include "enemy.h"
#include "functions.h"
#include "object.h"

typedef struct {
    Entity base;
    u8 filler[0xc];
    u16 tile;
    u16 tileIndex;
    u8 unk_78;
    u8 unk_79;
    u8 unk_7a;
    u8 unk_7b;
    s32 unk_7c;
    s32 unk_80;
    u16 unk_84;
} SpinyBeetleEntity;

void (*const gUnk_080CEBEC[])(Entity*);
void (*const gUnk_080CEC04[])(SpinyBeetleEntity*);
const s8 gUnk_080CEC1C[];

extern void sub_08033E1C(SpinyBeetleEntity*);
extern void sub_08033D78(SpinyBeetleEntity*);
extern u32 sub_08033DF0(SpinyBeetleEntity*);
extern void SpinyBeetle_SetHitType(SpinyBeetleEntity*);
extern void sub_0804AA30(Entity*, EntityActionArray);
extern void sub_0807B9B8(s32, s32, s32);
extern u32 sub_0804A024(Entity*, u32, u32);

void SpinyBeetle(Entity* this) {
    EnemyFunctionHandler(this, gUnk_080CEBEC);
    SetChildOffset(this, 0, 1, -0x10);
}

void sub_080337BC(SpinyBeetleEntity* this) {
    gUnk_080CEC04[super->action](this);
}

void sub_080337D4(SpinyBeetleEntity* this) {
    if (super->field_0x43) {
        sub_0804A9FC(super, 0x1c);
    }

    sub_0804AA30(super, gUnk_080CEBEC);
    if (super->bitfield & 0x80) {
        if (super->iframes > 0 && super->child) {
            sub_08033E1C(this);
        }

        if ((super->bitfield & 0x3f) == 0x14 && super->action != 5) {
            super->action = 3;
            super->actionDelay = 0x5a;
            super->field_0xf = 0x10;
            super->spritePriority.b1 = 1;
            super->direction = DirectionRoundUp(sub_08049F84(super, 1));
            sub_08033D78(this);
            InitializeAnimation(super, 3);
        }
    }
}

void nullsub_159(SpinyBeetleEntity* this) {
}

void sub_08033870(SpinyBeetleEntity* this) {
    sub_08001242(super);

    if (super->action != 5) {
        if (sub_08033DF0(this)) {
            sub_08033E1C(this);
        }
    }
}

void SpinyBeetle_Init(SpinyBeetleEntity* this) {
    Entity* obj;
    super->action = 1;
    super->actionDelay = 0;
    super->field_0xf = 0;
    this->unk_7c = (super->x.WORD & 0xfff00000) | 0x80000;
    this->unk_80 = (super->y.WORD & 0xfff00000) | 0x80000;
    super->x.WORD = this->unk_7c;
    super->y.WORD = this->unk_80;
    this->unk_79 = 0;
    this->unk_7a = 0;
    this->unk_78 = 0;
    this->unk_7b = 0;
    this->tile = COORD_TO_TILE(super);
    this->tileIndex = GetTileIndex(this->tile, super->collisionLayer);
    SetTile(0x4022, this->tile, super->collisionLayer);
    obj = CreateObject(OBJECT_ON_BEETLE, super->type, 0);

    if (obj == NULL) {
        DeleteThisEntity();
    }

    CopyPosition(super, obj);
    super->child = obj;
    obj->parent = super;

    if (super->type == 1) {
        SpinyBeetle_SetHitType(this);
    }

    InitializeAnimation(super, 0);
}

void sub_08033958(SpinyBeetleEntity* this) {
    u32 direction;
    if (sub_08033DF0(this)) {
        sub_08033E1C(this);
        sub_0807B9B8(this->tileIndex, this->tile, super->collisionLayer);
        return;
    }

    if (this->unk_7b) {
        this->unk_7b--;
        return;
    }

    super->x.WORD = this->unk_7c;
    super->y.WORD = this->unk_80;
    direction = sub_0804A024(super, 1, 0x10);
    switch (direction) {
        case 0xff:
            return;
        case 0:
            if (this->unk_78 == 0)
                return;
            if (super->y.HALF.HI - gPlayerEntity.y.HALF.HI > 0x30)
                return;
            break;
        case 0x10:
            if (gPlayerEntity.y.HALF.HI - super->y.HALF.HI > 0x30)
                return;
            break;
        case 8:
            if (gPlayerEntity.x.HALF.HI - super->x.HALF.HI > 0x30)
                return;
            break;
        case 0x18:
            if (super->x.HALF.HI - gPlayerEntity.x.HALF.HI > 0x30)
                return;
            break;
    }

    if (super->child && sub_0806F520(super->child)) {
        return;
    }

    if (this->unk_78 == 0) {
        this->unk_78 = 1;
    }

    super->action = 2;
    super->direction = direction;
    super->spriteSettings.draw = 1;
    COLLISION_ON(super);

    super->y.WORD = (super->y.WORD & 0xfff00000) | 0xC0000;
    sub_0807B9B8(this->tileIndex, this->tile, super->collisionLayer);
    InitializeAnimation(super, 2);
}

void sub_08033A7C(SpinyBeetleEntity* this) {
    if (sub_08033DF0(this)) {
        sub_08033E1C(this);
        return;
    }

    GetNextFrame(super);
    if ((super->frame & 0x80) == 0)
        return;

    super->action = 3;
    super->actionDelay = 0x78;
    super->field_0xf = 0x20;
    super->spritePriority.b1 = 1;
    InitializeAnimation(super, 3);
}

void sub_08033ACC(SpinyBeetleEntity* this) {
    if (sub_08033DF0(this)) {
        sub_08033E1C(this);
        return;
    }

    GetNextFrame(super);
    GetNextFrame(super);

    if (super->field_0xf) {
        super->field_0xf--;
        return;
    }

    if (--super->actionDelay == 0) {
        super->action = 4;
        super->actionDelay = 0x78;
        super->x.WORD = (super->x.WORD & 0xfff00000) | 0x80000;
        super->y.WORD = (super->y.WORD & 0xfff00000) | 0xC0000;
        this->unk_7c = super->x.WORD;
        this->unk_80 = super->y.WORD;
        InitializeAnimation(super, 4);
    } else {
        sub_08033D78(this);
    }
}

void sub_08033B44(SpinyBeetleEntity* this) {
    u32 stop;
    if (sub_08033DF0(this)) {
        sub_08033E1C(this);
        return;
    }

    GetNextFrame(super);
    if (--super->actionDelay)
        return;

    super->action = 1;
    super->spriteSettings.draw = 0;
    COLLISION_OFF(super);

    stop = 0;
    while (!stop) {
        super->x.WORD = (super->x.WORD & 0xfff00000) | 0x80000;
        super->y.WORD = (super->y.WORD & 0xfff00000) | 0x80000;
        this->unk_7c = super->x.WORD;
        this->unk_80 = super->y.WORD;
        super->spritePriority.b1 = 0;
        this->unk_7b = 0x78;
        this->tile = COORD_TO_TILE(super);
        this->tileIndex = GetTileIndex(this->tile, super->collisionLayer);

        if (this->tileIndex != 0x4022) {
            stop += 1;
        } else {
            switch (DirectionRound(super->direction) >> 2) {
                case 0:
                    super->y.HALF.HI += 0x10;
                    break;
                case 2:
                    super->x.HALF.HI -= 0x10;
                    break;
                case 4:
                    super->y.HALF.HI -= 0x10;
                    break;
                case 6:
                    super->x.HALF.HI += 0x10;
                    break;
            }
        }
    }

    SetTile(0x4022, this->tile, super->collisionLayer);
    InitializeAnimation(super, 0);
}

void sub_08033C94(SpinyBeetleEntity* this) {
    UpdateAnimationVariableFrames(super, 3);
    switch (this->unk_79) {
        case 0:
            this->unk_79 = 1;
            if (super->spriteSettings.draw != 1) {
                super->spriteSettings.draw = 1;
            }
        case 1:
            if (--super->actionDelay)
                return;
            this->unk_79 = 2;
            super->actionDelay = 0x78;
            super->spriteOffsetY = 0;
            super->direction = sub_08049F84(super, 1) + 0x14;

            switch (Random() & 3) {
                case 0:
                    super->direction += 8;
                    break;
                case 2:
                    super->direction += 0x18;
                    break;
            }

            super->direction &= 0x18;
            break;
        case 2:
            if (super->field_0xf != 0) {
                super->field_0xf--;
            } else {
                sub_08033D78(this);
            }

            if (--super->actionDelay)
                return;
            super->actionDelay = (Random() & 0x1f) + 0x20;
            super->direction = sub_08049F84(super, 1) + 0x14;
            switch (Random() & 3) {
                case 1:
                    super->direction += 8;
                    break;
                case 3:
                    super->direction += 0x18;
                    break;
            }

            super->direction &= 0x18;
            break;
    }
}

void sub_08033D78(SpinyBeetleEntity* this) {
    u32 dir = DirectionRound(super->direction) >> 2;
    const s8* ptr = gUnk_080CEC1C + dir;
    s32 tile;
    u32 type;
    tile = COORD_TO_TILE_OFFSET(super, -ptr[0], -ptr[1]);
    type = GetTileType(tile, super->collisionLayer);

    switch (type) {
        case 0x1c4:
        case 0x1c5:
            break;
        default:
            if (sub_080002E0(tile, super->collisionLayer) - 1 > 0x3e)
                ProcessMovement(super);
            break;
    }
}

bool32 sub_08033DF0(SpinyBeetleEntity* this) {
    bool32 rv = 0;
    if (super->child == NULL) {
        rv = 1;
    } else {
        switch (super->child->action) {
            case 4:
                rv = 1;
                break;
            case 3:
                if (super->child->subAction > 1) {
                    rv = 1;
                }
                break;
            case 2:
                rv = 1;
                break;
        }
    }

    return rv;
}

void sub_08033E1C(SpinyBeetleEntity* this) {
    super->action = 5;
    this->unk_79 = 0;
    super->spriteSettings.draw = 1;
    COLLISION_ON(super);
    super->spritePriority.b0 = 5;
    super->y.WORD = (super->y.WORD & 0xfff00000) | 0xC0000;
    super->hitType = 0x19;
    super->spritePriority.b1 = 1;
    super->actionDelay = 0x30;
    super->field_0xf = 0;
    super->speed = 0x100;
    super->child = NULL;
    InitializeAnimation(super, 3);
    CreateSpeechBubbleExclamationMark(super, 0xa, -12);
}

void SpinyBeetle_SetHitType(SpinyBeetleEntity* this) {
    if ((gPlayerState.field_0xac & 8)) {
        super->hitType = 0x95;
    } else {
        super->hitType = 0x63;
    }
}

const u16 unusedLabel_0CEBDC[] = {
    0x3F, 0x1C, 0x50, 0x2A, 0x55, 0x1D, 0x5C, 0x2B,
};

void (*const gUnk_080CEBEC[])(Entity*) = {
    (EntityActionPtr)sub_080337BC, (EntityActionPtr)sub_080337D4, sub_08001324, sub_0804A7D4,
    (EntityActionPtr)sub_08033870, (EntityActionPtr)nullsub_159,
};

void (*const gUnk_080CEC04[])(SpinyBeetleEntity*) = {
    SpinyBeetle_Init, sub_08033958, sub_08033A7C, sub_08033ACC, sub_08033B44, sub_08033C94,
};

const s8 gUnk_080CEC1C[] = { 0, -8, 8, 0, 0, 8, -8, 0 };