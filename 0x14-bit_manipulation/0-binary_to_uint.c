#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: charater passed
 * Return: 0 if not 0 or 1 & number of converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int iter, num = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);
		num = num * 2 + (b[iter] - '0');
	}
	return (num);
}

