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
	unsigned int test = 0;
	dlistint_t *temp = *h, *newnode;
	newnode = malloc(sizeof(dlistint_t));	

	if (temp == NULL)
		return (NULL);
	newnode->n = n;
	
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	for (test = 0;temp != NULL && test < (idx - 1); test++)
	{
		temp = temp->next;
	}
	if (temp->next != NULL)
		temp->next->prev = newnode;

	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;


	return (newnode);
}

