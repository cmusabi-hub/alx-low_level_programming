#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: string tested
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
