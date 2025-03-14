#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate length of
 * Return: length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int i;

    /* Allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for the name */
    new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    /* Allocate memory for the owner */
    new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    /* Copy the values into the structure */
    for (i = 0; i < _strlen(name); i++)
        new_dog->name[i] = name[i];
    new_dog->name[_strlen(name)] = '\0';

    new_dog->age = age;

    for (i = 0; i < _strlen(owner); i++)
        new_dog->owner[i] = owner[i];
    new_dog->owner[_strlen(owner)] = '\0';

    return (new_dog);
}
