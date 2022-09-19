#include "main.h"
#include<string.h>
/**
 * _strcpy - copies a string
 * @dest: array passed as destination for string
 * @src: string passed to array
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
