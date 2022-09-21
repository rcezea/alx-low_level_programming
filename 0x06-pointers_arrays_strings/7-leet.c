#include "main.h"
/**
 * leet - encodes a string into 1337x
 * @str: string passed
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char alpha[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (str[i] == alpha[j])
				str[i] = num[j];
			j++;
		}
		i++;
	}
	return (str);
}
