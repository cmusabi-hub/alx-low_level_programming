#include <stdio.h>
#include "main.h"

/**
 *A function that prints the 9 times table
 */

void times_table(void)
{
  int num1, num2, mult;
  for (num1 = 0; num1 <= 9; num1++)
    {
      mult = num1 * num2;
      for (num2 =0; num2 <= 9; num2++)
	{
	  _putchar(mult + '0');
	}
      if (mult < 81)
	putchar(',');
      putchar(' ');
      putchar('\n');
    }
}
