#include "copeland.h"
#include "item.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


long test_track_system_time(){

	long seconds;

	seconds = track_system_time();

	return seconds;
}



int test_is_plant(){
	return is_obstacle(items[29]);
}



int main(int argc, char **argv)
{
	long current_time = test_track_system_time();
	printf("Current time in seconds is %s, " current_time)

	int plant_obstacle = test_is_plant();
	printf("Plants are now obstacles %s ", plant_obstacle)

    return 0;
}
