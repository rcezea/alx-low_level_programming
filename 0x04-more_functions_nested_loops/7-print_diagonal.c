#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: counter
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
				break;
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar(10);
	}
	if (i == 0)
		_putchar(10);
}
