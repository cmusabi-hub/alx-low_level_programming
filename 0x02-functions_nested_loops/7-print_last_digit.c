#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: parameter tested
 * Return: 0 for success
 */

int print_last_digit(int num)
{
	unsigned int last_digit;
	
	if (num < 0)
		num = -num;

	last_digit = num % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

