#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints arguments of various types based on format string.
 * @format: String where each char specifies an argument type:
 *          c = char, i = integer, f = float, s = string.
 * Description: Strings that are NULL are printed as "(nil)".
 *              Unknown format chars are ignored.
 *              Prints a newline at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *char_format = format;
	char *str;

	va_start(args, format);
	while (char_format && *char_format)
	{
		if (*char_format == 'c')
			printf("%c", va_arg(args, int));
		if (*char_format == 'i')
			printf("%d", va_arg(args, int));
		if (*char_format == 'f')
			printf("%f", va_arg(args, double));
		if (*char_format == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
		}
		char_format++;
	}
	va_end(args);
	printf("\n");
}
