#include "main.h"
#include<string.h>
/**
 * puts_half - prints half of a string
 * @str: string passed
 */
void puts_half(char *str)
{
	int len;

	if (strlen(str) % 2 != 0)
		len = (strlen(str) - 1) / 2;
	else
		len = strlen(str) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar(10);
}
