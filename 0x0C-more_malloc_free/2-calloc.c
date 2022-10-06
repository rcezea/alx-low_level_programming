#include "main.h"
#include <stdlib.h>
/**
 * void *_calloc(unsigned int nmemb, unsigned int size) - allocates memory for an array
 * @nmemb: number of member elements
 * @size: size of element (data type)
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *char_cast;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	char_cast = arr;
	while (i < (size * nmemb))
	{
		char_cast[i] = '\0';
		i++;
	}
	return (arr);
}
