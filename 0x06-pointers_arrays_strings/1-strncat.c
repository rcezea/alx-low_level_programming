#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes used
 * Return: dest
 */
 char *_strncat(char *dest, char *src, int n)
 {
     int i = 0, j = 0;

     while (dest[i])
     {
         i++;
     }

     if (n > 0)
     {
         while (n > 0 && src[j] != '\0')
         {
            dest[i] = src[j];
            i++;
            j++;
            n--;
         }
     }
     return (dest);
 }
