#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to the array or NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *tab;
	int size = 0;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
		tab[i] = min + i;

	return (tab);
}
