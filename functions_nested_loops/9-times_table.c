#include <stdio.h>
#include "main.h"

/**
 * times_table - print the alphabet
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int colonne, ligne, multiple = 0;

	for (colonne = 0; colonne <= 9; colonne++)
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			multiple = ligne * colonne;
			if (multiple >= 10)
			{
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
			else
				_putchar('0' + multiple);
			if (ligne == 9)
				break;
			_putchar(',');
			if ((ligne + 1) * colonne <= 9)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
