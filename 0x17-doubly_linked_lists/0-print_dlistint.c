#include "main.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: list to be printed
 * Return: numbeer of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	dlistint_t *head;
	head = h;

	for (;head != NULL;node++)
	{
		printf(head->n);
		head->next = h;
	}
	return (node);
		
}
