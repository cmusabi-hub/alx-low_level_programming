#include <stdio.h>
#include "main.h"

/**
 *function that prints out every minute of Jack Bauer
 */

void jack_bauer(void)
{
  int hour, minute;
  for (hour = 0; hour < 24; hour++ )
    {
      for (minute = 0; minute < 60; minute++)
	{
	  if ((hour != 24) || (minute != 60))
	    {
	      _putchar(hour + '0');
	      _putchar(':');
	      _putchar(minute + '0');
	    }
	}
    }
}
