#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 *
 * @dest : string de reference
 *
 * @src : string a rajouter au string de reference
 *
 * @n : number max of bytes needed
 *
 * Return: string avec dest + src with n-bytes max
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpt = 0;

	while (cpt < n && src[cpt])
	{
		dest[cpt] = src[cpt];
		cpt++;
	}

	while (cpt < n)
	{
		dest[cpt] = '\0';
		cpt++;
	}
	return (dest);
}
