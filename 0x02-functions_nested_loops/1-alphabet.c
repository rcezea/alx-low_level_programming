#include"main.h"
/**
 * print_alphabet - letters of the alphabet
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
