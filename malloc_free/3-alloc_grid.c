#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the 2D array, or NULL if failure occurs
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height are less than or equal to 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for rows (height) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each column (width) */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if failure occurs */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize the grid elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
