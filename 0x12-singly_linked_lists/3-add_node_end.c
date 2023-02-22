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
	
	list_t *new, *newnode;
	newnode = malloc(sizeof(list_t));

	for (; str[len]; len++)
		;

	if (head == NULL)
		return (NULL);
	else
	{
		*head = new;
		new = newnode;
		new -> str = strdup(str);
		new -> len = len;
		new -> next = NULL;
	}
	return (*head);
}
