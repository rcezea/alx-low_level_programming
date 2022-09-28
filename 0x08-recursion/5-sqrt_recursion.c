#include "main.h"
int _sqrt_recursion(int n);
int _sqrt(int n, int root);
/**
 * _sqrt_recursion- function that returns the natural square root of a number
 * @n: integer that is a square
 * Return: square of integer
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);
	return (_sqrt(n, root));
}
/**
 * _sqrt- finds the root of a number
 * @n: number
 * @root: root of number
 * Return: root
 */
int _sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (_sqrt(n, root + 1));
}
