#include "3-calc.h"
/**
 * op_add - finds the sum of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - finds the difference b/w two integers
 * @a: integer 1
 * @b: integer 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/**
 * op_mul - finds the product of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}
/**
 * op_div - finds the quotient of two integers
 * @a: integer
 * @b: divisor
 * Return: quotient
 */
int op_div(int a, int b)
{
	int quotient = a / b;

	return (quotient);
}
/**
 * op_mod - finds the modulus of an integer
 * @a: integer
 * @b: mod
 * Return: modulus value
 */
int op_mod(int a, int b)
{
	int modulus = a % b;

	return (modulus);
}
