#include "main.h"

/**
 * rev_string - check the code
 *
 * @s : le string qui doit etre reverse
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int compteur = 0;
	int debut = 0;
	int fin = 0;
	char temp;

	while (s[compteur] != '\0')
	{
		compteur++;
	}

	fin = (compteur - 1);

	while (debut < fin)
	{
		temp = s[fin];
		s[fin] = s[debut];
		s[debut] = temp;
		debut++;
		fin--;
	}
}
