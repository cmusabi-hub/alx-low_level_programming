#include "dog.h"

/**
 * init_dog - initializes a type struct dog
 * @d: pointer to the type dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}

