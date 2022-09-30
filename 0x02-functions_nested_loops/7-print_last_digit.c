#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}

