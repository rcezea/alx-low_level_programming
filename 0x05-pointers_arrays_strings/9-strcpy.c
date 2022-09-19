#include "main.h"
#include<string.h>
/**
 * _strcpy - copies a string
 * @dest: array passed as destination for string
 * @src: string passed to array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
