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
	if (!(*argv))
		printf("%d\n", 0);
	else
		printf("%d\n", argc - 1);
	return (0);
}
