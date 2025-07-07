#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to use from s2.
 *
 * Return: Pointer to newly allocated concatenated string, or NULL if failed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, len = 0;
	unsigned int len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
		len2 = n;

	s = malloc(sizeof(char) * (len + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; len2 > 0; j++)
	{
		s[j + i] = s2[j];
		len2--;
	}

	s[i + j] = '\0';

	return (s);
}
