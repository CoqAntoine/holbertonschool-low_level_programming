#include <stdio.h>

/**
 * checker - checks the input number from square to n
 * @square: number is squared and compared against n
 * @n: base number to check
 * Return: natural square root of n
 */

int checker(int square, int n)
{
	if (square * square == n)
		return (square);
	if (square * square > n)
		return (-1);
	return (checker(square + 1, n));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
