#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(32);
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
