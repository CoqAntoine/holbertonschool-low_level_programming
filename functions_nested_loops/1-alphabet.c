#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
