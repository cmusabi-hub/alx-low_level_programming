#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: node to be printed
 * Return: the number of nodes
 * if str == NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
	{
		printf("[%i] %s\n", h->len, h->str);
	}
	return (node++);
}
