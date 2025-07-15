#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: Index of the first element for which cmp doesn't return 0,
 *         or -1 if no match is found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
