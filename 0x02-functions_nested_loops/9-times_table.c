#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			_putchar(i * j);
			if (j == 9)
				continue;
			_putchar(44);
			_putchar(32);
		}
	}
}
