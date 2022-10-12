#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: function passed
 * Return: the index of the first true element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, x;
	int (*tmp)(int);

	tmp = cmp;
	if (array == NULL || tmp == NULL)
		return;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		x = tmp(array[i]);
		i++;
	}
	if (x == 0)
		return (-1);
	else
		return (i);
	return (0);
}
