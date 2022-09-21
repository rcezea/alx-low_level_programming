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
     if (*s1 == *s2)
     {
         return (0);
     }
     else if (*s1 > *s2)
     {
         return (15);
     }
     else
     {
         return (-15);
     }
 }
