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
		while (n > 97)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(44);
			_putchar(32);
			n--;
		}
	}
	else if (n <= 98)
	{
		while (n < 99)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(44);
			_putchar(32);
			n++;
		}
	}
	putchar(57);
	putchar(56);
}
