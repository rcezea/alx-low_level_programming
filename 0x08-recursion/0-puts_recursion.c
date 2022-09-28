#include "main.h"
/**
 * _puts_recursion-  function that prints a string,
 * followed by a new line
 * @s: string passed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
