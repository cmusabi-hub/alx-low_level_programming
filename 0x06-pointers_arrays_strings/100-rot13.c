#include "main.h"

/**
 * rot13 - encodes a string
 * @string: string tested
 * Return: return encoded string
 */

char *rot13(char *string)
{
	int index, i;

	char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
	     set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; string[index] != '\0'; index++)
	{
		for (i = 0; set1[i] != '\0'; i++)
		{
			if (string[index] == set1[i])
			{
				string[index] = set2[i];
				break;
			}
		}
	}
	return (string);
}

