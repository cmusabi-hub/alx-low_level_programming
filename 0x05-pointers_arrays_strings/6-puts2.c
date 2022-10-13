#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every character of string
 * @str: string printed
 */

void puts2(char *str)
{
	int i, len = strlen(str) - 1;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
