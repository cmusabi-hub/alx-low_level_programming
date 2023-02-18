#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: string to be copied to the list
 * Return: address of the new element of NULL if fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *head, *newnode;
	char source[len] = strup(str);

	newnode = (struct list_t *)malloc(sizeof(struct list_t));
}
