#include "main.h"
/**
 * factorial- returns the factorial of a given number
 * @n: number passed
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (0);
}
