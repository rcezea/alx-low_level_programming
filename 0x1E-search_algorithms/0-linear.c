#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - uses linear search algo
 * @array: array to search
 * @size: size of array to search
 * @value: value to search for
 * Return: return index if sucessfull else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
if (array == NULL)
{
return (-1);
}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
