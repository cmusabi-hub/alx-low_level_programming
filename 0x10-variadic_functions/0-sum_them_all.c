#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters passed
 * Return: always 0 for success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int index = 0, sum = 0;

	va_start (arg_list, n);
	
	for (; index < n; index++)
		sum += va_arg (arg_list, unsigned int);
	va_end (arg_list);
	return (sum);
}

