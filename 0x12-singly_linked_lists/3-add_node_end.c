#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds node at the end of the list
 * @head: head of the list
 * @str: string to be duplicated
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t  *new, *newnode = malloc(sizeof(list_t));

	for (; str[len]; len++)
		;

	if (head == NULL)
		return(NULL);
	else
	{
		new -> next = newnode;
		newnode -> str = strdup(str);
		newnode -> len = len;
		newnode -> next = NULL;
		*head = newnode;
	}
	return(*head);
}
