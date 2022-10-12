#include "function_pointers.h"
/**
 * array_iterator - executes a funtion given as a parameter
 * @array: array passed
 * @size: size of array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0, n = size;
	void (*tmp)(int);
	tmp = action;

	while (i < n)
	{
		if (i == n)
			break;
		tmp(array[i]);
		i++;
	}
}
