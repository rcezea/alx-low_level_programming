#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string passed
 * Return: uppercased string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
