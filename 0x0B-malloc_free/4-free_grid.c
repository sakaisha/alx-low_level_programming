#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the memory allocated for a 2D grid
 * @grid: pointer to the 2D grid
 * @height: height dimension of the grid
 * Description: Frees the memory of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
