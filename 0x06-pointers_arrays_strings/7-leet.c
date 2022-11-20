#include "main.h"
#include <stdio.h>

/**
 * leet - A function that encodes a string into 1337
 * @s: string to be encoded
 * Return: return value of s
 */

char *leet(char *s)
{
	int a = 0, b = 0;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char  num[] = {'4', '3', '0', '7', '1'};

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == letter[b] || s[a] == letter[b] - 32 && b < 5)
		{
			s[a] =num [b];
			b++;
		}
	}
	return (s);
}
