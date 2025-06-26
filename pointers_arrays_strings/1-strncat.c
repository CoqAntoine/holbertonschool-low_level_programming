#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *
 * @dest : string de reference
 *
 * @src : string a rajouter au string de reference
 *
 * @n : number max of bytes needed
 *
 * Return: string avec dest + src with n-bytes max
 */

char *_strncat(char *dest, char *src, int n)
{
	int cpt = 0;
	int cpt2 = 0;

	while (dest[cpt] != '\0')
	{
		cpt++;
	}

	for (; src[cpt2] != '\0'; cpt2++)
	{
		if (n == cpt2)
			break;
		dest[cpt] = src[cpt2];
		cpt++;
	}
	return (dest);
}
