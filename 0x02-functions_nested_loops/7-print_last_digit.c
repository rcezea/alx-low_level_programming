#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: integer passed to the function
 * Return: Always
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n%10);
	}
	else
	{
		n = n%10;
	}
	return (n);
}
