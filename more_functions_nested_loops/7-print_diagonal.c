#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n : nombre de \
 *
 * Return : retourne 1 si digit, 0 sinon
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
