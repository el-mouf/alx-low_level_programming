#include "main.h"

/**
 * free_grid - free a two dimensional grid
 * @grid: grid previously created
 * @height: height of the grid
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
