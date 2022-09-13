#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int n = i * j;

			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (j == 9)
					break;
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((n) + '0');
				if (j == 9)
					break;
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
