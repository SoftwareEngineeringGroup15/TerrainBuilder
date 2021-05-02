#include "copeland.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


long test_track_system_time(){

	long seconds;

	seconds = track_system_time();

	return seconds;
}



int main(int argc, char **argv)
{

	long current_time = test_track_system_time();
	printf("Current times in seconds is %s, " current_time)

    return 0;
}
