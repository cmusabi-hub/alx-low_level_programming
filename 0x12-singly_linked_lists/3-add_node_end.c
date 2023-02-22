#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds new node at the end of a list
 * @str: string to be pointed to
 * head: pointer to the address copied
 * Return: address of new element or Null if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list *newnode, *traverse;
	newnode = malloc(sizeof(list_t));
	*head = newnode;

	for (; str(len); len++)
		;
	if (head == NULL)
		return (NULL);
	else
	{
		traverse = *head;
		newnode -> str = strdup(str);
		newnode -> len = len;
		newnode -> next = NULL;
		traverse = traverse -> next;
	}
	return (*head);
}
