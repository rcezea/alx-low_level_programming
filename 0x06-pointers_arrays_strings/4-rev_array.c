#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array passed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp[200], i = 0, j = 0;

	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		a[j] = tmp[i];
		j++;
		i--;
	}
}
