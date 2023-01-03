#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to 2D array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: the 2D array and NULL if fail and with & height is 0
 */

int **alloc_grid(int width, int height)
{
	int w = 0, h = 0, **grid;

	if ((width || height) <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; h < height; h++)
				free(grid[h]);

			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
