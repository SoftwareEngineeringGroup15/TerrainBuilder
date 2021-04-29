//
//  Req15Test.cpp
//  
//
//  Created by HaiyueChen on 4/18/21.
//
#include <gtest/gtest.h>
#include "Req15Flower.hpp"
#include "catch.hpp"

Test(Req15Flower, paringBlock01) {
    int blocks =1;
    EXPECT_EQ(int flowers = 7, paring(1,7));
}
Test(Req15Flower, paringBlock02) {
    int blocks =2;
    EXPECT_EQ(int flowers = 8, paring(2,8));
}
Test(Req15Flower, paringBlock03) {
    int blocks =3;
    EXPECT_EQ(int flowers = 9, paring(3,9));
}
Test(Req15Flower, paringBlock04) {
    int blocks =4;
    EXPECT_EQ(int flowers = 10, paring(4,10));
}
Test(Req15Flower, paringBlock05) {
    int blocks =5;
    EXPECT_EQ(int flowers = 11, paring(5,11));
}
Test(Req15Flower, paringBlock06) {
    int blocks =6;
    EXPECT_EQ(int flowers = 12, paring(6,12));
}
 
