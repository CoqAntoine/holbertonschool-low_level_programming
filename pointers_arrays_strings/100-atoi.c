#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 *
 * @s : array of character
 *
 * Return: int.
 */

int _atoi(char *s)
{
	int entier = 0;
	int compteur = 0;
	int sign = 1;

	for (; s[compteur] != '\0'; compteur++)
	{
		if (s[compteur] == '-')
		        sign = -sign;
		else if (s[compteur] >= '0' && s[compteur] <= '9')
			break;
	}

	for (; s[compteur] >= '0' && s[compteur] <= '9'; compteur++)
		     entier = (entier * 10) + (s[compteur] - '0');
	return (entier * sign);
}
