#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as a string
 *
 * Return: Pointer to the function corresponding to the operator,
 * or NULL if no match is found
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
