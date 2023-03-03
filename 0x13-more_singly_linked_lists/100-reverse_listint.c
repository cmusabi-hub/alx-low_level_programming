#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the head of the list.
 * Return: returns pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL, *traversenode;

	traversenode = *head;
	if (*head == NULL)
		return (NULL);

	while (traversenode->next != NULL)
	{
		traversenode = traversenode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = traversenode;
	}
	*head = prevnode;
	return (*head);
}
