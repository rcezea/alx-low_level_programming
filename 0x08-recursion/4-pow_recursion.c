#include "main.h"
/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: integer value
 * @y: exponent
 * Return: exponentiated value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	return (0);
}
