#include "lists.h"

/**
 * add_dnodeint_end - adds a new node of a dlistint_t list at the end
 * @head: head pointer.
 * @n: data to be added to the list
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));

	temp = *head;
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (temp)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;	
		newnode->prev = temp;
	}
	return (newnode);
}

