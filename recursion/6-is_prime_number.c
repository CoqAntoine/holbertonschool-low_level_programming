#include <stdio.h>

/**
 * checker - 
 * @square: 
 * @n: 
 * Return: 
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
 * is_prime_number - 
 * @n: 
 * Return: 
 */

int is_prime_number(int n)
{
	return (checker(1, n));
}
