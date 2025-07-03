#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: entier
 * @argv: array
 * Return: Always 0.
 */

int is_numeric(char *n)
{
	if (n[0] >= '0' && n[0] <= '9')
		return (0);
	return (1);
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int cpt = 1;

	argc--;
	while (argc--)
	{
		if (is_numeric(argv[cpt]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + (atoi(argv[cpt]));
		cpt++;
	}
	printf("%d\n", sum);
	return (0);
}
