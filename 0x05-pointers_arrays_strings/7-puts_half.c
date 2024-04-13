#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int len = 0, index;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = start;

	for (index = len / 2; index < len && str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

