#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first integer/initial counter
 * Return: Always true
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
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
