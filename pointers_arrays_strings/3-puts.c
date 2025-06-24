#include "main.h"

/**
 * _puts - check the code
 *
 * @str : le string qui doit etre print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
