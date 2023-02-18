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
	unsigned int len;
	list_t  *newnode;
	char source = strup(str);

	newnode = (struct list_t *)malloc(sizeof(list_t));
	head = newnode;

	for (; head != NULL; i++)
	{
		newnode -> str = source;
		newnode ->next = head;
		head = newnode;
	}
	return (head);
}
