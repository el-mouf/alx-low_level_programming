#include "main.h"

/**
 * alloc_grid - returns a pointer to
 * a two dimentional array of integers
 * @width: width of the array of ints
 * @height: height of the array of ints
 * Return: pointer to the array on success
 * otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **arrayGrid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arrayGrid = malloc(sizeof(int *) * height);
	if (arrayGrid == NULL)
	{
		free(arrayGrid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arrayGrid[i] = malloc(sizeof(int) * width);
		if (arrayGrid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(arrayGrid[j]);
			}
			free(arrayGrid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arrayGrid[i][j] = 0;
		}
	}
	return (arrayGrid);
}
