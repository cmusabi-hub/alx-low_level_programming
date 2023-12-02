#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer\
 * @num: parameter tested
 * Return: 0 for success
 */

int _abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

