#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	int index;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

