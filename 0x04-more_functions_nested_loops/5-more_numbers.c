#include "main.h"

/** more_numbers -  function that prints 10 times 0 - 14
 * @a: is an integer
 * @b is an integer
 */

void more_numbers(void)
{
	int a,b;

	for  (a = 0; a < 10; a++)
	{
		for (b = 0; a <=14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}

}
