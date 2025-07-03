#include <stdio.h>

/**
 * is_prime_recursive - vérifie récursivement si un nombre est premier
 * @n: nombre à tester
 * @div: diviseur courant pour tester la primalité
 *
 * Return: 1 si @n est un nombre premier, sinon 0.
 */

int is_prime_recursive(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_recursive(n, div + 1));
}


/**
 * is_prime_number - détermine si un entier est un nombre premier
 * @n: entier à tester
 *
 * Return: si @n est premier, sinon 0.
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

