#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i == (n - 1))
			break;
		if (separator == NULL)
			continue;
		printf("%s", separator);
		i++;
	}
	printf("\n");
}
