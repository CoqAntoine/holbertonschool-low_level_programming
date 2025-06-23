#include <stdio.h>

/**
 * _isdigit - check the code
 *
 * @c : entier a verifier
 *
 * Return: retourne 1 si digit, 0 sinon
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
