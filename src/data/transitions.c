#include "transitions.h"
#include "area.h"
#include "roomid.h"

// clang-format off

// this terminates a list of Transitions
#define TransitionListEnd { WARP_TYPE_END_OF_LIST, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

const Transition gExitList_NoExitList[] = { TransitionListEnd };
const Transition* const gExitLists_NoExit[] = {
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
};

const Transition gExitList_MinishWoods_Main[] = {
    { WARP_TYPE_1, 0x00, 0x0138, 0x0318, 0x0078, 0x0078, 0x00, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_MINISH_WOODS_BOMB, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x01c8, 0x0258, 0x00a8, 0x00d8, 0x00, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_ENTRANCE, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x03a8, 0x0010, 0x0078, 0x0088, 0x02, AREA_BEANSTALKS, ROOM_BEANSTALKS_EASTERN_HILLS, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0210, 0x01c8, 0x0078, 0x0078, 0x02, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_MINISH_WOODS_BUSINESS_SCRUB, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0070, 0x0048, 0x0078, 0x0078, 0x02, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_MINISH_WOODS_GREAT_FAIRY, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x02c0, 0x0048, 0x0078, 0x0088, 0x02, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_WITCH_HUT, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x03b8, 0x0038, 0x0078, 0x0108, 0x00, AREA_MINISH_CAVES,
      ROOM_MINISH_CAVES_MINISH_WOODS_NORTH_1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0048, 0x0218, 0x0058, 0x0118, 0x00, AREA_MINISH_CAVES,
      ROOM_MINISH_CAVES_MINISH_WOODS_SOUTHWEST, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0068, 0x0218, 0x0138, 0x0118, 0x00, AREA_MINISH_CAVES,
      ROOM_MINISH_CAVES_MINISH_WOODS_SOUTHWEST, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0088, 0x0218, 0x0218, 0x0118, 0x00, AREA_MINISH_CAVES,
      ROOM_MINISH_CAVES_MINISH_WOODS_SOUTHWEST, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x01d8, 0x0fff, 0x40, AREA_HYRULE_FIELD,
      ROOM_HYRULE_FIELD_EASTERN_HILLLS_NORTH, 0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x01d8, 0x00a0, 0x80, AREA_HYRULE_FIELD,
      ROOM_HYRULE_FIELD_EASTERN_HILLLS_SOUTH, 0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x0fff, 0x03b8, 0x01, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x01, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x0fff, 0x03ac, 0x02, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x01, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishWoods[] = {
    [ROOM_MINISH_WOODS_MAIN] = gExitList_MinishWoods_Main,
};

const Transition gExitList_LakeHylia_Main[] = {
    { WARP_TYPE_1, 0, 0x02a0, 0x0378, 0x0078, 0x00a0, 0x02, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_MAYOR_LAKE_CABIN, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x0120, 0x0038, 0x0078, 0x0078, 0x02, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_STOCKWELL_LAKE_HOUSE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x0100, 0x02b8, 0x0078, 0x0078, 0x02, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_WAVEBLADE, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x00c8, 0x0198, 0x0078, 0x0078, 0x00, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_LAKE_HYLIA_OCARINA, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x01e8, 0x01a8, 0x0078, 0x0078, 0x00, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_LIBRARI, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x02b8, 0x0058, 0x0188, 0x01a8, 0x00, AREA_MINISH_CAVES, ROOM_MINISH_CAVES_LAKE_HYLIA_NORTH, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0, 0x0148, 0x0374, 0x0248, 0x01a8, 0x00, AREA_LAKE_WOODS_CAVE, ROOM_LAKE_WOODS_CAVE_MAIN, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0, 0x0000, 0x0000, 0x02c8, 0x0fff, 0xc0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x01,
      0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0, 0x0000, 0x0000, 0x0fff, 0x0010, 0x10, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x01, 0x00, 0x04,
      0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0, 0x0000, 0x0000, 0x0fff, 0x0024, 0x20, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x01, 0x01, 0x04,
      0x00, 0x00, 0x00, 0x00 },
    TransitionListEnd,
};
const Transition gExitList_LakeHylia_Beanstalk[] = {
    { WARP_TYPE_1, 0, 0x0208, 0x94, 0x248, 0x88, 0, AREA_HYLIA_DIG_CAVES, ROOM_HYLIA_DIG_CAVES_1, 1, 0, 0, 0, 0, 0, 0 },
    { WARP_TYPE_1, 0, 0x0308, 0x94, 0x308, 0x88, 0, AREA_HYLIA_DIG_CAVES, ROOM_HYLIA_DIG_CAVES_1, 1, 0, 0, 0, 0, 0, 0 },
    { WARP_TYPE_1, 0, 0x0388, 0x64, 0x398, 0x68, 0, AREA_HYLIA_DIG_CAVES, ROOM_HYLIA_DIG_CAVES_1, 1, 0, 0, 0, 0, 0, 0 },
    TransitionListEnd,
};
const Transition* const gExitLists_LakeHylia[] = {
    [ROOM_LAKE_HYLIA_MAIN] = gExitList_LakeHylia_Main,
    [ROOM_LAKE_HYLIA_BEANSTALK] = gExitList_LakeHylia_Beanstalk,
};

const Transition gExitList_CastorWilds_Main[] = {
    { WARP_TYPE_1, 0, 0x0248, 0x0032, 0x0038, 0x0078, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_NORTH, 1, 0, 0, 0, 0, 0,
      0 },
    { WARP_TYPE_1, 0, 0x0288, 0x0032, 0x0128, 0x0078, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_NORTH, 1, 0, 0, 0, 0, 0,
      0 },
    { WARP_TYPE_1, 0, 0x01a8, 0x01a2, 0x0088, 0x0078, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_DARKNUT, 1, 0, 0, 0, 0, 0,
      0 },
    { WARP_TYPE_1, 0, 0x02d8, 0x0382, 0x0078, 0x0098, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_SOUTH, 1, 0, 0, 0, 0, 0,
      0 },
    { WARP_TYPE_1, 0, 0x03c8, 0x0038, 0x0078, 0x0078, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_HEART_PIECE, 1, 0, 0, 0, 0, 0,
      0 },
    { WARP_TYPE_1, 0, 0x0038, 0x02d4, 0x0078, 0x0088, 0x00, AREA_DOJOS, ROOM_DOJOS_SWIFTBLADE_I, 1, 0, 0, 0, 0, 0, 0 },
    { WARP_TYPE_1, 0, 0x03b8, 0x02f8, 0x0078, 0x01f8, 0x00, AREA_MINISH_CAVES, ROOM_MINISH_CAVES_SOUTHEAST_WATER_1, 1,
      0, 0, 0, 0, 0, 0 },
    { WARP_TYPE_0, 0, 0x0000, 0x0000, 0x0008, 0x0fff, 0x08, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_WESTERN_WOODS_NORTH, 1,
      0, 2, 0, 0, 0, 0 },
    { WARP_TYPE_0, 0, 0x0000, 0x0000, 0x0fff, 0x0010, 0x10, AREA_RUINS, ROOM_RUINS_ENTRANCE, 1, 0, 4, 0, 0, 0, 0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CastorWilds[] = {
    [ROOM_CASTOR_WILDS_MAIN] = gExitList_CastorWilds_Main,
};

const Transition gExitList_Ruins_Entrance[] = {
    { WARP_TYPE_0, 0, 0x00, 0x00, 0x0fff, 0x3b8, 0x01, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 1, 0, 0, 0, 0, 0, 0 },
    { WARP_TYPE_1, 0, 0xc8, 0x38, 0x0078, 0x078, 0x00, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_WIND_RUINS, 1, 0, 0, 0, 0, 0, 0 },
    TransitionListEnd,
};
const Transition gExitList_Ruins_Beanstalk[] = {
    TransitionListEnd,
};
const Transition gExitList_Ruins_LadderToTektites[] = {
    { WARP_TYPE_1, 0, 0x38, 0x08, 0x148, 0xb8, 0, AREA_MINISH_CAVES, ROOM_MINISH_CAVES_RUINS, 1, 0, 0, 0, 0, 0, 0 },
    TransitionListEnd,
};
const Transition gExitList_Ruins_FortressEntrance[] = {
    { WARP_TYPE_0, 0, 0, 0, 0x1d8, 0xb0, 3, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 1, 0, 0, 0, 0,
      0, 0 },
    TransitionListEnd,
};
const Transition* const gExitLists_Ruins[] = {
    [ROOM_RUINS_ENTRANCE] = gExitList_Ruins_Entrance,
    [ROOM_RUINS_BEANSTALK] = gExitList_Ruins_Beanstalk,
    [ROOM_RUINS_TEKTITES] = gExitList_NoExitList,
    [ROOM_RUINS_LADDER_TO_TEKTITES] = gExitList_Ruins_LadderToTektites,
    [ROOM_RUINS_FORTRESS_ENTRANCE] = gExitList_Ruins_FortressEntrance,
    [ROOM_RUINS_BELOW_FORTRESS_ENTRANCE] = gExitList_NoExitList,
};

const Transition gExitList_HyruleTown_0[] = {
    { WARP_TYPE_1, 0x00, 0x02c8, 0x0138, 0x0068, 0x0098, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_MAYOR, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0308, 0x0120, 0x00e8, 0x0070, 0x01, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_MAYOR, 0x01,
      0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0048, 0x00a8, 0x0078, 0x0090, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_POST_OFFICE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0138, 0x0048, 0x0078, 0x0088, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_2F, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0168, 0x00a8, 0x00e8, 0x00d8, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_1F, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0388, 0x0258, 0x0068, 0x0078, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_1F, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0368, 0x01b8, 0x0068, 0x0078, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_WEST_2F, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x03a8, 0x0218, 0x0048, 0x01a8, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_EAST_2F, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x02c8, 0x0098, 0x0078, 0x00c8, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_SCHOOL_WEST, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0328, 0x0068, 0x00d8, 0x0088, 0x00, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_SCHOOL_EAST, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0258, 0x02e8, 0x0078, 0x00a8, 0x00, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_STOCKWELL_SHOP, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0198, 0x02e8, 0x0078, 0x00a8, 0x00, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_CAFE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0178, 0x0210, 0x00c8, 0x0060, 0x01, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_REM_SHOE_SHOP, 0x01,
      0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0278, 0x01f0, 0x0028, 0x0090, 0x01, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BAKERY, 0x01,
      0x00, 0x02, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0178, 0x0250, 0x00c8, 0x0070, 0x01, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_SIMON, 0x01,
      0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0178, 0x0290, 0x00c8, 0x0060, 0x01, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_FIGURINE_HOUSE, 0x01,
      0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0138, 0x0290, 0x0028, 0x0060, 0x01, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_FIGURINE_HOUSE, 0x01,
      0x00, 0x02, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0298, 0x0258, 0x0078, 0x0088, 0x00, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BORLOV_ENTRANCE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0090, 0x02c8, 0x0078, 0x0098, 0x02, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_CARPENTER, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0098, 0x0168, 0x0078, 0x0078, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_STRANGER, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0038, 0x0248, 0x0078, 0x0098, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_DR_LEFT, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x02e8, 0x02f0, 0x0078, 0x0078, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_ROMIO, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0348, 0x02f8, 0x0078, 0x0098, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_JULIETTA, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x03b8, 0x0358, 0x0078, 0x0078, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_CUCCO, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0138, 0x0388, 0x0078, 0x0098, 0x00, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_SWIFTBLADE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0038, 0x01a8, 0x0078, 0x0078, 0x00, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_HYRULE_TOWN, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0050, 0x0378, 0x0078, 0x0078, 0x02, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_STAIRS_TO_CARLOV, 0x01, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x00f0, 0x0188, 0x0078, 0x0078, 0x02, AREA_CAVES, ROOM_CAVES_HYRULE_TOWN_WATERFALL, 0x01, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0040, 0x01b8, 0x0078, 0x0098, 0x02, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_WEST_ORACLE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x02b8, 0x0360, 0x0078, 0x0078, 0x00, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_EAST_ORACLE, 0x01,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_1, 0x00, 0x0338, 0x0134, 0x0288, 0x0118, 0x00, AREA_HYRULE_TOWN_UNDERGROUND,
      ROOM_HYRULE_TOWN_UNDERGROUND_0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x01f8, 0x0318, 0x03, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD,
      0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x01d8, 0x0230, 0x40, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS,
      0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x0008, 0x0230, 0x04, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x01,
      0x00, 0x02, 0x00, 0x00, 0x00, 0x00 },
    { WARP_TYPE_0, 0x00, 0x0000, 0x0000, 0x01f8, 0x0010, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD,
      0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleTown[] = {
    [ROOM_HYRULE_TOWN_MAIN] = gExitList_HyruleTown_0,
};

const Transition gExitList_HyruleTown_1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x318, 0x3, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_FestivalTown[] = {
    [ROOM_FESTIVAL_TOWN_MAIN] = gExitList_HyruleTown_1,
};

const Transition gExitList_MtCrenel_MountainTop[] = {
    { WARP_TYPE_1, 0x0, 0x328, 0x34, 0x1a8, 0x28, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BLOCK_PUSHING, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_WALL_CLIMB, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MtCrenel_WallClimb[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x58, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_HERMIT, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x148, 0x1e8, 0x78, 0xf8, 0x0, AREA_GREAT_FAIRIES, ROOM_GREAT_FAIRIES_CRENEL, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xd8, 0x3, AREA_MT_CRENEL, ROOM_MT_CRENEL_TOP, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_MtCrenel_CaveOfFlamesEntrance[] = {
    { WARP_TYPE_1, 0x0, 0x128, 0x18, 0x58, 0x1b8, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BLOCK_PUSHING, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x208, 0x18, 0x298, 0x1b8, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BLOCK_PUSHING, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0xb8, 0xb8, 0x88, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_PILLAR_CAVE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x238, 0xb8, 0x48, 0x1c8, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BRIDGE_SWITCH, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x188, 0xf8, 0xb8, 0x98, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_EXIT_TO_MINES, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x208, 0x148, 0x78, 0xf0, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_TO_GRAYBLADE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1e8, 0x1d8, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_GRIP_RING, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x68, 0x72, 0x88, 0xa8, 0x0, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_ENTRANCE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MtCrenel_GustJarShortcut[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x48, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_FAIRY_FOUNTAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x2f8, 0x28, 0x38, 0x98, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_SPINY_CHU_PUZZLE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x348, 0x58, 0xb8, 0x88, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_CHUCHU_POT_CHEST, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x108, 0x78, 0x118, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_WATER_HEART_PIECE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MtCrenel_Entrance[] = {
    { WARP_TYPE_1, 0x0, 0x298, 0x28, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_RUPEE_FAIRY_FOUINTAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x198, 0xd8, 0x1f8, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_HELMASAUR_HALLWAY, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x138, 0x138, 0xb8, 0x138, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_MUSHROOM_KEESE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x2d8, 0x188, 0x78, 0x88, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_LADDER_TO_SPRING_WATER, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x198, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BOMB_BUSINESS_SCRUB, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x3b8, 0x168, 0x78, 0x78, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_HINT_SCRUB, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1c8, 0x18, 0x98, 0x1a8, 0x0, AREA_MINISH_CAVES, ROOM_MINISH_CAVES_BEAN_PESTO, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x2d8, 0x154, 0x78, 0x38, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_LADDER_TO_SPRING_WATER, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0x8, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0, 0x2,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MtCrenel[] = {
    [ROOM_MT_CRENEL_TOP] = gExitList_MtCrenel_MountainTop,
    [ROOM_MT_CRENEL_WALL_CLIMB] = gExitList_MtCrenel_WallClimb,
    [ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE] = gExitList_MtCrenel_CaveOfFlamesEntrance,
    [ROOM_MT_CRENEL_CENTER] = gExitList_MtCrenel_GustJarShortcut,
    [ROOM_MT_CRENEL_ENTRANCE] = gExitList_MtCrenel_Entrance,
};

const Transition gExitList_HyruleField_WesternWoodSouth[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x28, 0x78, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_HYRULE_FIELD_SOUTHWEST, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_SouthHyruleField[] = {
    { WARP_TYPE_1, 0x0, 0x290, 0x188, 0x78, 0x78, 0x2, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_ENTRANCE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x3a0, 0x228, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_SOUTH_HYRULE_FIELD_HEART_PIECE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0xa8, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_SOUTH_HYRULE_FIELD_FAIRY_FOUNTAIN, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x58, 0x118, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_SOUTH_HYRULE_FIELD_RUPEE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x178, 0xd8, 0x78, 0xb8, 0x0, AREA_MINISH_CAVES, ROOM_MINISH_CAVES_OUTSIDE_LINKS_HOUSE, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x48, 0x1c8, 0x78, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_SOUTH_HYRULE_FIELD, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x3b8, 0x3, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_EasternHillsSouth[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x28, 0x78, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_HYRULE_FIELD_EXIT, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0x3c8, 0x8, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_EasternHillsCenter[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x98, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_HILLS_KEESE_CHEST, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_EasternHillsNorth[] = {
    { WARP_TYPE_1, 0x0, 0x40, 0x48, 0x78, 0x88, 0x2, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_FARM_HOUSE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0xc, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_LonLonRanch[] = {
    { WARP_TYPE_1, 0x0, 0x158, 0x278, 0x68, 0x78, 0x0, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_RANCH_HOUSE_WEST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x188, 0x278, 0x78, 0x78, 0x0, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_RANCH_HOUSE_EAST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xe8, 0x1b4, 0xa8, 0xd8, 0x0, AREA_CAVES, ROOM_CAVES_LON_LON_RANCH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1f8, 0x208, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_LON_LON_RANCH_WALLET, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0x354, 0x78, 0x78, 0x0, AREA_GORON_CAVE, ROOM_GORON_CAVE_STAIRS, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x154, 0x38, 0x28, 0x0, AREA_CAVES, ROOM_CAVES_LON_LON_RANCH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x3e8, 0x1, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1c8, 0x3e8, 0x2, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0xc, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3e8, 0xf0, 0x80, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x6, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_NorthHyruleField[] = {
    { WARP_TYPE_1, 0x0, 0x1f8, 0x38, 0x1f8, 0x208, 0x3, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1b0, 0x128, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_NORTHWEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x240, 0x128, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_NORTHEAST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1b0, 0x188, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_SOUTHWEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x240, 0x188, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_SOUTHEAST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x2f0, 0x138, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_NORTH_HYRULE_FIELD_FAIRY_FOUNTAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1f8, 0x154, 0xa8, 0xd8, 0x0, AREA_CAVES, ROOM_CAVES_BOOMERANG, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x108, 0x138, 0x108, 0xd8, 0x0, AREA_CAVES, ROOM_CAVES_TO_GRAVEYARD, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x138, 0x1e8, 0x78, 0xc8, 0x0, AREA_CAVES, ROOM_CAVES_HEART_PIECE_HALLWAY, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xf4, 0x38, 0x58, 0x0, AREA_CAVES, ROOM_CAVES_TO_GRAVEYARD, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0xf4, 0x118, 0x58, 0x0, AREA_CAVES, ROOM_CAVES_TO_GRAVEYARD, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x208, 0x3, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x18, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0x4, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0x260, 0x40, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_TrilbyHighlands[] = {
    { WARP_TYPE_1, 0x0, 0x40, 0x388, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_PERCYS_TREEHOUSE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0x222, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_KEESE_CHEST, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x2a8, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_RUPEE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x198, 0x2b2, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_FAIRY_FOUNTAIN, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0x94, 0x88, 0x68, 0x0, AREA_DIG_CAVES, ROOM_DIG_CAVES_TRILBY_HIGHLANDS, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x98, 0x284, 0x38, 0x38, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_HIGHLANDS, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x284, 0x128, 0x38, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_HIGHLANDS, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x3e8, 0x1, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xf0, 0x8, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3e8, 0xfff, 0x40, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x6, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_WesternWoodsNorth[] = {
    { WARP_TYPE_1, 0x0, 0xa0, 0x1e8, 0x78, 0x78, 0x2, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_WESTERN_WOODS_HEART_PIECE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3e8, 0xfff, 0x40, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleField_WesternWoodsCenter[] = {
    { WARP_TYPE_1, 0x0, 0x90, 0x48, 0x78, 0x88, 0x2, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_PERCY, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleField[] = {
    [ROOM_HYRULE_FIELD_WESTERN_WOODS_SOUTH] = gExitList_HyruleField_WesternWoodSouth,
    [ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD] = gExitList_HyruleField_SouthHyruleField,
    [ROOM_HYRULE_FIELD_EASTERN_HILLLS_SOUTH] = gExitList_HyruleField_EasternHillsSouth,
    [ROOM_HYRULE_FIELD_EASTERN_HILLLS_CENTER] = gExitList_HyruleField_EasternHillsCenter,
    [ROOM_HYRULE_FIELD_EASTERN_HILLLS_NORTH] = gExitList_HyruleField_EasternHillsNorth,
    [ROOM_HYRULE_FIELD_LON_LON_RANCH] = gExitList_HyruleField_LonLonRanch,
    [ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD] = gExitList_HyruleField_NorthHyruleField,
    [ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS] = gExitList_HyruleField_TrilbyHighlands,
    [ROOM_HYRULE_FIELD_WESTERN_WOODS_NORTH] = gExitList_HyruleField_WesternWoodsNorth,
    [ROOM_HYRULE_FIELD_WESTERN_WOODS_CENTER] = gExitList_HyruleField_WesternWoodsCenter,
};

// TODO this is one table
const Transition gExitList_CastleGarden_Main[] = {
    { WARP_TYPE_1, 0x0, 0x1f8, 0x28, 0xd8, 0x208, 0x2, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_0, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x308, 0x48, 0x78, 0x78, 0x0, AREA_GARDEN_FOUNTAINS, ROOM_GARDEN_FOUNTAINS_EAST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xe8, 0x48, 0x78, 0x78, 0x0, AREA_GARDEN_FOUNTAINS, ROOM_GARDEN_FOUNTAINS_WEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x68, 0x74, 0x68, 0x1a8, 0x0, AREA_HYRULE_CASTLE_CELLAR, ROOM_HYRULE_CASTLE_CELLAR_0, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x3a8, 0x184, 0x78, 0x68, 0x0, AREA_DOJOS, ROOM_DOJOS_TO_GRIMBLADE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x48, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gUnk_08134FBC[] = {
    { WARP_TYPE_1, 0x0, 0x1f8, 0x28, 0x198, 0x1f0, 0x2, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_ENTRANCE, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x308, 0x48, 0x78, 0x78, 0x0, AREA_GARDEN_FOUNTAINS, ROOM_GARDEN_FOUNTAINS_EAST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xe8, 0x48, 0x78, 0x78, 0x0, AREA_GARDEN_FOUNTAINS, ROOM_GARDEN_FOUNTAINS_WEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x68, 0x74, 0x68, 0x1a8, 0x0, AREA_HYRULE_CASTLE_CELLAR, ROOM_HYRULE_CASTLE_CELLAR_0, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x3a8, 0x184, 0x78, 0x68, 0x0, AREA_DOJOS, ROOM_DOJOS_TO_GRIMBLADE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x48, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gUnk_08135048[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CastleGarden[] = {
    [ROOM_CASTLE_GARDEN_MAIN] = gExitList_CastleGarden_Main,
};

const Transition gExitList_CloudTops_House[] = {
    { WARP_TYPE_1, 0x0, 0x1e8, 0x158, 0x78, 0x138, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_ENTRANCE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CloudTops[] = {
    [ROOM_CLOUD_TOPS_CLOUD_TOPS] = gExitList_CloudTops_House,
};

const Transition gExitList_RoyalValley_Main[] = {
    { WARP_TYPE_1, 0x0, 0xf0, 0x28, 0x88, 0x78, 0x2, AREA_ROYAL_CRYPT, ROOM_ROYAL_CRYPT_ENTRANCE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_1, 0x0, 0x1a0, 0x198, 0x78, 0x78, 0x2, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_DAMPE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x198, 0x2a8, 0x78, 0xf8, 0x0, AREA_GREAT_FAIRIES, ROOM_GREAT_FAIRIES_GRAVEYARD, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x58, 0x84, 0x78, 0x78, 0x0, AREA_ROYAL_VALLEY_GRAVES, ROOM_ROYAL_VALLEY_GRAVES_HEART_PIECE,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x188, 0x84, 0x78, 0x118, 0x0, AREA_ROYAL_VALLEY_GRAVES, ROOM_ROYAL_VALLEY_GRAVES_GINA, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x10, 0x10, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0x50, 0x8, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x2, 0x0, 0x0, 0x0, 0x0 },
#ifndef EU
    { WARP_TYPE_1, 0x0, 0x78, 0x28c, 0x78, 0x18, 0x0, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_FOREST_MAZE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
#else
    { WARP_TYPE_1, 0x0, 0x78, 0x288, 0x78, 0x18, 0x0, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_FOREST_MAZE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
#endif
    { WARP_TYPE_1, 0x0, 0x78, 0x328, 0x78, 0x98, 0x0, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_FOREST_MAZE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_RoyalValley_ForestMaze[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x338, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gUnk_08135190[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x278, 0x3, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x338, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_RoyalValley[] = {
    [ROOM_ROYAL_VALLEY_MAIN] = gExitList_RoyalValley_Main,
    [ROOM_ROYAL_VALLEY_FOREST_MAZE] = gExitList_RoyalValley_ForestMaze,
};

const Transition gExitList_VeilFalls_Main[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x22, 0x38, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_2F, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x158, 0x22, 0x118, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_2F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x42, 0xb8, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_1F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x1e2, 0x38, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_ENTRANCE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xd8, 0x1c2, 0x98, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_EXIT, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xd8, 0x142, 0x98, 0x118, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_BLOCK_PUZZLE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0xc2, 0xb8, 0x118, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_RUPEE_PATH, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x28, 0x78, 0x78, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_HEART_PIECE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xc8, 0x74, 0x38, 0x108, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_1F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x10, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xb8, 0x3, AREA_VEIL_FALLS_TOP, ROOM_VEIL_FALLS_TOP_0, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3e8, 0xfff, 0xc0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x6, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_VeilFalls[] = {
    [ROOM_VEIL_FALLS_MAIN] = gExitList_VeilFalls_Main,
};

const Transition gExitList_Beanstalks_MountCrenel[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x88, 0x78, 0x18, 0x2, AREA_BEANSTALKS, ROOM_BEANSTALKS_CRENEL_CLIMB, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_LakeHylia[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x88, 0x78, 0x18, 0x2, AREA_BEANSTALKS, ROOM_BEANSTALKS_LAKE_HYLIA_CLIMB, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_Ruins[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x88, 0x78, 0x18, 0x2, AREA_BEANSTALKS, ROOM_BEANSTALKS_RUINS_CLIMB, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_EasternHills[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x88, 0x78, 0x18, 0x2, AREA_BEANSTALKS, ROOM_BEANSTALKS_EASTERN_HILLS_CLIMB, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_WesternWoods[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x88, 0x78, 0x18, 0x2, AREA_BEANSTALKS, ROOM_BEANSTALKS_WESTERN_WOODS_CLIMB, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_MountCrenelClimb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x68, 0x3, AREA_BEANSTALKS, ROOM_BEANSTALKS_CRENEL, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x98, 0x18, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_TOP, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_LakeHyliaClimb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x68, 0x3, AREA_BEANSTALKS, ROOM_BEANSTALKS_LAKE_HYLIA, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x228, 0x18, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_BEANSTALK, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_RuinsClimb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x68, 0x3, AREA_BEANSTALKS, ROOM_BEANSTALKS_RUINS, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x18, 0x30, AREA_RUINS, ROOM_RUINS_BEANSTALK, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_EasternHillsClimb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x68, 0x3, AREA_BEANSTALKS, ROOM_BEANSTALKS_EASTERN_HILLS, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x18, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_EASTERN_HILLLS_CENTER, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Beanstalks_WesternWoodsClimb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x68, 0x3, AREA_BEANSTALKS, ROOM_BEANSTALKS_WESTERN_WOODS, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x18, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_WESTERN_WOODS_SOUTH, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_Beanstalks[] = {
    [ROOM_BEANSTALKS_CRENEL] = gExitList_Beanstalks_MountCrenel,
    [ROOM_BEANSTALKS_LAKE_HYLIA] = gExitList_Beanstalks_LakeHylia,
    [ROOM_BEANSTALKS_RUINS] = gExitList_Beanstalks_Ruins,
    [ROOM_BEANSTALKS_EASTERN_HILLS] = gExitList_Beanstalks_EasternHills,
    [ROOM_BEANSTALKS_WESTERN_WOODS] = gExitList_Beanstalks_WesternWoods,
    [ROOM_BEANSTALKS_5] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_6] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_7] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_8] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_9] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_a] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_b] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_c] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_d] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_e] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_f] = gExitList_NoExitList,
    [ROOM_BEANSTALKS_CRENEL_CLIMB] = gExitList_Beanstalks_MountCrenelClimb,
    [ROOM_BEANSTALKS_LAKE_HYLIA_CLIMB] = gExitList_Beanstalks_LakeHyliaClimb,
    [ROOM_BEANSTALKS_RUINS_CLIMB] = gExitList_Beanstalks_RuinsClimb,
    [ROOM_BEANSTALKS_EASTERN_HILLS_CLIMB] = gExitList_Beanstalks_EasternHillsClimb,
    [ROOM_BEANSTALKS_WESTERN_WOODS_CLIMB] = gExitList_Beanstalks_WesternWoodsClimb,
};

const Transition gExitList_LakeWoodsCave_Main[] = {
    { WARP_TYPE_1, 0x0, 0x248, 0x188, 0x148, 0x358, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_LakeWoodsCave[] = {
    [ROOM_LAKE_WOODS_CAVE_MAIN] = gExitList_LakeWoodsCave_Main,
};

const Transition gExitList_HyruleDigCaves_Main[] = {
    { WARP_TYPE_1, 0x0, 0x188, 0x218, 0x48, 0x118, 0x0, AREA_HYRULE_TOWN_UNDERGROUND, ROOM_HYRULE_TOWN_UNDERGROUND_0,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleDigCaves[] = {
    [ROOM_HYRULE_DIG_CAVES_TOWN] = gExitList_HyruleDigCaves_Main,
};

const Transition gExitList_MinishVillage_Main[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x88, 0x78, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_GENTARI_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x70, 0x68, 0x50, 0x1, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_GENTARI_EXIT, 0x1, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x258, 0x58, 0xe8, 0xb8, 0x0, AREA_MINISH_HOUSE_INTERIORS, ROOM_MINISH_HOUSE_INTERIORS_FESTARI,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0x228, 0x80, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS, ROOM_MINISH_HOUSE_INTERIORS_RED,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x168, 0x1d8, 0x80, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS, ROOM_MINISH_HOUSE_INTERIORS_GREEN,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1a8, 0x208, 0x80, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS, ROOM_MINISH_HOUSE_INTERIORS_BLUE,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1e8, 0x2d8, 0x78, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_SHOE_MINISH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x48, 0x248, 0x78, 0xc8, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_POT_MINISH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x378, 0x288, 0x78, 0x140, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_BARREL_MINISH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x368, 0x234, 0x58, 0x100, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_BARREL_MINISH, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x18, 0x30, AREA_MINISH_PATHS, ROOM_MINISH_PATHS_MINISH_VILLAGE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1c8, 0x338, 0x1, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1a8, 0x348, 0x40, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishVillage_SideHouse[] = {
    { WARP_TYPE_1, 0x0, 0x138, 0x68, 0x80, 0x78, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_SIDE_AREA, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishVillage[] = {
    [ROOM_MINISH_VILLAGE_MAIN] = gExitList_MinishVillage_Main,
    [ROOM_MINISH_VILLAGE_SIDE_HOUSE_AREA] = gExitList_MinishVillage_SideHouse,
    [ROOM_MINISH_VILLAGE_2] = gExitList_NoExitList,
    [ROOM_MINISH_VILLAGE_3] = gExitList_NoExitList,
};

const Transition gExitList_MelarisMine_Main[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x38, 0x78, 0xa8, 0x0, AREA_CRENEL_MINISH_PATHS, ROOM_CRENEL_MINISH_PATHS_MELARI, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x70, 0x12c, 0xbc, 0x138, 0x0, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1,
      0x1, 0x6, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x220, 0x78, 0x28, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_SOUTHWEST, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x228, 0x220, 0x78, 0x28, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_SOUTHEAST, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x280, 0x11c, 0x24, 0x56, 0x0, AREA_MINISH_HOUSE_INTERIORS,
      ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_EAST, 0x1, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MelarisMine[] = {
    [ROOM_MELARIS_MINE_MAIN] = gExitList_MelarisMine_Main,
};

const Transition gExitList_MinishPaths_ToMinishVillage[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x208, 0x3e0, 0x3, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0x398, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishPaths_CastorWilds[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x28, 0x68, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x28, 0xa8, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishPaths_HyruleTown[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x398, 0x68, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishPaths_LonLonRanch[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e0, 0x174, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishPaths_MayorsCabin[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2a8, 0x31a, 0x3, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x48, 0x30, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_MAYOR_LAKE_CABIN, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishPaths[] = {
    [ROOM_MINISH_PATHS_MINISH_VILLAGE] = gExitList_MinishPaths_ToMinishVillage,
    [ROOM_MINISH_PATHS_BOW] = gExitList_MinishPaths_CastorWilds,
    [ROOM_MINISH_PATHS_SCHOOLYARD] = gExitList_MinishPaths_HyruleTown,
    [ROOM_MINISH_PATHS_LON_LON_RANCH] = gExitList_MinishPaths_LonLonRanch,
    [ROOM_MINISH_PATHS_LAKE_HYLIA] = gExitList_MinishPaths_MayorsCabin,
};

const Transition gExitList_CrenelMinishPaths_CrenelBean[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd2, 0x60, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelMinishPaths_CrenelWater[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x372, 0xf5, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelMinishPaths_Rainfall[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2cc, 0x98, 0xc0, AREA_MT_CRENEL, ROOM_MT_CRENEL_TOP, 0x1, 0x1, 0x6, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2f4, 0x98, 0xc, AREA_MT_CRENEL, ROOM_MT_CRENEL_TOP, 0x1, 0x1, 0x2, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelMinishPaths_MelarisMine[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf4, 0x108, 0xc, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x1,
      0x2, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x48, 0x30, AREA_MELARIS_MINE, ROOM_MELARIS_MINE_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CrenelMinishPaths[] = {
    [ROOM_CRENEL_MINISH_PATHS_BEAN] = gExitList_CrenelMinishPaths_CrenelBean,
    [ROOM_CRENEL_MINISH_PATHS_SPRING_WATER] = gExitList_CrenelMinishPaths_CrenelWater,
    [ROOM_CRENEL_MINISH_PATHS_RAIN] = gExitList_CrenelMinishPaths_Rainfall,
    [ROOM_CRENEL_MINISH_PATHS_MELARI] = gExitList_CrenelMinishPaths_MelarisMine,
};

const Transition gExitList_DigCaves1_TrilbyHighlands[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x44, 0x88, 0x78, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1a8, 0x78, 0xb8, 0x28, 0x0, AREA_CAVES, ROOM_CAVES_TRILBY_MITTS_FAIRY_FOUNTAIN, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DigCaves1[] = {
    [ROOM_DIG_CAVES_EASTERN_HILLS] = gExitList_NoExitList,
    [ROOM_DIG_CAVES_1] = gExitList_NoExitList,
    [ROOM_DIG_CAVES_2] = gExitList_NoExitList,
    [ROOM_DIG_CAVES_TRILBY_HIGHLANDS] = gExitList_DigCaves1_TrilbyHighlands,
};

const Transition gExitList_MinishHouseInteriors_GentariMain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x98, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_GentariExit[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x50, 0x28, 0x70, 0x1, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_Festari[] = {
    { WARP_TYPE_1, 0x0, 0xe8, 0xe8, 0x258, 0x68, 0x0, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xe8, 0x18, 0x1d0, 0x33c, 0x0, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_Red[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x128, 0x238, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_Green[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x168, 0x1e8, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_Blue[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1a8, 0x218, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_SideArea[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x78, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_SIDE_HOUSE_AREA, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_ShoeMinish[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e8, 0x2e8, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_PotMinish[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x258, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_BarrelMinish[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x378, 0x298, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x58, 0xd0, 0x368, 0x218, 0x0, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_MAIN, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_NULL1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x378, 0x290, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_SIDE_HOUSE_AREA, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_NULL2[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x70, 0x30, AREA_MINISH_VILLAGE, ROOM_MINISH_VILLAGE_SIDE_HOUSE_AREA, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_MelariMinesSouthwest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x208, 0x3, AREA_MELARIS_MINE, ROOM_MELARIS_MINE_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_MelariMinesSoutheast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x228, 0x208, 0x3, AREA_MELARIS_MINE, ROOM_MELARIS_MINE_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_MelariMinesEast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x270, 0x11e, 0xc0, AREA_MELARIS_MINE, ROOM_MELARIS_MINE_MAIN, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_HyruleFieldSouthwest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x35, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_WESTERN_WOODS_SOUTH, 0x1, 0x1,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_SouthHyruleField[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x1d4, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x1,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_NextToKnuckle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x28, 0x55, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x1,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_Librari[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e8, 0x1b4, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_HyruleFieldExit[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x35, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_EASTERN_HILLLS_SOUTH, 0x1, 0x1,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_HyruleTown[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x1b5, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_MinishWoodsBomb[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x325, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishHouseInteriors_LakeHyliaOcarina[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x1a4, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishHouseInteriors[] = {
    [ROOM_MINISH_HOUSE_INTERIORS_GENTARI_MAIN] = gExitList_MinishHouseInteriors_GentariMain,
    [ROOM_MINISH_HOUSE_INTERIORS_GENTARI_EXIT] = gExitList_MinishHouseInteriors_GentariExit,
    [ROOM_MINISH_HOUSE_INTERIORS_FESTARI] = gExitList_MinishHouseInteriors_Festari,
    [ROOM_MINISH_HOUSE_INTERIORS_RED] = gExitList_MinishHouseInteriors_Red,
    [ROOM_MINISH_HOUSE_INTERIORS_GREEN] = gExitList_MinishHouseInteriors_Green,
    [ROOM_MINISH_HOUSE_INTERIORS_BLUE] = gExitList_MinishHouseInteriors_Blue,
    [ROOM_MINISH_HOUSE_INTERIORS_SIDE_AREA] = gExitList_MinishHouseInteriors_SideArea,
    [ROOM_MINISH_HOUSE_INTERIORS_SHOE_MINISH] = gExitList_MinishHouseInteriors_ShoeMinish,
    [ROOM_MINISH_HOUSE_INTERIORS_POT_MINISH] = gExitList_MinishHouseInteriors_PotMinish,
    [ROOM_MINISH_HOUSE_INTERIORS_BARREL_MINISH] = gExitList_MinishHouseInteriors_BarrelMinish,
    [ROOM_MINISH_HOUSE_INTERIORS_NULL1] = gExitList_MinishHouseInteriors_NULL1,
    [ROOM_MINISH_HOUSE_INTERIORS_NULL2] = gExitList_MinishHouseInteriors_NULL2,
    [ROOM_MINISH_HOUSE_INTERIORS_c] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_d] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_e] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_f] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_SOUTHWEST] = gExitList_MinishHouseInteriors_MelariMinesSouthwest,
    [ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_SOUTHEAST] = gExitList_MinishHouseInteriors_MelariMinesSoutheast,
    [ROOM_MINISH_HOUSE_INTERIORS_MELARI_MINES_EAST] = gExitList_MinishHouseInteriors_MelariMinesEast,
    [ROOM_MINISH_HOUSE_INTERIORS_13] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_14] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_15] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_16] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_17] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_18] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_19] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1a] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1b] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1c] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1d] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1e] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_1f] = gExitList_NoExitList,
    [ROOM_MINISH_HOUSE_INTERIORS_HYRULE_FIELD_SOUTHWEST] = gExitList_MinishHouseInteriors_HyruleFieldSouthwest,
    [ROOM_MINISH_HOUSE_INTERIORS_SOUTH_HYRULE_FIELD] = gExitList_MinishHouseInteriors_SouthHyruleField,
    [ROOM_MINISH_HOUSE_INTERIORS_NEXT_TO_KNUCKLE] = gExitList_MinishHouseInteriors_NextToKnuckle,
    [ROOM_MINISH_HOUSE_INTERIORS_LIBRARI] = gExitList_MinishHouseInteriors_Librari,
    [ROOM_MINISH_HOUSE_INTERIORS_HYRULE_FIELD_EXIT] = gExitList_MinishHouseInteriors_HyruleFieldExit,
    [ROOM_MINISH_HOUSE_INTERIORS_HYRULE_TOWN] = gExitList_MinishHouseInteriors_HyruleTown,
    [ROOM_MINISH_HOUSE_INTERIORS_MINISH_WOODS_BOMB] = gExitList_MinishHouseInteriors_MinishWoodsBomb,
    [ROOM_MINISH_HOUSE_INTERIORS_LAKE_HYLIA_OCARINA] = gExitList_MinishHouseInteriors_LakeHyliaOcarina,
};

const Transition gExitList_OuterFortressOfWinds_EntranceHall[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x22, 0x78, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WIZZROBE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0x22, 0x68, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WEST_STAIRS_1F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0x22, 0x78, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_CENTER_STAIRS_1F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x288, 0x22, 0x68, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_1F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x338, 0x22, 0x88, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_HEART_PIECE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0x28, 0x30, AREA_RUINS, ROOM_RUINS_FORTRESS_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_OuterFortressOfWinds_2F[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x22, 0x88, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_STALFOS, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0x92, 0x88, 0x170, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_MAIN_2F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x288, 0x92, 0x88, 0xa0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_2F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x338, 0x22, 0x28, 0xb0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_BOSS_KEY, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0xd8, 0x128, 0x68, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0xd8, 0x1d8, 0x68, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x288, 0xd8, 0x288, 0x68, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x338, 0xd8, 0x338, 0x68, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_OuterFortressOfWinds_3F[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x22, 0x78, 0xa0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_PIT_PLATFORMS, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0x22, 0x198, 0xa0, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WEST_KEY_LEVER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x2e8, 0x22, 0x198, 0x178, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_KEY_LEVER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x338, 0x22, 0x1f8, 0x178, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_KEY_LEVER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1d8, 0x84, 0x1d8, 0xf8, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x288, 0x84, 0x288, 0xf8, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x338, 0x84, 0x338, 0xf8, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0x84, 0x128, 0xf8, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_OuterFortressOfWinds_MoleMitts[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x22, 0x30, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_ENTRANCE_MOLE_MITTS, 0x2, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_OuterFortressOfWinds_SmallKey[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x22, 0x30, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_MINISH_HOLE, 0x2, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_OuterFortressOfWinds[] = {
    [ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL] = gExitList_OuterFortressOfWinds_EntranceHall,
    [ROOM_OUTER_FORTRESS_OF_WINDS_2F] = gExitList_OuterFortressOfWinds_2F,
    [ROOM_OUTER_FORTRESS_OF_WINDS_3F] = gExitList_OuterFortressOfWinds_3F,
    [ROOM_OUTER_FORTRESS_OF_WINDS_MOLE_MITTS] = gExitList_OuterFortressOfWinds_MoleMitts,
    [ROOM_OUTER_FORTRESS_OF_WINDS_SMALL_KEY] = gExitList_OuterFortressOfWinds_SmallKey,
};

const Transition gExitList_HyliaDigCaves_North[] = {
    { WARP_TYPE_1, 0x0, 0x248, 0x62, 0x208, 0x78, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_BEANSTALK, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x308, 0x62, 0x308, 0x78, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_BEANSTALK, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x398, 0x52, 0x388, 0x48, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_BEANSTALK, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyliaDigCaves[] = {
    [ROOM_HYLIA_DIG_CAVES_0] = gExitList_NoExitList,
    [ROOM_HYLIA_DIG_CAVES_1] = gExitList_HyliaDigCaves_North,
    NULL,
    NULL,
    NULL,
};

const Transition gExitList_VeilFallsTop_Main[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x10, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_VeilFallsTop[] = {
    [ROOM_VEIL_FALLS_TOP_0] = gExitList_VeilFallsTop_Main,
};

const Transition gExitList_HouseInteriors2_Stranger[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x98, 0x17c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_WestOracle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x1cc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_2[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x1cc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_3[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x1cc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_DrLeft[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x25c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_NULL1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x5c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_EASTERN_HILLLS_NORTH, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_Romio[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2e8, 0x304, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_Julietta[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x348, 0x30c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_Percy[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x90, 0x5c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_WESTERN_WOODS_CENTER, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_EastOracle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2b8, 0x374, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_A[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2b8, 0x374, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_B[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2b8, 0x374, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_Cucco[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3b8, 0x36c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_LinksHouseEntrance[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x18, 0x58, 0x28, 0x0, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_BEDROOM, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x290, 0x19c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_Dampe[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1a0, 0x1ac, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_NULL2[] = {
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_StockwellLakeHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x120, 0x4c, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors2_LinksHouseBedroom[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x18, 0x58, 0x28, 0x0, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_ENTRANCE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HouseInteriors2[] = {
    [ROOM_HOUSE_INTERIORS_2_STRANGER] = gExitList_HouseInteriors2_Stranger,
    [ROOM_HOUSE_INTERIORS_2_WEST_ORACLE] = gExitList_HouseInteriors2_WestOracle,
    [ROOM_HOUSE_INTERIORS_2_2] = gExitList_HouseInteriors2_2,
    [ROOM_HOUSE_INTERIORS_2_3] = gExitList_HouseInteriors2_3,
    [ROOM_HOUSE_INTERIORS_2_DR_LEFT] = gExitList_HouseInteriors2_DrLeft,
    [ROOM_HOUSE_INTERIORS_2_5] = gExitList_HouseInteriors2_NULL1,
    [ROOM_HOUSE_INTERIORS_2_ROMIO] = gExitList_HouseInteriors2_Romio,
    [ROOM_HOUSE_INTERIORS_2_JULIETTA] = gExitList_HouseInteriors2_Julietta,
    [ROOM_HOUSE_INTERIORS_2_PERCY] = gExitList_HouseInteriors2_Percy,
    [ROOM_HOUSE_INTERIORS_2_EAST_ORACLE] = gExitList_HouseInteriors2_EastOracle,
    [ROOM_HOUSE_INTERIORS_2_a] = gExitList_HouseInteriors2_A,
    [ROOM_HOUSE_INTERIORS_2_b] = gExitList_HouseInteriors2_B,
    [ROOM_HOUSE_INTERIORS_2_CUCCO] = gExitList_HouseInteriors2_Cucco,
    [ROOM_HOUSE_INTERIORS_2_d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_f] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_ENTRANCE] = gExitList_HouseInteriors2_LinksHouseEntrance,
    [ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_SMITH] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_DAMPE] = gExitList_HouseInteriors2_Dampe,
    [ROOM_HOUSE_INTERIORS_2_13] = gExitList_HouseInteriors2_NULL2,
    [ROOM_HOUSE_INTERIORS_2_STOCKWELL_LAKE_HOUSE] = gExitList_HouseInteriors2_StockwellLakeHouse,
    [ROOM_HOUSE_INTERIORS_2_LINKS_HOUSE_BEDROOM] = gExitList_HouseInteriors2_LinksHouseBedroom,
    [ROOM_HOUSE_INTERIORS_2_16] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_17] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_18] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_19] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1a] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1b] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1c] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_1f] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_20] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_21] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_22] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_23] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_24] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_25] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_26] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_27] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_28] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_29] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2a] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2b] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2c] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_2_2f] = gExitList_NoExitList,
};

const Transition gExitList_HouseInteriors4_Carpenter[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x90, 0x2dc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors4_Swiftblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x39c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors4_RanchHouseWest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x158, 0x28c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors4_RanchHouseEast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x28c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors4_FarmHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x5c, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_EASTERN_HILLLS_NORTH, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors4_MayorLakeCabin[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2a0, 0x38c, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HouseInteriors4[] = {
    [ROOM_HOUSE_INTERIORS_4_CARPENTER] = gExitList_HouseInteriors4_Carpenter,
    [ROOM_HOUSE_INTERIORS_4_SWIFTBLADE] = gExitList_HouseInteriors4_Swiftblade,
    [ROOM_HOUSE_INTERIORS_4_RANCH_HOUSE_WEST] = gExitList_HouseInteriors4_RanchHouseWest,
    [ROOM_HOUSE_INTERIORS_4_RANCH_HOUSE_EAST] = gExitList_HouseInteriors4_RanchHouseEast,
    [ROOM_HOUSE_INTERIORS_4_FARM_HOUSE] = gExitList_HouseInteriors4_FarmHouse,
    [ROOM_HOUSE_INTERIORS_4_MAYOR_LAKE_CABIN] = gExitList_HouseInteriors4_MayorLakeCabin,
    [ROOM_HOUSE_INTERIORS_4_6] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_7] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_8] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_9] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_a] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_b] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_c] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_4_f] = gExitList_NoExitList,
};

const Transition gExitList_GreatFairies_Graveyard[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0x2b8, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_GreatFairies_MinishWoods[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x58, 0x30, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_MINISH_WOODS_GREAT_FAIRY, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_GreatFairies_MtCrenel[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x148, 0x1f8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_WALL_CLIMB, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_GreatFairies[] = {
    [ROOM_GREAT_FAIRIES_GRAVEYARD] = gExitList_GreatFairies_Graveyard,
    [ROOM_GREAT_FAIRIES_MINISH_WOODS] = gExitList_GreatFairies_MinishWoods,
    [ROOM_GREAT_FAIRIES_CRENEL] = gExitList_GreatFairies_MtCrenel,
    [ROOM_GREAT_FAIRIES_NOT_IMPLEMENTED] = gExitList_NoExitList,
};

const Transition gExitList_HouseInteriors3_StockwellShop[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x258, 0x2fc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_Cafe[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0x2fc, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_RemShoeShop[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x210, 0xc, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_Bakery[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x268, 0x1f0, 0xc0, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x6, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_Simon[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x250, 0xc, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_FigurineHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x290, 0xc, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x128, 0x290, 0xc0, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x6, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_BorlovEntrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x298, 0x26c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x78, 0x3, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BORLOV, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_Carlov[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x60, 0x30, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_STAIRS_TO_CARLOV, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors3_Borlov[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x68, 0x30, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BORLOV_ENTRANCE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HouseInteriors3[] = {
    [ROOM_HOUSE_INTERIORS_3_STOCKWELL_SHOP] = gExitList_HouseInteriors3_StockwellShop,
    [ROOM_HOUSE_INTERIORS_3_CAFE] = gExitList_HouseInteriors3_Cafe,
    [ROOM_HOUSE_INTERIORS_3_REM_SHOE_SHOP] = gExitList_HouseInteriors3_RemShoeShop,
    [ROOM_HOUSE_INTERIORS_3_BAKERY] = gExitList_HouseInteriors3_Bakery,
    [ROOM_HOUSE_INTERIORS_3_SIMON] = gExitList_HouseInteriors3_Simon,
    [ROOM_HOUSE_INTERIORS_3_FIGURINE_HOUSE] = gExitList_HouseInteriors3_FigurineHouse,
    [ROOM_HOUSE_INTERIORS_3_BORLOV_ENTRANCE] = gExitList_HouseInteriors3_BorlovEntrance,
    [ROOM_HOUSE_INTERIORS_3_CARLOV] = gExitList_HouseInteriors3_Carlov,
    [ROOM_HOUSE_INTERIORS_3_BORLOV] = gExitList_HouseInteriors3_Borlov,
    [ROOM_HOUSE_INTERIORS_3_9] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_a] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_b] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_c] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_3_f] = gExitList_NoExitList,
};

const Transition gExitList_HouseInteriors1_Mayor[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2c8, 0x14c, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x318, 0x120, 0xc, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_PostOffice[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0xb8, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_Library2F[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x58, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x2, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x78, 0x18, 0x68, 0x28, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_Library1F[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x168, 0xb8, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x68, 0x18, 0x78, 0x28, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_2F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_Inn1F[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x388, 0x268, 0x10, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x78, 0x18, 0x98, 0x78, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_WEST_ROOM, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x18, 0x78, 0x78, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_MIDDLE_ROOM, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xf8, 0x18, 0x78, 0x78, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_EAST_ROOM, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x38, 0xb8, 0x168, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_EAST_2F, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_InnWestRoom[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x28, 0x30, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_InnMiddleRoom[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x28, 0x30, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_InnEastRoom[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf8, 0x28, 0x30, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_InnWest2F[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x368, 0x1c8, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_InnEast2F[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3a8, 0x230, 0x10, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x2, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x178, 0x118, 0x48, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_INN_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_SchoolWest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2c8, 0xa8, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x168, 0x28, 0x0, AREA_HYRULE_TOWN_UNDERGROUND, ROOM_HYRULE_TOWN_UNDERGROUND_0, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HouseInteriors1_SchoolEast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x328, 0x78, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HouseInteriors1[] = {
    [ROOM_HOUSE_INTERIORS_1_MAYOR] = gExitList_HouseInteriors1_Mayor,
    [ROOM_HOUSE_INTERIORS_1_POST_OFFICE] = gExitList_HouseInteriors1_PostOffice,
    [ROOM_HOUSE_INTERIORS_1_LIBRARY_2F] = gExitList_HouseInteriors1_Library2F,
    [ROOM_HOUSE_INTERIORS_1_LIBRARY_1F] = gExitList_HouseInteriors1_Library1F,
    [ROOM_HOUSE_INTERIORS_1_INN_1F] = gExitList_HouseInteriors1_Inn1F,
    [ROOM_HOUSE_INTERIORS_1_INN_WEST_ROOM] = gExitList_HouseInteriors1_InnWestRoom,
    [ROOM_HOUSE_INTERIORS_1_INN_MIDDLE_ROOM] = gExitList_HouseInteriors1_InnMiddleRoom,
    [ROOM_HOUSE_INTERIORS_1_INN_EAST_ROOM] = gExitList_HouseInteriors1_InnEastRoom,
    [ROOM_HOUSE_INTERIORS_1_INN_WEST_2F] = gExitList_HouseInteriors1_InnWest2F,
    [ROOM_HOUSE_INTERIORS_1_INN_EAST_2F] = gExitList_HouseInteriors1_InnEast2F,
    [ROOM_HOUSE_INTERIORS_1_INN_MINISH_HEART_PIECE] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_SCHOOL_WEST] = gExitList_HouseInteriors1_SchoolWest,
    [ROOM_HOUSE_INTERIORS_1_SCHOOL_EAST] = gExitList_HouseInteriors1_SchoolEast,
    [ROOM_HOUSE_INTERIORS_1_d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_f] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_10] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_11] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_12] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_13] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_14] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_15] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_16] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_17] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_18] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_19] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1a] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1b] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1c] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1d] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1e] = gExitList_NoExitList,
    [ROOM_HOUSE_INTERIORS_1_1f] = gExitList_NoExitList,
};

const Transition gExitList_TreeInteriors_WitchHut[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2c0, 0x58, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_StairsToCarlov[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x78, 0x78, 0x0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_CARLOV, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x50, 0x388, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_PercysTreehouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x40, 0x398, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_HeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3a0, 0x238, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_Waveblade[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x78, 0x98, 0x0, AREA_DOJOS, ROOM_DOJOS_WAVEBLADE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x100, 0x2c8, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_14[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x210, 0x1d8, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_BoomerangNorthwest[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x54, 0x48, 0x88, 0x0, AREA_CAVES, ROOM_CAVES_BOOMERANG, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1b0, 0x138, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_BoomerangNortheast[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x54, 0x108, 0x88, 0x0, AREA_CAVES, ROOM_CAVES_BOOMERANG, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x240, 0x138, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_BoomerangSouthwest[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x54, 0x48, 0xf8, 0x0, AREA_CAVES, ROOM_CAVES_BOOMERANG, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1b0, 0x198, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_BoomerangSoutheast[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x54, 0x108, 0xf8, 0x0, AREA_CAVES, ROOM_CAVES_BOOMERANG, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x240, 0x198, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_WesternWoodsHeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa0, 0x1f8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_WESTERN_WOODS_NORTH, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_NorthHyruleFieldFairyFountain[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_NORTH_HYRULE_FIELD_FAIRY_FOUNTAIN, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2f0, 0x148, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_MinishWoodsGreatFairy[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x78, 0xf8, 0x0, AREA_GREAT_FAIRIES, ROOM_GREAT_FAIRIES_MINISH_WOODS, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x70, 0x58, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_1C[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x50, 0x298, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_MinishWoodsBusinessScrub[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x78, 0x78, 0x0, AREA_CAVES, ROOM_CAVES_KINSTONE_BUSINESS_SCRUB, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x210, 0x1d8, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_1E[] = {
    TransitionListEnd,
};
const Transition gExitList_TreeInteriors_UnusedHeartContainer[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e0, 0x1b8, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_TreeInteriors[] = {
    [ROOM_TREE_INTERIORS_WITCH_HUT] = gExitList_TreeInteriors_WitchHut,
    [ROOM_TREE_INTERIORS_1] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_2] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_3] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_4] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_5] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_6] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_7] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_8] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_9] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_a] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_b] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_c] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_d] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_e] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_f] = gExitList_NoExitList,
    [ROOM_TREE_INTERIORS_STAIRS_TO_CARLOV] = gExitList_TreeInteriors_StairsToCarlov,
    [ROOM_TREE_INTERIORS_PERCYS_TREEHOUSE] = gExitList_TreeInteriors_PercysTreehouse,
    [ROOM_TREE_INTERIORS_SOUTH_HYRULE_FIELD_HEART_PIECE] = gExitList_TreeInteriors_HeartPiece,
    [ROOM_TREE_INTERIORS_WAVEBLADE] = gExitList_TreeInteriors_Waveblade,
    [ROOM_TREE_INTERIORS_14] = gExitList_TreeInteriors_14,
    [ROOM_TREE_INTERIORS_BOOMERANG_NORTHWEST] = gExitList_TreeInteriors_BoomerangNorthwest,
    [ROOM_TREE_INTERIORS_BOOMERANG_NORTHEAST] = gExitList_TreeInteriors_BoomerangNortheast,
    [ROOM_TREE_INTERIORS_BOOMERANG_SOUTHWEST] = gExitList_TreeInteriors_BoomerangSouthwest,
    [ROOM_TREE_INTERIORS_BOOMERANG_SOUTHEAST] = gExitList_TreeInteriors_BoomerangSoutheast,
    [ROOM_TREE_INTERIORS_WESTERN_WOODS_HEART_PIECE] = gExitList_TreeInteriors_WesternWoodsHeartPiece,
    [ROOM_TREE_INTERIORS_NORTH_HYRULE_FIELD_FAIRY_FOUNTAIN] = gExitList_TreeInteriors_NorthHyruleFieldFairyFountain,
    [ROOM_TREE_INTERIORS_MINISH_WOODS_GREAT_FAIRY] = gExitList_TreeInteriors_MinishWoodsGreatFairy,
    [ROOM_TREE_INTERIORS_1c] = gExitList_TreeInteriors_1C,
    [ROOM_TREE_INTERIORS_MINISH_WOODS_BUSINESS_SCRUB] = gExitList_TreeInteriors_MinishWoodsBusinessScrub,
    [ROOM_TREE_INTERIORS_1e] = gExitList_TreeInteriors_1E,
    [ROOM_TREE_INTERIORS_UNUSED_HEART_CONTAINER] = gExitList_TreeInteriors_UnusedHeartContainer,
};

const Transition gExitList_Dojos_Grayblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x20, 0x30, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_TO_GRAYBLADE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_Swiftblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x2e8, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_Waveblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x58, 0x30, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_WAVEBLADE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_ToGrimblade[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x48, 0x3a8, 0x168, 0x0, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_ToSplitblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf8, 0x358, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_ToGreatblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x1f8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Dojos_ToScarblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x398, 0x48, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_Dojos[] = {
    [ROOM_DOJOS_GRAYBLADE] = gExitList_Dojos_Grayblade,
    [ROOM_DOJOS_SPLITBLADE] = gExitList_NoExitList,
    [ROOM_DOJOS_GREATBLADE] = gExitList_NoExitList,
    [ROOM_DOJOS_SCARBLADE] = gExitList_NoExitList,
    [ROOM_DOJOS_SWIFTBLADE_I] = gExitList_Dojos_Swiftblade,
    [ROOM_DOJOS_GRIMBLADE] = gExitList_NoExitList,
    [ROOM_DOJOS_WAVEBLADE] = gExitList_Dojos_Waveblade,
    [ROOM_DOJOS_7] = gExitList_NoExitList,
    [ROOM_DOJOS_8] = gExitList_NoExitList,
    [ROOM_DOJOS_9] = gExitList_NoExitList,
    [ROOM_DOJOS_TO_GRIMBLADE] = gExitList_Dojos_ToGrimblade,
    [ROOM_DOJOS_TO_SPLITBLADE] = gExitList_Dojos_ToSplitblade,
    [ROOM_DOJOS_TO_GREATBLADE] = gExitList_Dojos_ToGreatblade,
    [ROOM_DOJOS_TO_SCARBLADE] = gExitList_Dojos_ToScarblade,
    [ROOM_DOJOS_e] = gExitList_NoExitList,
    [ROOM_DOJOS_f] = gExitList_NoExitList,
};

const Transition gExitList_MinishCracks_LonLonRanchNorth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x232, 0x18, 0x3, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x1, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_LakeHyliaEast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2d8, 0x114, 0x3, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_HyruleCastleGarden[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3a8, 0x40, 0x3, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_MtCrenel[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x158, 0x54, 0x3, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x1, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_EastHyruleCastle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3c8, 0x184, 0x3, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_5[] = {
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_CastorWildsBow[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x28, 0x54, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_RuinsEntrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x17c, 0x3, AREA_RUINS, ROOM_RUINS_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_MinishWoodsSouth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x218, 0x3c4, 0x3, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_CastorWildsNorth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x44, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_CastorWildsWest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x134, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_CastorWildsMiddle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x168, 0x2d4, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_RuinsTektite[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x54, 0x3, AREA_RUINS, ROOM_RUINS_TEKTITES, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_CastorWildsNextToBow[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x18, 0x54, 0x3, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCracks_11[] = {
    TransitionListEnd,
};
const Transition* const gExitLists_MinishCracks[] = {
    [ROOM_MINISH_CRACKS_LON_LON_RANCH_NORTH] = gExitList_MinishCracks_LonLonRanchNorth,
    [ROOM_MINISH_CRACKS_LAKE_HYLIA_EAST] = gExitList_MinishCracks_LakeHyliaEast,
    [ROOM_MINISH_CRACKS_HYRULE_CASTLE_GARDEN] = gExitList_MinishCracks_HyruleCastleGarden,
    [ROOM_MINISH_CRACKS_MT_CRENEL] = gExitList_MinishCracks_MtCrenel,
    [ROOM_MINISH_CRACKS_EAST_HYRULE_CASTLE] = gExitList_MinishCracks_EastHyruleCastle,
    [ROOM_MINISH_CRACKS_5] = gExitList_MinishCracks_5,
    [ROOM_MINISH_CRACKS_CASTOR_WILDS_BOW] = gExitList_MinishCracks_CastorWildsBow,
    [ROOM_MINISH_CRACKS_RUINS_ENTRANCE] = gExitList_MinishCracks_RuinsEntrance,
    [ROOM_MINISH_CRACKS_MINISH_WOODS_SOUTH] = gExitList_MinishCracks_MinishWoodsSouth,
    [ROOM_MINISH_CRACKS_CASTOR_WILDS_NORTH] = gExitList_MinishCracks_CastorWildsNorth,
    [ROOM_MINISH_CRACKS_CASTOR_WILDS_WEST] = gExitList_MinishCracks_CastorWildsWest,
    [ROOM_MINISH_CRACKS_CASTOR_WILDS_MIDDLE] = gExitList_MinishCracks_CastorWildsMiddle,
    [ROOM_MINISH_CRACKS_RUINS_TEKTITE] = gExitList_MinishCracks_RuinsTektite,
    [ROOM_MINISH_CRACKS_CASTOR_WILDS_NEXT_TO_BOW] = gExitList_MinishCracks_CastorWildsNextToBow,
    [ROOM_MINISH_CRACKS_e] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_f] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_10] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_11] = gExitList_MinishCracks_11,
    [ROOM_MINISH_CRACKS_12] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_13] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_14] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_15] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_16] = gExitList_NoExitList,
    [ROOM_MINISH_CRACKS_17] = gExitList_NoExitList,
};

const Transition gExitList_CrenelCaves_BlockPushing[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x328, 0x18, 0x3, AREA_MT_CRENEL, ROOM_MT_CRENEL_TOP, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x128, 0x28, 0x10, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x208, 0x28, 0x20, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x238, 0xb8, 0x38, 0x38, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BRIDGE_SWITCH, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_PillarCave[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0xc8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x28, 0xb8, 0x48, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_EXIT_TO_MINES, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_BridgeSwitch[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x238, 0xc8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x28, 0x238, 0xc8, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_BLOCK_PUSHING, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_ExitToMines[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x108, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0x38, 0x38, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_PILLAR_CAVE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_GripRing[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e8, 0x1e8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_FairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x58, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CENTER, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_SpinyChuPuzzle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2f8, 0x38, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CENTER, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0x38, 0x38, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_CHUCHU_POT_CHEST, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_ChuchuPotChest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x348, 0x68, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CENTER, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x28, 0xb8, 0x48, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_SPINY_CHU_PUZZLE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_WaterHeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x118, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CENTER, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_RupeeFairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x298, 0x38, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_HelmasaurHallway[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0xe8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x68, 0x18, 0xb8, 0x48, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_MUSHROOM_KEESE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_MushroomKeese[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x148, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0x68, 0x28, 0x0, AREA_CRENEL_CAVES, ROOM_CRENEL_CAVES_HELMASAUR_HALLWAY, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_LadderToSpringWater[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2d8, 0x198, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2d8, 0x138, 0x3, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_BombBusinessScrub[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x1a8, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_Hermit[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x68, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_WALL_CLIMB, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_HintScrub[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3b8, 0x178, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CrenelCaves_ToGrayblade[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0xa0, 0x3, AREA_DOJOS, ROOM_DOJOS_GRAYBLADE, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x208, 0x158, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CrenelCaves[] = {
    [ROOM_CRENEL_CAVES_BLOCK_PUSHING] = gExitList_CrenelCaves_BlockPushing,
    [ROOM_CRENEL_CAVES_PILLAR_CAVE] = gExitList_CrenelCaves_PillarCave,
    [ROOM_CRENEL_CAVES_BRIDGE_SWITCH] = gExitList_CrenelCaves_BridgeSwitch,
    [ROOM_CRENEL_CAVES_EXIT_TO_MINES] = gExitList_CrenelCaves_ExitToMines,
    [ROOM_CRENEL_CAVES_GRIP_RING] = gExitList_CrenelCaves_GripRing,
    [ROOM_CRENEL_CAVES_FAIRY_FOUNTAIN] = gExitList_CrenelCaves_FairyFountain,
    [ROOM_CRENEL_CAVES_SPINY_CHU_PUZZLE] = gExitList_CrenelCaves_SpinyChuPuzzle,
    [ROOM_CRENEL_CAVES_CHUCHU_POT_CHEST] = gExitList_CrenelCaves_ChuchuPotChest,
    [ROOM_CRENEL_CAVES_WATER_HEART_PIECE] = gExitList_CrenelCaves_WaterHeartPiece,
    [ROOM_CRENEL_CAVES_RUPEE_FAIRY_FOUINTAIN] = gExitList_CrenelCaves_RupeeFairyFountain,
    [ROOM_CRENEL_CAVES_HELMASAUR_HALLWAY] = gExitList_CrenelCaves_HelmasaurHallway,
    [ROOM_CRENEL_CAVES_MUSHROOM_KEESE] = gExitList_CrenelCaves_MushroomKeese,
    [ROOM_CRENEL_CAVES_LADDER_TO_SPRING_WATER] = gExitList_CrenelCaves_LadderToSpringWater,
    [ROOM_CRENEL_CAVES_BOMB_BUSINESS_SCRUB] = gExitList_CrenelCaves_BombBusinessScrub,
    [ROOM_CRENEL_CAVES_HERMIT] = gExitList_CrenelCaves_Hermit,
    [ROOM_CRENEL_CAVES_HINT_SCRUB] = gExitList_CrenelCaves_HintScrub,
    [ROOM_CRENEL_CAVES_TO_GRAYBLADE] = gExitList_CrenelCaves_ToGrayblade,
};

const Transition gExitList_CastorCaves_South[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2d8, 0x398, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CastorCaves_North[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x248, 0x48, 0x10, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x288, 0x48, 0x20, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CastorCaves_WindRuins[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x48, 0x30, AREA_RUINS, ROOM_RUINS_ENTRANCE, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_CastorCaves_Darknut[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x18, 0x188, 0x28, 0x0, AREA_CASTOR_DARKNUT, ROOM_CASTOR_DARKNUT_HALL, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1a8, 0x1b8, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CastorCaves_HeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3c8, 0x48, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CastorCaves[] = {
    [ROOM_CASTOR_CAVES_SOUTH] = gExitList_CastorCaves_South,
    [ROOM_CASTOR_CAVES_NORTH] = gExitList_CastorCaves_North,
    [ROOM_CASTOR_CAVES_WIND_RUINS] = gExitList_CastorCaves_WindRuins,
    [ROOM_CASTOR_CAVES_DARKNUT] = gExitList_CastorCaves_Darknut,
    [ROOM_CASTOR_CAVES_HEART_PIECE] = gExitList_CastorCaves_HeartPiece,
    [ROOM_CASTOR_CAVES_5] = gExitList_NoExitList,
    [ROOM_CASTOR_CAVES_6] = gExitList_NoExitList,
    [ROOM_CASTOR_CAVES_7] = gExitList_NoExitList,
};

const Transition gExitList_CastorDarknut_Main[] = {
    TransitionListEnd,
};
const Transition gExitList_CastorDarknut_Hall[] = {
    { WARP_TYPE_1, 0x0, 0x188, 0x18, 0x68, 0x28, 0x0, AREA_CASTOR_CAVES, ROOM_CASTOR_CAVES_DARKNUT, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CastorDarknut[] = {
    [ROOM_CASTOR_DARKNUT_MAIN] = gExitList_CastorDarknut_Main,
    [ROOM_CASTOR_DARKNUT_HALL] = gExitList_CastorDarknut_Hall,
    NULL,
    NULL,
};

const Transition gExitList_ArmosInteriors_RuinsEntranceNorth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0xf8, 0x30, AREA_RUINS, ROOM_RUINS_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsEntranceSouth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x1a8, 0x30, AREA_RUINS, ROOM_RUINS_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsLeft[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x48, 0x68, 0x30, AREA_RUINS, ROOM_RUINS_BELOW_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsMiddleLeft[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x68, 0x30, AREA_RUINS, ROOM_RUINS_BELOW_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsMiddleRight[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x68, 0x30, AREA_RUINS, ROOM_RUINS_BELOW_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsRight[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd8, 0x68, 0x30, AREA_RUINS, ROOM_RUINS_BELOW_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_6[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x108, 0x68, 0x30, AREA_RUINS, ROOM_RUINS_BELOW_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_RuinsGrassPath[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0xa8, 0x30, AREA_RUINS, ROOM_RUINS_FORTRESS_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_8[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x58, 0x30, AREA_RUINS, ROOM_RUINS_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_FortressOfWindsLeft[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x58, 0x30, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_KEY_LEVER, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_ArmosInteriors_FortressOfWindsRight[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0x58, 0x30, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_KEY_LEVER, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_ArmosInteriors[] = {
    [ROOM_ARMOS_INTERIORS_RUINS_ENTRANCE_NORTH] = gExitList_ArmosInteriors_RuinsEntranceNorth,
    [ROOM_ARMOS_INTERIORS_RUINS_ENTRANCE_SOUTH] = gExitList_ArmosInteriors_RuinsEntranceSouth,
    [ROOM_ARMOS_INTERIORS_RUINS_LEFT] = gExitList_ArmosInteriors_RuinsLeft,
    [ROOM_ARMOS_INTERIORS_RUINS_MIDDLE_LEFT] = gExitList_ArmosInteriors_RuinsMiddleLeft,
    [ROOM_ARMOS_INTERIORS_RUINS_MIDDLE_RIGHT] = gExitList_ArmosInteriors_RuinsMiddleRight,
    [ROOM_ARMOS_INTERIORS_RUINS_RIGHT] = gExitList_ArmosInteriors_RuinsRight,
    [ROOM_ARMOS_INTERIORS_6] = gExitList_ArmosInteriors_6,
    [ROOM_ARMOS_INTERIORS_RUINS_GRASS_PATH] = gExitList_ArmosInteriors_RuinsGrassPath,
    [ROOM_ARMOS_INTERIORS_8] = gExitList_ArmosInteriors_8,
    [ROOM_ARMOS_INTERIORS_FORTRESS_LEFT] = gExitList_ArmosInteriors_FortressOfWindsLeft,
    [ROOM_ARMOS_INTERIORS_FORTRESS_RIGHT] = gExitList_ArmosInteriors_FortressOfWindsRight,
};

const Transition gExitList_TownMinishHoles_MayorsHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x2c, 0x30, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_MAYOR, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_WestOracle[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc, 0x38, 0xc, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_WEST_ORACLE, 0x1, 0x1, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_DrLeft[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x44, 0x30, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_DR_LEFT, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_Carpenter[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc, 0x68, 0xc, AREA_HOUSE_INTERIORS_4, ROOM_HOUSE_INTERIORS_4_CARPENTER, 0x1, 0x1, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_Cafe[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xcc, 0x48, 0xc0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_CAFE, 0x1, 0x1, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_LibraryBookshelf[] = {
    { WARP_TYPE_1, 0x0, 0x100, 0xc8, 0x78, 0xc0, 0x0, AREA_TOWN_MINISH_HOLES, ROOM_TOWN_MINISH_HOLES_LIBRARY_BOOKS_HOUSE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3e, 0x3c, 0x10, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_2F, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x54, 0x3c, 0x20, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_LIBRARY_2F, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_LibrariBookHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf8, 0xd8, 0x30, AREA_TOWN_MINISH_HOLES, ROOM_TOWN_MINISH_HOLES_LIBRARY_BOOKSHELF, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TownMinishHoles_RemShoeShop[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x74, 0x64, 0x30, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_REM_SHOE_SHOP, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_TownMinishHoles[] = {
    [ROOM_TOWN_MINISH_HOLES_MAYORS_HOUSE] = gExitList_TownMinishHoles_MayorsHouse,
    [ROOM_TOWN_MINISH_HOLES_WEST_ORACLE] = gExitList_TownMinishHoles_WestOracle,
    [ROOM_TOWN_MINISH_HOLES_DR_LEFT] = gExitList_TownMinishHoles_DrLeft,
    [ROOM_TOWN_MINISH_HOLES_CARPENTER] = gExitList_TownMinishHoles_Carpenter,
    [ROOM_TOWN_MINISH_HOLES_CAFE] = gExitList_TownMinishHoles_Cafe,
    [ROOM_TOWN_MINISH_HOLES_5] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_6] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_7] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_8] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_9] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_a] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_b] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_c] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_d] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_e] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_f] = gExitList_NoExitList,
    [ROOM_TOWN_MINISH_HOLES_LIBRARY_BOOKSHELF] = gExitList_TownMinishHoles_LibraryBookshelf,
    [ROOM_TOWN_MINISH_HOLES_LIBRARY_BOOKS_HOUSE] = gExitList_TownMinishHoles_LibrariBookHouse,
    [ROOM_TOWN_MINISH_HOLES_REM_SHOE_SHOP] = gExitList_TownMinishHoles_RemShoeShop,
    [ROOM_TOWN_MINISH_HOLES_13] = gExitList_NoExitList,
};

const Transition gExitList_MinishRafters_Cafe[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x18, 0x48, 0x2c, 0x0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_CAFE, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1bc, 0x2b4, 0xc, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x2, 0x1, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishRafters_Stockwell[] = {
    { WARP_TYPE_1, 0x0, 0x198, 0x18, 0xac, 0x2c, 0x0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_STOCKWELL_SHOP, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x238, 0x2b4, 0xc0, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x2, 0x1, 0x6, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishRafters_DrLeft[] = {
    { WARP_TYPE_1, 0x0, 0xe8, 0x18, 0x88, 0x2c, 0x0, AREA_HOUSE_INTERIORS_2, ROOM_HOUSE_INTERIORS_2_DR_LEFT, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishRafters_Bakery[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x18, 0x48, 0x2c, 0x0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BAKERY, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x148, 0x18, 0x88, 0x2c, 0x0, AREA_HOUSE_INTERIORS_3, ROOM_HOUSE_INTERIORS_3_BAKERY, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishRafters[] = {
    [ROOM_MINISH_RAFTERS_CAFE] = gExitList_MinishRafters_Cafe,
    [ROOM_MINISH_RAFTERS_STOCKWELL] = gExitList_MinishRafters_Stockwell,
    [ROOM_MINISH_RAFTERS_DR_LEFT] = gExitList_MinishRafters_DrLeft,
    [ROOM_MINISH_RAFTERS_BAKERY] = gExitList_MinishRafters_Bakery,
};

const Transition gExitList_GoronCave_Stairs[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x38, 0x78, 0x278, 0x0, AREA_GORON_CAVE, ROOM_GORON_CAVE_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x368, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_GoronCave_Main[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x288, 0x78, 0x48, 0x0, AREA_GORON_CAVE, ROOM_GORON_CAVE_STAIRS, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_GoronCave[] = {
    [ROOM_GORON_CAVE_STAIRS] = gExitList_GoronCave_Stairs,
    [ROOM_GORON_CAVE_MAIN] = gExitList_GoronCave_Main,
};

const Transition gExitList_WindTribeTower_Entrance[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0xe8, 0xb8, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_1, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1e8, 0x168, 0x30, AREA_CLOUD_TOPS, ROOM_CLOUD_TOPS_CLOUD_TOPS, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_WindTribeTower_Floor2[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0xe8, 0x88, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_ENTRANCE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xe8, 0xb8, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_2, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_WindTribeTower_Floor3[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0xe8, 0x88, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_1, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xe8, 0xb8, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_3, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_WindTribeTower_Floor4[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0xe8, 0x88, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_2, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xe8, 0xb8, 0x148, 0x0, AREA_WIND_TRIBE_TOWER_ROOF, ROOM_WIND_TRIBE_TOWER_ROOF_0, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_WindTribeTower[] = {
    [ROOM_WIND_TRIBE_TOWER_ENTRANCE] = gExitList_WindTribeTower_Entrance,
    [ROOM_WIND_TRIBE_TOWER_FLOOR_1] = gExitList_WindTribeTower_Floor2,
    [ROOM_WIND_TRIBE_TOWER_FLOOR_2] = gExitList_WindTribeTower_Floor3,
    [ROOM_WIND_TRIBE_TOWER_FLOOR_3] = gExitList_WindTribeTower_Floor4,
};

const Transition gExitList_WindTribeTowerRoof_Main[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x138, 0x88, 0xf8, 0x0, AREA_WIND_TRIBE_TOWER, ROOM_WIND_TRIBE_TOWER_FLOOR_3, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_WindTribeTowerRoof[] = {
    [ROOM_WIND_TRIBE_TOWER_ROOF_0] = gExitList_WindTribeTowerRoof_Main,
};

const Transition gExitList_Caves_Boomerang[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x68, 0x78, 0x38, 0x0, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_NORTHWEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x108, 0x68, 0x78, 0x38, 0x0, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_NORTHEAST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x48, 0xd8, 0x78, 0x38, 0x0, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_SOUTHWEST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x108, 0xd8, 0x78, 0x38, 0x0, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_BOOMERANG_SOUTHEAST, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0xb8, 0x1f8, 0x138, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_ToGraveyard[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x38, 0x88, 0xd8, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x38, 0x118, 0xd8, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x138, 0x98, 0x78, 0x48, 0x0, AREA_CAVES, ROOM_CAVES_HEART_PIECE_HALLWAY, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x108, 0x148, 0x20, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_2[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x28, 0x308, 0x98, 0x0, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_3[] = {
    TransitionListEnd,
};
const Transition gExitList_Caves_4[] = {
    TransitionListEnd,
};
const Transition gExitList_Caves_5[] = {
    TransitionListEnd,
};
const Transition gExitList_Caves_TrilbyKeeseChest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x238, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_TrilbyFairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0x2c8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_SouthHyruleFieldFairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x118, 0xb8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_A[] = {
    TransitionListEnd,
};
const Transition gExitList_Caves_HyruleTownWaterfall[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf0, 0x198, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_LonLonRanch[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xe8, 0x1c8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x138, 0x3, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_TrilbyHighlands[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x18, 0x98, 0x268, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0x18, 0x118, 0x268, 0x0, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_LonLonRanchWallet[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x218, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_LON_LON_RANCH, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_SouthHyruleFieldRupee[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x128, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_TrilbyRupee[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x2b8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_TRILBY_HIGHLANDS, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_TrilbyMittsFairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1a8, 0x68, 0x3, AREA_DIG_CAVES, ROOM_DIG_CAVES_TRILBY_HIGHLANDS, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_HillsKeeseChest[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0xa8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_EASTERN_HILLLS_CENTER, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_BottleBusinessScrub[] = {
    TransitionListEnd,
};
const Transition gExitList_Caves_HeartPieceHallway[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x38, 0x138, 0x88, 0x0, AREA_CAVES, ROOM_CAVES_TO_GRAVEYARD, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x138, 0x1f8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_NORTH_HYRULE_FIELD, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_NorthHyruleFieldFairyFountain[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x58, 0x30, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_NORTH_HYRULE_FIELD_FAIRY_FOUNTAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Caves_KinstoneBusinessScrub[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x58, 0x30, AREA_TREE_INTERIORS, ROOM_TREE_INTERIORS_MINISH_WOODS_BUSINESS_SCRUB, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_Caves[] = {
    [ROOM_CAVES_BOOMERANG] = gExitList_Caves_Boomerang,
    [ROOM_CAVES_TO_GRAVEYARD] = gExitList_Caves_ToGraveyard,
    [ROOM_CAVES_2] = gExitList_Caves_2,
    [ROOM_CAVES_3] = gExitList_Caves_3,
    [ROOM_CAVES_4] = gExitList_Caves_4,
    [ROOM_CAVES_5] = gExitList_Caves_5,
    [ROOM_CAVES_6] = gExitList_NoExitList,
    [ROOM_CAVES_TRILBY_KEESE_CHEST] = gExitList_Caves_TrilbyKeeseChest,
    [ROOM_CAVES_TRILBY_FAIRY_FOUNTAIN] = gExitList_Caves_TrilbyFairyFountain,
    [ROOM_CAVES_SOUTH_HYRULE_FIELD_FAIRY_FOUNTAIN] = gExitList_Caves_SouthHyruleFieldFairyFountain,
    [ROOM_CAVES_a] = gExitList_Caves_A,
    [ROOM_CAVES_HYRULE_TOWN_WATERFALL] = gExitList_Caves_HyruleTownWaterfall,
    [ROOM_CAVES_LON_LON_RANCH] = gExitList_Caves_LonLonRanch,
    [ROOM_CAVES_LON_LON_RANCH_SECRET] = gExitList_NoExitList,
    [ROOM_CAVES_TRILBY_HIGHLANDS] = gExitList_Caves_TrilbyHighlands,
    [ROOM_CAVES_LON_LON_RANCH_WALLET] = gExitList_Caves_LonLonRanchWallet,
    [ROOM_CAVES_SOUTH_HYRULE_FIELD_RUPEE] = gExitList_Caves_SouthHyruleFieldRupee,
    [ROOM_CAVES_TRILBY_RUPEE] = gExitList_Caves_TrilbyRupee,
    [ROOM_CAVES_TRILBY_MITTS_FAIRY_FOUNTAIN] = gExitList_Caves_TrilbyMittsFairyFountain,
    [ROOM_CAVES_HILLS_KEESE_CHEST] = gExitList_Caves_HillsKeeseChest,
    [ROOM_CAVES_BOTTLE_BUSINESS_SCRUB] = gExitList_Caves_BottleBusinessScrub,
    [ROOM_CAVES_HEART_PIECE_HALLWAY] = gExitList_Caves_HeartPieceHallway,
    [ROOM_CAVES_NORTH_HYRULE_FIELD_FAIRY_FOUNTAIN] = gExitList_Caves_NorthHyruleFieldFairyFountain,
    [ROOM_CAVES_KINSTONE_BUSINESS_SCRUB] = gExitList_Caves_KinstoneBusinessScrub,
};

const Transition gExitList_VeilFallsCaves_Hallway2F[] = {
    { WARP_TYPE_1, 0x0, 0xd8, 0x28, 0x78, 0x28, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_1F, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x38, 0x10, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x158, 0x38, 0x20, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_Hallway1F[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x18, 0x98, 0x28, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_RUPEE_PATH, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x78, 0x18, 0xd8, 0x38, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_2F, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x8c, 0x118, 0x58, 0x0, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0xe8, 0xc8, 0x58, 0x0, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_Entrance[] = {
    { WARP_TYPE_1, 0x0, 0x128, 0x18, 0x58, 0x28, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_EXIT, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x1f8, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_Exit[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x18, 0x128, 0x28, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_ENTRANCE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd8, 0x1d8, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_SecretChest[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x38, 0x98, 0x48, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_SECRET_STAIRCASE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_SecretStaircases[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x38, 0x98, 0x48, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_BLOCK_PUZZLE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x98, 0x38, 0x58, 0x48, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_SECRET_CHEST, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_BlockPuzzle[] = {
    { WARP_TYPE_1, 0x0, 0x98, 0x38, 0x58, 0x48, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_SECRET_STAIRCASE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd8, 0x158, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_RupeePath[] = {
    { WARP_TYPE_1, 0x0, 0x98, 0x18, 0x38, 0x28, 0x0, AREA_VEIL_FALLS_CAVES, ROOM_VEIL_FALLS_CAVES_HALLWAY_1F, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0xd8, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition gExitList_VeilFallsCaves_HeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x38, 0x30, AREA_VEIL_FALLS, ROOM_VEIL_FALLS_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_VeilFallsCaves[] = {
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_2F] = gExitList_VeilFallsCaves_Hallway2F,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_1F] = gExitList_VeilFallsCaves_Hallway1F,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_SECRET_ROOM] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_ENTRANCE] = gExitList_VeilFallsCaves_Entrance,
    [ROOM_VEIL_FALLS_CAVES_EXIT] = gExitList_VeilFallsCaves_Exit,
    [ROOM_VEIL_FALLS_CAVES_SECRET_CHEST] = gExitList_VeilFallsCaves_SecretChest,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_SECRET_STAIRCASE] = gExitList_VeilFallsCaves_SecretStaircases,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_BLOCK_PUZZLE] = gExitList_VeilFallsCaves_BlockPuzzle,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_RUPEE_PATH] = gExitList_VeilFallsCaves_RupeePath,
    [ROOM_VEIL_FALLS_CAVES_HALLWAY_HEART_PIECE] = gExitList_VeilFallsCaves_HeartPiece,
    [ROOM_VEIL_FALLS_CAVES_a] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_b] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_c] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_d] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_e] = gExitList_NoExitList,
    [ROOM_VEIL_FALLS_CAVES_f] = gExitList_NoExitList,
};

const Transition gExitList_RoyalValleyGraves_HeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x58, 0x98, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_RoyalValleyGraves_Gina[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x188, 0x98, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_RoyalValleyGraves[] = {
    [ROOM_ROYAL_VALLEY_GRAVES_HEART_PIECE] = gExitList_RoyalValleyGraves_HeartPiece,
    [ROOM_ROYAL_VALLEY_GRAVES_GINA] = gExitList_RoyalValleyGraves_Gina,
};

const Transition gExitList_MinishCaves_BeanPesto[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1c8, 0x28, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_ENTRANCE, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_SoutheastWater1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3b8, 0x308, 0x30, AREA_CASTOR_WILDS, ROOM_CASTOR_WILDS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_Ruins[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x14, 0x30, AREA_RUINS, ROOM_RUINS_LADDER_TO_TEKTITES, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_OutsideLinksHouse[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x178, 0xe8, 0x30, AREA_HYRULE_FIELD, ROOM_HYRULE_FIELD_SOUTH_HYRULE_FIELD, 0x1, 0x1,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_MinishWoodsNorth1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x3b8, 0x48, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_LakeHyliaNorth[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x2b8, 0x68, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_LakeHyliaLibrari[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x38, 0x98, 0x204, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x378, 0x38, 0x1b8, 0x1c4, 0x0, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_MinishCaves_MinishWoodsSouthwest[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x138, 0x48, 0x224, 0x0, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x138, 0x138, 0x68, 0x224, 0x0, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x218, 0x138, 0x88, 0x224, 0x0, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_MinishCaves[] = {
    [ROOM_MINISH_CAVES_BEAN_PESTO] = gExitList_MinishCaves_BeanPesto,
    [ROOM_MINISH_CAVES_SOUTHEAST_WATER_1] = gExitList_MinishCaves_SoutheastWater1,
    [ROOM_MINISH_CAVES_2] = gExitList_NoExitList,
    [ROOM_MINISH_CAVES_RUINS] = gExitList_MinishCaves_Ruins,
    [ROOM_MINISH_CAVES_OUTSIDE_LINKS_HOUSE] = gExitList_MinishCaves_OutsideLinksHouse,
    [ROOM_MINISH_CAVES_MINISH_WOODS_NORTH_1] = gExitList_MinishCaves_MinishWoodsNorth1,
    [ROOM_MINISH_CAVES_6] = gExitList_NoExitList,
    [ROOM_MINISH_CAVES_LAKE_HYLIA_NORTH] = gExitList_MinishCaves_LakeHyliaNorth,
    [ROOM_MINISH_CAVES_LAKE_HYLIA_LIBRARI] = gExitList_MinishCaves_LakeHyliaLibrari,
    [ROOM_MINISH_CAVES_MINISH_WOODS_SOUTHWEST] = gExitList_MinishCaves_MinishWoodsSouthwest,
};

const Transition gExitList_CastleGardenMinishHoles_East[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x308, 0x2c, 0x30, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CastleGardenMinishHoles_West[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xe8, 0x2c, 0x30, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CastleGardenMinishHoles[] = {
    [ROOM_CASTLE_GARDEN_MINISH_HOLES_0] = gExitList_CastleGardenMinishHoles_East,
    [ROOM_CASTLE_GARDEN_MINISH_HOLES_1] = gExitList_CastleGardenMinishHoles_West,
};

const Transition gExitList_37_0[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x308, 0x2c, 0x30, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_37_1[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xe8, 0x2c, 0x30, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_37[] = {
    [ROOM_37_0] = gExitList_37_0,
    [ROOM_37_1] = gExitList_37_1,
};

const Transition gExitList_HyruleTownUnderground_Main[] = {
    { WARP_TYPE_1, 0x0, 0x288, 0xf8, 0x338, 0x118, 0x0, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x168, 0x18, 0x78, 0x38, 0x0, AREA_HOUSE_INTERIORS_1, ROOM_HOUSE_INTERIORS_1_SCHOOL_WEST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x48, 0xf8, 0x188, 0x208, 0x0, AREA_HYRULE_DIG_CAVES, ROOM_HYRULE_DIG_CAVES_TOWN, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x138, 0x238, 0x88, 0x50, 0x1, AREA_HYRULE_TOWN_UNDERGROUND, ROOM_HYRULE_TOWN_UNDERGROUND_1,
      0x1, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleTownUnderground_Well[] = {
    { WARP_TYPE_1, 0x0, 0x98, 0x50, 0x148, 0x23c, 0x1, AREA_HYRULE_TOWN_UNDERGROUND, ROOM_HYRULE_TOWN_UNDERGROUND_0,
      0x1, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x78, 0x28, 0x2f8, 0x26c, 0x0, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleTownUnderground[] = {
    [ROOM_HYRULE_TOWN_UNDERGROUND_0] = gExitList_HyruleTownUnderground_Main,
    [ROOM_HYRULE_TOWN_UNDERGROUND_1] = gExitList_HyruleTownUnderground_Well,
};

const Transition gExitList_HyruleTownMinishCaves_Entrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x174, 0x196, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleTownMinishCaves_Entrance2[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xe2, 0x58, 0x30, AREA_HYRULE_TOWN, ROOM_HYRULE_TOWN_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleTownMinishCaves[] = {
    gExitList_HyruleTownMinishCaves_Entrance,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_NoExitList,
    gExitList_HyruleTownMinishCaves_Entrance2,
    gExitList_NoExitList,
    gExitList_NoExitList,
};

const Transition gExitList_GardenFountains_East[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x88, 0x308, 0x58, 0x0, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_GardenFountains_West[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x88, 0xe8, 0x58, 0x0, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_GardenFountains[] = {
    [ROOM_GARDEN_FOUNTAINS_EAST] = gExitList_GardenFountains_East,
    [ROOM_GARDEN_FOUNTAINS_WEST] = gExitList_GardenFountains_West,
};

const Transition gExitList_GreatFairies_Entrance[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x188, 0x68, 0x58, 0x0, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_GreatFairies_Exit[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x52, 0x29c, 0xc, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_3, 0x1, 0x0, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleCastleCellar[] = {
    [ROOM_HYRULE_CASTLE_CELLAR_0] = gExitList_GreatFairies_Entrance,
    [ROOM_HYRULE_CASTLE_CELLAR_1] = gExitList_GreatFairies_Exit,
};

const Transition* const gExitLists_40[] = {
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
    gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList, gExitList_NoExitList,
};

const Transition gExitList_DeepwoodShrine_StairsToB1[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x28, 0xc8, 0x38, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_COMPASS, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_BluePortal[] = {
#ifdef EU
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x38, 0x30, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BARREL, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
#endif
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Map[] = {
#ifdef EU
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x18, 0xfff, 0xc, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BARREL, 0x1, 0x0, 0x2, 0x0,
      0x0, 0x0, 0x0 },
#endif
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Button[] = {
#ifdef EU
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1b8, 0xfff, 0xc0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BARREL, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
#endif
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Lever[] = {
#ifdef EU
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x168, 0x3, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BARREL, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
#endif
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Barrel[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x88, 0x50, 0x38, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_INSIDE_BARREL, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x88, 0xa0, 0x38, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_INSIDE_BARREL, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x108, 0x50, 0x70, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_INSIDE_BARREL, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x108, 0xa0, 0x70, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_INSIDE_BARREL, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
#ifdef EU
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xc8, 0x3, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BLUE_PORTAL, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x28, 0xfff, 0xc, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BUTTON, 0x1, 0x0, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x38, 0x30, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_LEVER, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xe8, 0xfff, 0xc0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_MAP, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
#endif
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Entrance[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x68, 0x48, 0x78, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BOSS_DOOR, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x108, 0x68, 0x108, 0x78, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BOSS_DOOR, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x64, 0x30, AREA_DEEPWOOD_SHRINE_ENTRY, ROOM_DEEPWOOD_SHRINE_ENTRY_MAIN, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_Compass[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x28, 0xc8, 0x38, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_STAIRS_TO_B1, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrineBoss_Main[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0x8, 0x30, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_BOSS_DOOR, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DeepwoodShrine_PreBoss[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0x68, 0x48, 0x78, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_ENTRANCE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x108, 0x68, 0x108, 0x78, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_ENTRANCE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0xd8, 0x3, AREA_DEEPWOOD_SHRINE_BOSS, ROOM_DEEPWOOD_SHRINE_BOSS_MAIN, 0x1, 0x3,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DeepwoodShrine[] = {
    [ROOM_DEEPWOOD_SHRINE_MADDERPILLAR] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_BLUE_PORTAL] = gExitList_DeepwoodShrine_BluePortal,
    [ROOM_DEEPWOOD_SHRINE_STAIRS_TO_B1] = gExitList_DeepwoodShrine_StairsToB1,
    [ROOM_DEEPWOOD_SHRINE_POT_BRIDGE] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_DOUBLE_STATUE] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_MAP] = gExitList_DeepwoodShrine_Map,
    [ROOM_DEEPWOOD_SHRINE_BARREL] = gExitList_DeepwoodShrine_Barrel,
    [ROOM_DEEPWOOD_SHRINE_BUTTON] = gExitList_DeepwoodShrine_Button,
    [ROOM_DEEPWOOD_SHRINE_MULLDOZER] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_PILLARS] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_LEVER] = gExitList_DeepwoodShrine_Lever,
    [ROOM_DEEPWOOD_SHRINE_ENTRANCE] = gExitList_DeepwoodShrine_Entrance,
    [ROOM_DEEPWOOD_SHRINE_c] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_d] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_e] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_f] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_TORCHES] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_BOSS_KEY] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_COMPASS] = gExitList_DeepwoodShrine_Compass,
    [ROOM_DEEPWOOD_SHRINE_13] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_LILY_PAD_WEST] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_LILY_PAD_EAST] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_16] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_BOSS_DOOR] = gExitList_DeepwoodShrine_PreBoss,
    [ROOM_DEEPWOOD_SHRINE_18] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_19] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1a] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1b] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1c] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1d] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1e] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_1f] = gExitList_NoExitList,
    [ROOM_DEEPWOOD_SHRINE_INSIDE_BARREL] = gExitList_NoExitList,
};

const Transition* const gExitLists_DeepwoodShrineBoss[] = {
    [ROOM_DEEPWOOD_SHRINE_BOSS_MAIN] = gExitList_DeepwoodShrineBoss_Main,
};

const Transition gExitList_DeepwoodShrineEntry_Main[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x58, 0xa8, 0xd8, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_ENTRANCE, 0x1, 0x0, 0x0, 0x88,
      0x1, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1c8, 0x272, 0x30, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0x272, 0xc, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x2, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1b8, 0x272, 0xc0, AREA_MINISH_WOODS, ROOM_MINISH_WOODS_MAIN, 0x1, 0x1, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DeepwoodShrineEntry[] = {
    [ROOM_DEEPWOOD_SHRINE_ENTRY_MAIN] = gExitList_DeepwoodShrineEntry_Main,
};

const Transition gExitList_CaveOfFlames_AfterCane[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x38, 0x1a8, 0x38, 0x0, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_MINISH_SPIKES, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_Entrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x68, 0x88, 0x30, AREA_MT_CRENEL, ROOM_MT_CRENEL_CAVERN_OF_FLAMES_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_MainCart[] = {
    { WARP_TYPE_1, 0x0, 0x1f8, 0x38, 0x88, 0x28, 0x0, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_NORTH_ENTRANCE, 0x2, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_NorthEntrance[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x18, 0x1f8, 0x48, 0x0, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_MAIN_CART, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_MinishSpikes[] = {
    { WARP_TYPE_1, 0x0, 0x1a8, 0x28, 0x88, 0x48, 0x0, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_AFTER_CANE, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_BeforeGleerok[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x28, 0x30, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_BOSS_DOOR, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_CaveOfFlames_BossDoor[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xc0, 0x1, AREA_CAVE_OF_FLAMES, ROOM_CAVE_OF_FLAMES_BEFORE_GLEEROK, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_CaveOfFlames[] = {
    [ROOM_CAVE_OF_FLAMES_AFTER_CANE] = gExitList_CaveOfFlames_AfterCane,
    [ROOM_CAVE_OF_FLAMES_SPINY_CHU] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_CART_TO_SPINY_CHU] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_ENTRANCE] = gExitList_CaveOfFlames_Entrance,
    [ROOM_CAVE_OF_FLAMES_MAIN_CART] = gExitList_CaveOfFlames_MainCart,
    [ROOM_CAVE_OF_FLAMES_NORTH_ENTRANCE] = gExitList_CaveOfFlames_NorthEntrance,
    [ROOM_CAVE_OF_FLAMES_CART_WEST] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_HELMASAUR_FIGHT] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_ROLLOBITE_LAVA_ROOM] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_MINISH_LAVA_ROOM] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_a] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_b] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_c] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_d] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_e] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_f] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_MINISH_SPIKES] = gExitList_CaveOfFlames_MinishSpikes,
    [ROOM_CAVE_OF_FLAMES_TOMPAS_DOOM] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_BEFORE_GLEEROK] = gExitList_CaveOfFlames_BeforeGleerok,
    [ROOM_CAVE_OF_FLAMES_BOSSKEY_PATH1] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_BOSSKEY_PATH2] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_COMPASS] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_BOB_OMB_WALL] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_BOSS_DOOR] = gExitList_CaveOfFlames_BossDoor,
    [ROOM_CAVE_OF_FLAMES_18] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_19] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1a] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1b] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1c] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1d] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1e] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_1f] = gExitList_NoExitList,
    [ROOM_CAVE_OF_FLAMES_20] = gExitList_NoExitList,
};

const Transition gExitList_FortressOfWinds_BeforeMazaal[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WEST_KEY_LEVER, 0x1, 0x3, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_EastKeyLever[] = {
    { WARP_TYPE_1, 0x0, 0x198, 0x198, 0x2e8, 0x38, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1f8, 0x198, 0x338, 0x38, 0x0, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_PitPlatforms[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x68, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_WestKeyLever[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xc8, 0x3, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_BEFORE_MAZAAL, 0x1, 0x3, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_3F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_Mazaal[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x18, 0xa0, 0x18c, 0x0, AREA_FORTRESS_OF_WINDS_TOP, ROOM_FORTRESS_OF_WINDS_TOP_MAIN, 0x1,
      0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_Stalfos[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_EntranceMoleMitts[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0xb0, 0x3, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_MOLE_MITTS, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_Main2F[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0xf8, 0x78, 0x38, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_CENTER_STAIRS_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0xa8, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_MinishHole[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x68, 0xb0, 0x3, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_SMALL_KEY, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_BossKey[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x338, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_WestStairs2F[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x28, 0x68, 0x38, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WEST_STAIRS_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_EastStairs2F[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x28, 0x68, 0x38, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_1F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x288, 0xa8, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_2F, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_WestStairs1F[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x28, 0x88, 0x38, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_WEST_STAIRS_2F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x128, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_CenterStairs1F[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x28, 0x88, 0x108, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_MAIN_2F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1d8, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_EastStairs1F[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x28, 0x88, 0x38, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_2F, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x288, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_Wizzrobe[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x78, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_FortressOfWinds_HeartPiece[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x338, 0x38, 0x30, AREA_OUTER_FORTRESS_OF_WINDS, ROOM_OUTER_FORTRESS_OF_WINDS_ENTRANCE_HALL, 0x1,
      0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_FortressOfWinds[] = {
    [ROOM_FORTRESS_OF_WINDS_DOUBLE_EYEGORE] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_BEFORE_MAZAAL] = gExitList_FortressOfWinds_BeforeMazaal,
    [ROOM_FORTRESS_OF_WINDS_EAST_KEY_LEVER] = gExitList_FortressOfWinds_EastKeyLever,
    [ROOM_FORTRESS_OF_WINDS_PIT_PLATFORMS] = gExitList_FortressOfWinds_PitPlatforms,
    [ROOM_FORTRESS_OF_WINDS_WEST_KEY_LEVER] = gExitList_FortressOfWinds_WestKeyLever,
    [ROOM_FORTRESS_OF_WINDS_5] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_6] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_7] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_8] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_9] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_a] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_b] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_c] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_d] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_e] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_f] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_DARKNUT_ROOM] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_ARROW_EYE_BRIDGE] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_NORTH_SPLIT_PATH_PIT] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_WALLMASTER_MINISH_PORTAL] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_PILLAR_CLONE_BUTTONS] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_ROTATING_SPIKE_TRAPS] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_MAZAAL] = gExitList_FortressOfWinds_Mazaal,
    [ROOM_FORTRESS_OF_WINDS_STALFOS] = gExitList_FortressOfWinds_Stalfos,
    [ROOM_FORTRESS_OF_WINDS_ENTRANCE_MOLE_MITTS] = gExitList_FortressOfWinds_EntranceMoleMitts,
    [ROOM_FORTRESS_OF_WINDS_MAIN_2F] = gExitList_FortressOfWinds_Main2F,
    [ROOM_FORTRESS_OF_WINDS_MINISH_HOLE] = gExitList_FortressOfWinds_MinishHole,
    [ROOM_FORTRESS_OF_WINDS_BOSS_KEY] = gExitList_FortressOfWinds_BossKey,
    [ROOM_FORTRESS_OF_WINDS_WEST_STAIRS_2F] = gExitList_FortressOfWinds_WestStairs2F,
    [ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_2F] = gExitList_FortressOfWinds_EastStairs2F,
    [ROOM_FORTRESS_OF_WINDS_1e] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_1f] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_WEST_STAIRS_1F] = gExitList_FortressOfWinds_WestStairs1F,
    [ROOM_FORTRESS_OF_WINDS_CENTER_STAIRS_1F] = gExitList_FortressOfWinds_CenterStairs1F,
    [ROOM_FORTRESS_OF_WINDS_EAST_STAIRS_1F] = gExitList_FortressOfWinds_EastStairs1F,
    [ROOM_FORTRESS_OF_WINDS_WIZZROBE] = gExitList_FortressOfWinds_Wizzrobe,
    [ROOM_FORTRESS_OF_WINDS_HEART_PIECE] = gExitList_FortressOfWinds_HeartPiece,
    [ROOM_FORTRESS_OF_WINDS_25] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_26] = gExitList_NoExitList,
    [ROOM_FORTRESS_OF_WINDS_27] = gExitList_NoExitList,
};

const Transition gExitList_FortressOfWindsTop_Main[] = {
    { WARP_TYPE_1, 0x0, 0xa0, 0x1a0, 0xb8, 0x28, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_MAZAAL, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_FortressOfWindsTop[] = {
    [ROOM_FORTRESS_OF_WINDS_TOP_MAIN] = gExitList_FortressOfWindsTop_Main,
};

const Transition gExitList_InnerMazaal_Main[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x11c, 0xb8, 0x5c, 0x0, AREA_FORTRESS_OF_WINDS, ROOM_FORTRESS_OF_WINDS_MAZAAL, 0x1, 0x1, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_InnerMazaal[] = {
    [ROOM_INNER_MAZAAL_MAIN] = gExitList_InnerMazaal_Main,
    [ROOM_INNER_MAZAAL_PHASE_1] = gExitList_InnerMazaal_Main,
};

const Transition gExitList_TempleOfDroplets_WestHole[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x28, 0x58, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BOSS_KEY, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_EastHole[] = {
    { WARP_TYPE_1, 0x0, 0xd8, 0x28, 0xd8, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_NORTH_SMALL_KEY, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_HoleToBlueChuchu[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x208, 0xfff, 0xc0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ELEMENT, 0x1, 0x0, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xc8, 0x28, 0x88, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU_KEY_LEVER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BigBlueChuchu[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0xb8, 0x3, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_TO_BLUE_CHU, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BigBlueChuchuKey[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x28, 0xc8, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU_KEY_LEVER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BossKey[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x28, 0x58, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_WEST_HOLE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_NorthSmallKey[] = {
    { WARP_TYPE_1, 0x0, 0xd8, 0x28, 0xd8, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_EAST_HOLE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BlueChuchuKeyLever[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x18, 0xc8, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_HOLE_TO_BLUE_CHU_KEY, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xc8, 0x18, 0x58, 0x38, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU_KEY, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_Entrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ELEMENT, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_WaterfallNortheast[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x18, 0xfff, 0xc, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ELEMENT, 0x1, 0x0, 0x2,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_Element[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf8, 0xfff, 0xc0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_WATERFALL_NORTHEAST, 0x1, 0x0, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0x4, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ICE_CORNER, 0x1, 0x0, 0x2,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x8, 0xfff, 0x8, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_HOLE_TO_BLUE_CHU_KEY, 0x1, 0x0, 0x2,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x178, 0x3, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ENTRANCE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x28, 0x30, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BIG_OCTO, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_IceCorner[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x208, 0xfff, 0xc0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ELEMENT, 0x1, 0x0, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BigOcto[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x178, 0x3, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_ELEMENT, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_NorthwestStairs[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x18, 0x88, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BLOCK_CLONE_ICE_BRIDGE, 0x2, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_ScissorsMiniboss[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x18, 0xc8, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_STAIRS_TO_SCISSORS_MINIBOSS, 0x2, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_WaterfallSouthwest[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x170, 0x38, 0x18, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_LILYPAD_B2_WEST, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_ToBigBlueChuchu[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x58, 0x58, 0x68, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_COMPASS, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x8, 0x30, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_BlockCloneIceBridge[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x18, 0x88, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_NORTHWEST_STAIRS, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_StairsToScissorsMiniboss[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x18, 0xc8, 0x28, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_SCISSORS_MINIBOSS, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_LilypadWestB2[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x38, 0x168, 0x3, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_WEST_WATERFALL_SOUTHWEST, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_TempleOfDroplets_CompassRoom[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x58, 0x58, 0x68, 0x0, AREA_TEMPLE_OF_DROPLETS, ROOM_TEMPLE_OF_DROPLETS_TO_BLUE_CHU, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_TempleOfDroplets[] = {
    [ROOM_TEMPLE_OF_DROPLETS_WEST_HOLE] = gExitList_TempleOfDroplets_WestHole,
    [ROOM_TEMPLE_OF_DROPLETS_NORTH_SPLIT_ROOM] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_EAST_HOLE] = gExitList_TempleOfDroplets_EastHole,
    [ROOM_TEMPLE_OF_DROPLETS_ENTRANCE] = gExitList_TempleOfDroplets_Entrance,
    [ROOM_TEMPLE_OF_DROPLETS_NORTHWEST_STAIRS] = gExitList_TempleOfDroplets_NorthwestStairs,
    [ROOM_TEMPLE_OF_DROPLETS_SCISSORS_MINIBOSS] = gExitList_TempleOfDroplets_ScissorsMiniboss,
    [ROOM_TEMPLE_OF_DROPLETS_WATERFALL_NORTHWEST] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_WATERFALL_NORTHEAST] = gExitList_TempleOfDroplets_WaterfallNortheast,
    [ROOM_TEMPLE_OF_DROPLETS_ELEMENT] = gExitList_TempleOfDroplets_Element,
    [ROOM_TEMPLE_OF_DROPLETS_ICE_CORNER] = gExitList_TempleOfDroplets_IceCorner,
    [ROOM_TEMPLE_OF_DROPLETS_ICE_PIT_MAZE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_HOLE_TO_BLUE_CHU_KEY] = gExitList_TempleOfDroplets_HoleToBlueChuchu,
    [ROOM_TEMPLE_OF_DROPLETS_WEST_WATERFALL_SOUTHEAST] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_WEST_WATERFALL_SOUTHWEST] = gExitList_TempleOfDroplets_WaterfallSouthwest,
    [ROOM_TEMPLE_OF_DROPLETS_BIG_OCTO] = gExitList_TempleOfDroplets_BigOcto,
    [ROOM_TEMPLE_OF_DROPLETS_TO_BLUE_CHU] = gExitList_TempleOfDroplets_ToBigBlueChuchu,
    [ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU] = gExitList_TempleOfDroplets_BigBlueChuchu,
    [ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU_KEY] = gExitList_TempleOfDroplets_BigBlueChuchuKey,
    [ROOM_TEMPLE_OF_DROPLETS_12] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_13] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_14] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_15] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_16] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_17] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_18] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_19] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1a] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1b] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1c] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1d] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1e] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_1f] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_BOSS_KEY] = gExitList_TempleOfDroplets_BossKey,
    [ROOM_TEMPLE_OF_DROPLETS_NORTH_SMALL_KEY] = gExitList_TempleOfDroplets_NorthSmallKey,
    [ROOM_TEMPLE_OF_DROPLETS_BLOCK_CLONE_BUTTON_PUZZLE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_BLOCK_CLONE_PUZZLE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_BLOCK_CLONE_ICE_BRIDGE] = gExitList_TempleOfDroplets_BlockCloneIceBridge,
    [ROOM_TEMPLE_OF_DROPLETS_STAIRS_TO_SCISSORS_MINIBOSS] = gExitList_TempleOfDroplets_StairsToScissorsMiniboss,
    [ROOM_TEMPLE_OF_DROPLETS_SPIKE_BAR_FLIPPER_ROOM] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_9_LANTERNS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_LILYPAD_ICE_BLOCKS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_29] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_MULLDOZERS_FIRE_BARS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_DARK_MAZE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_TWIN_MADDERPILLARS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_AFTER_TWIN_MADDERPILLARS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_BLUE_CHU_KEY_LEVER] = gExitList_TempleOfDroplets_BlueChuchuKeyLever,
    [ROOM_TEMPLE_OF_DROPLETS_MULLDOZER_KEY] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_BEFORE_TWIN_MADDERPILLARS] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_LILYPAD_B2_WEST] = gExitList_TempleOfDroplets_LilypadWestB2,
    [ROOM_TEMPLE_OF_DROPLETS_COMPASS] = gExitList_TempleOfDroplets_CompassRoom,
    [ROOM_TEMPLE_OF_DROPLETS_DARK_SCISSOR_BEETLES] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_LILYPAD_B2_MIDDLE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_ICE_MADDERPILLAR] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_FLAMEBAR_BLOCK_PUZZLE] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_37] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_38] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_39] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3a] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3b] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3c] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3d] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3e] = gExitList_NoExitList,
    [ROOM_TEMPLE_OF_DROPLETS_3f] = gExitList_NoExitList,
};

const Transition gExitList_61_0[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x58, 0xa8, 0xd8, 0x0, AREA_DEEPWOOD_SHRINE, ROOM_DEEPWOOD_SHRINE_ENTRANCE, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x118, 0x174, 0x30, AREA_LAKE_HYLIA, ROOM_LAKE_HYLIA_MAIN, 0x1, 0x1, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_61[] = {
    [ROOM_NULL_61_0] = gExitList_61_0,
};

const Transition gExitList_RoyalCrypt_WaterRope[] = {
    TransitionListEnd,
};
const Transition gExitList_RoyalCrypt_Gibdo[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x12e, 0x128, 0x48, 0x0, AREA_ROYAL_CRYPT, ROOM_ROYAL_CRYPT_KEY_BLOCK, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_RoyalCrypt_KeyBlock[] = {
    { WARP_TYPE_1, 0x0, 0x128, 0x38, 0xa8, 0x118, 0x0, AREA_ROYAL_CRYPT, ROOM_ROYAL_CRYPT_GIBDO, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x128, 0x16e, 0x88, 0x48, 0x0, AREA_ROYAL_CRYPT, ROOM_ROYAL_CRYPT_MUSHROOM_PIT, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_RoyalCrypt_MushroomPit[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x38, 0x128, 0x158, 0x0, AREA_ROYAL_CRYPT, ROOM_ROYAL_CRYPT_KEY_BLOCK, 0x1, 0x0, 0x0, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_RoyalCrypt_Entrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xf0, 0x3c, 0x30, AREA_ROYAL_VALLEY, ROOM_ROYAL_VALLEY_MAIN, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_RoyalCrypt[] = {
    [ROOM_ROYAL_CRYPT_0] = gExitList_NoExitList,
    [ROOM_ROYAL_CRYPT_WATER_ROPE] = gExitList_RoyalCrypt_WaterRope,
    [ROOM_ROYAL_CRYPT_GIBDO] = gExitList_RoyalCrypt_Gibdo,
    [ROOM_ROYAL_CRYPT_3] = gExitList_NoExitList,
    [ROOM_ROYAL_CRYPT_KEY_BLOCK] = gExitList_RoyalCrypt_KeyBlock,
    [ROOM_ROYAL_CRYPT_5] = gExitList_NoExitList,
    [ROOM_ROYAL_CRYPT_6] = gExitList_NoExitList,
    [ROOM_ROYAL_CRYPT_MUSHROOM_PIT] = gExitList_RoyalCrypt_MushroomPit,
    [ROOM_ROYAL_CRYPT_ENTRANCE] = gExitList_RoyalCrypt_Entrance,
};

const Transition gExitList_PalaceOfWinds_0[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_3, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_3[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x1c8, 0x3, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_0, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_8[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_a, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_9[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_b, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_10[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x128, 0x3, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_8, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_11[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x88, 0x3, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_9, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x18, 0xfff, 0xc, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_e, 0x1, 0x0, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_13[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x18, 0xfff, 0xc, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_e, 0x1, 0x0, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x38, 0x218, 0xe8, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_15, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_14[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0xfff, 0x40, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_b, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xc8, 0xfff, 0x80, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_d, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_16[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_15, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_18[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_15, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_21[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x88, 0x1, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_12, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x1c8, 0x2, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_10, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0xd8, 0xb8, 0x48, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_1e, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x218, 0xd8, 0x38, 0x48, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_d, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_23[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd8, 0xfff, 0xc0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_20, 0x1, 0x0, 0x6, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_26[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x78, 0x1, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_20, 0x1, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_30[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0xb8, 0xe8, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_15, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_32[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x10, 0xfff, 0xc, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_17, 0x1, 0x0, 0x2, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x28, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_1a, 0x1, 0x1, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x38, 0x38, 0x48, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_2a, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_35[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x88, 0x3, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_28, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_36[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x88, 0x3, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_2a, 0x1, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_40[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_23, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0xb8, 0xe8, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_32, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_42[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xfff, 0x18, 0x30, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_24, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0x38, 0x38, 0x48, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_20, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_47[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x18, 0x168, 0x118, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_32, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_PalaceOfWinds_50[] = {
    { WARP_TYPE_1, 0x0, 0x168, 0x130, 0x78, 0x28, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_2f, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xb8, 0xd8, 0xb8, 0x48, 0x0, AREA_PALACE_OF_WINDS, ROOM_PALACE_OF_WINDS_28, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_PalaceOfWinds[] = {
    [ROOM_PALACE_OF_WINDS_0] = gExitList_PalaceOfWinds_0,
    [ROOM_PALACE_OF_WINDS_1] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_3] = gExitList_PalaceOfWinds_3,
    [ROOM_PALACE_OF_WINDS_4] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_5] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_6] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_7] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_8] = gExitList_PalaceOfWinds_8,
    [ROOM_PALACE_OF_WINDS_9] = gExitList_PalaceOfWinds_9,
    [ROOM_PALACE_OF_WINDS_a] = gExitList_PalaceOfWinds_10,
    [ROOM_PALACE_OF_WINDS_b] = gExitList_PalaceOfWinds_11,
    [ROOM_PALACE_OF_WINDS_c] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_d] = gExitList_PalaceOfWinds_13,
    [ROOM_PALACE_OF_WINDS_e] = gExitList_PalaceOfWinds_14,
    [ROOM_PALACE_OF_WINDS_f] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_10] = gExitList_PalaceOfWinds_16,
    [ROOM_PALACE_OF_WINDS_11] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_12] = gExitList_PalaceOfWinds_18,
    [ROOM_PALACE_OF_WINDS_13] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_14] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_15] = gExitList_PalaceOfWinds_21,
    [ROOM_PALACE_OF_WINDS_16] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_17] = gExitList_PalaceOfWinds_23,
    [ROOM_PALACE_OF_WINDS_18] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_19] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_1a] = gExitList_PalaceOfWinds_26,
    [ROOM_PALACE_OF_WINDS_1b] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_1c] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_1d] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_1e] = gExitList_PalaceOfWinds_30,
    [ROOM_PALACE_OF_WINDS_1f] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_20] = gExitList_PalaceOfWinds_32,
    [ROOM_PALACE_OF_WINDS_21] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_22] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_23] = gExitList_PalaceOfWinds_35,
    [ROOM_PALACE_OF_WINDS_24] = gExitList_PalaceOfWinds_36,
    [ROOM_PALACE_OF_WINDS_25] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_26] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_27] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_28] = gExitList_PalaceOfWinds_40,
    [ROOM_PALACE_OF_WINDS_29] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2a] = gExitList_PalaceOfWinds_42,
    [ROOM_PALACE_OF_WINDS_2b] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2c] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2d] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2e] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_2f] = gExitList_PalaceOfWinds_47,
    [ROOM_PALACE_OF_WINDS_30] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_31] = gExitList_NoExitList,
    [ROOM_PALACE_OF_WINDS_32] = gExitList_PalaceOfWinds_50,
    [ROOM_PALACE_OF_WINDS_33] = gExitList_NoExitList,
};

const Transition gExitList_Unused1[] = {
    TransitionListEnd,
};

const Transition gExitList_DarkHyruleCastle_1FEntrance[] = {
    { WARP_TYPE_1, 0x0, 0x108, 0xd8, 0x108, 0xe8, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_MAP, 0x2, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x228, 0xd8, 0x228, 0xe8, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_MAP, 0x2, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x198, 0x220, 0x1f8, 0x38, 0x2, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FTopLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FTopRightTower[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FBottomLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FBottomRightTower[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x118, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_TOWER, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FKeatonHallToVaati[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xa8, 0xe8, 0x3, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_TRIPLE_DARKNUT, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x190, 0x88, 0x28, 0x0, AREA_DARK_HYRULE_CASTLE_BRIDGE, ROOM_DARK_HYRULE_CASTLE_BRIDGE_MAIN,
      0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_3FTripleDarknut[] = {
    { WARP_TYPE_1, 0x0, 0xa8, 0x28, 0x78, 0x168, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE,
      ROOM_DARK_HYRULE_CASTLE_OUTSIDE_ZELDA_STATUE_PLATFORM, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb8, 0x18, 0x30, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_KEATON_HALL_TO_VAATI, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FTopLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_TOP_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_TOP_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xc0, 0x88, 0xd8, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_NORTHWEST,
      0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FTopRightTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_TOP_RIGHT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_TOP_RIGHT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xc0, 0x88, 0xd8, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_NORTHEAST,
      0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FRight[] = {
    { WARP_TYPE_1, 0x0, 0xf0, 0x5c, 0x44, 0x5e, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_EAST,
      0x2, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xf0, 0xec, 0x44, 0xee, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_EAST,
      0x2, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FBossDoor[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x118, 0x3, AREA_DARK_HYRULE_CASTLE_BRIDGE, ROOM_DARK_HYRULE_CASTLE_BRIDGE_MAIN,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FEntrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x198, 0xd8, 0x30, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTH,
      0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FBottomLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_BOTTOM_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x38, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_BOTTOM_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xc0, 0x78, 0xe8, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTHWEST,
      0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FBottomLeftGhini[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0xd8, 0x30, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTH,
      0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1Entrance[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x188, 0x3, AREA_DARK_HYRULE_CASTLE_OUTSIDE, ROOM_DARK_HYRULE_CASTLE_OUTSIDE_GARDEN,
      0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_2FBottomRightTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x108, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_BOTTOM_RIGHT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0xa8, 0x108, 0x68, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_BOTTOM_RIGHT_TOWER, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0x190, 0x88, 0x288, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE,
      ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTHEAST, 0x2, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FTopLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FThroneRoom[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x48, 0x88, 0x38, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_BELOW_THRONE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FCompass[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0xb8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_BELOW_COMPASS, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FTopRightTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FBeforeThrone[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x68, 0x88, 0x78, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_BEFORE_THRONE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FBottomLeftTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_TOWER, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_1FBottomRightTower[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x38, 0xa8, 0x118, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_TOWER, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1BelowThrone[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x48, 0x88, 0x58, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_THRONE_ROOM, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1BelowCompass[] = {
    { WARP_TYPE_1, 0x0, 0xb8, 0x38, 0xb8, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_COMPASS, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1BeforeThrone[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x68, 0x88, 0x58, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_BEFORE_THRONE, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1ToPrison[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x28, 0x58, 0x28, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B2_TO_PRISON, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B1Map[] = {
    { WARP_TYPE_1, 0x0, 0x108, 0xd8, 0x108, 0xe8, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x228, 0xd8, 0x228, 0xe8, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_1F_ENTRANCE, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastle_B2ToPrison[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x18, 0x58, 0x38, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_TO_PRISON, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DarkHyruleCastle[] = {
    [ROOM_DARK_HYRULE_CASTLE_1F_ENTRANCE] = gExitList_DarkHyruleCastle_1FEntrance,
    [ROOM_DARK_HYRULE_CASTLE_3F_TOP_LEFT_TOWER] = gExitList_DarkHyruleCastle_3FTopLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_3F_TOP_RIGHT_TOWER] = gExitList_DarkHyruleCastle_3FTopRightTower,
    [ROOM_DARK_HYRULE_CASTLE_3F_BOTTOM_LEFT_TOWER] = gExitList_DarkHyruleCastle_3FBottomLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_3F_BOTTOM_RIGHT_TOWER] = gExitList_DarkHyruleCastle_3FBottomRightTower,
    [ROOM_DARK_HYRULE_CASTLE_3F_KEATON_HALL_TO_VAATI] = gExitList_DarkHyruleCastle_3FKeatonHallToVaati,
    [ROOM_DARK_HYRULE_CASTLE_3F_TRIPLE_DARKNUT] = gExitList_DarkHyruleCastle_3FTripleDarknut,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_TOWER] = gExitList_DarkHyruleCastle_2FTopLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_CORNER] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOSS_KEY] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_BLUE_WARP] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_CORNER_GHINI] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_CORNER_TORCHES] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_TOWER] = gExitList_DarkHyruleCastle_2FTopRightTower,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_DARKNUT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_SPARKS] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_DARKNUTS] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_LEFT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_RIGHT] = gExitList_DarkHyruleCastle_2FRight,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_DARKNUTS] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOSS_DOOR] = gExitList_DarkHyruleCastle_2FBossDoor,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_DARKNUT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_CORNER_PUZZLE] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_ENTRANCE] = gExitList_DarkHyruleCastle_2FEntrance,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_CORNER] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_TOWER] = gExitList_DarkHyruleCastle_2FBottomLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_GHINI] = gExitList_DarkHyruleCastle_2FBottomLeftGhini,
    [ROOM_DARK_HYRULE_CASTLE_1b] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_ENTRANCE] = gExitList_DarkHyruleCastle_B1Entrance,
    [ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_TOWER] = gExitList_DarkHyruleCastle_2FBottomRightTower,
    [ROOM_DARK_HYRULE_CASTLE_1F_TOP_LEFT_TOWER] = gExitList_DarkHyruleCastle_1FTopLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_1F_THRONE_ROOM] = gExitList_DarkHyruleCastle_1FThroneRoom,
    [ROOM_DARK_HYRULE_CASTLE_1F_COMPASS] = gExitList_DarkHyruleCastle_1FCompass,
    [ROOM_DARK_HYRULE_CASTLE_1F_TOP_RIGHT_TOWER] = gExitList_DarkHyruleCastle_1FTopRightTower,
    [ROOM_DARK_HYRULE_CASTLE_1F_BEFORE_THRONE] = gExitList_DarkHyruleCastle_1FBeforeThrone,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_TOP_LEFT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_TOP] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_TOP_RIGHT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_LEFT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_RIGHT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_BOTTOM_LEFT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_BOTTOM] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_LOOP_BOTTOM_RIGHT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_1F_BOTTOM_LEFT_TOWER] = gExitList_DarkHyruleCastle_1FBottomLeftTower,
    [ROOM_DARK_HYRULE_CASTLE_1F_BOTTOM_RIGHT_TOWER] = gExitList_DarkHyruleCastle_1FBottomRightTower,
    [ROOM_DARK_HYRULE_CASTLE_B1_BELOW_THRONE] = gExitList_DarkHyruleCastle_B1BelowThrone,
    [ROOM_DARK_HYRULE_CASTLE_B1_BELOW_COMPASS] = gExitList_DarkHyruleCastle_B1BelowCompass,
    [ROOM_DARK_HYRULE_CASTLE_B1_BEFORE_THRONE] = gExitList_DarkHyruleCastle_B1BeforeThrone,
    [ROOM_DARK_HYRULE_CASTLE_B1_TO_PRISON] = gExitList_DarkHyruleCastle_B1ToPrison,
    [ROOM_DARK_HYRULE_CASTLE_B1_BOMB_WALL] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_KEATONS] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_TO_PRISON_FIREBAR] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_CANNONS] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_LEFT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_RIGHT] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B1_MAP] = gExitList_DarkHyruleCastle_B1Map,
    [ROOM_DARK_HYRULE_CASTLE_B2_TO_PRISON] = gExitList_DarkHyruleCastle_B2ToPrison,
    [ROOM_DARK_HYRULE_CASTLE_B2_PRISON] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_B2_DROPDOWN] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_3b] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_3c] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_3d] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_3e] = gExitList_NoExitList,
    [ROOM_DARK_HYRULE_CASTLE_3f] = gExitList_NoExitList,
};

const Transition gExitList_Unused2[] = {
    TransitionListEnd,
};

const Transition gExitList_DarkHyruleCastleOutside_ZeldaStatuePlatform[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0x178, 0xa8, 0x38, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_TRIPLE_DARKNUT, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_Garden[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x38, 0xc8, 0x1e8, 0x0, AREA_SANCTUARY, ROOM_SANCTUARY_HALL, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x18, 0x30, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_B1_ENTRANCE, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideNorthwest[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0xc8, 0x88, 0xa8, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_LEFT_TOWER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideNortheast[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0xc8, 0x88, 0xb0, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_TOP_RIGHT_TOWER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideEast[] = {
    { WARP_TYPE_1, 0x0, 0x38, 0x5c, 0xde, 0x5e, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_RIGHT, 0x1, 0x0, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x38, 0xec, 0xde, 0xee, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_RIGHT, 0x1, 0x0, 0x6,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideSouthwest[] = {
    { WARP_TYPE_1, 0x0, 0x78, 0xd8, 0x88, 0xb0, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_TOWER, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideSouth[] = {
    { WARP_TYPE_1, 0x0, 0x198, 0xc8, 0x88, 0x170, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_ENTRANCE, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0xc8, 0x88, 0xa0, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_LEFT_GHINI, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_DarkHyruleCastleOutside_OutsideSoutheast[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x278, 0x88, 0x178, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOTTOM_RIGHT_TOWER, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DarkHyruleCastleOutside[] = {
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_ZELDA_STATUE_PLATFORM] = gExitList_DarkHyruleCastleOutside_ZeldaStatuePlatform,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_GARDEN] = gExitList_DarkHyruleCastleOutside_Garden,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_NORTHWEST] = gExitList_DarkHyruleCastleOutside_OutsideNorthwest,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_NORTHEAST] = gExitList_DarkHyruleCastleOutside_OutsideNortheast,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_EAST] = gExitList_DarkHyruleCastleOutside_OutsideEast,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTHWEST] = gExitList_DarkHyruleCastleOutside_OutsideSouthwest,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTH] = gExitList_DarkHyruleCastleOutside_OutsideSouth,
    [ROOM_DARK_HYRULE_CASTLE_OUTSIDE_SOUTHEAST] = gExitList_DarkHyruleCastleOutside_OutsideSoutheast,
};

const Transition gExitList_VaatisArms_First[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb0, 0x88, 0x30, AREA_VAATI_3, ROOM_VAATI_3_0, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_VaatisArms_Second[] = {
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xb0, 0x88, 0x30, AREA_VAATI_3, ROOM_VAATI_3_0, 0x1, 0x1, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_VaatisArms[] = {
    [ROOM_VAATIS_ARMS_FIRST] = gExitList_VaatisArms_First,
    [ROOM_VAATIS_ARMS_SECOND] = gExitList_VaatisArms_Second,
};

const Transition gExitList_DarkHyruleCastleBridge_Main[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x18, 0xa8, 0x178, 0x0, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_3F_KEATON_HALL_TO_VAATI, 0x1, 0x0, 0x0,
      0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x88, 0x28, 0x30, AREA_DARK_HYRULE_CASTLE, ROOM_DARK_HYRULE_CASTLE_2F_BOSS_DOOR, 0x1, 0x0, 0x4,
      0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_DarkHyruleCastleBridge[] = {
    [ROOM_DARK_HYRULE_CASTLE_BRIDGE_MAIN] = gExitList_DarkHyruleCastleBridge_Main,
};

const Transition gExitList_HyruleCastle_0[] = {
    { WARP_TYPE_1, 0x0, 0x48, 0xd8, 0x88, 0x288, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_3, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x1f8, 0x38, 0x30, AREA_CASTLE_GARDEN, ROOM_CASTLE_GARDEN_MAIN, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleCastle_1[] = {
    { WARP_TYPE_1, 0x0, 0x58, 0x28, 0x68, 0x28, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_3, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x198, 0x28, 0x1c8, 0x28, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_3, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_HyruleCastle_3[] = {
    { WARP_TYPE_1, 0x0, 0x68, 0x18, 0x58, 0x38, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_1, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x1c8, 0x18, 0x198, 0x38, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_1, 0x1, 0x0, 0x4, 0x0,
      0x0, 0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x88, 0x278, 0x48, 0xe8, 0x0, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_0, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    { WARP_TYPE_1, 0x0, 0x118, 0x1c8, 0x88, 0x180, 0x0, AREA_SANCTUARY_ENTRANCE, ROOM_SANCTUARY_ENTRANCE_MAIN, 0x1, 0x0,
      0x0, 0x0, 0x0, 0x0, 0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0xd2, 0x5c, 0xc0, AREA_HYRULE_CASTLE_CELLAR, ROOM_HYRULE_CASTLE_CELLAR_1, 0x1, 0x0,
      0x6, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_HyruleCastle[] = {
    [ROOM_HYRULE_CASTLE_0] = gExitList_HyruleCastle_0,
    [ROOM_HYRULE_CASTLE_1] = gExitList_HyruleCastle_1,
    [ROOM_HYRULE_CASTLE_2] = gExitList_NoExitList,
    [ROOM_HYRULE_CASTLE_3] = gExitList_HyruleCastle_3,
    [ROOM_HYRULE_CASTLE_4] = gExitList_NoExitList,
    [ROOM_HYRULE_CASTLE_5] = gExitList_NoExitList,
    [ROOM_HYRULE_CASTLE_6] = gExitList_NoExitList,
    [ROOM_HYRULE_CASTLE_7] = gExitList_NoExitList,
};

const Transition gExitList_SanctuaryEntrance_Main[] = {
    { WARP_TYPE_1, 0x0, 0x88, 0x38, 0xc8, 0x1e8, 0x0, AREA_SANCTUARY, ROOM_SANCTUARY_HALL, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
      0x0 },
    { WARP_TYPE_0, 0x0, 0x0, 0x0, 0x118, 0x1e8, 0x30, AREA_HYRULE_CASTLE, ROOM_HYRULE_CASTLE_3, 0x1, 0x0, 0x4, 0x0, 0x0,
      0x0, 0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_SanctuaryEntrance[] = {
    [ROOM_SANCTUARY_ENTRANCE_MAIN] = gExitList_SanctuaryEntrance_Main,
};

const Transition gExitList_Sanctuary_Hall[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x1fc, 0x88, 0x48, 0x0, AREA_SANCTUARY_ENTRANCE, ROOM_SANCTUARY_ENTRANCE_MAIN, 0x1, 0x0,
      0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gUnk_0813A76C[] = {
    { WARP_TYPE_1, 0x0, 0xc8, 0x1fc, 0x88, 0x48, 0x0, AREA_DARK_HYRULE_CASTLE_OUTSIDE,
      ROOM_DARK_HYRULE_CASTLE_OUTSIDE_GARDEN, 0x1, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Sanctuary_Main[] = {
    { WARP_TYPE_1, 0x0, 0xe8, 0x28, 0x98, 0x130, 0x0, AREA_SANCTUARY, ROOM_SANCTUARY_STAINED_GLASS, 0x2, 0x0, 0x0, 0x0,
      0x0, 0x0, 0x0 },
    TransitionListEnd,
};
const Transition gExitList_Sanctuary_StainedGlass[] = {
    { WARP_TYPE_1, 0x0, 0x98, 0x140, 0xe8, 0x38, 0x0, AREA_SANCTUARY, ROOM_SANCTUARY_MAIN, 0x2, 0x0, 0x4, 0x0, 0x0, 0x0,
      0x0 },
    TransitionListEnd,
};
const Transition* const gExitLists_Sanctuary[] = {
    [ROOM_SANCTUARY_HALL] = gExitList_Sanctuary_Hall,
    [ROOM_SANCTUARY_MAIN] = gExitList_Sanctuary_Main,
    [ROOM_SANCTUARY_STAINED_GLASS] = gExitList_Sanctuary_StainedGlass,
};

const Transition* const* const gExitLists[] = {
    /*AREA_MINISH_WOODS*/ gExitLists_MinishWoods,
    /*AREA_MINISH_VILLAGE*/ gExitLists_MinishVillage,
    /*AREA_HYRULE_TOWN*/ gExitLists_HyruleTown,
    /*AREA_HYRULE_FIELD*/ gExitLists_HyruleField,
    /*AREA_CASTOR_WILDS*/ gExitLists_CastorWilds,
    /*AREA_RUINS*/ gExitLists_Ruins,
    /*AREA_MT_CRENEL*/ gExitLists_MtCrenel,
    /*AREA_CASTLE_GARDEN*/ gExitLists_CastleGarden,
    /*AREA_CLOUD_TOPS*/ gExitLists_CloudTops,
    /*AREA_ROYAL_VALLEY*/ gExitLists_RoyalValley,
    /*AREA_VEIL_FALLS*/ gExitLists_VeilFalls,
    /*AREA_LAKE_HYLIA*/ gExitLists_LakeHylia,
    /*AREA_LAKE_WOODS_CAVE*/ gExitLists_LakeWoodsCave,
    /*AREA_BEANSTALKS*/ gExitLists_Beanstalks,
    /*AREA_EMPTY*/ gExitLists_NoExit,
    /*AREA_HYRULE_DIG_CAVES*/ gExitLists_HyruleDigCaves,
    /*AREA_MELARIS_MINE*/ gExitLists_MelarisMine,
    /*AREA_MINISH_PATHS*/ gExitLists_MinishPaths,
    /*AREA_CRENEL_MINISH_PATHS*/ gExitLists_CrenelMinishPaths,
    /*AREA_DIG_CAVES*/ gExitLists_DigCaves1,
    /*AREA_CRENEL_DIG_CAVE*/ gExitLists_NoExit,
    /*AREA_FESTIVAL_TOWN*/ gExitLists_FestivalTown,
    /*AREA_VEIL_FALLS_DIG_CAVE*/ gExitLists_NoExit,
    /*AREA_CASTOR_WILDS_DIG_CAVE*/ gExitLists_NoExit,
    /*AREA_OUTER_FORTRESS_OF_WINDS*/ gExitLists_OuterFortressOfWinds,
    /*AREA_HYLIA_DIG_CAVES*/ gExitLists_HyliaDigCaves,
    /*AREA_VEIL_FALLS_TOP*/ gExitLists_VeilFallsTop,
    /*AREA_NULL_1B*/ gExitLists_NoExit,
    /*AREA_NULL_1C*/ gExitLists_NoExit,
    /*AREA_NULL_1D*/ gExitLists_NoExit,
    /*AREA_NULL_1E*/ gExitLists_NoExit,
    /*AREA_NULL_1F*/ gExitLists_NoExit,
    /*AREA_MINISH_HOUSE_INTERIORS*/ gExitLists_MinishHouseInteriors,
    /*AREA_HOUSE_INTERIORS_1*/ gExitLists_HouseInteriors1,
    /*AREA_HOUSE_INTERIORS_2*/ gExitLists_HouseInteriors2,
    /*AREA_HOUSE_INTERIORS_3*/ gExitLists_HouseInteriors3,
    /*AREA_TREE_INTERIORS*/ gExitLists_TreeInteriors,
    /*AREA_DOJOS*/ gExitLists_Dojos,
    /*AREA_CRENEL_CAVES*/ gExitLists_CrenelCaves,
    /*AREA_MINISH_CRACKS*/ gExitLists_MinishCracks,
    /*AREA_HOUSE_INTERIORS_4*/ gExitLists_HouseInteriors4,
    /*AREA_GREAT_FAIRIES*/ gExitLists_GreatFairies,
    /*AREA_CASTOR_CAVES*/ gExitLists_CastorCaves,
    /*AREA_CASTOR_DARKNUT*/ gExitLists_CastorDarknut,
    /*AREA_ARMOS_INTERIORS*/ gExitLists_ArmosInteriors,
    /*AREA_TOWN_MINISH_HOLES*/ gExitLists_TownMinishHoles,
    /*AREA_MINISH_RAFTERS*/ gExitLists_MinishRafters,
    /*AREA_GORON_CAVE*/ gExitLists_GoronCave,
    /*AREA_WIND_TRIBE_TOWER*/ gExitLists_WindTribeTower,
    /*AREA_WIND_TRIBE_TOWER_ROOF*/ gExitLists_WindTribeTowerRoof,
    /*AREA_CAVES*/ gExitLists_Caves,
    /*AREA_VEIL_FALLS_CAVES*/ gExitLists_VeilFallsCaves,
    /*AREA_ROYAL_VALLEY_GRAVES*/ gExitLists_RoyalValleyGraves,
    /*AREA_MINISH_CAVES*/ gExitLists_MinishCaves,
    /*AREA_CASTLE_GARDEN_MINISH_HOLES*/ gExitLists_CastleGardenMinishHoles,
    /*AREA_37*/ gExitLists_37,
    /*AREA_EZLO_CUTSCENE*/ gExitLists_NoExit,
    /*AREA_NULL_39*/ gExitLists_NoExit,
    /*AREA_NULL_3A*/ gExitLists_NoExit,
    /*AREA_NULL_3B*/ gExitLists_NoExit,
    /*AREA_NULL_3C*/ gExitLists_NoExit,
    /*AREA_NULL_3D*/ gExitLists_NoExit,
    /*AREA_NULL_3E*/ gExitLists_NoExit,
    /*AREA_NULL_3F*/ gExitLists_NoExit,
    /*AREA_40*/ gExitLists_40,
    /*AREA_HYRULE_TOWN_UNDERGROUND*/ gExitLists_HyruleTownUnderground,
    /*AREA_GARDEN_FOUNTAINS*/ gExitLists_GardenFountains,
    /*AREA_HYRULE_CASTLE_CELLAR*/ gExitLists_HyruleCastleCellar,
    /*AREA_SIMONS_SIMULATION*/ gExitLists_NoExit,
    /*AREA_45*/ gExitLists_NoExit,
    /*AREA_NULL_46*/ gExitLists_40,
    /*AREA_47*/ gExitLists_NoExit,
    /*AREA_DEEPWOOD_SHRINE*/ gExitLists_DeepwoodShrine,
    /*AREA_DEEPWOOD_SHRINE_BOSS*/ gExitLists_DeepwoodShrineBoss,
    /*AREA_DEEPWOOD_SHRINE_ENTRY*/ gExitLists_DeepwoodShrineEntry,
    /*AREA_NULL_4B*/ gExitLists_NoExit,
    /*AREA_NULL_4C*/ gExitLists_NoExit,
    /*AREA_4D*/ gExitLists_NoExit,
    /*AREA_NULL_4E*/ gExitLists_NoExit,
    /*AREA_NULL_4F*/ gExitLists_NoExit,
    /*AREA_CAVE_OF_FLAMES*/ gExitLists_CaveOfFlames,
    /*AREA_CAVE_OF_FLAMES_BOSS*/ gExitLists_NoExit,
    /*AREA_NULL_52*/ gExitLists_NoExit,
    /*AREA_NULL_53*/ gExitLists_NoExit,
    /*AREA_NULL_54*/ gExitLists_NoExit,
    /*AREA_NULL_55*/ gExitLists_NoExit,
    /*AREA_NULL_56*/ gExitLists_NoExit,
    /*AREA_57*/ gExitLists_NoExit,
#ifndef DEMO_USA
    /*AREA_FORTRESS_OF_WINDS*/ gExitLists_FortressOfWinds,
    /*AREA_FORTRESS_OF_WINDS_TOP*/ gExitLists_FortressOfWindsTop,
    /*AREA_INNER_MAZAAL*/ gExitLists_InnerMazaal,
    /*AREA_NULL_5B*/ gExitLists_NoExit,
    /*AREA_NULL_5C*/ gExitLists_NoExit,
    /*AREA_NULL_5D*/ gExitLists_NoExit,
    /*AREA_NULL_5E*/ gExitLists_NoExit,
    /*AREA_5F*/ gExitLists_NoExit,
#endif
    /*AREA_TEMPLE_OF_DROPLETS*/ gExitLists_TempleOfDroplets,
    /*AREA_NULL_61*/ gExitLists_61,
    /*AREA_HYRULE_TOWN_MINISH_CAVES*/ gExitLists_HyruleTownMinishCaves,
    /*AREA_NULL_63*/ gExitLists_NoExit,
    /*AREA_NULL_64*/ gExitLists_NoExit,
    /*AREA_NULL_65*/ gExitLists_NoExit,
    /*AREA_NULL_66*/ gExitLists_NoExit,
    /*AREA_67*/ gExitLists_NoExit,
    /*AREA_ROYAL_CRYPT*/ gExitLists_RoyalCrypt,
    /*AREA_NULL_69*/ gExitLists_NoExit,
    /*AREA_NULL_6A*/ gExitLists_NoExit,
    /*AREA_NULL_6B*/ gExitLists_NoExit,
    /*AREA_NULL_6C*/ gExitLists_NoExit,
    /*AREA_NULL_6D*/ gExitLists_NoExit,
    /*AREA_NULL_6E*/ gExitLists_NoExit,
    /*AREA_6F*/ gExitLists_NoExit,
    /*AREA_PALACE_OF_WINDS*/ gExitLists_PalaceOfWinds,
    /*AREA_PALACE_OF_WINDS_BOSS*/ gExitLists_NoExit,
    /*AREA_NULL_72*/ gExitLists_NoExit,
    /*AREA_NULL_73*/ gExitLists_NoExit,
    /*AREA_NULL_74*/ gExitLists_NoExit,
    /*AREA_NULL_75*/ gExitLists_NoExit,
    /*AREA_NULL_76*/ gExitLists_NoExit,
    /*AREA_77*/ gExitLists_NoExit,
    /*AREA_SANCTUARY*/ gExitLists_Sanctuary,
    /*AREA_NULL_79*/ gExitLists_NoExit,
    /*AREA_NULL_7A*/ gExitLists_NoExit,
    /*AREA_NULL_7B*/ gExitLists_NoExit,
    /*AREA_NULL_7C*/ gExitLists_NoExit,
    /*AREA_NULL_7D*/ gExitLists_NoExit,
    /*AREA_NULL_7E*/ gExitLists_NoExit,
    /*AREA_7F*/ gExitLists_NoExit,
    /*AREA_HYRULE_CASTLE*/ gExitLists_HyruleCastle,
    /*AREA_SANCTUARY_ENTRANCE*/ gExitLists_SanctuaryEntrance,
    /*AREA_NULL_82*/ gExitLists_NoExit,
    /*AREA_NULL_83*/ gExitLists_NoExit,
    /*AREA_NULL_84*/ gExitLists_NoExit,
    /*AREA_NULL_85*/ gExitLists_NoExit,
    /*AREA_NULL_86*/ gExitLists_NoExit,
    /*AREA_87*/ gExitLists_NoExit,
    /*AREA_DARK_HYRULE_CASTLE*/ gExitLists_DarkHyruleCastle,
    /*AREA_DARK_HYRULE_CASTLE_OUTSIDE*/ gExitLists_DarkHyruleCastleOutside,
    /*AREA_VAATIS_ARMS*/ gExitLists_VaatisArms,
    /*AREA_VAATI_3*/ gExitLists_NoExit,
    /*AREA_VAATI_2*/ gExitLists_NoExit,
    /*AREA_DARK_HYRULE_CASTLE_BRIDGE*/ gExitLists_DarkHyruleCastleBridge,
    /*AREA_NULL_8E*/ gExitLists_NoExit,
    /*AREA_8F*/ gExitLists_NoExit,
    /*AREA_90*/ gExitLists_NoExit,
    /*AREA_91*/ gExitLists_NoExit,
    /*AREA_92*/ gExitLists_NoExit,
    /*AREA_93*/ gExitLists_NoExit,
    /*AREA_94*/ gExitLists_NoExit,
    /*AREA_95*/ gExitLists_NoExit,
    /*AREA_96*/ gExitLists_NoExit,
    /*AREA_97*/ gExitLists_NoExit,
    /*AREA_98*/ gExitLists_NoExit,
};
// clang-format on
