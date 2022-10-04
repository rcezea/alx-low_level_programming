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
	int i = 0, j = 0;

	while (i < height)
	{
		while (grid[i][j])
		{
			free(grid[i][j]);
			j++;
		}
		free(grid[i]);
		i++;
	}

	free(grid);
}
