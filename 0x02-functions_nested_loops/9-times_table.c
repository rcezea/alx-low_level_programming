#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0, j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			_putchar((i * j) + '0');
			if (j == 9)
				continue;
			_putchar(44);
			_putchar(32);
			j++;
		}
		i++;
	}
}
