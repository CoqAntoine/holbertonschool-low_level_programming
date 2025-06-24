#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a : pointeur a
 *
 * @b : pointeur b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
