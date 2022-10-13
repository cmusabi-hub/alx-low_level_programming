#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every character of string
 * @str: string printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= strnlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
