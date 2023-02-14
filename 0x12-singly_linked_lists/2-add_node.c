#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at the beginning
 * @head: pointer to the node
 * @str: string to be added
 * Return: address of the new element or Null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t * new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new -> str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new -> len = nchar;
	new -> next = *head;
	*head = new;

	return (*head);
}
