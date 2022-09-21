#include "main.h"
#include "string.h"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: == 0, > 15, < 15
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[i] && n == 0)
	{
		n = s1[i] - s2[i];
		i++;
	}
	return (n);
}
