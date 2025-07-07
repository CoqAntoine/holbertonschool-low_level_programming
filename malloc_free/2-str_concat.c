#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated string.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Pointer to the new string containing s1 followed by s2,
 *         or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len = 0, len2 = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[len] != '\0')
			len++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	s = malloc(sizeof(char) * (len + len2 + 1));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[j + i] = s2[j];
		}
	}

	s[i + j] = '\0';

	return (s);
}
