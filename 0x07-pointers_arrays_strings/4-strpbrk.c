#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string passed
 * @accept: string checked for occurrence
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
