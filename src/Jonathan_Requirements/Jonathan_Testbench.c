#include "Jonathan_Requirements.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <GL/glew.h>

///Ref: Req. 10,11,12,19
/* 
 Generates a random integer for movement speed to test draw distance per requirements 11 & 12.
 Uses current weather conditions in draw distance calculation per requirement 10.
 */
void test_draw_speed(Precipitation *P)
{
    float speed = rand() % 20;
    printf("speed is: %f\n", speed);
    int x = 0;
    int *render_radius = &x;

    *render_radius = set_draw_distance(render_radius, speed, P);
    printf("render_radius is: %d\n", *render_radius);
}
///Ref: Req. 19
/*
Generates random vectors in degrees of 360 or less for precipitation directions
*/
void test_precip_vectors(Precipitation *P)
{
    float x = rand() % 360;
    float y = rand() % 360;
    float z = rand() % 360;
    generate_precipitation_vectors(P, x, y, z);
    printf("precip vectors: x: %f, y: %f, z: %f\n", P->pv.x, P->pv.y, P->pv.z);
}

///Ref: Req. 19
/*
Generates a random number from 0 to max number of weather conditions and sets the enumerated precipitation type to the random
number to test the precipitation functionality with movement speed and draw distance.
*/
void test_precipitation(Precipitation *P)
{
    int i = 0;
    while (i <= CLEAR) //loop is here instead of hard-coded int incase more precip types added later
    {
        i++;
    }
    int precip_type = rand() % i;
    printf("precip type is: %d\n", precip_type);
    set_precipitation_type(P, precip_type);
}

int main(int argc, char **argv)
{
    Precipitation P;
    Precipitation *P_ptr = &P;
    test_precipitation(P_ptr);
    test_draw_speed(P_ptr);
    test_precip_vectors(P_ptr);

    return 0;
}