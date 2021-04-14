#include "Jonathan_Requirements.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <GL/glew.h>

void test_draw_speed(Precipitation * P)
{
    float speed = rand()%20;
    printf("speed is: %f\n",speed);
    int x = 0;
    int *render_radius = &x;
    

    *render_radius = set_draw_distance(render_radius, speed, P);
    printf("render_radius is: %d\n", *render_radius);
}
void test_precip_vectors(Precipitation * P)
{
    float x = rand()%360;
    float y = rand()%360;
    float z = rand()%360;
    generate_precipitation_vectors(P,x,y,z);
    printf("precip vectors: x: %f, y: %f, z: %f\n",P->pv.x,P->pv.y,P->pv.z);
}
void test_precipitation(Precipitation * P)
{
    int precip_type = rand()%3;
    printf("precip type is: %d\n",precip_type);
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