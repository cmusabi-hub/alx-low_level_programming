#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, len_n, len_o;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	for (; name[i]; i++)
		len_n++;
	name = malloc(sizeof(char) * len_n);
	new_dog -> name == name;

	new_dog -> age == age;

	for (; owner[i]; i++)
		len_o++;
	new_dog -> owner == owner;
	owner = malloc(sizeof(char) * len_o);
	free(name);
	free(owner);
	return (0);

}
