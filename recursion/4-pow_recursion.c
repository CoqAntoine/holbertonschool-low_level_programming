#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: integer factorial
 * @y: integer factorial
 *
 * Return: the factorial of an integer
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else return (x * _pow_recursion(x, y - 1));
}