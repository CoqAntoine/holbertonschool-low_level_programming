#include <stdio.h>
#include <string.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	if (strcmp(s, "+") == 0)
		return (op_add);
	else if (strcmp(s, "-") == 0)
		return (op_sub);
	else if (strcmp(s, "*") == 0)
		return (op_mul);
	else if (strcmp(s, "/") == 0)
		return (op_div);
	else if (strcmp(s, "%") == 0)
		return (op_mod);
	else return (NULL);
}
