#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: string tested
 */

void puts_half(char *str)
{
	int i, len = strlen(str), len2;

	for (i = len; i > len; i++)
	{
		if ( strlen(str) % 2 != 0)
		{
			len2 = (strlen(str) + 1) / 2;
			_putchar(str[i]);
		}
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
