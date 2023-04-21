#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @n: data contained in the new node
 * @head: pointer to the head of the list
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	newnode = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = head;
	if (head != NULL)
	{
		head->prev = newnode;
		head = head->next;
	}
	*head = newnode;
	return (newnode);
}

