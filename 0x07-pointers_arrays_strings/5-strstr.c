#include "main.h"
/**
 * _strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = i;
		while (haystack[j] && needle[j - i])
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
			j++;
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
