#include "Jonathan_Requirements10_11_12_19.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <GL/glew.h>

/**
 * \defgroup Terrain Jonathan_Terrain_Mods
 * @{
 * The modifications of the "Craft" game terrain generation test bench.
 **/

///Ref: Req. 10,11,12,19
///
/// \imp \ref R10
/// \imp \ref R11
/// \imp \ref R12
/// \imp \ref R22
///
/* 
 Generates a random integer for movement speed to test draw distance per requirements 11 & 12.
 Uses current weather conditions in draw distance calculation per requirement 10.
 */
void test_draw_speed(Precipitation *P)
{
    float speed = 0;
    speed = rand() / (INT32_MAX / 24);
    printf("speed is: %f\n", speed);
    int render_radius = 0;

    render_radius = set_draw_distance(render_radius, speed, P);
    printf("with given speed and precip type, render_radius is set to: %d\n", render_radius);
}

/// \imp \ref R22
///
/*
Generates random vectors in degrees of 360 or less for precipitation directions
*/
void test_precip_vectors(Precipitation *P)
{
    float x = rand() % 360;
    float y = rand() % 360;
    float z = rand() % 360;
    printf("precip values should be set to: x: %f, y: %f, z: %f\n" ,x ,y ,z);
    generate_precipitation_vectors(P, x, y, z);
    printf("generated precip vectors have been set to: x: %f, y: %f, z: %f\n", P->pv.x, P->pv.y, P->pv.z);
}

/// \imp \ref R22
///
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
    int precip_type = 0;
    precip_type = rand() % i;
    printf("generated precip type is: %d, precip type should be set to: %d\n", precip_type, precip_type);
    set_precipitation_type(P, precip_type);
    printf("precipitation type set successfully, type is : %d\n", P->type);
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

/**@}*/