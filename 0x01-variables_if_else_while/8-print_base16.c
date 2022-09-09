#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 0, k = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	while (k < 6)
	{
		putchar(97 + k);
		k++;
	}
	putchar(10);
	return (0);
}
