#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followe by a new line
 * @separator: is , character
 * @n: argument parameters
 * Return: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	char sep = ',';
	separator = &sep;

	if (separator == NULL)
		printf("\n");
}
