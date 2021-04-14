// Requirements.cpp
// Created by Jonathan Morelock 3/12/2021
#include <math.h>
#include "Jonathan_Requirements.h"

int set_draw_distance(int *render_radius, float speed, Precipitation * P)
{
    if (speed < 5 || P->type == RAIN)
    {
        *render_radius = 5;
    }
    if (speed >= 5 && speed <= 10 || P->type == SNOW)
    {
        //Draw slow rate
        *render_radius = 10;
    }
    else if (speed > 10 && speed <= 15 && P->type == CLEAR)
    {
        //Draw medium rate
        *render_radius = 17;
    }
    else if (speed > 15 && P->type == CLEAR)
    {
        //Draw fast rate
        *render_radius = 24; //max render radius as set on line 2068 in main.c
    }
    return *render_radius;
}

void generate_precipitation_vectors(Precipitation *P, float x, float y, float z)
{
    P->pv.x = x;
    P->pv.y = y;
    P->pv.z = z;
}

void set_precipitation_type(Precipitation *P, int precip_type)
{
    if(precip_type == 0)
    {
        P->type = RAIN;
    }
    if(precip_type == 1)
    {
        P->type = SNOW;
    }
    else
    {
        P->type = CLEAR;
    }
}