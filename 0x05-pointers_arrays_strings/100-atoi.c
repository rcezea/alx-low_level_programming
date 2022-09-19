#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int i, sign = 1, resp = 0, firstNum = 0;

	while (!(s[firstNum] >= 48 && s[firstNum] <= 57))
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
		firstNum++;
	}
	i = firstNum;

	while (s[i] >= 48 && s[i] <= 57)
	{
		resp *= 10;
		resp += (s[i] - 48);
		i++;
	}

	return (sign * resp);
}
