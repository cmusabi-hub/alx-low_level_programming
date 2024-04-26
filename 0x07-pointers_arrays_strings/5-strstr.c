#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Null or occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int index_ha, index_ne;

	if (!needle)
		return ('\0');
	else
	{
		for (index_ha = 0; haystack[index_ha] != '\0'; index_ha++)
		{
			index_ne = 0;
			if (haystack[index_ha] == needle[index_ne])
			{
				for (index_ne = 0; needle[index_ne] != '\0'; index_ne++)
				{
					if (needle[index_ne] != haystack[index_ha + index_ne])
						break;
				}
				if (needle[index_ne] == '\0')
					return (haystack + index_ha);
			}
		}
	}
	return ('\0');
}

