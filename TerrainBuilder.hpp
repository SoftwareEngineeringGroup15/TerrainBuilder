//
//  TerrainBuilder.hpp
//  
//
//  Created by Haiyue Chen on 3/16/21.
//
#include <stdio.h>

#ifndef TerrainBuilder_hpp
#define TerrainBuilder_hpp

#define YELLOW_FLOWER
#define RED_FLOWER
#define PURPLE_FLOWER
#define SUN_FLOWER
#define WHITE_FLOWER
#define BLUE_FLOWER
#define BLOCK_01
#define BLOCK_02
#define BLOCK_03
#define BLOCK_04
#define BLOCK_05
#define BLOCK_06

/// Ref: Req. 15  The game shall have specific flowers growing on blocks with specific textures.
///
///\param[in] type\imp\ref Req. 15  15.1type of block
void set_Block_Type(int type);

int get_Block_Type();

///\param[in] type\imp\ref Req. 15  15.2type of flower
void set_Flower_Type(int type)

int get_Flower_Type()

#endif /* TerrainBuilder_hpp */
