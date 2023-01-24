#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: fuction pointer
 *
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
