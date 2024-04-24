#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointed to
 * @accept: string tested against
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found, count = 0, index_s, index_a;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
	{
		found = 0;
		for (index_a = 0; accept[index_a] != '\0'; index_a++)
		{
			if (s[index_s] == accept[index_a])
				found = 1;
		}
		if (found == 0)
			return (count);
		count++;
	}
	return (count);
}

