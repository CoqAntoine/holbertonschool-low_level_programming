#include <stdio.h>

/**
 * _isupper - check the code
 *
 * @c : entier a verifier
 *
 * Return: retourne 1 si uppercase, 0 sinon
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
