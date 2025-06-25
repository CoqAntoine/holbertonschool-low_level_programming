#include "main.h"

/**
 * puts2 - check the code
 *
 * @str : string a print un caractere sur 2
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int compteur = 0;

	while (*str != '\0')
	{
		compteur++;
		if ((compteur % 2) == 1)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
