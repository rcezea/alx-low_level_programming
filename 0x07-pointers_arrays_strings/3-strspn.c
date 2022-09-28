#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array passed
 * @accept: string of characters as prefix
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, counter = 0;
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] != s[i])
				;
			else
			{
				count++;
				break;
			}
			j++;
		}
		if ((i > 0) && (counter == count))
			break;
		counter = count;
		i++;
	}
	return (count);
}
