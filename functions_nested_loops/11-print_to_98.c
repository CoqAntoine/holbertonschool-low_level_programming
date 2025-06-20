#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 *
 *@depart : nombre de depart
 */

void print_to_98(int depart)
{
	int i = 0;

	if (depart == 98)
		printf("%d\n", depart);
	else if (depart < 98)
	{
		for (i = depart; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	printf("\n");
	}
	else
	{
		for (i = depart; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	printf("\n");
	}
}
