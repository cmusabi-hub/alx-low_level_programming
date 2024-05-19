#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid: grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int iter;

	for (iter = 0; iter < height; iter++)
	{
		free(grid[iter]);
	}
	free(grid);
}

