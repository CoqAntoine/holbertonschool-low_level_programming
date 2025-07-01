#include "main.h"

/**
 * factorial - check the code
 * @n: integer factorial
 *
 * Return: the factorial of an integer
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n-1));
}
