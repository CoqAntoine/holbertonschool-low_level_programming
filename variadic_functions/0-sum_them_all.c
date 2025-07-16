#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de n entiers
 * @n: Le nombre d’entiers à sommer
 *
 * Return: Somme des arguments entiers, ou 0 si n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(args);
	unsigned int i = 0;
	int total = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);

	return (total);
}
