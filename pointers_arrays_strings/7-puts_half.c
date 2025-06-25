#include "main.h"

/**
 * puts_half - check the code
 *
 * @str : string a print un caractere sur 2
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int compteur = 0;
	int fin = 0;

	while (str[fin] != '\0')
	{
		fin++;
	}


	compteur = fin / 2;

	while (compteur < fin)
	{
		_putchar(str[compteur]);
		compteur++;
	}

	_putchar('\n');
}
