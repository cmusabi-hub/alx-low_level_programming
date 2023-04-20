#include "lists.h"

/**
 * dlistint_len - returns the number of elements ina linked list
 * @h: the list checked
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *temp = h;

	for (; temp != NULL; elements++)
		temp = temp->next;
	return (elements);
}

