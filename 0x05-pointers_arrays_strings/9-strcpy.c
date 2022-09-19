#include "main.h"
#include<string.h>
/**
 * _strcpy - copies a string
 * @dest: array passed as destination for string
 * @src: string passed to array
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src) + 1;
	int i = 0;

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
