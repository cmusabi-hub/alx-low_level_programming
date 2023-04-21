#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the begginning of a list
 * @head: pointer at the beginning of a list
 * @n: data to be inserted in the list
 * Return: the address of athe new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	newnode = malloc(sizeof(dlistint_t));
	if (head == NULL || n == NULL)
		return (NULL);
		
	newnode->n = n
	newnode->next = head;
	newnode->prev = NULL;
	
	if (*head != NULL)
		(*head)->prev = newnode
	return (*newnode);
}

