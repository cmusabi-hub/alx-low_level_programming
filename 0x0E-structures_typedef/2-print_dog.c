#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: type of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL || d->name != NULL || d->age > 0 || d->owner != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		printf("nil\n");
}

