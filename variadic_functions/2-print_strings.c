#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints n strings separated by a separator.
 * @separator: String printed between each argument (if not NULL)
 * @n: Number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
