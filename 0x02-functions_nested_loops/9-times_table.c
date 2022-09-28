#include <stdio.h>
#include "main.h"

/**
 *A function that prints the 9 times table
 */

void times_table(void)
{
  int num1, num2, multiply;
  for (num1 = 0; num1 <= 9; num1++)
    {
      for (num2 = 0; num2 <=9; num2++)
	multiply = num1 * num2;
      if (multiply < 81)
	{
	  _putchar(',');
	  _putchar(' ');
	}
      else
	_putchar('\n');
    }
}
