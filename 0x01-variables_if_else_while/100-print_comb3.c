#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
