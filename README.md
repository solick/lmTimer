lmTimer
=======

A simple timer for Arduino

# Installation

- Place the folder lmTimer into your Arduino library folder.
- Restart Arduino IDE
- Include the library at your source code with `#include <lmTimer.h>`
- Initialize the lmTimer instance with `lmTimer lckT(20);`

# Usage

Within your loop function just check if your timer reached the defined period:

	if(lckT.checkTime() == 1)
	{
		//Do whatever you want
	}
	
# Hints

I know there are much more sophisticated timers and yes i also know there are interupts which can be used. But for simple projects i found this little program quite useful.
