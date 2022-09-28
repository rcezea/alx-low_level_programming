#include "main.h"
int check_factors(int factor, int n);
int is_prime_number(int n);
/**
 * is_prime_number- checks for prime number
 * @n: number passed
 * Return: returns 1 if the input integer is a prime number
 * 	   otherwise return 0
 */
int is_prime_number(int n)
{
	int factor = 2;

	if (n < 2)
		return (0);
	return (check_factors(factor, n));

}
/**
 * check_factors- check if numbers has factors
 * @factor: incrementing variable to check for factors of n
 * @n: number to check
 * Return: 0 if it is divisible by other numbers
 * 	   1 if only divisible by itself
 */
int check_factors(int factor, int n)
{
	if (n / factor == 1)
	{
		return (1);
	}
	if (factor >= n)
		return (0);
	if (n % factor == 0)
		return (0);
	factor++;
	return (check_factors(factor, n));
}
