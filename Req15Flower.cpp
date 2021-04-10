//
//  TerrainBuilder.cpp
//  
//
//  Created by Haiyue Chen on 3/16/21.
//

#include "TerrainBuilder.hpp"

const int flowers[] = {
//flowers that refer to req.16
  YELLOW_FLOWER,
  RED_FLOWER,
  PURPLE_FLOWER,
  SUN_FLOWER,
  WHITE_FLOWER,
  BLUE_FLOWER,
};
//blocks refer to req.17
const int blocks[] = {
  BLOCK_01,
  BLOCK_02,
  BLOCK_03,
  BLOCK_04,
  BLOCK_05,
  BLOCK_06,
};

void set_Block_Type(int type);
 
int get_Block_Type();
 
void set_Flower_Type(int type)

int get_Flower_Type();

int main(int argc, char *argv[])
{
    flowers f;
    blocks b;
    if(b.set_Block_Type(6))
        f.set_Flower_Type(0);
    else if(b.set_Block_Type(7))
        f.set_Flower_Type(1);
    else if(b.set_Block_Type(8))
        f.set_Flower_Type(2);
    else if(b.set_Block_Type(9))
        f.set_Flower_Type(3);
    else if(b.set_Block_Type(10))
        f.set_Flower_Type(4);
    else (b.set_Block_Type(11))
        f.set_Flower_Type(5);
}



 

