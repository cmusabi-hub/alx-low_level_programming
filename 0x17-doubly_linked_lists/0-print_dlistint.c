#include "main.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: list to be printed
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	 
	for (; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}

