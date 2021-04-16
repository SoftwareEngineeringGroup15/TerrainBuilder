//
//  TerrainBuilder.cpp
//  TerrainBuilder Project req.15, 15.1, 15.2
//
//  Created by Haiyue Chen on 3/16/21.
//

#include "Req15Flower.hpp"
const int items[] = {
    // items the user can build
    BLOCK_01;
    BLOCK_02;
    BLOCK_03;
    BLOCK_04;
    BLOCK_05;
    BLOCK_06;
    YELLOW_FLOWER,
    RED_FLOWER,
    PURPLE_FLOWER,
    SUN_FLOWER,
    WHITE_FLOWER,
    BLUE_FLOWER
};
//refer to item.c line64
const int blocks[6][6] = {
    // w => (left, right, top, bottom, front, back) tiles
    {1, 1, 1, 1, 1, 1}, //BLOCK_01
    {2, 2, 2, 2, 2, 2}, //BLOCK_02
    {3, 3, 3, 3, 3, 3}, //BLOCK_03
    {4, 4, 4, 4, 4, 4,} //BLOCK_04
    {5, 5, 5, 5, 5, 5}, //BLOCL_05
    {6, 6, 6, 6, 6, 6}, //BLOCK_06
};
//refer to item.c line132
const int flowers[6] = {
    // w => tile
    7, // 0- yellow flower
    8, // 1 - red flower
    9, // 2 - purple flower
    10, // 3 - sun flower
    11, // 4 - white flower
    12, // 5 - blue flower
};
  
//paring a specific block with a specific flower
int paring(int blocks)
{
    switch (blocks) {
        case YELLOW_FLOWER:
        case RED_FLOWER:
        case PURPLE_FLOWER:
        case SUN_FLOWER:
        case WHITE_FLOWER:
        case BLUE_FLOWER:
            return 1;
        default:
             return 0;
    }
}



 

