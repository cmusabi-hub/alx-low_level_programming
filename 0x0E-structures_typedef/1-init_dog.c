#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initilizes a variable of type struct dog
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return value is void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
