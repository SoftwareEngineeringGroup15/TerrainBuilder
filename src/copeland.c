#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "copeland.h"



/**
 *  Requirement 13 -
 *  The game shall generate a smaller step rate for hit testing
 */


/**
 *  Requirement 17 -
 *  The game shall change from day to night based on the system time.
 *  This method will be called from main's get_daylight()
 */
long track_system_time() {
	/// \imp \ref R17 Tracks current system time to update in-game time per req. 17

	// Current date/time based on current system
	  time_t now = time(0);

	  // Convert now to tm struct for local timezone
	  struct tm* localtm = localtime(&now);

	  //convert to long and return
	  return (long long)localtm;
}
