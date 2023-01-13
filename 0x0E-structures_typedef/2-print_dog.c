#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the structue
 * Return: return value is void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d -> name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d -> name);
		if (d -> age == NULL)
			printf("(nil)\n");
		else
			printf("%s", d -> age);
		if (d -> owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d -> owner);			
	}
}
