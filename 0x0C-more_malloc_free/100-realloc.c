#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block
 * @ptr: previous memory allocation
 * @old_size: previous size of memory
 * @new_size: new size of memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *ptr2, *arr;

	arr = ptr;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	if (!ptr2)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	i = 0;
	while (i < old_size)
	{
		ptr2[i] = arr[i];
		i++;
	}
	free(ptr);
	return (ptr2);
}
