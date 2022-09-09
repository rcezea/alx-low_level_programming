#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 97, k = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
