#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer passed
 */
void print_number(int n)
{
	unsigned int m = n;

	if (m < 0)
	{
		_putchar(45);
		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
