#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size : taille du triangle
 *
 * Return : retourne 1 si digit, 0 sinon
 */

void print_triangle(int size)
{
	int i, j, k = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
				_putchar(' ');
			for (k = (size - i); k <= size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
