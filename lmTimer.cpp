

#include "lmTimer.h"


//<<constructor>>
/****************************************************************************/
lmTimer::lmTimer(int interval)
/****************************************************************************/
{
  
   _lckInterval = interval;
   _time1 = 0;
   _time2 = 0;
   _timediff = 0;
   _tick = 0;
   _lastLckTick = 0;
  
  
}

//<<destructor>>
/****************************************************************************/
lmTimer::~lmTimer()
/****************************************************************************/
{
  
  
}


/****************************************************************************/
int lmTimer::checkTime()
/****************************************************************************/
{
    /*** Time diff evaluation for lifecheck ***/
  
  _time2 = millis() / 1000;
  
  _timediff = _time2 - _time1;
  _time1 = _time2;
  
  _tick += _timediff;
  
  if(_tick % _lckInterval == 0 && _tick > _lastLckTick)
  {
    _lastLckTick = _tick;
    //serCom.printToSerial("AT+LCK=OK", 0);
    return 1;
    
  }
  
  return 0;
  
}

/****************************************************************************/
int lmTimer::changeInterval(int interval)
/****************************************************************************/
{
  if(interval > -1)
  {
    
    _lckInterval = interval;
    return 1;
  }
  else
  {
    return 0;
    
  }
}
