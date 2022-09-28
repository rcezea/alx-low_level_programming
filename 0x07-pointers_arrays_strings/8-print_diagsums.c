#include "main.h"
#include "stdio.h"
/**
 * print_diagsums- sum of the two diagonals of a square matrix of integers
 * @a: integer array passed
 * @size: size of array 'a'
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
