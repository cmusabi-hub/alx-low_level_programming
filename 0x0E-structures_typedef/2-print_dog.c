#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: type dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
			printf("nil\n");
		else
			printf("Name: %s\nAge: %f\nOwner: %s", d->name,
					d->age, d->owner);
	}
}

