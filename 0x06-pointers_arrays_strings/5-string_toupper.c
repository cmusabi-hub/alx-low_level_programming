#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @string: string tested
 * Return: string
 */
char *string_toupper(char *string)
{
	int index;

	for (index = 0; string[index] && string[index] != '\0'; index++)
	{
		if (string[index] >= 'a' && string[index] <= 'z')
			string[index] -= 32;
	}
	return (string);
}

