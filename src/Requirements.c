// Requirements.cpp
// Created by Jonathan Morelock 3/12/2021

#include "Requirements.h"

void get_draw_distance(float speed, float x, float y, float z) {

}

void set_draw_distance(float speed, float x, float y, float z) {
    if(speed >= 0 && speed <= 5){
        //Draw slow rate
    }
    else if(speed > 5 && speed <= 15){
        //Draw medium rate
    }
    else (speed > 15){
        //Draw fast rate
    }
}