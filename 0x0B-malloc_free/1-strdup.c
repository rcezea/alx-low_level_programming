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
	int i = 0;

	if (1)
		array = malloc(sizeof(str) + 1);
	else
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		array [i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
	free (array);
}
