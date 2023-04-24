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

	if (newnode == NULL || temp == NULL)
		return(NULL);
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	
	newnode->n = n;
	for (; temp != NULL && test < (idx - 1); test++)
		temp = temp->next;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}

