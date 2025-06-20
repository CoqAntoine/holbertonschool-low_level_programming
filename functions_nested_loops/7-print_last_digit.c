#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the alphabet
 *
 * @n: The character to be checked.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int n1 = 0;

       	n1 = n % 10;
	if (n1 < 0)
		n1 = n1 * -1;
	_putchar('0' + n1);
	return (n1);
}
