#ifndef LMTIMER_H
#define LMTIMER_H

#include "Arduino.h"

class lmTimer {
 
   public:
	   lmTimer(int interval); ///< Constructor with integer value which represents the interval
	   ~lmTimer(); ///< Destructor
	   int checkTime(); ///< returns 0 if time period not reached, 1 if the time period has reached
	   int changeInterval(int interval); ///< sets the interval to new value
	   
  private: 
	  int _lckInterval; /// saves the interval
	  unsigned long _time1; /// starting timer in seconds
	  unsigned long _time2; /// actual time in seconds
	  unsigned long _timediff; /// represents difference
	  unsigned long _tick; /// increased by timediff at every check
	  unsigned long _lastLckTick; /// represents time of the last check
	  
};

#endif
