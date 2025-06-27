#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *
 * @s : string input
 *
 * Return: string with all word capitalized
 */

char *cap_string(char *s)
{
	int cpt = 0;
	int cpt2 = 0;
char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[cpt])
	{
		cpt2 = 0;
		while (c[cpt2])
		{
			if (s[cpt] == c[cpt2] && s[cpt + 1] >= 'a' && s[cpt + 1] <= 'z')
			{
				s[cpt + 1] = s[cpt + 1] - 32;
			}
			cpt2++;
		}
		cpt++;
	}
	return (s);
}
