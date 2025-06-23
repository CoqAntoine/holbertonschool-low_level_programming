#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code
 *
 * @n : nombre de caractere
 *
 * Return : retourne 1 si digit, 0 sinon
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
