#include "main.h"
/**
 * _puts - prints a string followed by anew line
 * @s: string passed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
