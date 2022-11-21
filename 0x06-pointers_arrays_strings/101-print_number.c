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
		num -=num;
	}
	if (num > 0)
	{
		print_number(num / 10);
	}
	putchar((value % 10) + '0');
}
