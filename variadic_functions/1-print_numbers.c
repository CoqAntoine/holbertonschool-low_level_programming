#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a given separator
 * @separator: String to print between numbers
 * @n: Number of integers passed to the function
 *
 * Description: Prints numbers followed by a new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
