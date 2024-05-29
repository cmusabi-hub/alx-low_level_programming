#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog
 * @name: name of dog
 * @float: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

