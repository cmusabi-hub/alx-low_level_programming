#include <stdio.h>
#include "main.h"

/**
 *function that prints out every minute of Jack Bauer
 */

void jack_bauer(void)
{
  int hour, minute;
  for (hour = 0; hour < 25; hour++ )
    {
      for (minute = 0; minute < 61; minute++)
	{
	  if ((hour != 24) || (minute != 60))
	    {
	      _putchar(hour);
	      _putchar(':');
	      _putchar(minute);
	    }
	}
      _putchar('\n');
    }
}
