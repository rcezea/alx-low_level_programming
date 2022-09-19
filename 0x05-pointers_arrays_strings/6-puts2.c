#include "main.h"
#include<string.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string passed
 */
void puts2(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
