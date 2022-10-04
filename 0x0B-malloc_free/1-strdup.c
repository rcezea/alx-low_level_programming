#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: string passed
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
		j++;
	}
	i = 0;
	if (1)
		array = malloc(sizeof(char) * (j + 1));
	else
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
