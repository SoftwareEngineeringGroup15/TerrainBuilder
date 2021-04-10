//  TerrainBuilder.hpp
//  TerrainBuilder Project req.15, 15.1, 15.2
//
//  Created by Haiyue Chen on 3/16/21.
//
#include <stdio.h>

#ifndef TerrainBuilder_hpp
#define TerrainBuilder_hpp

//the constant named YELLOW_FLOWER would contain the value of 0...
#define YELLOW_FLOWER 0
#define RED_FLOWER 1
#define PURPLE_FLOWER 2
#define SUN_FLOWER 3
#define WHITE_FLOWER 4
#define BLUE_FLOWER 5
//the constant named BLOCK_01  would contain the value of 6...
#define BLOCK_01 6
#define BLOCK_02 7
#define BLOCK_03 8
#define BLOCK_04 9
#define BLOCK_05 10
#define BLOCK_06 11

/// \imp \ref R16 type: each flower has a specific value of num as defined
typedef struct{
    int type;
} Flower;
/// \imp \ref R17 type: each block has a specific value of num as defined
typedef struct{
    int type;
} Block;
 
extern const int flowers[];
extern const int blocks[];

/// \param[in] type \imp \ref R17 req15.2 the type of block
void set_Block_Type(int type){blockType = type;}

/// \imp \ref R17
int get_Block_Type(){return blockType;}

/// \param[in] type \imp \ref R16 req15.1the type of  flower
void set_Flower_Type(int type){flowerType = type;}

/// \imp \ref R16
int get_Flower_Type(){return flowerType;}
 
#endif /* TerrainBuilder_hpp */
