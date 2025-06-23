#include <stdio.h>
#include "main.h"

/**
 * print_square - check the code
 *
 * @size : taille du carre
 *
 * Return : retourne 1 si digit, 0 sinon
 */

void print_square(int size)
{
	int i, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
