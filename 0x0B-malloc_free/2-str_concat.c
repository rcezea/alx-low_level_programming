#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string from s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0, j = 0, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] || s2[i])
	{
		i++;
		size++;
	}
	i = 0;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (s1[i])
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	return (array);
	free(array);
}
