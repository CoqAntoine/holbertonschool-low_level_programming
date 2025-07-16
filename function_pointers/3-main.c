#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector; expects format: num1 operator num2
 *
 * Return: 0 on success, exits with code 98, 99, or 100 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0
	|| strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0
	|| strcmp(argv[2], "%") == 0)
	{
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
	}

	printf("Error\n");
	exit(99);
}
