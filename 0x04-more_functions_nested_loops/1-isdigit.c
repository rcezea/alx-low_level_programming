#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: number passed to function
 * Return: 1 for pass, 0 for fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
