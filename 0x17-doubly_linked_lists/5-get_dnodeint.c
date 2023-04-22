#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node starting from 0
 * Return: nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	unsigned int test = 0;
	current = head;

	for (; current != NULL; test++)
	{
		current = current->next;
		if (test == index)
			return ("%d\n", current);		
	}
}

