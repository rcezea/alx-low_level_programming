#include "search_algos.h"
/**
 * binary_search - searches for a value using  Binary search algorithm 
 * @array: array passed
 * @size: size of the array
 * @value: key to search
 * Return: indext of the array
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, before, after;

	if (array == NULL)
		return (-1);

	for (before = 0, after = size - 1; after >= before;)
	{
		printf("Searching in array: ");
		for (i = before; i < after; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = before + (after - before) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			after = i - 1;
		else
			before = i + 1;
	}

	return (-1);
}
