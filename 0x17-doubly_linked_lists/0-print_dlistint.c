#include "main.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: list to be printed
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node = 0;
	
	temp = h; 
	for (; temp != NULL; node++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (node);
}

