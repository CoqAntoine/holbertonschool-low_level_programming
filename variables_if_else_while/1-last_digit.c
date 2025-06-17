#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	printf("Last digit of %d is %d ", n, n1);
	if (n1 > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n1 == 0)
	{
		printf("and is 0\n");
	}
	else if (n1 < 6 && n1 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
