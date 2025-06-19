#include <stdio.h>
#include "main.h"

/**
 * _abs - print the alphabet
 *
 * @n: The character to be checked.
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
