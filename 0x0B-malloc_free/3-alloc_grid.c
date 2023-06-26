#include	"main.h"
#include 	<stdlib.h>
#include	<stdio.h>

/**
 * alloc_grid - returns pointer to a 3d array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **arr, row, column;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(sizeof(int) * width);

		if (arr[row] == NULL)
		{
			for (column = 0; column <= row; column++)
				free(arr[column]);
			free(arr);
			return (NULL);
		}
		for (column = 0; column < width; column++)
			arr[row][column] = 0;
	}
	return (arr);
}
