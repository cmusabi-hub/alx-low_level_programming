#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the grid
 */
char *argstostr(int ac, char **av)
{
	int row, column, length = 0, len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		for(column = 0; av[row][column] != '\0'; column++)
		{
			length++;
		}
		length++;
	}

	result = malloc(sizeof(char *) * (length + 1));
	
	if (result == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (column = 0; av[row][column] != '\0'; column++)
		{
			result[len] = av[row][column];
			len++;
		}
		result[len] = '\n';
		len++;
	}
	result[len] = '\0';

	return (result);
}

