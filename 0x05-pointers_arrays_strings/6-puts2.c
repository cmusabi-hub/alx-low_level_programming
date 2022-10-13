#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every character of string
 * @str: string printed
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
