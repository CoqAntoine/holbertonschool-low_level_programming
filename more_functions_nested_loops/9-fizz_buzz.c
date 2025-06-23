#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return : retourne 1 si digit, 0 sinon
 */

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("Fizz Buzz ");
			else
				printf("Fizz ");
		}
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
