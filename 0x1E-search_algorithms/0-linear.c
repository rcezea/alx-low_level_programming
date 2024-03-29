#include "search_algos.h"

/**
 * linear_search - searches an array using the Linear search algorithm
 * @array: array passed
 * @size: size of the array
 * @value: search key
 * Return: index of the key in the array
 * Description: Prints a value every time it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
return (-1);
while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}
return (-1);
}
