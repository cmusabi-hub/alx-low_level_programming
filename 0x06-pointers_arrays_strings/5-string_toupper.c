#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @_string: string to be tested
 * Return: coverted _string
 */

char *string_toupper(char *_string)
{
	int index;

	for (index = 0; _string[index] != '\0'; index++)
	{
		if ((_string[index] >= 'a') && (_string[index] <= 'z'))
			_string[index] -= 32;
	}
	return (_string);
}

