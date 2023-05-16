#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **alloc_grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_grid = malloc(sizeof(int *) * height);

	if (alloc_grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		alloc_grid[x] = malloc(sizeof(int) * width);

		if (alloc_grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(alloc_grid[x]);

			free(alloc_grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			alloc_grid[x][y] = 0;
	}

	return (alloc_grid);
}
