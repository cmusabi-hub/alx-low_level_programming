#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog created
 * @name: pointer to the name
 * @age: age
 * @owner: owner of the dog
 * Return: Pointer to the newly created dog, or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    int index = 0, len_owner = 0, len_name = 0;
    dog_t *dog;
    dog = malloc(sizeof(dog_t));

    for (; name[index] != '\0'; index++)
        len_name++;
    for (; owner[index] != '\0'; index++)
        len_owner++;

    if (dog == NULL)
        return NULL;

    if (name == NULL || age < 0 || owner == NULL) {
        free(dog);
        return NULL;
    }

    dog->name = malloc(sizeof(char) * (len_name + 1));
    if (dog->name == NULL) {
        free(dog);
        return NULL;
    }
    dog->name = name;

    dog->owner = malloc(sizeof(char) * (len_owner + 1));
    if (dog->owner == NULL) {
        free(dog->name);
        free(dog);
        return NULL;
    }
    dog->owner = owner;

    dog->age = age;

    return dog;
}

