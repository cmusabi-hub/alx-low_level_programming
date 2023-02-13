#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: list to be printed
 * Return: number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t  node = 0;

	for (; h != NULL; node++)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %str\n", h -> len, h -> str);
	}
	return (node);
}
