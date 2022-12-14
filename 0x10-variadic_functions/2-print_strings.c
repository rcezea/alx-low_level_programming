#include "variadic_functions.h"
/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *string;

	va_start(ap, n);

	while (i < n)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
