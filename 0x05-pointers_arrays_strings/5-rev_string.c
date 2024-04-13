#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int index, length = 0;
	char temp;

	for (index = 0; s[index] != '\0'; index++)
		length++;
	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[length - 1 - index];
		s[length - 1 - index] = temp;
	}
}

