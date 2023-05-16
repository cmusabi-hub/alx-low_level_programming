#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, length, _len;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (length % 2 != 0)
		_len = (length - 1) / 2;
	else
		_len = length / 2;
	for (i = _len; i <= length && str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

