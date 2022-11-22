#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n number to be printed
 * Return: return value is void
 */

void print_number(int n)
{
	unsigned int num = n;
	
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	elif ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
