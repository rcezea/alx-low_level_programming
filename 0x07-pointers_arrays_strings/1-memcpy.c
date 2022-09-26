#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination array
 * @src: source array
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int i = 0;

    while(n)
    {
        dest[i] = src[i];
        i++;
        n--;
    }
    return (dest);
}
