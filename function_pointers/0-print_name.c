#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to function that takes a char * and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}