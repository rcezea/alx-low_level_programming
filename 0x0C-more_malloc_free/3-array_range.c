#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *arr;
	int range, i = 0;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	while (i < range)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
