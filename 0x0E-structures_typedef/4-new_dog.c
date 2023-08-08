#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog created
 * @name: pointer to the name
 * @age: age
 * @owner: owner of the dog
 * return: Null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * strlen(name));
	dog->name = name;
	dog->age = age;
	dog->owner = malloc(sizeof(char) * strlen(name));
	dog->owner = owner;

	return (dog);
	free(dog);
}

