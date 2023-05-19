#include "main.h"

/**
 * leet - encodes a string into 1337
 * @_string: string tested
 * Return: string
 */

char *leet(char *_string)
{
	char letter[] = "aeotl", numbers[] = "43071";
	int index, i;

	for (index = 0; _string[index] != '\0'; index++)
	{
		for (i = 0; letter[i] != '\0'; i++)
		{
			if (_string[index] == letter[i] || _string[index] == (letter[i] - 32))
				_string[index] = numbers[i];
		}
	}
	return (_string);
}

