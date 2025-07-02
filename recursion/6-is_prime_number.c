#include <stdio.h>

/**
 * checker - Recursively checks if a number is divisible by any number
 *           from 'square' up to the square root of 'n'.
 * @square: the current divisor being tested
 * @n: the number to check for primality
 *
 * Return: 1 if 'n' is a prime number (no divisors found),
 *         0 if 'n' is not a prime number (divisor found)
 */

int checker(int square, int n)
{
	if (n < 0)
		return (0);
	if (square * square == n)
		return (0);
	if (square * square > n)
		return (1);
	return (checker(square + 1, n));
}

/**
 * is_prime_number - Determines whether a given integer is a prime number.
 * @n: the number to check
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (checker(1, n));
}
