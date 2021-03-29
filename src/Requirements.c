// Requirements.cpp
// Created by Jonathan Morelock 3/12/2021

#include "Requirements.h"

void get_draw_distance(DrawSpeed *DS, int *render_radius) {
    *render_radius = DS->render_radius;
}

void set_draw_distance(DrawSpeed* DS, float speed) {
    if(speed >= 0 && speed <= 10){
        //Draw slow rate
        DS->render_radius = 10;
    }
    else if(speed > 10 && speed <= 15) {
        //Draw medium rate
        DS->render_radius = 15;
    }
    else if(speed > 15) {
        //Draw fast rate
        DS->render_radius = 24; //max render radius as set on line 2068 in main.c
    }
}