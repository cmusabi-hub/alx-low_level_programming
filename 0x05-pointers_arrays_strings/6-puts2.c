#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string tested
 */

void puts2(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
		str++;
	}
	_putchar('\n');
}

