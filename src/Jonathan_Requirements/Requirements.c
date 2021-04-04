// Requirements.cpp
// Created by Jonathan Morelock 3/12/2021

#include "Requirements.h"

void get_draw_distance(DrawSpeed *DS, int *render_radius) {
    *render_radius = DS->render_radius;
}

void set_draw_distance(DrawSpeed* DS, float speed) {
    if(speed <= 10){
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

void set_precipitation_area(int area) {
    area = CHUNK_SIZE;
}

void render_precipitation(int render_radius, int precip_type) {
    if(precip_type == 0){
        return;//do nothing
    }
    else if(precip_type == 1){
        render_radius = 15;
    }
    else if(precip_type == 2){
        render_radius = 10;
    }
    else{
        return;//do nothing
    }
}

void generate_precipitation_vectors(PrecipitationVectors * PV, float x, float y, float z) {
    PV->x = x;
    PV->y = y;
    PV->z = z;
}

void set_precipitation_type(int precip_type) {
    if (precip_type == 0) {
        //none
    }
    else if(precip_type == 1) {
        //rain
    }
    else if(precip_type == 2) {
        //snow
    }
}