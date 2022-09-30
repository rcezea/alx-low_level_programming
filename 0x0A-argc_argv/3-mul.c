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
	int i = 1, product = 1;

	if (argc == 3)
	{
		while (i < argc)
		{
			product *= atoi(argv[i]);
			i++;
		}
		printf("%d", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
