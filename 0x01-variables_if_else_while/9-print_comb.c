#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
		if (i <= 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}