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
	int **ary;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ary = malloc(sizeof(int *) * height);

	if (ary == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ary[x] = malloc(sizeof(int) * width);

		if (ary[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ary[x]);

			free(ary);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ary[x][y] = 0;
	}

	return (ary);
}
