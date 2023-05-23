#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates substring
 * @haystack: initial string
 * @needle: substring to be found
 * Return: pointer to the located string or null if the substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int index, _index = 0;
	
	if (needle[_index] == '\0')
		return (haystack);
	for (index = 0; haystack[index] != '\0'; index++)
	{
		if (haystack[index] == needle[_index])
		{
			for (_index = 0; needle[_index] != '\0'; _index++)
			{
				if (needle[_index] != haystack[index + _index])
					break;
			}
			if (needle[_index] == '\0')
				return (haystack + index);
		}
	}
	return (NULL);
}

