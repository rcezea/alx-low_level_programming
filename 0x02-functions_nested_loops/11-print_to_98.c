#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first integer/initial counter
 * Return: Always true
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		int i = 0;

		while (i >= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n == 98)
				break;
			_putchar(44);
			_putchar(32);
			i--;
		}
	}
	else if (n <= 98)
	{
		int i = 0;

		while (i <= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n == 98)
				break;
			_putchar(44);
			_putchar(32);
			i++;
		}
	}
}
