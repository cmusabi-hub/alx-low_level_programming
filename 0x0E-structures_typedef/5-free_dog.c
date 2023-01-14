#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to the structure of the dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d -> name);
	free(d -> age);
	free(d -> owner);
	free(d);
}
