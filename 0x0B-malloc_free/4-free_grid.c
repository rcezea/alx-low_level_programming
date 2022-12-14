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
	int i = 0;

	if (grid != NULL)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
