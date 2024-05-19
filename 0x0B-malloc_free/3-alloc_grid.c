#include "main.h"
#include <stdlib.h>
/**
 * alloc_grind - returns pointer to a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: NULL for failure or pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int iter, iter_w, iter_h, **grid;
	
	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);
	for (iter_h = 0; iter_h < height; iter_h++)
	{
		grid[iter_h] = malloc(sizeof(int) * width);

		if (grid[iter_h] == NULL)
		{
			for (iter = 0; iter < width; iter++)
				free(grid[iter]);
			free(grid);
			return (NULL);
		}
		for (iter_w = 0; iter_w < width; iter_w++)
		{
			grid[iter_h][iter_w] = 0;
		}
	}
	return (grid);
}

