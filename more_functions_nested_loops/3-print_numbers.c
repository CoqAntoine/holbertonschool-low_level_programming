#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: retourne 1 si digit, 0 sinon
 */

void print_numbers(void)
{
	char i = 0;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
