#include"main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
