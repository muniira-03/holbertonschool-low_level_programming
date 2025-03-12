#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
