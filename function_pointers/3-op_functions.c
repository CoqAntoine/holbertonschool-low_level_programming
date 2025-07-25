#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of dividing two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
