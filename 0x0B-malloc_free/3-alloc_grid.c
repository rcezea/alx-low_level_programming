#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimensional int array
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to function
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return(NULL);
	array = malloc(sizeof(int) * height);
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			array[j][i] = 0;
			j++;
		}
		i++;
	}
	return (array);
	free (array);
}
