#include "Requirements.h"
#include <stdio.h>

void test_draw_speed(DrawSpeed *DS, float speed, int *render_radius){
    set_draw_distance(DS, speed);
    get_draw_distance(DS, render_radius);
    printf("render_radius is: %d", render_radius);
}

int main(int argc, char **argv)
{
    float speed = 15;
    int *render_radius;
    DrawSpeed * DS;

    test_draw_speed(DS, speed, render_radius);
    
}