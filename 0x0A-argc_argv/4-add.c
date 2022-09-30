#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1, j, sum = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9'))
			{
				printf("Error");
				return (1);
			}
			sum += atoi(argv[i]);
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
