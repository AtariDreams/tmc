#ifndef TILES_H
#define TILES_H

typedef enum {
    CUT_BUSH = 0x1C,
    CUT_GRASS = 0x1D,
    CUT_SIGNPOST = 0x1E,
    CUT_TREE = 0x1F,
    ROCK = 0x55,
    CHEST = 0x73,
    CHEST_OPEN = 0x74,
    TORCH = 0x76,
    TORCH_LIT = 0x77,
    PRESSURE_BUTTON = 0x78,
    PRESSURE_BUTTON_PRESSED = 0x79,
    PRESSURE_SQUARE = 0x7a,
    PRESSURE_SQUARE_PRESSED = 0x7b,
    STAIRS_UP = 0x92,
    STAIRS_DOWN = 0x93,
    SIGNPOST = 0x176,
    PERMA_ROCK = 0x1D3,
    PERMA_ROCK2 = 0x1D4,
    PERMA_ROCK3 = 0x1D5,
    PERMA_ROCK4 = 0x1D6,
} Tile;

#endif // TILES_H
