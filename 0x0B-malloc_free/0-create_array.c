#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character passed
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = malloc(size);
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
	free(array);
}
