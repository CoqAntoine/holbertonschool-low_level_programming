#include "main.h"

/**
 * print_rev - check the code
 *
 * @s : le string qui doit etre reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int compteur = 0;

	while (s[compteur] != '\0')
	{
		compteur++;
	}

	compteur--;

	for (; compteur >= 0; compteur--)
		_putchar(s[compteur]);
	_putchar('\n');
}
