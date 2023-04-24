#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: poiter to the head of a list
 * @idx: index where node is to be inserted
 * @n: data contained in the new inserted node
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int test = 0;
	dlistint_t *temp = *h, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (h == NULL)
		return (NULL);

	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	for (; temp != NULL && test < (idx - 1); test++)
		temp = temp->next;
	if (temp == NULL && test != idx -1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}

