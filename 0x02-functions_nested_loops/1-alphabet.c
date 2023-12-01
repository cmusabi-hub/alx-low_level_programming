#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

