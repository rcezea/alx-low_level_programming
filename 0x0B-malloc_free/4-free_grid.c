#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid from alloc_grid
 * @grid: two dimensional int array
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; grid[i][j]; j++)
		{
			free(grid[i][j]);
		}
	}

	free(grid);
}
