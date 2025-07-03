#include <stdio.h>
#include <stdlib.h>

/**
 * is_numeric - check the code.
 * @n : integer
 * Return: 0 if ok.
 */

int is_numeric(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] < '0' || n[i] > '9')
			return(1);
		i++;
	}
	return (0);
}

/**
 * main - check the code.
 * @argc: entier
 * @argv: array
 * Return: Always 0.
 */

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
		sum += (atoi(argv[cpt]));
		cpt++;
	}
	printf("%d\n", sum);
	return (0);
}
