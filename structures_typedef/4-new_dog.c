#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    // Allocate memory for the new dog structure
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);  // Return NULL if memory allocation fails

    // Allocate memory and copy the name if it is not NULL
    if (name != NULL)
    {
        new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
        if (new_dog->name == NULL)
        {
            free(new_dog);  // Free previously allocated memory
            return (NULL);
        }
        for (int i = 0; name[i] != '\0'; i++)
            new_dog->name[i] = name[i];
        new_dog->name[strlen(name)] = '\0';  // Null-terminate the string
    }
    else
    {
        new_dog->name = NULL;
    }

    // Allocate memory and copy the owner if it is not NULL
    if (owner != NULL)
    {
        new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
        if (new_dog->owner == NULL)
        {
            free(new_dog->name);  // Free previously allocated memory
            free(new_dog);
            return (NULL);
        }
        for (int i = 0; owner[i] != '\0'; i++)
            new_dog->owner[i] = owner[i];
        new_dog->owner[strlen(owner)] = '\0';  // Null-terminate the string
    }
    else
    {
        new_dog->owner = NULL;
    }

    new_dog->age = age;

    return (new_dog);
}
