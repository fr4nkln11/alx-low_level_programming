#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the 2dimensional grid
 * @height: the height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int position;

	for (position = 0; position < height; position++)
	{
		free(grid[position]);
	}
	free(grid);
}
