#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: string tested
 * Return number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int index, _index, count = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (_index = 0; accept[_index] != '\0'; _index++)
		{
			if (s[index] == accept[_index])
			{
				count++;
				break;
			}
		}
		if  (accept[_index] == '\0')
			return count;
	}
	return (count);
}

