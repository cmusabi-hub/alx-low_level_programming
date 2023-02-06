#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - prints a char
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		printf("nil");
}

/**
 * print_i - prints an int
 * @i
