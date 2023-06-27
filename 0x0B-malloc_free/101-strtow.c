#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: returns string
 */

char **strtow(char *str)
{
	char *string;
	int i, string_len = strlen(str) + 1, current_position 0;

	if (str == '' || str == NULL)
		return (NULL);
	string =(char *)malloc(sizeof(char) * string_len);
	
	if (string == NULL)
		return (NULL);
	for (i = 0; i < string_len; i++)
	{
		if(str[i] == " "||str == "\t")
			current_position++;
			continue;
		else
		{
			strcpy(string + current_position, str[i]);
			current_position++;
		}
	}
	string[current_position] = '\0';
	return (string);
}

