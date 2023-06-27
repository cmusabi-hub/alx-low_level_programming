#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: Null if ac or av is Null or a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, totalLength = 0, currentPosition = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	
	for (i = 0; i < ac; i++)
		totalLength += strlen(av[i]) + 1;
	string = (char *)malloc(sizeof(char) * totalLength);

	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(string + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		string[currentPosition] = '\n';
		currentPosition++;
	}
	string[currentPosition] = '\0';
	return (string);
}

