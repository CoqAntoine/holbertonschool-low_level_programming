#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * @dest : array of integer
 *
 * @src : nombre d'element de l'array a print
 *
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
	int compteur = 0;
	int fin = 0;

	while (src[fin] != '\0')
	{
		fin++;
	}

	while (compteur <= fin)
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	return (dest);
}
