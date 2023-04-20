#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: list to be printed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	
	if (h == NULL)
		return (node);

	for (;h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node++
	}
	return (node);
		
}

