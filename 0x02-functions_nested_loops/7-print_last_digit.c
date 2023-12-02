#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: parameter tested
 * Return: last number
 */

int print_last_digit(int num)
{
	int last_num;
	if (num < 0)
		num *= -1;
	last_num = num % 10;
	_putchar('0' + last_num);
	return (last_num);
}

