#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: retourne 1 si digit, 0 sinon
 */

void print_most_numbers(void)
{
	char c = 0;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			c = c;
		else
			_putchar(c);
	}
	_putchar('\n');
}
