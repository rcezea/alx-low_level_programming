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
	int i = 0, j = 0;

	if (1)
		array = malloc(sizeof(s1) + sizeof(s2) + 1);
	else
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		array[0] = '\0';
	else
	{
		while (s1[i] != '\0')
		{
			array[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			array[i] = s2[j];
			i++;
			j++;
		}
		array[i] = '\0';
	}
	return (array);
	free (array);
}
