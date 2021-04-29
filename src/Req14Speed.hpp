//
//  Req14Speed.hpp
//  TerrainBuilder Project req.14
//
//  Created by HaiyueChen on 4/12/21.
//

#ifndef Req14Speed_hpp
#define Req14Speed_hpp
//the constant named BLOCK_01  would contain the value of 6...
#define BLOCK_01 6
#define BLOCK_02 7
#define BLOCK_03 8
#define BLOCK_04 9
#define BLOCK_05 10
#define BLOCK_06 11
#include <stdio.h>

 
/// \param[in] type \imp \ref R15 req15.1 the type of block
void set_Block_Type(int type){blockType = type;}

/// \imp \ref R15
int get_Block_Type(){return blockType;}

/// \imp \ref R16  Decide UserSpeed according to block_type
void set_User_Speed(block_type, int speed)

#endif /* Req14Speed_hpp */
