#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: points to the head of the list.
 * Return: 0 if list is empty and head node's data(n).
 */

int pop_listint(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
		return (0);

	traverse = *head;
	*head = (*head)->next;
	free(traverse);

	return ((*head)->n);
}
