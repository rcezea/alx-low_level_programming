#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to char array
 * @b: character passed
 * @n: number of bytes
 * Return: pointer to char array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int x = n;

	while (i < x)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
