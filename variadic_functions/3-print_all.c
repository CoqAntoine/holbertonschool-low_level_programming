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
	int printed = 0;
	const char *char_format = format;
	char *str;

	va_start(args, format);
	while (char_format && *char_format)
	{
		if ((*char_format == 'c' || *char_format == 'i' ||
		     *char_format == 'f' || *char_format == 's') && (printed++ > 0))
			printf(", ");

		switch (*char_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
		}
		char_format++;
	}
	va_end(args);
	printf("\n");
}
