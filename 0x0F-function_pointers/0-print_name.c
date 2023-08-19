#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}

