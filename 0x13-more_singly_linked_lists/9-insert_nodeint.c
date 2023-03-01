#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node should be added starts at 0.
 * @n: data to be added;
 * Return: address of newnode.
 * 	   NULL if failed.
 * 	   if not possible to add new node at idx do not add new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *traverse;
	unsigned int i = 0;

	traverse = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = traverse;
		*head = newnode;
		return (newnode);
	}
	
	for (; traverse != NULL && traverse->next != NULL && i < (idx - 1); i++ )
	{
		traverse = traverse->next;
	}
	newnode->next = traverse->next;
	traverse->next = newnode;
	newnode->n = n;
	
	return (newnode);
}
