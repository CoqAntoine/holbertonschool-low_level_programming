#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: retourne 1 si digit, 0 sinon
 */

void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 9)
				_putchar('0' + j);
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
		}
	_putchar('\n');
	}
}
