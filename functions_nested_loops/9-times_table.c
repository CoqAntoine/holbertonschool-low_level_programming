#include <stdio.h>
#include "main.h"

/**
 * times_table - print the alphabet
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int colonne, ligne, multiple = 0;

	for (colonne = 0; colonne <= 9; colonne++)
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			multiple = ligne * colonne;
			printf("%d", multiple);
			if (ligne == 9)
				break;
			printf(",");
			if (multiple <= 9)
				printf(" ");
			printf(" ");
		}
		printf("\n");
	}
}
