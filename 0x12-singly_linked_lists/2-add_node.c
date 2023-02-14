#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head of the linked list
 * @str: string to be duplicated
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	size_t i;
	new -> str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new -> len = i;
	new -> next = *head;
	*head = new;
	
	return (new);
}
