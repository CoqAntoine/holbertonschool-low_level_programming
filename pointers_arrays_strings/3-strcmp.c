#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *
 * @s1 : string 1
 *
 * @s2 : string 2
 *
 * Return: compares 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	int cpt = 0;
	int result = 0;

	while (s1[cpt] || s2[cpt])
	{
		if (s1[cpt] != s2[cpt])
		{
			result = (s1[cpt] + '0') - (s2[cpt] + '0');
			break;
		}
		cpt++;
	}
	return (result);
}
