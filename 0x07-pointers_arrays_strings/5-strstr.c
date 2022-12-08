#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string tested against
 * @needle: substing tested
 * Return: return needle or NULL if substing not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if ((haystack[j] == needle[:-1]) == needle[i])
				return (haystack + i);
		}
	}
	return (0);
}
