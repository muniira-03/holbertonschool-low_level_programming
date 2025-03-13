#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner, and copy the strings */
	new_dog->name = malloc(strlen(name) + 1);  /* +1 for the null terminator */
	if (new_dog->name == NULL)
	{
		free(new_dog);  /* Free the previously allocated memory for the dog struct */
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);  /* Free the previously allocated memory for the name */
		free(new_dog);  /* Free the dog struct */
		return (NULL);
	}

	/* Use strncpy to copy the strings safely */
	strncpy(new_dog->name, name, strlen(name) + 1);  /*  nul terminator */
	strncpy(new_dog->owner, owner, strlen(owner) + 1);  /* null terminator */

	/* Set the dog's age */
	new_dog->age = age;

	return (new_dog);
}
