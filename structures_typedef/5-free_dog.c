#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)  /* Check if the pointer is not NULL */
	{
		free(d->name);   /* Free memory allocated for the dog's name */
		free(d->owner);  /* Free memory allocated for the owner's name */
		free(d);          /* Finally, free the dog structure itself */
	}
}
