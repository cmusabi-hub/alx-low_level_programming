#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * idx: index where new node should be added
 * @n: integer to be added
 * Return: address of the new node or NULL IF FAIL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	newnode = malloc(sizeof(dlistint_t));
	int test = 0;

	if (newnode == NULL || *h == NULL)
		return (NULL);
	temp = *h;
	for (;temp != NULL, test < (idx - 1); temp = temp->next, test++)
	{
		newnode->next = temp->next;
		newnode->n = n;
		newnode->prev = temp->prev;
	}
	free(temp);
	return (newnode);
}

