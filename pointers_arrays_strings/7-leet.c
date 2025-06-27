#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 *
 * @s : string input
 *
 * Return: string with all word capitalized
 */

char *leet(char *s)
{
	int cpt = 0, cpt2;
	char lettre[] = {'A', 'E', 'O', 'T', 'L'};
	int chiffre[] = {'4', '3', '0', '7', '1'};

	while (s[cpt])
	{
		for (cpt2 = 0; cpt2 < 5; cpt2++)
		{
			if (s[cpt] == lettre[cpt2] || s[cpt] == (lettre[cpt2] + 32))
			{
				s[cpt] = chiffre[cpt2];
			}
		}
		cpt++;
	}
	return (s);
}
