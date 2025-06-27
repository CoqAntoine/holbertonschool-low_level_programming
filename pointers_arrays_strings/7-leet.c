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
	int cpt = 0;

	while (s[cpt])
	{
		if (s[cpt] == 'a' || s[cpt] == 'A')
			s[cpt] = '4';
		else if (s[cpt] == 'e' || s[cpt] == 'E')
			s[cpt] = '3';
		else if (s[cpt] == 'o' || s[cpt] == 'O')
			s[cpt] = '0';
		else if (s[cpt] == 't' || s[cpt] == 'T')
			s[cpt] = '7';
		else if (s[cpt] == 'l' || s[cpt] == 'L')
			s[cpt] = '1';
		cpt++;
	}
	return (s);
}
