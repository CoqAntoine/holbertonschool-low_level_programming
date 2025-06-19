#include <stdio.h>
#include "main.h"

/**
 * _isalpha - print the alphabet
 *
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
