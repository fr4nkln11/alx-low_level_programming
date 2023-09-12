#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * If width or height is 0 or negative, return NULL
 * The function should return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int x_pos, y_pos;
	int **grid;
	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid)
	{
		for (y_pos = 0; y_pos < height; y_pos++)
		{
			grid[y_pos] = malloc(sizeof(int) * width);
			if (!grid[y_pos])
			{
				return (NULL);
			}
			for (x_pos = 0; x_pos < width; x_pos++)
			{
				grid[y_pos][x_pos] = 0;
			}
		}

		return (grid);
	}

	return (NULL);
}
