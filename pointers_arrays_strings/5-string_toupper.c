#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * @s : string with lower case characters
 *
 * Return : string with only upper case characters
 */

char *string_toupper(char *s)
{
	int cpt = 0;

	while (s[cpt])
	{
		if (s[cpt] >= 'a' && s[cpt] <= 'z')
			s[cpt] = (s[cpt] - 32);
		cpt++;
	}
	return (s);
}
