#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and init it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if size is 0 or if memory alloc fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	return (NULL);
	str = malloc(sizeof(char) * size);

	if (str == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
