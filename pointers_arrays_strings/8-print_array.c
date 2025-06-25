#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 *
 * @a : array of integer
 *
 * @n : nombre d'element de l'array a print
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
