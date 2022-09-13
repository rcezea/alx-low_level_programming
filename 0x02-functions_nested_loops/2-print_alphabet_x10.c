#include "main.h"
/**
 * print_alphabet_x10 - 10 times the alphabet
 *
 * Return: Always (0) Success
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	for (; i < 10; i++)
	{
		j = 97;
		while (j <= 122)
		{
			putchar(j);
			j++;
		}
		putchar(10);
	}
}

