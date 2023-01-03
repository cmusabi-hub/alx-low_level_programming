#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return null if ac is 0 and av is NULL, av followed by new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (; i < ac; i++)
	{
		_putchar(i + ac);
		_putchar('\n');
	}
	return (0);
}
