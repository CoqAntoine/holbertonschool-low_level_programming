#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 *
 * @dest : string de reference
 *
 * @src : string a rajouter au string de reference
 *
 * Return: string avec dest + src
 */

char *_strcat(char *dest, char *src)
{
	int cpt = 0;
	int cpt2 = 0;

	while (dest[cpt] != '\0')
	{
		cpt++;
	}

	for (; src[cpt2] != '\0'; cpt2++)
	{
		dest[cpt] = src[cpt2];
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
